
// Generated from ./Xalang.g4 by ANTLR 4.9.2

#pragma once


#include "antlr4-runtime.h"
#include "XalangParser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by XalangParser.
 */
class  XalangListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterProgram(XalangParser::ProgramContext *ctx) = 0;
  virtual void exitProgram(XalangParser::ProgramContext *ctx) = 0;

  virtual void enterCode_instruction(XalangParser::Code_instructionContext *ctx) = 0;
  virtual void exitCode_instruction(XalangParser::Code_instructionContext *ctx) = 0;

  virtual void enterVar_def(XalangParser::Var_defContext *ctx) = 0;
  virtual void exitVar_def(XalangParser::Var_defContext *ctx) = 0;

  virtual void enterVar_names(XalangParser::Var_namesContext *ctx) = 0;
  virtual void exitVar_names(XalangParser::Var_namesContext *ctx) = 0;

  virtual void enterVar_name_init(XalangParser::Var_name_initContext *ctx) = 0;
  virtual void exitVar_name_init(XalangParser::Var_name_initContext *ctx) = 0;

  virtual void enterOperator_rule(XalangParser::Operator_ruleContext *ctx) = 0;
  virtual void exitOperator_rule(XalangParser::Operator_ruleContext *ctx) = 0;

  virtual void enterFor_operator_chain(XalangParser::For_operator_chainContext *ctx) = 0;
  virtual void exitFor_operator_chain(XalangParser::For_operator_chainContext *ctx) = 0;

  virtual void enterFor_operator(XalangParser::For_operatorContext *ctx) = 0;
  virtual void exitFor_operator(XalangParser::For_operatorContext *ctx) = 0;

  virtual void enterAssign(XalangParser::AssignContext *ctx) = 0;
  virtual void exitAssign(XalangParser::AssignContext *ctx) = 0;

  virtual void enterPrint(XalangParser::PrintContext *ctx) = 0;
  virtual void exitPrint(XalangParser::PrintContext *ctx) = 0;

  virtual void enterIf_op(XalangParser::If_opContext *ctx) = 0;
  virtual void exitIf_op(XalangParser::If_opContext *ctx) = 0;

  virtual void enterFor_op(XalangParser::For_opContext *ctx) = 0;
  virtual void exitFor_op(XalangParser::For_opContext *ctx) = 0;

  virtual void enterWhile_op(XalangParser::While_opContext *ctx) = 0;
  virtual void exitWhile_op(XalangParser::While_opContext *ctx) = 0;

  virtual void enterExpression(XalangParser::ExpressionContext *ctx) = 0;
  virtual void exitExpression(XalangParser::ExpressionContext *ctx) = 0;

  virtual void enterUnary_sign(XalangParser::Unary_signContext *ctx) = 0;
  virtual void exitUnary_sign(XalangParser::Unary_signContext *ctx) = 0;

  virtual void enterBinary_sign(XalangParser::Binary_signContext *ctx) = 0;
  virtual void exitBinary_sign(XalangParser::Binary_signContext *ctx) = 0;

  virtual void enterOp_assign(XalangParser::Op_assignContext *ctx) = 0;
  virtual void exitOp_assign(XalangParser::Op_assignContext *ctx) = 0;

  virtual void enterPostfix_expression(XalangParser::Postfix_expressionContext *ctx) = 0;
  virtual void exitPostfix_expression(XalangParser::Postfix_expressionContext *ctx) = 0;

  virtual void enterType(XalangParser::TypeContext *ctx) = 0;
  virtual void exitType(XalangParser::TypeContext *ctx) = 0;

  virtual void enterType_int(XalangParser::Type_intContext *ctx) = 0;
  virtual void exitType_int(XalangParser::Type_intContext *ctx) = 0;

  virtual void enterType_bool(XalangParser::Type_boolContext *ctx) = 0;
  virtual void exitType_bool(XalangParser::Type_boolContext *ctx) = 0;

  virtual void enterType_str(XalangParser::Type_strContext *ctx) = 0;
  virtual void exitType_str(XalangParser::Type_strContext *ctx) = 0;

  virtual void enterLiteral(XalangParser::LiteralContext *ctx) = 0;
  virtual void exitLiteral(XalangParser::LiteralContext *ctx) = 0;


};

