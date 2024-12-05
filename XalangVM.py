import ast
import sys


class XalangVM:
    def __init__(self):
        self.buffer_memory = {}
        self.var_memory = {}
        self.label_memory = {}
        self.instruction_memory = []

        self.eq_flag = 0
        self.neg_flag = 0

        self.instruction_ptr = 0

    def load_program(self, program):
        self.instruction_memory = program

    def run(self, start_addr):
        self.instruction_ptr = start_addr

        self.scan_labels()
        self.execute()

    def scan_labels(self):
        for i in range(len(self.instruction_memory)):
            if self.instruction_memory[i][0] == "label":
                self.label_memory[self.instruction_memory[i][1]] = i

    def execute(self):
        while self.instruction_ptr < len(self.instruction_memory):
            instruction = self.instruction_memory[self.instruction_ptr]

            if instruction[0] == "var":
                if instruction[1] == "array":
                    self.var_memory[instruction[2]] = [0 for _ in range(int(instruction[3][2]))]
                else:
                    if instruction[3][0] == "lit":
                        if instruction[1] != instruction[3][1]:
                            self.hard_fault(f"Incompatible var types: {instruction[1]} and {instruction[3][1]}")
                            return

                        arg = instruction[3][2]
                    else:
                        if (instruction[3][0] + str(instruction[3][1])) not in self.buffer_memory:
                            self.hard_fault(f"Internal buffer error: {instruction[3][0] + str(instruction[3][1])}")
                            return

                        arg = self.buffer_memory[instruction[3][0] + str(instruction[3][1])]

                    self.var_memory[instruction[2]] = arg

            elif instruction[0] == "print":
                if instruction[1][0] == "lit":
                    print(instruction[1][2])
                elif instruction[1][0] == "get_var":
                    if instruction[1][1] not in self.var_memory:
                        self.hard_fault(f"Undefined variable {instruction[1][1]}")
                        return

                    print(self.var_memory[instruction[1][1]])
                else:
                    print(self.buffer_memory[instruction[1][0] + str(instruction[1][1])])
            elif instruction[0] == "movv":
                if instruction[1] not in self.var_memory:
                    self.hard_fault(f"Undefined variable {instruction[1]}")
                    return

                if instruction[2][0] == "lit":
                    self.var_memory[instruction[1]] = instruction[2][2]
                else:
                    self.var_memory[instruction[1]] = self.buffer_memory[instruction[2][0] + str(instruction[2][1])]
            elif instruction[0] == "movb":
                if instruction[2][0] == "get_var":
                    arg = self.var_memory[instruction[2][1]]
                elif instruction[2][0] == "%buf":
                    arg = self.buffer_memory[instruction[2][0] + str(instruction[2][1])]
                elif instruction[2][0] == "get_addr":
                    if instruction[2][2][0] == "lit":
                        index = instruction[2][2][2]
                    elif instruction[2][2][0] == "get_var":
                        index = self.var_memory[instruction[2][2][1]]
                    else:
                        index = self.buffer_memory[instruction[2][2][0] + str(instruction[2][2][1])]

                    arg = self.var_memory[instruction[2][1][1]][int(index)]
                elif instruction[2][0] == "unop":
                    if instruction[2][2][0] == "lit":
                        value = int(instruction[2][2][2])
                    elif instruction[2][2][0] == "get_var":
                        value = self.var_memory[instruction[2][2][1]]
                    else:
                        value = self.buffer_memory[instruction[2][2][0] + str(instruction[2][2][1])]

                    if instruction[2][1] == "-":
                        arg = -value
                    elif instruction[2][1] == "~":
                        arg = ~value
                    else:
                        arg = not value
                elif instruction[2][0] == "binop":
                    if instruction[2][2][0] == "lit":
                        val_a = int(instruction[2][2][2])
                    elif instruction[2][2][0] == "get_var":
                        val_a = int(self.var_memory[instruction[2][2][1]])
                    else:
                        val_a = int(self.buffer_memory[instruction[2][2][0] + str(instruction[2][2][1])])

                    if instruction[2][3][0] == "lit":
                        val_b = int(instruction[2][3][2])
                    elif instruction[2][3][0] == "get_var":
                        val_b = int(self.var_memory[instruction[2][3][1]])
                    else:
                        val_b = int(self.buffer_memory[instruction[2][3][0] + str(instruction[2][3][1])])

                    if instruction[2][1] == "+":
                        arg = val_a + val_b
                    elif instruction[2][1] == "-":
                        arg = val_a - val_b
                    elif instruction[2][1] == "*":
                        arg = val_a * val_b
                    elif instruction[2][1] == "/":
                        arg = val_a / val_b
                    elif instruction[2][1] == "%":
                        arg = val_a % val_b
                    elif instruction[2][1] == "div":
                        arg = val_a // val_b
                    elif instruction[2][1] == "**":
                        arg = val_a ** val_b
                    elif instruction[2][1] == "<<":
                        arg = val_a << val_b
                    elif instruction[2][1] == ">>":
                        arg = val_a >> val_b
                    elif instruction[2][1] == "<":
                        arg = val_a < val_b
                    elif instruction[2][1] == ">":
                        arg = val_a > val_b
                    elif instruction[2][1] == "<=":
                        arg = val_a <= val_b
                    elif instruction[2][1] == ">=":
                        arg = val_a >= val_b
                    elif instruction[2][1] == "==":
                        arg = val_a == val_b
                    elif instruction[2][1] == "!=":
                        arg = val_a != val_b
                    elif instruction[2][1] == "&":
                        arg = val_a & val_b
                    elif instruction[2][1] == "|":
                        arg = val_a | val_b
                    elif instruction[2][1] == "^":
                        arg = val_a ^ val_b
                    elif instruction[2][1] == "&&":
                        arg = val_a and val_b
                    elif instruction[2][1] == "||":
                        arg = val_a or val_b
                    elif instruction[2][1] == "^^":
                        arg = (val_a or val_b) and not val_a and val_b
                    else:
                        arg = 0
                else:
                    arg = 0

                self.buffer_memory[instruction[1][0] + str(instruction[1][1])] = arg
            elif instruction[0] == "mova":
                if instruction[2][0] == "lit":
                    index = int(instruction[2][2])
                elif instruction[2][0] == "get_var":
                    index = int(self.var_memory[instruction[2][1]])
                else:
                    index = int(self.buffer_memory[instruction[2][0] + str(instruction[2][1])])

                if instruction[3][0] == "lit":
                    value = int(instruction[3][2])
                elif instruction[3][0] == "get_var":
                    value = int(self.var_memory[instruction[3][1]])
                else:
                    value = int(self.buffer_memory[instruction[3][0] + str(instruction[3][1])])

                self.var_memory[instruction[1]][int(index)] = value
            elif instruction[0] == "cmp":
                self.eq_flag = False
                self.neg_flag = False

                if instruction[1][0] == "lit":
                    val_a = int(instruction[1][2])
                elif instruction[1][0] == "get_var":
                    val_a = self.var_memory[instruction[1][1]]
                else:
                    val_a = self.buffer_memory[instruction[1][0] + str(instruction[1][1])]

                if instruction[2][0] == "lit":
                    val_b = int(instruction[2][2])
                elif instruction[2][0] == "get_var":
                    val_b = self.var_memory[instruction[2][1]]
                else:
                    val_b = self.buffer_memory[instruction[2][0] + str(instruction[2][1])]

                self.eq_flag = val_a == val_b
                self.neg_flag = val_a < val_b
            elif instruction[0] == "jmp":
                self.instruction_ptr = self.label_memory[instruction[1]]
            elif instruction[0] == "je":
                if self.eq_flag:
                    self.instruction_ptr = self.label_memory[instruction[1]]
            elif instruction[0] == "jne":
                if not self.eq_flag:
                    self.instruction_ptr = self.label_memory[instruction[1]]
            elif instruction[0] == "label":
                pass
            else:
                self.hard_fault(f"Unknown instruction: {instruction[0]}")
                return

            self.instruction_ptr += 1

    def hard_fault(self, message):
        print(f"Error: {message}, address: {self.instruction_ptr}")


def main(argv):
    with open(argv[1]) as file:
        lines = [ast.literal_eval(line.rstrip()) for line in file]
        file.close()

    VM = XalangVM()
    VM.load_program(lines)
    VM.run(0x0)


if __name__ == '__main__':
    main(sys.argv)
