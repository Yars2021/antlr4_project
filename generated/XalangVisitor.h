
// Generated from ./Xalang.g4 by ANTLR 4.9.2

#pragma once


#include "antlr4-runtime.h"
#include "XalangParser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by XalangParser.
 */
class  XalangVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by XalangParser.
   */
    virtual antlrcpp::Any visitProgram(XalangParser::ProgramContext *context) = 0;

    virtual antlrcpp::Any visitCode_instruction(XalangParser::Code_instructionContext *context) = 0;

    virtual antlrcpp::Any visitVar_def(XalangParser::Var_defContext *context) = 0;

    virtual antlrcpp::Any visitVar_names(XalangParser::Var_namesContext *context) = 0;

    virtual antlrcpp::Any visitVar_name_init(XalangParser::Var_name_initContext *context) = 0;

    virtual antlrcpp::Any visitOperator_rule(XalangParser::Operator_ruleContext *context) = 0;

    virtual antlrcpp::Any visitFor_operator_chain(XalangParser::For_operator_chainContext *context) = 0;

    virtual antlrcpp::Any visitFor_operator(XalangParser::For_operatorContext *context) = 0;

    virtual antlrcpp::Any visitAssign(XalangParser::AssignContext *context) = 0;

    virtual antlrcpp::Any visitPrint(XalangParser::PrintContext *context) = 0;

    virtual antlrcpp::Any visitIf_op(XalangParser::If_opContext *context) = 0;

    virtual antlrcpp::Any visitFor_op(XalangParser::For_opContext *context) = 0;

    virtual antlrcpp::Any visitWhile_op(XalangParser::While_opContext *context) = 0;

    virtual antlrcpp::Any visitExpression(XalangParser::ExpressionContext *context) = 0;

    virtual antlrcpp::Any visitUnary_sign(XalangParser::Unary_signContext *context) = 0;

    virtual antlrcpp::Any visitBinary_sign(XalangParser::Binary_signContext *context) = 0;

    virtual antlrcpp::Any visitOp_assign(XalangParser::Op_assignContext *context) = 0;

    virtual antlrcpp::Any visitPostfix_expression(XalangParser::Postfix_expressionContext *context) = 0;

    virtual antlrcpp::Any visitType(XalangParser::TypeContext *context) = 0;

    virtual antlrcpp::Any visitType_int(XalangParser::Type_intContext *context) = 0;

    virtual antlrcpp::Any visitType_bool(XalangParser::Type_boolContext *context) = 0;

    virtual antlrcpp::Any visitType_str(XalangParser::Type_strContext *context) = 0;

    virtual antlrcpp::Any visitLiteral(XalangParser::LiteralContext *context) = 0;


};

