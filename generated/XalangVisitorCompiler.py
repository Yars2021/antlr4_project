# Generated from ./Xalang.g4 by ANTLR 4.9.2
from antlr4 import *

if __name__ is not None and "." in __name__:
    from .XalangParser import XalangParser
else:
    from XalangParser import XalangParser


# This class defines a complete generic visitor for a parse tree produced by XalangParser.

class XalangVisitorCompiler(ParseTreeVisitor):
    def __init__(self):
        self.AST = []

    def get_ast(self):
        return self.AST

    # Visit a parse tree produced by XalangParser#program.
    def visitProgram(self, ctx: XalangParser.ProgramContext):
        self.AST = []

        for i in range(ctx.getChildCount() - 1):
            self.AST.append(self.visit(ctx.getChild(i)))

    # Visit a parse tree produced by XalangParser#code_instruction_var_def.
    def visitCode_instruction_var_def(self, ctx: XalangParser.Code_instruction_var_defContext):
        return self.visit(ctx.getChild(0))

    # Visit a parse tree produced by XalangParser#code_instruction_operator.
    def visitCode_instruction_operator(self, ctx: XalangParser.Code_instruction_operatorContext):
        return self.visitChildren(ctx)

    # Visit a parse tree produced by XalangParser#var_def.
    def visitVar_def(self, ctx: XalangParser.Var_defContext):
        return self.visit(ctx.getChild(1))

    # Visit a parse tree produced by XalangParser#var_names.
    def visitVar_names(self, ctx: XalangParser.Var_namesContext):
        var_names = []

        for i in range(0, ctx.getChildCount(), 2):
            var_names.append(self.visit(ctx.getChild(i)))

        return var_names

    # Visit a parse tree produced by XalangParser#var_create.
    def visitVar_create(self, ctx: XalangParser.Var_createContext):
        return ["var", "int", ctx.getChild(0).getText(), ["lit", "int", "0"]]

    # Visit a parse tree produced by XalangParser#var_array_create.
    def visitVar_array_create(self, ctx: XalangParser.Var_array_createContext):
        return ["var", "array", ctx.getChild(0).getText(), ["lit", "int", str(ctx.getChild(2).getText())]]

    # Visit a parse tree produced by XalangParser#var_create_assign.
    def visitVar_create_assign(self, ctx: XalangParser.Var_create_assignContext):
        value = self.visit(ctx.getChild(2))

        if value[1] == "str":
            return ["var", "str", ctx.getChild(0).getText(), value]
        else:
            return ["var", "int", ctx.getChild(0).getText(), value]

    # Visit a parse tree produced by XalangParser#op_rule_expression.
    def visitOp_rule_expression(self, ctx: XalangParser.Op_rule_expressionContext):
        return self.visit(ctx.getChild(0))

    # Visit a parse tree produced by XalangParser#op_rule_print.
    def visitOp_rule_print(self, ctx: XalangParser.Op_rule_printContext):
        return self.visit(ctx.getChild(0))

    # Visit a parse tree produced by XalangParser#op_rule_if.
    def visitOp_rule_if(self, ctx: XalangParser.Op_rule_ifContext):
        return self.visit(ctx.getChild(0))

    # Visit a parse tree produced by XalangParser#op_rule_for.
    def visitOp_rule_for(self, ctx: XalangParser.Op_rule_forContext):
        return self.visit(ctx.getChild(0))

    # Visit a parse tree produced by XalangParser#op_rule_while.
    def visitOp_rule_while(self, ctx: XalangParser.Op_rule_whileContext):
        return self.visit(ctx.getChild(0))

    # Visit a parse tree produced by XalangParser#for_operators.
    def visitFor_operators(self, ctx: XalangParser.For_operatorsContext):
        children = []

        for i in range(0, ctx.getChildCount(), 2):
            children.append(self.visit(ctx.getChild(i)))

        return ["pack", children]

    # Visit a parse tree produced by XalangParser#for_var_create.
    def visitFor_var_create(self, ctx: XalangParser.For_var_createContext):
        return self.visit(ctx.getChild(0))

    # Visit a parse tree produced by XalangParser#for_expression.
    def visitFor_expression(self, ctx: XalangParser.For_expressionContext):
        return self.visit(ctx.getChild(0))

    # Visit a parse tree produced by XalangParser#code_block.
    def visitCode_block(self, ctx: XalangParser.Code_blockContext):
        children = []

        for child in self.visitChildren(ctx):
            children.append(child)

        return ["pack", [children]]

    # Visit a parse tree produced by XalangParser#print_op.
    def visitPrint_op(self, ctx: XalangParser.Print_opContext):
        return ["print", self.visit(ctx.getChild(2))]

    # Visit a parse tree produced by XalangParser#if_op.
    def visitIf_op(self, ctx: XalangParser.If_opContext):
        branches = [[self.visit(ctx.getChild(2)), self.visit(ctx.getChild(5))]]

        index = 7

        while index < ctx.getChildCount() and ctx.getChild(index).getText() == 'AAXAAAAAAXA_':
            branches.append([self.visit(ctx.getChild(index + 2)), self.visit(ctx.getChild(index + 5))])
            index += 7

        if index < ctx.getChildCount() and ctx.getChild(index).getText() == 'AAXAAAAAA_':
            branches.append(["else", self.visit(ctx.getChild(index + 2))])

        return ["branch", branches]

    # Visit a parse tree produced by XalangParser#for_op.
    def visitFor_op(self, ctx: XalangParser.For_opContext):
        if ctx.getChildCount() > 10:
            ops = []

            for i in range(9, ctx.getChildCount() - 1):
                ops.append(self.visit(ctx.getChild(i)))

            ops.append(self.visit(ctx.getChild(6)))

            return ["pack", [self.visit(ctx.getChild(2)), ["loop", self.visit(ctx.getChild(4)), ops]]]

    # Visit a parse tree produced by XalangParser#while_op.
    def visitWhile_op(self, ctx: XalangParser.While_opContext):
        if ctx.getChildCount() > 6:
            ops = []

            for i in range(5, ctx.getChildCount()):
                child = self.visit(ctx.getChild(i))

                if child is not None:
                    ops.append(child)

            return ["loop", self.visit(ctx.getChild(2)), ops]

    # Visit a parse tree produced by XalangParser#add_expression.
    def visitAdd_expression(self, ctx: XalangParser.Add_expressionContext):
        left_op = self.visit(ctx.getChild(0))
        right_op = self.visit(ctx.getChild(2))

        if left_op[0] == "lit" and right_op[0] == "lit" and left_op[1] == "int" and right_op[1] == "int":
            if ctx.getChild(1).getText() == "+":
                return ["lit", "int", str(int(left_op[2]) + int(right_op[2]))]
            elif ctx.getChild(1).getText() == "-":
                return ["lit", "int", str(int(left_op[2]) - int(right_op[2]))]

        return ["binop", ctx.getChild(1).getText(), left_op, right_op]

    # Visit a parse tree produced by XalangParser#equality_expression.
    def visitEquality_expression(self, ctx: XalangParser.Equality_expressionContext):
        left_op = self.visit(ctx.getChild(0))
        right_op = self.visit(ctx.getChild(2))

        if left_op[0] == "lit" and right_op[0] == "lit" and left_op[1] == "int" and right_op[1] == "int":
            if ctx.getChild(1).getText() == "==":
                return ["lit", "int", str(int(left_op[2]) == int(right_op[2]))]
            elif ctx.getChild(1).getText() == "!=":
                return ["lit", "int", str(int(left_op[2]) != int(right_op[2]))]

        return ["binop", ctx.getChild(1).getText(), left_op, right_op]

    # Visit a parse tree produced by XalangParser#unary_minus_expression.
    def visitUnary_minus_expression(self, ctx: XalangParser.Unary_minus_expressionContext):
        op = self.visit(ctx.getChild(1))

        if op[0] == "lit" and op[1] == "int":
            return ["lit", "int", str(-int(op[2]))]

        return ["unop", ctx.getChild(0).getText(), op]

    # Visit a parse tree produced by XalangParser#logic_or_expression.
    def visitLogic_or_expression(self, ctx: XalangParser.Logic_or_expressionContext):
        left_op = self.visit(ctx.getChild(0))
        right_op = self.visit(ctx.getChild(2))

        if left_op[0] == "lit" and right_op[0] == "lit" and left_op[1] == "int" and right_op[1] == "int":
            if ctx.getChild(1).getText() == "||":
                return ["lit", "int", str(int(left_op[2]) or int(right_op[2]))]
            elif ctx.getChild(1).getText() == "^^":
                return ["lit", "int", str((int(left_op[2]) or int(right_op[2])) and not ((int(left_op[2]) and int(right_op[2]))))]

        return ["binop", ctx.getChild(1).getText(), left_op, right_op]

    # Visit a parse tree produced by XalangParser#postfix_modifier_expression.
    def visitPostfix_modifier_expression(self, ctx: XalangParser.Postfix_modifier_expressionContext):
        if ctx.getChild(1).getText() == "++":
            return ["postfix_inc", ["get_var", ctx.getChild(0).getText()]]
        elif ctx.getChild(1).getText() == "--":
            return ["postfix_dec", ["get_var", ctx.getChild(0).getText()]]

    # Visit a parse tree produced by XalangParser#index_expression.
    def visitIndex_expression(self, ctx: XalangParser.Index_expressionContext):
        return ["[]", self.visit(ctx.getChild(0)), self.visit(ctx.getChild(2))]

    # Visit a parse tree produced by XalangParser#prefix_modifier_expression.
    def visitPrefix_modifier_expression(self, ctx: XalangParser.Prefix_modifier_expressionContext):
        if ctx.getChild(0).getText() == "++":
            return ["prefix_inc", ["get_var", ctx.getChild(1).getText()]]
        elif ctx.getChild(0).getText() == "--":
            return ["prefix_dec", ["get_var", ctx.getChild(1).getText()]]

    # Visit a parse tree produced by XalangParser#comparison_expression.
    def visitComparison_expression(self, ctx: XalangParser.Comparison_expressionContext):
        left_op = self.visit(ctx.getChild(0))
        right_op = self.visit(ctx.getChild(2))

        if left_op[0] == "lit" and right_op[0] == "lit" and left_op[1] == "int" and right_op[1] == "int":
            if ctx.getChild(1).getText() == ">":
                return ["lit", "int", str(int(left_op[2]) > int(right_op[2]))]
            elif ctx.getChild(1).getText() == "<":
                return ["lit", "int", str(int(left_op[2]) < int(right_op[2]))]
            elif ctx.getChild(1).getText() == ">=":
                return ["lit", "int", str(int(left_op[2]) >= int(right_op[2]))]
            elif ctx.getChild(1).getText() == "<=":
                return ["lit", "int", str(int(left_op[2]) <= int(right_op[2]))]

        return ["binop", ctx.getChild(1).getText(), left_op, right_op]

    # Visit a parse tree produced by XalangParser#bit_and_expression.
    def visitBit_and_expression(self, ctx: XalangParser.Bit_and_expressionContext):
        left_op = self.visit(ctx.getChild(0))
        right_op = self.visit(ctx.getChild(2))

        if left_op[0] == "lit" and right_op[0] == "lit" and left_op[1] == "int" and right_op[1] == "int":
            return ["lit", "int", str(int(left_op[2]) & int(right_op[2]))]

        return ["binop", ctx.getChild(1).getText(), left_op, right_op]

    # Visit a parse tree produced by XalangParser#expression_var.
    def visitExpression_var(self, ctx: XalangParser.Expression_varContext):
        return ["get_var", ctx.getChild(0).getText()]

    # Visit a parse tree produced by XalangParser#mul_expression.
    def visitMul_expression(self, ctx: XalangParser.Mul_expressionContext):
        left_op = self.visit(ctx.getChild(0))
        right_op = self.visit(ctx.getChild(2))

        if left_op[0] == "lit" and right_op[0] == "lit" and left_op[1] == "int" and right_op[1] == "int":
            if ctx.getChild(1).getText() == "**":
                return ["lit", "int", str(int(left_op[2]) ** int(right_op[2]))]
            elif ctx.getChild(1).getText() == "*":
                return ["lit", "int", str(int(left_op[2]) * int(right_op[2]))]
            elif ctx.getChild(1).getText() == "/":
                return ["lit", "int", str(int(left_op[2]) / int(right_op[2]))]
            elif ctx.getChild(1).getText() == "%":
                return ["lit", "int", str(int(left_op[2]) % int(right_op[2]))]
            elif ctx.getChild(1).getText() == "div":
                return ["lit", "int", str(int(left_op[2]) // int(right_op[2]))]

        return ["binop", ctx.getChild(1).getText(), left_op, right_op]

    # Visit a parse tree produced by XalangParser#logic_and_expression.
    def visitLogic_and_expression(self, ctx: XalangParser.Logic_and_expressionContext):
        left_op = self.visit(ctx.getChild(0))
        right_op = self.visit(ctx.getChild(2))

        if left_op[0] == "lit" and right_op[0] == "lit" and left_op[1] == "int" and right_op[1] == "int":
            return ["lit", "int", str(int(left_op[2]) and int(right_op[2]))]

        return ["binop", ctx.getChild(1).getText(), left_op, right_op]

    # Visit a parse tree produced by XalangParser#not_expression.
    def visitNot_expression(self, ctx: XalangParser.Not_expressionContext):
        op = self.visit(ctx.getChild(1))

        if op[0] == "lit" and op[1] == "int":
            if ctx.getChild(0).getText() == "!":
                return ["lit", "int", str(not int(op[2]))]
            elif ctx.getChild(1).getText() == "~":
                return ["lit", "int", str(~int(op[2]))]

        return ["unop", ctx.getChild(0).getText(), op]

    # Visit a parse tree produced by XalangParser#expression_literal.
    def visitExpression_literal(self, ctx: XalangParser.Expression_literalContext):
        return self.visit(ctx.getChild(0))

    # Visit a parse tree produced by XalangParser#bit_or_expression.
    def visitBit_or_expression(self, ctx: XalangParser.Bit_or_expressionContext):
        left_op = self.visit(ctx.getChild(0))
        right_op = self.visit(ctx.getChild(2))

        if left_op[0] == "lit" and right_op[0] == "lit" and left_op[1] == "int" and right_op[1] == "int":
            if ctx.getChild(1).getText() == "|":
                return ["lit", "int", str(int(left_op[2]) | int(right_op[2]))]
            elif ctx.getChild(1).getText() == "^":
                return ["lit", "int", str(int(left_op[2]) ^ int(right_op[2]))]

        return ["binop", ctx.getChild(1).getText(), left_op, right_op]

    # Visit a parse tree produced by XalangParser#shift_expression.
    def visitShift_expression(self, ctx: XalangParser.Shift_expressionContext):
        left_op = self.visit(ctx.getChild(0))
        right_op = self.visit(ctx.getChild(2))

        if left_op[0] == "lit" and right_op[0] == "lit" and left_op[1] == "int" and right_op[1] == "int":
            if ctx.getChild(1).getText() == "<<":
                return ["lit", "int", str(int(left_op[2]) << int(right_op[2]))]
            elif ctx.getChild(1).getText() == ">>":
                return ["lit", "int", str(int(left_op[2]) >> int(right_op[2]))]

        return ["binop", ctx.getChild(1).getText(), left_op, right_op]

    # Visit a parse tree produced by XalangParser#ternary_op_expression.
    def visitTernary_op_expression(self, ctx: XalangParser.Ternary_op_expressionContext):
        return ["ternary_op", self.visit(ctx.getChild(0)), self.visit(ctx.getChild(2)), self.visit(ctx.getChild(4))]

    # Visit a parse tree produced by XalangParser#modified_assign_expression.
    def visitModified_assign_expression(self, ctx: XalangParser.Modified_assign_expressionContext):
        if ctx.getChildCount() == 3:
            return ["assign_var", ctx.getChild(0).getText(), ["binop", ctx.getChild(1).getText()[:-1], ["get_var", ctx.getChild(0).getText()], self.visit(ctx.getChild(2))]]
        else:
            return ["assign_arr", ctx.getChild(0).getText(), self.visit(ctx.getChild(2)), ["binop", ctx.getChild(4).getText()[:-1], ["[]", ctx.getChild(0).getText(), self.visit(ctx.getChild(2))], self.visit(ctx.getChild(5))]]

    # Visit a parse tree produced by XalangParser#assign_expression.
    def visitAssign_expression(self, ctx: XalangParser.Assign_expressionContext):
        if ctx.getChildCount() == 3:
            return ["assign_var", ctx.getChild(0).getText(), self.visit(ctx.getChild(2))]
        else:
            return ["assign_arr", ctx.getChild(0).getText(), self.visit(ctx.getChild(2)), self.visit(ctx.getChild(5))]

    # Visit a parse tree produced by XalangParser#expression_brackets.
    def visitExpression_brackets(self, ctx: XalangParser.Expression_bracketsContext):
        return self.visit(ctx.getChild(1))

    # Visit a parse tree produced by XalangParser#int_literal.
    def visitInt_literal(self, ctx: XalangParser.Int_literalContext):
        return ["lit", "int", ctx.getText()]

    # Visit a parse tree produced by XalangParser#bool_literal.
    def visitBool_literal(self, ctx: XalangParser.Bool_literalContext):
        if ctx.getText() == "True":
            return ["lit", "int", "1"]
        else:
            return ["lit", "int", "0"]

    # Visit a parse tree produced by XalangParser#string_literal.
    def visitString_literal(self, ctx: XalangParser.String_literalContext):
        return ["lit", "str", ctx.getText()[1:-1]]


del XalangParser
