# Generated from ./Xalang.g4 by ANTLR 4.9.2
from antlr4 import *

if __name__ is not None and "." in __name__:
    from .XalangParser import XalangParser
else:
    from XalangParser import XalangParser

import copy

# This class defines a complete generic visitor for a parse tree produced by XalangParser.

class XalangVisitor(ParseTreeVisitor):
    def __init__(self):
        self.var_stack = [{}]

    def duplicate_stack(self):
        self.var_stack.append(copy.deepcopy(self.var_stack[-1]))

    def restore_stack(self):
        for var_name in self.var_stack[-1]:
            if var_name in self.var_stack[-2]:
                self.var_stack[-2][var_name] = self.var_stack[-1][var_name]

        self.var_stack = self.var_stack[:-1]

    # Visit a parse tree produced by XalangParser#program.
    def visitProgram(self, ctx: XalangParser.ProgramContext):
        return self.visitChildren(ctx)

    # Visit a parse tree produced by XalangParser#code_instruction_var_def.
    def visitCode_instruction_var_def(self, ctx: XalangParser.Code_instruction_var_defContext):
        return self.visitChildren(ctx)

    # Visit a parse tree produced by XalangParser#code_instruction_operator.
    def visitCode_instruction_operator(self, ctx: XalangParser.Code_instruction_operatorContext):
        return self.visitChildren(ctx)

    # Visit a parse tree produced by XalangParser#var_def.
    def visitVar_def(self, ctx: XalangParser.Var_defContext):
        return self.visitChildren(ctx)

    # Visit a parse tree produced by XalangParser#var_names.
    def visitVar_names(self, ctx: XalangParser.Var_namesContext):
        return self.visitChildren(ctx)

    # Visit a parse tree produced by XalangParser#var_create.
    def visitVar_create(self, ctx: XalangParser.Var_createContext):
        self.var_stack[-1][ctx.getChild(0).getText()] = 0

    # Visit a parse tree produced by XalangParser#var_array_create.
    def visitVar_array_create(self, ctx: XalangParser.Var_array_createContext):
        self.var_stack[-1][ctx.getChild(0).getText()] = [0 for _ in range(int(ctx.getChild(2).getText()))]

    # Visit a parse tree produced by XalangParser#var_create_assign.
    def visitVar_create_assign(self, ctx: XalangParser.Var_create_assignContext):
        self.var_stack[-1][ctx.getChild(0).getText()] = self.visit(ctx.getChild(2))

    # Visit a parse tree produced by XalangParser#op_rule_expression.
    def visitOp_rule_expression(self, ctx: XalangParser.Op_rule_expressionContext):
        return self.visitChildren(ctx)

    # Visit a parse tree produced by XalangParser#op_rule_print.
    def visitOp_rule_print(self, ctx: XalangParser.Op_rule_printContext):
        return self.visitChildren(ctx)

    # Visit a parse tree produced by XalangParser#op_rule_if.
    def visitOp_rule_if(self, ctx: XalangParser.Op_rule_ifContext):
        return self.visitChildren(ctx)

    # Visit a parse tree produced by XalangParser#op_rule_for.
    def visitOp_rule_for(self, ctx: XalangParser.Op_rule_forContext):
        return self.visitChildren(ctx)

    # Visit a parse tree produced by XalangParser#op_rule_while.
    def visitOp_rule_while(self, ctx: XalangParser.Op_rule_whileContext):
        return self.visitChildren(ctx)

    # Visit a parse tree produced by XalangParser#for_operators.
    def visitFor_operators(self, ctx: XalangParser.For_operatorsContext):
        return self.visitChildren(ctx)

    # Visit a parse tree produced by XalangParser#for_var_create.
    def visitFor_var_create(self, ctx: XalangParser.For_var_createContext):
        return self.visitChildren(ctx)

    # Visit a parse tree produced by XalangParser#for_expression.
    def visitFor_expression(self, ctx: XalangParser.For_expressionContext):
        return self.visitChildren(ctx)

    # Visit a parse tree produced by XalangParser#code_block.
    def visitCode_block(self, ctx: XalangParser.Code_blockContext):
        return self.visitChildren(ctx)

    # Visit a parse tree produced by XalangParser#print_op.
    def visitPrint_op(self, ctx: XalangParser.Print_opContext):
        print(self.visit(ctx.getChild(2)))

    # Visit a parse tree produced by XalangParser#if_op.
    def visitIf_op(self, ctx: XalangParser.If_opContext):
        self.duplicate_stack()

        if self.visit(ctx.getChild(2)):
            return self.visit(ctx.getChild(5))
        else:
            index = 7

            while index < ctx.getChildCount() and ctx.getChild(index).getText() == 'AAXAAAAAAXA_':
                if self.visit(ctx.getChild(index + 2)):
                    return self.visit(ctx.getChild(index + 5))

                index += 7

            if index < ctx.getChildCount() and ctx.getChild(index).getText() == 'AAXAAAAAA_':
                return self.visit(ctx.getChild(index + 2))

        self.restore_stack()

    # Visit a parse tree produced by XalangParser#for_op.
    def visitFor_op(self, ctx: XalangParser.For_opContext):
        if ctx.getChildCount() > 10:
            self.visit(ctx.getChild(2))
            self.duplicate_stack()

            while self.visit(ctx.getChild(4)):
                for i in range(9, ctx.getChildCount() - 1):
                    self.visit(ctx.getChild(i))

                self.visit(ctx.getChild(6))

            self.restore_stack()

    # Visit a parse tree produced by XalangParser#while_op.
    def visitWhile_op(self, ctx: XalangParser.While_opContext):
        if ctx.getChildCount() > 6:
            self.duplicate_stack()

            while self.visit(ctx.getChild(2)):
                for i in range(5, ctx.getChildCount()):
                    self.visit(ctx.getChild(i))

            self.restore_stack()

    # Visit a parse tree produced by XalangParser#add_expression.
    def visitAdd_expression(self, ctx: XalangParser.Add_expressionContext):
        if ctx.getChild(1).getText() == "+":
            return self.visit(ctx.getChild(0)) + self.visit(ctx.getChild(2))
        elif ctx.getChild(1).getText() == "-":
            return self.visit(ctx.getChild(0)) - self.visit(ctx.getChild(2))

    # Visit a parse tree produced by XalangParser#equality_expression.
    def visitEquality_expression(self, ctx: XalangParser.Equality_expressionContext):
        if ctx.getChild(1).getText() == "==":
            return self.visit(ctx.getChild(0)) == self.visit(ctx.getChild(2))
        elif ctx.getChild(1).getText() == "!=":
            return self.visit(ctx.getChild(0)) != self.visit(ctx.getChild(2))

    # Visit a parse tree produced by XalangParser#unary_minus_expression.
    def visitUnary_minus_expression(self, ctx: XalangParser.Unary_minus_expressionContext):
        return -self.visit(ctx.getChild(1))

    # Visit a parse tree produced by XalangParser#logic_or_expression.
    def visitLogic_or_expression(self, ctx: XalangParser.Logic_or_expressionContext):
        if ctx.getChild(1).getText() == "||":
            return self.visit(ctx.getChild(0)) or self.visit(ctx.getChild(2))
        elif ctx.getChild(1).getText() == "^^":
            return self.visit(ctx.getChild(0)) or self.visit(ctx.getChild(2)) and \
                not (self.visit(ctx.getChild(0)) and self.visit(ctx.getChild(2)))

    # Visit a parse tree produced by XalangParser#postfix_modifier_expression.
    def visitPostfix_modifier_expression(self, ctx: XalangParser.Postfix_modifier_expressionContext):
        prev_value = self.var_stack[-1][ctx.getChild(0).getText()]

        if ctx.getChild(1).getText() == "++":
            self.var_stack[-1][ctx.getChild(0).getText()] += 1
        elif ctx.getChild(1).getText() == "--":
            self.var_stack[-1][ctx.getChild(0).getText()] -= 1

        return prev_value

    # Visit a parse tree produced by XalangParser#index_expression.
    def visitIndex_expression(self, ctx: XalangParser.Index_expressionContext):
        return self.visit(ctx.getChild(0))[self.visit(ctx.getChild(2))]

    # Visit a parse tree produced by XalangParser#prefix_modifier_expression.
    def visitPrefix_modifier_expression(self, ctx: XalangParser.Prefix_modifier_expressionContext):
        if ctx.getChild(0).getText() == "++":
            self.var_stack[-1][ctx.getChild(1).getText()] += 1
        elif ctx.getChild(0).getText() == "--":
            self.var_stack[-1][ctx.getChild(1).getText()] -= 1

        return self.var_stack[-1][ctx.getChild(1).getText()]

    # Visit a parse tree produced by XalangParser#comparison_expression.
    def visitComparison_expression(self, ctx: XalangParser.Comparison_expressionContext):
        if ctx.getChild(1).getText() == ">":
            return self.visit(ctx.getChild(0)) > self.visit(ctx.getChild(2))
        elif ctx.getChild(1).getText() == "<":
            return self.visit(ctx.getChild(0)) < self.visit(ctx.getChild(2))
        elif ctx.getChild(1).getText() == ">=":
            return self.visit(ctx.getChild(0)) >= self.visit(ctx.getChild(2))
        elif ctx.getChild(1).getText() == "<=":
            return self.visit(ctx.getChild(0)) <= self.visit(ctx.getChild(2))

    # Visit a parse tree produced by XalangParser#bit_and_expression.
    def visitBit_and_expression(self, ctx: XalangParser.Bit_and_expressionContext):
        return self.visit(ctx.getChild(0)) & self.visit(ctx.getChild(2))

    # Visit a parse tree produced by XalangParser#expression_var.
    def visitExpression_var(self, ctx: XalangParser.Expression_varContext):
        return self.var_stack[-1][ctx.getChild(0).getText()]

    # Visit a parse tree produced by XalangParser#mul_expression.
    def visitMul_expression(self, ctx: XalangParser.Mul_expressionContext):
        if ctx.getChild(1).getText() == "**":
            return self.visit(ctx.getChild(0)) ** self.visit(ctx.getChild(2))
        elif ctx.getChild(1).getText() == "*":
            return self.visit(ctx.getChild(0)) * self.visit(ctx.getChild(2))
        elif ctx.getChild(1).getText() == "/":
            return self.visit(ctx.getChild(0)) / self.visit(ctx.getChild(2))
        elif ctx.getChild(1).getText() == "%":
            return self.visit(ctx.getChild(0)) % self.visit(ctx.getChild(2))
        elif ctx.getChild(1).getText() == "div":
            return self.visit(ctx.getChild(0)) // self.visit(ctx.getChild(2))

    # Visit a parse tree produced by XalangParser#logic_and_expression.
    def visitLogic_and_expression(self, ctx: XalangParser.Logic_and_expressionContext):
        return self.visit(ctx.getChild(0)) and self.visit(ctx.getChild(2))

    # Visit a parse tree produced by XalangParser#not_expression.
    def visitNot_expression(self, ctx: XalangParser.Not_expressionContext):
        if ctx.getChild(1).getText() == "!":
            return self.visit(ctx.getChild(0)) | self.visit(ctx.getChild(2))
        elif ctx.getChild(1).getText() == "~":
            return self.visit(ctx.getChild(0)) ^ self.visit(ctx.getChild(2))

    # Visit a parse tree produced by XalangParser#expression_literal.
    def visitExpression_literal(self, ctx: XalangParser.Expression_literalContext):
        return self.visit(ctx.getChild(0))

    # Visit a parse tree produced by XalangParser#bit_or_expression.
    def visitBit_or_expression(self, ctx: XalangParser.Bit_or_expressionContext):
        if ctx.getChild(1).getText() == "|":
            return self.visit(ctx.getChild(0)) | self.visit(ctx.getChild(2))
        elif ctx.getChild(1).getText() == "^":
            return self.visit(ctx.getChild(0)) ^ self.visit(ctx.getChild(2))

    # Visit a parse tree produced by XalangParser#shift_expression.
    def visitShift_expression(self, ctx: XalangParser.Shift_expressionContext):
        if ctx.getChild(1).getText() == "<<":
            return self.visit(ctx.getChild(0)) << self.visit(ctx.getChild(2))
        elif ctx.getChild(1).getText() == ">>":
            return self.visit(ctx.getChild(0)) >> self.visit(ctx.getChild(2))

    # Visit a parse tree produced by XalangParser#ternary_op_expression.
    def visitTernary_op_expression(self, ctx: XalangParser.Ternary_op_expressionContext):
        if self.visit(ctx.getChild(0)):
            return self.visit(ctx.getChild(2))
        else:
            return self.visit(ctx.getChild(4))

    # Visit a parse tree produced by XalangParser#modified_assign_expression.
    def visitModified_assign_expression(self, ctx: XalangParser.Modified_assign_expressionContext):
        if ctx.getChild(1).getText() == "*=":
            pass
        elif ctx.getChild(1).getText() == "/=":
            pass
        elif ctx.getChild(1).getText() == "%=":
            pass
        elif ctx.getChild(1).getText() == "div=":
            pass
        elif ctx.getChild(1).getText() == "+=":
            pass
        elif ctx.getChild(1).getText() == "-=":
            pass
        elif ctx.getChild(1).getText() == "&=":
            pass
        elif ctx.getChild(1).getText() == "|=":
            pass
        elif ctx.getChild(1).getText() == "^=":
            pass
        elif ctx.getChild(1).getText() == "<<=":
            pass
        elif ctx.getChild(1).getText() == ">>=":
            pass

    # Visit a parse tree produced by XalangParser#assign_expression.
    def visitAssign_expression(self, ctx: XalangParser.Assign_expressionContext):
        if ctx.getChildCount() == 3:
            self.var_stack[-1][ctx.getChild(0).getText()] = self.visit(ctx.getChild(2))
            return self.var_stack[-1][ctx.getChild(0).getText()]
        else:
            self.var_stack[-1][ctx.getChild(0).getText()][int(self.visit(ctx.getChild(2)))] = self.visit(ctx.getChild(5))
            return self.var_stack[-1][ctx.getChild(0).getText()][int(self.visit(ctx.getChild(2)))]

    # Visit a parse tree produced by XalangParser#expression_brackets.
    def visitExpression_brackets(self, ctx: XalangParser.Expression_bracketsContext):
        return self.visit(ctx.getChild(1))

    # Visit a parse tree produced by XalangParser#int_literal.
    def visitInt_literal(self, ctx: XalangParser.Int_literalContext):
        return int(ctx.getText())

    # Visit a parse tree produced by XalangParser#bool_literal.
    def visitBool_literal(self, ctx: XalangParser.Bool_literalContext):
        return ctx.getText() == "True"

    # Visit a parse tree produced by XalangParser#string_literal.
    def visitString_literal(self, ctx: XalangParser.String_literalContext):
        return ctx.getText()[1:-1]


del XalangParser
