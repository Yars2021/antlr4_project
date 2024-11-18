
// Generated from ./Xalang.g4 by ANTLR 4.9.2

#pragma once


#include "antlr4-runtime.h"
#include "XalangListener.h"


/**
 * This class provides an empty implementation of XalangListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  XalangBaseListener : public XalangListener {
public:

  virtual void enterProgram(XalangParser::ProgramContext * /*ctx*/) override { }
  virtual void exitProgram(XalangParser::ProgramContext * /*ctx*/) override { }

  virtual void enterCode_instruction(XalangParser::Code_instructionContext * /*ctx*/) override { }
  virtual void exitCode_instruction(XalangParser::Code_instructionContext * /*ctx*/) override { }

  virtual void enterVar_def(XalangParser::Var_defContext * /*ctx*/) override { }
  virtual void exitVar_def(XalangParser::Var_defContext * /*ctx*/) override { }

  virtual void enterVar_names(XalangParser::Var_namesContext * /*ctx*/) override { }
  virtual void exitVar_names(XalangParser::Var_namesContext * /*ctx*/) override { }

  virtual void enterVar_name_init(XalangParser::Var_name_initContext * /*ctx*/) override { }
  virtual void exitVar_name_init(XalangParser::Var_name_initContext * /*ctx*/) override { }

  virtual void enterOperator_rule(XalangParser::Operator_ruleContext * /*ctx*/) override { }
  virtual void exitOperator_rule(XalangParser::Operator_ruleContext * /*ctx*/) override { }

  virtual void enterFor_operator_chain(XalangParser::For_operator_chainContext * /*ctx*/) override { }
  virtual void exitFor_operator_chain(XalangParser::For_operator_chainContext * /*ctx*/) override { }

  virtual void enterFor_operator(XalangParser::For_operatorContext * /*ctx*/) override { }
  virtual void exitFor_operator(XalangParser::For_operatorContext * /*ctx*/) override { }

  virtual void enterAssign(XalangParser::AssignContext * /*ctx*/) override { }
  virtual void exitAssign(XalangParser::AssignContext * /*ctx*/) override { }

  virtual void enterPrint(XalangParser::PrintContext * /*ctx*/) override { }
  virtual void exitPrint(XalangParser::PrintContext * /*ctx*/) override { }

  virtual void enterIf_op(XalangParser::If_opContext * /*ctx*/) override { }
  virtual void exitIf_op(XalangParser::If_opContext * /*ctx*/) override { }

  virtual void enterFor_op(XalangParser::For_opContext * /*ctx*/) override { }
  virtual void exitFor_op(XalangParser::For_opContext * /*ctx*/) override { }

  virtual void enterWhile_op(XalangParser::While_opContext * /*ctx*/) override { }
  virtual void exitWhile_op(XalangParser::While_opContext * /*ctx*/) override { }

  virtual void enterExpression(XalangParser::ExpressionContext * /*ctx*/) override { }
  virtual void exitExpression(XalangParser::ExpressionContext * /*ctx*/) override { }

  virtual void enterUnary_sign(XalangParser::Unary_signContext * /*ctx*/) override { }
  virtual void exitUnary_sign(XalangParser::Unary_signContext * /*ctx*/) override { }

  virtual void enterBinary_sign(XalangParser::Binary_signContext * /*ctx*/) override { }
  virtual void exitBinary_sign(XalangParser::Binary_signContext * /*ctx*/) override { }

  virtual void enterOp_assign(XalangParser::Op_assignContext * /*ctx*/) override { }
  virtual void exitOp_assign(XalangParser::Op_assignContext * /*ctx*/) override { }

  virtual void enterPostfix_expression(XalangParser::Postfix_expressionContext * /*ctx*/) override { }
  virtual void exitPostfix_expression(XalangParser::Postfix_expressionContext * /*ctx*/) override { }

  virtual void enterType(XalangParser::TypeContext * /*ctx*/) override { }
  virtual void exitType(XalangParser::TypeContext * /*ctx*/) override { }

  virtual void enterType_int(XalangParser::Type_intContext * /*ctx*/) override { }
  virtual void exitType_int(XalangParser::Type_intContext * /*ctx*/) override { }

  virtual void enterType_bool(XalangParser::Type_boolContext * /*ctx*/) override { }
  virtual void exitType_bool(XalangParser::Type_boolContext * /*ctx*/) override { }

  virtual void enterType_str(XalangParser::Type_strContext * /*ctx*/) override { }
  virtual void exitType_str(XalangParser::Type_strContext * /*ctx*/) override { }

  virtual void enterLiteral(XalangParser::LiteralContext * /*ctx*/) override { }
  virtual void exitLiteral(XalangParser::LiteralContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

