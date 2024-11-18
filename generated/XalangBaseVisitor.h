
// Generated from ./Xalang.g4 by ANTLR 4.9.2

#pragma once


#include "antlr4-runtime.h"
#include "XalangVisitor.h"


/**
 * This class provides an empty implementation of XalangVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  XalangBaseVisitor : public XalangVisitor {
public:

  virtual antlrcpp::Any visitProgram(XalangParser::ProgramContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCode_instruction(XalangParser::Code_instructionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitVar_def(XalangParser::Var_defContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitVar_names(XalangParser::Var_namesContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitVar_name_init(XalangParser::Var_name_initContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOperator_rule(XalangParser::Operator_ruleContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFor_operator_chain(XalangParser::For_operator_chainContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFor_operator(XalangParser::For_operatorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAssign(XalangParser::AssignContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPrint(XalangParser::PrintContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIf_op(XalangParser::If_opContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFor_op(XalangParser::For_opContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitWhile_op(XalangParser::While_opContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExpression(XalangParser::ExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUnary_sign(XalangParser::Unary_signContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBinary_sign(XalangParser::Binary_signContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOp_assign(XalangParser::Op_assignContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPostfix_expression(XalangParser::Postfix_expressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitType(XalangParser::TypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitType_int(XalangParser::Type_intContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitType_bool(XalangParser::Type_boolContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitType_str(XalangParser::Type_strContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLiteral(XalangParser::LiteralContext *ctx) override {
    return visitChildren(ctx);
  }


};

