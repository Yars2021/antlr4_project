# Generated from ./Xalang.g4 by ANTLR 4.9.2
from antlr4 import *
if __name__ is not None and "." in __name__:
    from .XalangParser import XalangParser
else:
    from XalangParser import XalangParser

# This class defines a complete listener for a parse tree produced by XalangParser.
class XalangListener(ParseTreeListener):

    # Enter a parse tree produced by XalangParser#program.
    def enterProgram(self, ctx:XalangParser.ProgramContext):
        pass

    # Exit a parse tree produced by XalangParser#program.
    def exitProgram(self, ctx:XalangParser.ProgramContext):
        pass


    # Enter a parse tree produced by XalangParser#code_instruction_var_def.
    def enterCode_instruction_var_def(self, ctx:XalangParser.Code_instruction_var_defContext):
        pass

    # Exit a parse tree produced by XalangParser#code_instruction_var_def.
    def exitCode_instruction_var_def(self, ctx:XalangParser.Code_instruction_var_defContext):
        pass


    # Enter a parse tree produced by XalangParser#code_instruction_operator.
    def enterCode_instruction_operator(self, ctx:XalangParser.Code_instruction_operatorContext):
        pass

    # Exit a parse tree produced by XalangParser#code_instruction_operator.
    def exitCode_instruction_operator(self, ctx:XalangParser.Code_instruction_operatorContext):
        pass


    # Enter a parse tree produced by XalangParser#var_def.
    def enterVar_def(self, ctx:XalangParser.Var_defContext):
        pass

    # Exit a parse tree produced by XalangParser#var_def.
    def exitVar_def(self, ctx:XalangParser.Var_defContext):
        pass


    # Enter a parse tree produced by XalangParser#var_names.
    def enterVar_names(self, ctx:XalangParser.Var_namesContext):
        pass

    # Exit a parse tree produced by XalangParser#var_names.
    def exitVar_names(self, ctx:XalangParser.Var_namesContext):
        pass


    # Enter a parse tree produced by XalangParser#var_create.
    def enterVar_create(self, ctx:XalangParser.Var_createContext):
        pass

    # Exit a parse tree produced by XalangParser#var_create.
    def exitVar_create(self, ctx:XalangParser.Var_createContext):
        pass


    # Enter a parse tree produced by XalangParser#var_array_create.
    def enterVar_array_create(self, ctx:XalangParser.Var_array_createContext):
        pass

    # Exit a parse tree produced by XalangParser#var_array_create.
    def exitVar_array_create(self, ctx:XalangParser.Var_array_createContext):
        pass


    # Enter a parse tree produced by XalangParser#var_create_assign.
    def enterVar_create_assign(self, ctx:XalangParser.Var_create_assignContext):
        pass

    # Exit a parse tree produced by XalangParser#var_create_assign.
    def exitVar_create_assign(self, ctx:XalangParser.Var_create_assignContext):
        pass


    # Enter a parse tree produced by XalangParser#op_rule_expression.
    def enterOp_rule_expression(self, ctx:XalangParser.Op_rule_expressionContext):
        pass

    # Exit a parse tree produced by XalangParser#op_rule_expression.
    def exitOp_rule_expression(self, ctx:XalangParser.Op_rule_expressionContext):
        pass


    # Enter a parse tree produced by XalangParser#op_rule_print.
    def enterOp_rule_print(self, ctx:XalangParser.Op_rule_printContext):
        pass

    # Exit a parse tree produced by XalangParser#op_rule_print.
    def exitOp_rule_print(self, ctx:XalangParser.Op_rule_printContext):
        pass


    # Enter a parse tree produced by XalangParser#op_rule_if.
    def enterOp_rule_if(self, ctx:XalangParser.Op_rule_ifContext):
        pass

    # Exit a parse tree produced by XalangParser#op_rule_if.
    def exitOp_rule_if(self, ctx:XalangParser.Op_rule_ifContext):
        pass


    # Enter a parse tree produced by XalangParser#op_rule_for.
    def enterOp_rule_for(self, ctx:XalangParser.Op_rule_forContext):
        pass

    # Exit a parse tree produced by XalangParser#op_rule_for.
    def exitOp_rule_for(self, ctx:XalangParser.Op_rule_forContext):
        pass


    # Enter a parse tree produced by XalangParser#op_rule_while.
    def enterOp_rule_while(self, ctx:XalangParser.Op_rule_whileContext):
        pass

    # Exit a parse tree produced by XalangParser#op_rule_while.
    def exitOp_rule_while(self, ctx:XalangParser.Op_rule_whileContext):
        pass


    # Enter a parse tree produced by XalangParser#for_operators.
    def enterFor_operators(self, ctx:XalangParser.For_operatorsContext):
        pass

    # Exit a parse tree produced by XalangParser#for_operators.
    def exitFor_operators(self, ctx:XalangParser.For_operatorsContext):
        pass


    # Enter a parse tree produced by XalangParser#for_var_create.
    def enterFor_var_create(self, ctx:XalangParser.For_var_createContext):
        pass

    # Exit a parse tree produced by XalangParser#for_var_create.
    def exitFor_var_create(self, ctx:XalangParser.For_var_createContext):
        pass


    # Enter a parse tree produced by XalangParser#for_expression.
    def enterFor_expression(self, ctx:XalangParser.For_expressionContext):
        pass

    # Exit a parse tree produced by XalangParser#for_expression.
    def exitFor_expression(self, ctx:XalangParser.For_expressionContext):
        pass


    # Enter a parse tree produced by XalangParser#code_block.
    def enterCode_block(self, ctx:XalangParser.Code_blockContext):
        pass

    # Exit a parse tree produced by XalangParser#code_block.
    def exitCode_block(self, ctx:XalangParser.Code_blockContext):
        pass


    # Enter a parse tree produced by XalangParser#print_op.
    def enterPrint_op(self, ctx:XalangParser.Print_opContext):
        pass

    # Exit a parse tree produced by XalangParser#print_op.
    def exitPrint_op(self, ctx:XalangParser.Print_opContext):
        pass


    # Enter a parse tree produced by XalangParser#if_op.
    def enterIf_op(self, ctx:XalangParser.If_opContext):
        pass

    # Exit a parse tree produced by XalangParser#if_op.
    def exitIf_op(self, ctx:XalangParser.If_opContext):
        pass


    # Enter a parse tree produced by XalangParser#for_op.
    def enterFor_op(self, ctx:XalangParser.For_opContext):
        pass

    # Exit a parse tree produced by XalangParser#for_op.
    def exitFor_op(self, ctx:XalangParser.For_opContext):
        pass


    # Enter a parse tree produced by XalangParser#while_op.
    def enterWhile_op(self, ctx:XalangParser.While_opContext):
        pass

    # Exit a parse tree produced by XalangParser#while_op.
    def exitWhile_op(self, ctx:XalangParser.While_opContext):
        pass


    # Enter a parse tree produced by XalangParser#add_expression.
    def enterAdd_expression(self, ctx:XalangParser.Add_expressionContext):
        pass

    # Exit a parse tree produced by XalangParser#add_expression.
    def exitAdd_expression(self, ctx:XalangParser.Add_expressionContext):
        pass


    # Enter a parse tree produced by XalangParser#equality_expression.
    def enterEquality_expression(self, ctx:XalangParser.Equality_expressionContext):
        pass

    # Exit a parse tree produced by XalangParser#equality_expression.
    def exitEquality_expression(self, ctx:XalangParser.Equality_expressionContext):
        pass


    # Enter a parse tree produced by XalangParser#unary_minus_expression.
    def enterUnary_minus_expression(self, ctx:XalangParser.Unary_minus_expressionContext):
        pass

    # Exit a parse tree produced by XalangParser#unary_minus_expression.
    def exitUnary_minus_expression(self, ctx:XalangParser.Unary_minus_expressionContext):
        pass


    # Enter a parse tree produced by XalangParser#logic_or_expression.
    def enterLogic_or_expression(self, ctx:XalangParser.Logic_or_expressionContext):
        pass

    # Exit a parse tree produced by XalangParser#logic_or_expression.
    def exitLogic_or_expression(self, ctx:XalangParser.Logic_or_expressionContext):
        pass


    # Enter a parse tree produced by XalangParser#postfix_modifier_expression.
    def enterPostfix_modifier_expression(self, ctx:XalangParser.Postfix_modifier_expressionContext):
        pass

    # Exit a parse tree produced by XalangParser#postfix_modifier_expression.
    def exitPostfix_modifier_expression(self, ctx:XalangParser.Postfix_modifier_expressionContext):
        pass


    # Enter a parse tree produced by XalangParser#index_expression.
    def enterIndex_expression(self, ctx:XalangParser.Index_expressionContext):
        pass

    # Exit a parse tree produced by XalangParser#index_expression.
    def exitIndex_expression(self, ctx:XalangParser.Index_expressionContext):
        pass


    # Enter a parse tree produced by XalangParser#prefix_modifier_expression.
    def enterPrefix_modifier_expression(self, ctx:XalangParser.Prefix_modifier_expressionContext):
        pass

    # Exit a parse tree produced by XalangParser#prefix_modifier_expression.
    def exitPrefix_modifier_expression(self, ctx:XalangParser.Prefix_modifier_expressionContext):
        pass


    # Enter a parse tree produced by XalangParser#comparison_expression.
    def enterComparison_expression(self, ctx:XalangParser.Comparison_expressionContext):
        pass

    # Exit a parse tree produced by XalangParser#comparison_expression.
    def exitComparison_expression(self, ctx:XalangParser.Comparison_expressionContext):
        pass


    # Enter a parse tree produced by XalangParser#bit_and_expression.
    def enterBit_and_expression(self, ctx:XalangParser.Bit_and_expressionContext):
        pass

    # Exit a parse tree produced by XalangParser#bit_and_expression.
    def exitBit_and_expression(self, ctx:XalangParser.Bit_and_expressionContext):
        pass


    # Enter a parse tree produced by XalangParser#expression_var.
    def enterExpression_var(self, ctx:XalangParser.Expression_varContext):
        pass

    # Exit a parse tree produced by XalangParser#expression_var.
    def exitExpression_var(self, ctx:XalangParser.Expression_varContext):
        pass


    # Enter a parse tree produced by XalangParser#mul_expression.
    def enterMul_expression(self, ctx:XalangParser.Mul_expressionContext):
        pass

    # Exit a parse tree produced by XalangParser#mul_expression.
    def exitMul_expression(self, ctx:XalangParser.Mul_expressionContext):
        pass


    # Enter a parse tree produced by XalangParser#logic_and_expression.
    def enterLogic_and_expression(self, ctx:XalangParser.Logic_and_expressionContext):
        pass

    # Exit a parse tree produced by XalangParser#logic_and_expression.
    def exitLogic_and_expression(self, ctx:XalangParser.Logic_and_expressionContext):
        pass


    # Enter a parse tree produced by XalangParser#not_expression.
    def enterNot_expression(self, ctx:XalangParser.Not_expressionContext):
        pass

    # Exit a parse tree produced by XalangParser#not_expression.
    def exitNot_expression(self, ctx:XalangParser.Not_expressionContext):
        pass


    # Enter a parse tree produced by XalangParser#expression_literal.
    def enterExpression_literal(self, ctx:XalangParser.Expression_literalContext):
        pass

    # Exit a parse tree produced by XalangParser#expression_literal.
    def exitExpression_literal(self, ctx:XalangParser.Expression_literalContext):
        pass


    # Enter a parse tree produced by XalangParser#bit_or_expression.
    def enterBit_or_expression(self, ctx:XalangParser.Bit_or_expressionContext):
        pass

    # Exit a parse tree produced by XalangParser#bit_or_expression.
    def exitBit_or_expression(self, ctx:XalangParser.Bit_or_expressionContext):
        pass


    # Enter a parse tree produced by XalangParser#assign_expression.
    def enterAssign_expression(self, ctx:XalangParser.Assign_expressionContext):
        pass

    # Exit a parse tree produced by XalangParser#assign_expression.
    def exitAssign_expression(self, ctx:XalangParser.Assign_expressionContext):
        pass


    # Enter a parse tree produced by XalangParser#shift_expression.
    def enterShift_expression(self, ctx:XalangParser.Shift_expressionContext):
        pass

    # Exit a parse tree produced by XalangParser#shift_expression.
    def exitShift_expression(self, ctx:XalangParser.Shift_expressionContext):
        pass


    # Enter a parse tree produced by XalangParser#ternary_op_expression.
    def enterTernary_op_expression(self, ctx:XalangParser.Ternary_op_expressionContext):
        pass

    # Exit a parse tree produced by XalangParser#ternary_op_expression.
    def exitTernary_op_expression(self, ctx:XalangParser.Ternary_op_expressionContext):
        pass


    # Enter a parse tree produced by XalangParser#modified_assign_expression.
    def enterModified_assign_expression(self, ctx:XalangParser.Modified_assign_expressionContext):
        pass

    # Exit a parse tree produced by XalangParser#modified_assign_expression.
    def exitModified_assign_expression(self, ctx:XalangParser.Modified_assign_expressionContext):
        pass


    # Enter a parse tree produced by XalangParser#expression_brackets.
    def enterExpression_brackets(self, ctx:XalangParser.Expression_bracketsContext):
        pass

    # Exit a parse tree produced by XalangParser#expression_brackets.
    def exitExpression_brackets(self, ctx:XalangParser.Expression_bracketsContext):
        pass


    # Enter a parse tree produced by XalangParser#int_literal.
    def enterInt_literal(self, ctx:XalangParser.Int_literalContext):
        pass

    # Exit a parse tree produced by XalangParser#int_literal.
    def exitInt_literal(self, ctx:XalangParser.Int_literalContext):
        pass


    # Enter a parse tree produced by XalangParser#bool_literal.
    def enterBool_literal(self, ctx:XalangParser.Bool_literalContext):
        pass

    # Exit a parse tree produced by XalangParser#bool_literal.
    def exitBool_literal(self, ctx:XalangParser.Bool_literalContext):
        pass


    # Enter a parse tree produced by XalangParser#string_literal.
    def enterString_literal(self, ctx:XalangParser.String_literalContext):
        pass

    # Exit a parse tree produced by XalangParser#string_literal.
    def exitString_literal(self, ctx:XalangParser.String_literalContext):
        pass



del XalangParser