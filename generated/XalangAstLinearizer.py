class XalangAstLinearizer:
    def __init__(self):
        self.label_index = 0
        self.linear = []
        self.buffers = [1]

    def lock_first_free(self):
        i = 0

        while i < len(self.buffers) and self.buffers[i] == 0:
            i += 1

        if i == len(self.buffers):
            self.buffers.append(0)
        else:
            self.buffers[i] = 0

        return i

    def unlock(self, index):
        self.buffers[index] = 1

    def get_linear(self):
        return self.linear

    def linearize(self, node):
        if node[0] == "get_var" or node[0] == "lit":
            return node
        elif node[0] == "unop":
            buffer = self.lock_first_free()
            self.linear.append(["movb", ["%buf", buffer], ["unop", node[0], node[1], self.linearize(node[2])]])
            return ["%buf", buffer]
        elif node[0] == "binop":
            buffer = self.lock_first_free()
            self.linear.append(["movb", ["%buf", buffer], ["binop", node[1], self.linearize(node[2]), self.linearize(node[3])]])
            return ["%buf", buffer]
        elif node[0] == "var":
            expr = self.linearize(node[3])

            self.linear.append([node[0], node[1], node[2], expr])

            if expr[0] == "%buf":
                self.unlock(expr[1])
        elif node[0] == "print":
            expr = self.linearize(node[1])

            self.linear.append([node[0], expr])

            if expr[0] == "%buf":
                self.unlock(expr[1])
        elif node[0] == "assign_var":
            expr = self.linearize(node[2])

            self.linear.append(["movv", node[1], expr])

            if expr[0] == "%buf":
                self.unlock(expr[1])
        elif node[0] == "assign_arr":
            index = self.linearize(node[2])
            expr = self.linearize(node[3])

            self.linear.append(["mova", node[1], index, expr])

            if index[0] == "%buf":
                self.unlock(index[1])

            if expr[0] == "%buf":
                self.unlock(expr[1])
        elif node[0] == "[]":
            expr = self.linearize(node[1])
            index = self.linearize(node[2])

            buffer = self.lock_first_free()

            self.linear.append(["movb", ["%buf", buffer], ["get_addr", expr, index]])

            if expr[0] == "%buf":
                self.unlock(expr[1])

            if index[0] == "%buf":
                self.unlock(index[1])

            return ["%buf", buffer]
        elif node[0] == "ternary_op":
            ternary_num = self.label_index

            expr = self.linearize(node[1])
            true = self.linearize(node[2])
            false = self.linearize(node[3])

            buffer = self.lock_first_free()

            self.linear.append(["cmp", expr, ["lit", "int", "1"]])
            self.linear.append(["jne", f"label_tern_false_{ternary_num}"])
            self.linear.append(["movb", ["%buf", buffer], true])
            self.linear.append(["jmp", f"label_tern_end_{ternary_num}"])
            self.linear.append(["label", f"label_tern_false_{ternary_num}"])
            self.linear.append(["movb", ["%buf", buffer], false])
            self.linear.append(["label", f"label_tern_end_{ternary_num}"])

            self.label_index += 1

            if expr[0] == "%buf":
                self.unlock(expr[1])

            if true[0] == "%buf":
                self.unlock(true[1])

            if false[0] == "%buf":
                self.unlock(false[1])

            return ["%buf", buffer]
        elif node[0] == "prefix_inc":
            if node[1][0] != "get_var":
                return None
            else:
                new_val = self.lock_first_free()

                self.linear.append(["movb", ["%buf", new_val], ["binop", "+", node[1], ["lit", "int", "1"]]])
                self.linear.append(["movv", node[1][1], ["%buf", new_val]])

                self.unlock(new_val)

                return ["get_var", node[1][1]]
        elif node[0] == "prefix_dec":
            if node[1][0] != "get_var":
                return None
            else:
                new_val = self.lock_first_free()

                self.linear.append(["movb", ["%buf", new_val], ["binop", "-", node[1], ["lit", "int", "1"]]])
                self.linear.append(["movv", node[1][1], ["%buf", new_val]])

                self.unlock(new_val)

                return ["get_var", node[1][1]]
        elif node[0] == "postfix_inc":
            if node[1][0] != "get_var":
                return None
            else:
                buffer = self.lock_first_free()
                new_val = self.lock_first_free()

                self.linear.append(["movb", ["%buf", buffer], node[1]])
                self.linear.append(["movb", ["%buf", new_val], ["binop", "+", node[1], ["lit", "int", "1"]]])
                self.linear.append(["movv", node[1][1], ["%buf", new_val]])

                self.unlock(new_val)

                return ["%buf", buffer]
        elif node[0] == "postfix_dec":
            if node[1][0] != "get_var":
                return None
            else:
                buffer = self.lock_first_free()
                new_val = self.lock_first_free()

                self.linear.append(["movb", ["%buf", buffer], node[1]])
                self.linear.append(["movb", ["%buf", new_val], ["binop", "-", node[1], ["lit", "int", "1"]]])
                self.linear.append(["movv", node[1][1], ["%buf", new_val]])

                self.unlock(new_val)

                return ["%buf", buffer]
        elif node[0] == "loop":
            loop_num = self.label_index

            self.linear.append(["label", f"loop_start_{loop_num}"])

            expr = self.linearize(node[1])

            self.linear.append(["cmp", expr, ["lit", "int", "1"]])
            self.linear.append(["jne", f"loop_end_{loop_num}"])
            self.linearize(node[2])
            self.linear.append(["jmp", f"loop_start_{loop_num}"])
            self.linear.append(["label", f"loop_end_{loop_num}"])

            self.label_index += 1

            if expr[0] == "%buf":
                self.unlock(expr[1])
        elif node[0] == "branch":
            branch_num = self.label_index

            branch_ctr = 0

            for branch in node[1]:
                if branch[0] != "else":
                    condition = self.linearize(branch[0])

                    self.linear.append(["cmp", condition, ["lit", "int", "1"]])
                    self.linear.append(["je", f"branch_label_{branch_num}_{branch_ctr}"])

                    if condition[0] == "%buf":
                        self.unlock(condition[1])

                    branch_ctr += 1

            self.linear.append(["label", f"branch_else_{branch_num}"])

            if len(node[1]) > 0 and node[1][-1][0] == "else":
                self.linearize(node[1][-1][1])
                
            self.linear.append(["jmp", f"branch_end_{branch_num}"])

            branch_ctr = 0

            for branch in node[1]:
                if branch[0] != "else":
                    self.linear.append(["label", f"branch_label_{branch_num}_{branch_ctr}"])
                    self.linearize(branch[1])
                    self.linear.append(["jmp", f"branch_else_{branch_num}"])

                branch_ctr += 1

            self.linear.append(["label", f"branch_end_{branch_num}"])

            self.label_index += 1
        elif node[0] == "pack":
            for instr in node[1]:
                self.linearize(instr)
        else:
            for instr in node:
                self.linearize(instr)
