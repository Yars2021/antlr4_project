
// Generated from ./Xalang.g4 by ANTLR 4.9.2


#include "XalangListener.h"
#include "XalangVisitor.h"

#include "XalangParser.h"


using namespace antlrcpp;
using namespace antlr4;

XalangParser::XalangParser(TokenStream *input) : Parser(input) {
  _interpreter = new atn::ParserATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

XalangParser::~XalangParser() {
  delete _interpreter;
}

std::string XalangParser::getGrammarFileName() const {
  return "Xalang.g4";
}

const std::vector<std::string>& XalangParser::getRuleNames() const {
  return _ruleNames;
}

dfa::Vocabulary& XalangParser::getVocabulary() const {
  return _vocabulary;
}


//----------------- ProgramContext ------------------------------------------------------------------

XalangParser::ProgramContext::ProgramContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* XalangParser::ProgramContext::EOF() {
  return getToken(XalangParser::EOF, 0);
}

std::vector<XalangParser::Code_instructionContext *> XalangParser::ProgramContext::code_instruction() {
  return getRuleContexts<XalangParser::Code_instructionContext>();
}

XalangParser::Code_instructionContext* XalangParser::ProgramContext::code_instruction(size_t i) {
  return getRuleContext<XalangParser::Code_instructionContext>(i);
}


size_t XalangParser::ProgramContext::getRuleIndex() const {
  return XalangParser::RuleProgram;
}

void XalangParser::ProgramContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<XalangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterProgram(this);
}

void XalangParser::ProgramContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<XalangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitProgram(this);
}


antlrcpp::Any XalangParser::ProgramContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<XalangVisitor*>(visitor))
    return parserVisitor->visitProgram(this);
  else
    return visitor->visitChildren(this);
}

XalangParser::ProgramContext* XalangParser::program() {
  ProgramContext *_localctx = _tracker.createInstance<ProgramContext>(_ctx, getState());
  enterRule(_localctx, 0, XalangParser::RuleProgram);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(49);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << XalangParser::T__2)
      | (1ULL << XalangParser::T__5)
      | (1ULL << XalangParser::T__10)
      | (1ULL << XalangParser::T__11)
      | (1ULL << XalangParser::T__37)
      | (1ULL << XalangParser::T__38)
      | (1ULL << XalangParser::T__39)
      | (1ULL << XalangParser::Ident))) != 0)) {
      setState(46);
      code_instruction();
      setState(51);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(52);
    match(XalangParser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Code_instructionContext ------------------------------------------------------------------

XalangParser::Code_instructionContext::Code_instructionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

XalangParser::Var_defContext* XalangParser::Code_instructionContext::var_def() {
  return getRuleContext<XalangParser::Var_defContext>(0);
}

tree::TerminalNode* XalangParser::Code_instructionContext::Semicolon() {
  return getToken(XalangParser::Semicolon, 0);
}

XalangParser::Operator_ruleContext* XalangParser::Code_instructionContext::operator_rule() {
  return getRuleContext<XalangParser::Operator_ruleContext>(0);
}


size_t XalangParser::Code_instructionContext::getRuleIndex() const {
  return XalangParser::RuleCode_instruction;
}

void XalangParser::Code_instructionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<XalangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCode_instruction(this);
}

void XalangParser::Code_instructionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<XalangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCode_instruction(this);
}


antlrcpp::Any XalangParser::Code_instructionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<XalangVisitor*>(visitor))
    return parserVisitor->visitCode_instruction(this);
  else
    return visitor->visitChildren(this);
}

XalangParser::Code_instructionContext* XalangParser::code_instruction() {
  Code_instructionContext *_localctx = _tracker.createInstance<Code_instructionContext>(_ctx, getState());
  enterRule(_localctx, 2, XalangParser::RuleCode_instruction);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(58);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case XalangParser::T__37:
      case XalangParser::T__38:
      case XalangParser::T__39: {
        enterOuterAlt(_localctx, 1);
        setState(54);
        var_def();
        setState(55);
        match(XalangParser::Semicolon);
        break;
      }

      case XalangParser::T__2:
      case XalangParser::T__5:
      case XalangParser::T__10:
      case XalangParser::T__11:
      case XalangParser::Ident: {
        enterOuterAlt(_localctx, 2);
        setState(57);
        operator_rule();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Var_defContext ------------------------------------------------------------------

XalangParser::Var_defContext::Var_defContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

XalangParser::TypeContext* XalangParser::Var_defContext::type() {
  return getRuleContext<XalangParser::TypeContext>(0);
}

XalangParser::Var_namesContext* XalangParser::Var_defContext::var_names() {
  return getRuleContext<XalangParser::Var_namesContext>(0);
}


size_t XalangParser::Var_defContext::getRuleIndex() const {
  return XalangParser::RuleVar_def;
}

void XalangParser::Var_defContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<XalangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVar_def(this);
}

void XalangParser::Var_defContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<XalangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVar_def(this);
}


antlrcpp::Any XalangParser::Var_defContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<XalangVisitor*>(visitor))
    return parserVisitor->visitVar_def(this);
  else
    return visitor->visitChildren(this);
}

XalangParser::Var_defContext* XalangParser::var_def() {
  Var_defContext *_localctx = _tracker.createInstance<Var_defContext>(_ctx, getState());
  enterRule(_localctx, 4, XalangParser::RuleVar_def);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(60);
    type();
    setState(61);
    var_names();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Var_namesContext ------------------------------------------------------------------

XalangParser::Var_namesContext::Var_namesContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

XalangParser::Var_name_initContext* XalangParser::Var_namesContext::var_name_init() {
  return getRuleContext<XalangParser::Var_name_initContext>(0);
}

XalangParser::Var_namesContext* XalangParser::Var_namesContext::var_names() {
  return getRuleContext<XalangParser::Var_namesContext>(0);
}


size_t XalangParser::Var_namesContext::getRuleIndex() const {
  return XalangParser::RuleVar_names;
}

void XalangParser::Var_namesContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<XalangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVar_names(this);
}

void XalangParser::Var_namesContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<XalangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVar_names(this);
}


antlrcpp::Any XalangParser::Var_namesContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<XalangVisitor*>(visitor))
    return parserVisitor->visitVar_names(this);
  else
    return visitor->visitChildren(this);
}

XalangParser::Var_namesContext* XalangParser::var_names() {
  Var_namesContext *_localctx = _tracker.createInstance<Var_namesContext>(_ctx, getState());
  enterRule(_localctx, 6, XalangParser::RuleVar_names);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(68);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(63);
      var_name_init();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(64);
      var_name_init();
      setState(65);
      match(XalangParser::T__0);
      setState(66);
      var_names();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Var_name_initContext ------------------------------------------------------------------

XalangParser::Var_name_initContext::Var_name_initContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* XalangParser::Var_name_initContext::Ident() {
  return getToken(XalangParser::Ident, 0);
}

XalangParser::ExpressionContext* XalangParser::Var_name_initContext::expression() {
  return getRuleContext<XalangParser::ExpressionContext>(0);
}


size_t XalangParser::Var_name_initContext::getRuleIndex() const {
  return XalangParser::RuleVar_name_init;
}

void XalangParser::Var_name_initContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<XalangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVar_name_init(this);
}

void XalangParser::Var_name_initContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<XalangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVar_name_init(this);
}


antlrcpp::Any XalangParser::Var_name_initContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<XalangVisitor*>(visitor))
    return parserVisitor->visitVar_name_init(this);
  else
    return visitor->visitChildren(this);
}

XalangParser::Var_name_initContext* XalangParser::var_name_init() {
  Var_name_initContext *_localctx = _tracker.createInstance<Var_name_initContext>(_ctx, getState());
  enterRule(_localctx, 8, XalangParser::RuleVar_name_init);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(74);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(70);
      match(XalangParser::Ident);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(71);
      match(XalangParser::Ident);
      setState(72);
      match(XalangParser::T__1);
      setState(73);
      expression(0);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Operator_ruleContext ------------------------------------------------------------------

XalangParser::Operator_ruleContext::Operator_ruleContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

XalangParser::AssignContext* XalangParser::Operator_ruleContext::assign() {
  return getRuleContext<XalangParser::AssignContext>(0);
}

tree::TerminalNode* XalangParser::Operator_ruleContext::Semicolon() {
  return getToken(XalangParser::Semicolon, 0);
}

XalangParser::PrintContext* XalangParser::Operator_ruleContext::print() {
  return getRuleContext<XalangParser::PrintContext>(0);
}

XalangParser::If_opContext* XalangParser::Operator_ruleContext::if_op() {
  return getRuleContext<XalangParser::If_opContext>(0);
}

XalangParser::For_opContext* XalangParser::Operator_ruleContext::for_op() {
  return getRuleContext<XalangParser::For_opContext>(0);
}

XalangParser::While_opContext* XalangParser::Operator_ruleContext::while_op() {
  return getRuleContext<XalangParser::While_opContext>(0);
}


size_t XalangParser::Operator_ruleContext::getRuleIndex() const {
  return XalangParser::RuleOperator_rule;
}

void XalangParser::Operator_ruleContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<XalangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOperator_rule(this);
}

void XalangParser::Operator_ruleContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<XalangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOperator_rule(this);
}


antlrcpp::Any XalangParser::Operator_ruleContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<XalangVisitor*>(visitor))
    return parserVisitor->visitOperator_rule(this);
  else
    return visitor->visitChildren(this);
}

XalangParser::Operator_ruleContext* XalangParser::operator_rule() {
  Operator_ruleContext *_localctx = _tracker.createInstance<Operator_ruleContext>(_ctx, getState());
  enterRule(_localctx, 10, XalangParser::RuleOperator_rule);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(85);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case XalangParser::Ident: {
        enterOuterAlt(_localctx, 1);
        setState(76);
        assign();
        setState(77);
        match(XalangParser::Semicolon);
        break;
      }

      case XalangParser::T__2: {
        enterOuterAlt(_localctx, 2);
        setState(79);
        print();
        setState(80);
        match(XalangParser::Semicolon);
        break;
      }

      case XalangParser::T__5: {
        enterOuterAlt(_localctx, 3);
        setState(82);
        if_op();
        break;
      }

      case XalangParser::T__10: {
        enterOuterAlt(_localctx, 4);
        setState(83);
        for_op();
        break;
      }

      case XalangParser::T__11: {
        enterOuterAlt(_localctx, 5);
        setState(84);
        while_op();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- For_operator_chainContext ------------------------------------------------------------------

XalangParser::For_operator_chainContext::For_operator_chainContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

XalangParser::For_operatorContext* XalangParser::For_operator_chainContext::for_operator() {
  return getRuleContext<XalangParser::For_operatorContext>(0);
}

std::vector<XalangParser::For_operator_chainContext *> XalangParser::For_operator_chainContext::for_operator_chain() {
  return getRuleContexts<XalangParser::For_operator_chainContext>();
}

XalangParser::For_operator_chainContext* XalangParser::For_operator_chainContext::for_operator_chain(size_t i) {
  return getRuleContext<XalangParser::For_operator_chainContext>(i);
}


size_t XalangParser::For_operator_chainContext::getRuleIndex() const {
  return XalangParser::RuleFor_operator_chain;
}

void XalangParser::For_operator_chainContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<XalangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFor_operator_chain(this);
}

void XalangParser::For_operator_chainContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<XalangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFor_operator_chain(this);
}


antlrcpp::Any XalangParser::For_operator_chainContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<XalangVisitor*>(visitor))
    return parserVisitor->visitFor_operator_chain(this);
  else
    return visitor->visitChildren(this);
}

XalangParser::For_operator_chainContext* XalangParser::for_operator_chain() {
  For_operator_chainContext *_localctx = _tracker.createInstance<For_operator_chainContext>(_ctx, getState());
  enterRule(_localctx, 12, XalangParser::RuleFor_operator_chain);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(87);
    for_operator();
    setState(92);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 5, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(88);
        match(XalangParser::T__0);
        setState(89);
        for_operator_chain(); 
      }
      setState(94);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 5, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- For_operatorContext ------------------------------------------------------------------

XalangParser::For_operatorContext::For_operatorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

XalangParser::Var_defContext* XalangParser::For_operatorContext::var_def() {
  return getRuleContext<XalangParser::Var_defContext>(0);
}

XalangParser::AssignContext* XalangParser::For_operatorContext::assign() {
  return getRuleContext<XalangParser::AssignContext>(0);
}


size_t XalangParser::For_operatorContext::getRuleIndex() const {
  return XalangParser::RuleFor_operator;
}

void XalangParser::For_operatorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<XalangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFor_operator(this);
}

void XalangParser::For_operatorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<XalangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFor_operator(this);
}


antlrcpp::Any XalangParser::For_operatorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<XalangVisitor*>(visitor))
    return parserVisitor->visitFor_operator(this);
  else
    return visitor->visitChildren(this);
}

XalangParser::For_operatorContext* XalangParser::for_operator() {
  For_operatorContext *_localctx = _tracker.createInstance<For_operatorContext>(_ctx, getState());
  enterRule(_localctx, 14, XalangParser::RuleFor_operator);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(97);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case XalangParser::T__37:
      case XalangParser::T__38:
      case XalangParser::T__39: {
        enterOuterAlt(_localctx, 1);
        setState(95);
        var_def();
        break;
      }

      case XalangParser::Ident: {
        enterOuterAlt(_localctx, 2);
        setState(96);
        assign();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AssignContext ------------------------------------------------------------------

XalangParser::AssignContext::AssignContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* XalangParser::AssignContext::Ident() {
  return getToken(XalangParser::Ident, 0);
}

XalangParser::ExpressionContext* XalangParser::AssignContext::expression() {
  return getRuleContext<XalangParser::ExpressionContext>(0);
}

XalangParser::Op_assignContext* XalangParser::AssignContext::op_assign() {
  return getRuleContext<XalangParser::Op_assignContext>(0);
}

XalangParser::Postfix_expressionContext* XalangParser::AssignContext::postfix_expression() {
  return getRuleContext<XalangParser::Postfix_expressionContext>(0);
}


size_t XalangParser::AssignContext::getRuleIndex() const {
  return XalangParser::RuleAssign;
}

void XalangParser::AssignContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<XalangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAssign(this);
}

void XalangParser::AssignContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<XalangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAssign(this);
}


antlrcpp::Any XalangParser::AssignContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<XalangVisitor*>(visitor))
    return parserVisitor->visitAssign(this);
  else
    return visitor->visitChildren(this);
}

XalangParser::AssignContext* XalangParser::assign() {
  AssignContext *_localctx = _tracker.createInstance<AssignContext>(_ctx, getState());
  enterRule(_localctx, 16, XalangParser::RuleAssign);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(108);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 7, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(99);
      match(XalangParser::Ident);
      setState(100);
      match(XalangParser::T__1);
      setState(101);
      expression(0);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(102);
      match(XalangParser::Ident);
      setState(103);
      op_assign();
      setState(104);
      expression(0);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(106);
      match(XalangParser::Ident);
      setState(107);
      postfix_expression();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PrintContext ------------------------------------------------------------------

XalangParser::PrintContext::PrintContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

XalangParser::ExpressionContext* XalangParser::PrintContext::expression() {
  return getRuleContext<XalangParser::ExpressionContext>(0);
}


size_t XalangParser::PrintContext::getRuleIndex() const {
  return XalangParser::RulePrint;
}

void XalangParser::PrintContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<XalangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPrint(this);
}

void XalangParser::PrintContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<XalangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPrint(this);
}


antlrcpp::Any XalangParser::PrintContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<XalangVisitor*>(visitor))
    return parserVisitor->visitPrint(this);
  else
    return visitor->visitChildren(this);
}

XalangParser::PrintContext* XalangParser::print() {
  PrintContext *_localctx = _tracker.createInstance<PrintContext>(_ctx, getState());
  enterRule(_localctx, 18, XalangParser::RulePrint);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(110);
    match(XalangParser::T__2);
    setState(111);
    match(XalangParser::T__3);
    setState(112);
    expression(0);
    setState(113);
    match(XalangParser::T__4);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- If_opContext ------------------------------------------------------------------

XalangParser::If_opContext::If_opContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<XalangParser::ExpressionContext *> XalangParser::If_opContext::expression() {
  return getRuleContexts<XalangParser::ExpressionContext>();
}

XalangParser::ExpressionContext* XalangParser::If_opContext::expression(size_t i) {
  return getRuleContext<XalangParser::ExpressionContext>(i);
}

std::vector<XalangParser::Operator_ruleContext *> XalangParser::If_opContext::operator_rule() {
  return getRuleContexts<XalangParser::Operator_ruleContext>();
}

XalangParser::Operator_ruleContext* XalangParser::If_opContext::operator_rule(size_t i) {
  return getRuleContext<XalangParser::Operator_ruleContext>(i);
}

std::vector<XalangParser::Code_instructionContext *> XalangParser::If_opContext::code_instruction() {
  return getRuleContexts<XalangParser::Code_instructionContext>();
}

XalangParser::Code_instructionContext* XalangParser::If_opContext::code_instruction(size_t i) {
  return getRuleContext<XalangParser::Code_instructionContext>(i);
}


size_t XalangParser::If_opContext::getRuleIndex() const {
  return XalangParser::RuleIf_op;
}

void XalangParser::If_opContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<XalangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIf_op(this);
}

void XalangParser::If_opContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<XalangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIf_op(this);
}


antlrcpp::Any XalangParser::If_opContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<XalangVisitor*>(visitor))
    return parserVisitor->visitIf_op(this);
  else
    return visitor->visitChildren(this);
}

XalangParser::If_opContext* XalangParser::if_op() {
  If_opContext *_localctx = _tracker.createInstance<If_opContext>(_ctx, getState());
  enterRule(_localctx, 20, XalangParser::RuleIf_op);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(115);
    match(XalangParser::T__5);
    setState(116);
    match(XalangParser::T__3);
    setState(117);
    expression(0);
    setState(118);
    match(XalangParser::T__4);
    setState(119);
    match(XalangParser::T__6);
    setState(123);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << XalangParser::T__2)
      | (1ULL << XalangParser::T__5)
      | (1ULL << XalangParser::T__10)
      | (1ULL << XalangParser::T__11)
      | (1ULL << XalangParser::Ident))) != 0)) {
      setState(120);
      operator_rule();
      setState(125);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(126);
    match(XalangParser::T__7);
    setState(142);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == XalangParser::T__8) {
      setState(127);
      match(XalangParser::T__8);
      setState(128);
      match(XalangParser::T__3);
      setState(129);
      expression(0);
      setState(130);
      match(XalangParser::T__4);
      setState(131);
      match(XalangParser::T__6);
      setState(135);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << XalangParser::T__2)
        | (1ULL << XalangParser::T__5)
        | (1ULL << XalangParser::T__10)
        | (1ULL << XalangParser::T__11)
        | (1ULL << XalangParser::T__37)
        | (1ULL << XalangParser::T__38)
        | (1ULL << XalangParser::T__39)
        | (1ULL << XalangParser::Ident))) != 0)) {
        setState(132);
        code_instruction();
        setState(137);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(138);
      match(XalangParser::T__7);
      setState(144);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(154);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == XalangParser::T__9) {
      setState(145);
      match(XalangParser::T__9);
      setState(146);
      match(XalangParser::T__6);
      setState(150);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << XalangParser::T__2)
        | (1ULL << XalangParser::T__5)
        | (1ULL << XalangParser::T__10)
        | (1ULL << XalangParser::T__11)
        | (1ULL << XalangParser::T__37)
        | (1ULL << XalangParser::T__38)
        | (1ULL << XalangParser::T__39)
        | (1ULL << XalangParser::Ident))) != 0)) {
        setState(147);
        code_instruction();
        setState(152);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(153);
      match(XalangParser::T__7);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- For_opContext ------------------------------------------------------------------

XalangParser::For_opContext::For_opContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<XalangParser::For_operator_chainContext *> XalangParser::For_opContext::for_operator_chain() {
  return getRuleContexts<XalangParser::For_operator_chainContext>();
}

XalangParser::For_operator_chainContext* XalangParser::For_opContext::for_operator_chain(size_t i) {
  return getRuleContext<XalangParser::For_operator_chainContext>(i);
}

std::vector<tree::TerminalNode *> XalangParser::For_opContext::Semicolon() {
  return getTokens(XalangParser::Semicolon);
}

tree::TerminalNode* XalangParser::For_opContext::Semicolon(size_t i) {
  return getToken(XalangParser::Semicolon, i);
}

XalangParser::ExpressionContext* XalangParser::For_opContext::expression() {
  return getRuleContext<XalangParser::ExpressionContext>(0);
}

std::vector<XalangParser::Code_instructionContext *> XalangParser::For_opContext::code_instruction() {
  return getRuleContexts<XalangParser::Code_instructionContext>();
}

XalangParser::Code_instructionContext* XalangParser::For_opContext::code_instruction(size_t i) {
  return getRuleContext<XalangParser::Code_instructionContext>(i);
}


size_t XalangParser::For_opContext::getRuleIndex() const {
  return XalangParser::RuleFor_op;
}

void XalangParser::For_opContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<XalangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFor_op(this);
}

void XalangParser::For_opContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<XalangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFor_op(this);
}


antlrcpp::Any XalangParser::For_opContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<XalangVisitor*>(visitor))
    return parserVisitor->visitFor_op(this);
  else
    return visitor->visitChildren(this);
}

XalangParser::For_opContext* XalangParser::for_op() {
  For_opContext *_localctx = _tracker.createInstance<For_opContext>(_ctx, getState());
  enterRule(_localctx, 22, XalangParser::RuleFor_op);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(156);
    match(XalangParser::T__10);
    setState(157);
    match(XalangParser::T__3);
    setState(158);
    for_operator_chain();
    setState(159);
    match(XalangParser::Semicolon);
    setState(160);
    expression(0);
    setState(161);
    match(XalangParser::Semicolon);
    setState(162);
    for_operator_chain();
    setState(163);
    match(XalangParser::T__4);
    setState(164);
    match(XalangParser::T__6);
    setState(168);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << XalangParser::T__2)
      | (1ULL << XalangParser::T__5)
      | (1ULL << XalangParser::T__10)
      | (1ULL << XalangParser::T__11)
      | (1ULL << XalangParser::T__37)
      | (1ULL << XalangParser::T__38)
      | (1ULL << XalangParser::T__39)
      | (1ULL << XalangParser::Ident))) != 0)) {
      setState(165);
      code_instruction();
      setState(170);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(171);
    match(XalangParser::T__7);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- While_opContext ------------------------------------------------------------------

XalangParser::While_opContext::While_opContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

XalangParser::ExpressionContext* XalangParser::While_opContext::expression() {
  return getRuleContext<XalangParser::ExpressionContext>(0);
}

std::vector<XalangParser::Code_instructionContext *> XalangParser::While_opContext::code_instruction() {
  return getRuleContexts<XalangParser::Code_instructionContext>();
}

XalangParser::Code_instructionContext* XalangParser::While_opContext::code_instruction(size_t i) {
  return getRuleContext<XalangParser::Code_instructionContext>(i);
}


size_t XalangParser::While_opContext::getRuleIndex() const {
  return XalangParser::RuleWhile_op;
}

void XalangParser::While_opContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<XalangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterWhile_op(this);
}

void XalangParser::While_opContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<XalangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitWhile_op(this);
}


antlrcpp::Any XalangParser::While_opContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<XalangVisitor*>(visitor))
    return parserVisitor->visitWhile_op(this);
  else
    return visitor->visitChildren(this);
}

XalangParser::While_opContext* XalangParser::while_op() {
  While_opContext *_localctx = _tracker.createInstance<While_opContext>(_ctx, getState());
  enterRule(_localctx, 24, XalangParser::RuleWhile_op);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(173);
    match(XalangParser::T__11);
    setState(174);
    match(XalangParser::T__3);
    setState(175);
    expression(0);
    setState(176);
    match(XalangParser::T__4);
    setState(177);
    match(XalangParser::T__6);
    setState(181);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << XalangParser::T__2)
      | (1ULL << XalangParser::T__5)
      | (1ULL << XalangParser::T__10)
      | (1ULL << XalangParser::T__11)
      | (1ULL << XalangParser::T__37)
      | (1ULL << XalangParser::T__38)
      | (1ULL << XalangParser::T__39)
      | (1ULL << XalangParser::Ident))) != 0)) {
      setState(178);
      code_instruction();
      setState(183);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(184);
    match(XalangParser::T__7);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExpressionContext ------------------------------------------------------------------

XalangParser::ExpressionContext::ExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<XalangParser::ExpressionContext *> XalangParser::ExpressionContext::expression() {
  return getRuleContexts<XalangParser::ExpressionContext>();
}

XalangParser::ExpressionContext* XalangParser::ExpressionContext::expression(size_t i) {
  return getRuleContext<XalangParser::ExpressionContext>(i);
}

XalangParser::Unary_signContext* XalangParser::ExpressionContext::unary_sign() {
  return getRuleContext<XalangParser::Unary_signContext>(0);
}

tree::TerminalNode* XalangParser::ExpressionContext::Ident() {
  return getToken(XalangParser::Ident, 0);
}

XalangParser::LiteralContext* XalangParser::ExpressionContext::literal() {
  return getRuleContext<XalangParser::LiteralContext>(0);
}

XalangParser::Binary_signContext* XalangParser::ExpressionContext::binary_sign() {
  return getRuleContext<XalangParser::Binary_signContext>(0);
}


size_t XalangParser::ExpressionContext::getRuleIndex() const {
  return XalangParser::RuleExpression;
}

void XalangParser::ExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<XalangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpression(this);
}

void XalangParser::ExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<XalangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpression(this);
}


antlrcpp::Any XalangParser::ExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<XalangVisitor*>(visitor))
    return parserVisitor->visitExpression(this);
  else
    return visitor->visitChildren(this);
}


XalangParser::ExpressionContext* XalangParser::expression() {
   return expression(0);
}

XalangParser::ExpressionContext* XalangParser::expression(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  XalangParser::ExpressionContext *_localctx = _tracker.createInstance<ExpressionContext>(_ctx, parentState);
  XalangParser::ExpressionContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 26;
  enterRecursionRule(_localctx, 26, XalangParser::RuleExpression, precedence);

    

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(196);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case XalangParser::T__3: {
        setState(187);
        match(XalangParser::T__3);
        setState(188);
        expression(0);
        setState(189);
        match(XalangParser::T__4);
        break;
      }

      case XalangParser::T__12:
      case XalangParser::T__13:
      case XalangParser::T__14: {
        setState(191);
        unary_sign();
        setState(192);
        expression(4);
        break;
      }

      case XalangParser::Ident: {
        setState(194);
        match(XalangParser::Ident);
        break;
      }

      case XalangParser::IntLiteral:
      case XalangParser::BoolLiteral:
      case XalangParser::StringLiteral: {
        setState(195);
        literal();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    _ctx->stop = _input->LT(-1);
    setState(204);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 16, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleExpression);
        setState(198);

        if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
        setState(199);
        binary_sign();
        setState(200);
        expression(4); 
      }
      setState(206);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 16, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- Unary_signContext ------------------------------------------------------------------

XalangParser::Unary_signContext::Unary_signContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t XalangParser::Unary_signContext::getRuleIndex() const {
  return XalangParser::RuleUnary_sign;
}

void XalangParser::Unary_signContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<XalangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUnary_sign(this);
}

void XalangParser::Unary_signContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<XalangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUnary_sign(this);
}


antlrcpp::Any XalangParser::Unary_signContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<XalangVisitor*>(visitor))
    return parserVisitor->visitUnary_sign(this);
  else
    return visitor->visitChildren(this);
}

XalangParser::Unary_signContext* XalangParser::unary_sign() {
  Unary_signContext *_localctx = _tracker.createInstance<Unary_signContext>(_ctx, getState());
  enterRule(_localctx, 28, XalangParser::RuleUnary_sign);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(207);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << XalangParser::T__12)
      | (1ULL << XalangParser::T__13)
      | (1ULL << XalangParser::T__14))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Binary_signContext ------------------------------------------------------------------

XalangParser::Binary_signContext::Binary_signContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t XalangParser::Binary_signContext::getRuleIndex() const {
  return XalangParser::RuleBinary_sign;
}

void XalangParser::Binary_signContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<XalangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBinary_sign(this);
}

void XalangParser::Binary_signContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<XalangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBinary_sign(this);
}


antlrcpp::Any XalangParser::Binary_signContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<XalangVisitor*>(visitor))
    return parserVisitor->visitBinary_sign(this);
  else
    return visitor->visitChildren(this);
}

XalangParser::Binary_signContext* XalangParser::binary_sign() {
  Binary_signContext *_localctx = _tracker.createInstance<Binary_signContext>(_ctx, getState());
  enterRule(_localctx, 30, XalangParser::RuleBinary_sign);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(209);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << XalangParser::T__12)
      | (1ULL << XalangParser::T__15)
      | (1ULL << XalangParser::T__16)
      | (1ULL << XalangParser::T__17)
      | (1ULL << XalangParser::T__18)
      | (1ULL << XalangParser::T__19)
      | (1ULL << XalangParser::T__20)
      | (1ULL << XalangParser::T__21)
      | (1ULL << XalangParser::T__22)
      | (1ULL << XalangParser::T__23)
      | (1ULL << XalangParser::T__24)
      | (1ULL << XalangParser::T__25)
      | (1ULL << XalangParser::T__26)
      | (1ULL << XalangParser::T__27)
      | (1ULL << XalangParser::T__28)
      | (1ULL << XalangParser::T__29))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Op_assignContext ------------------------------------------------------------------

XalangParser::Op_assignContext::Op_assignContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t XalangParser::Op_assignContext::getRuleIndex() const {
  return XalangParser::RuleOp_assign;
}

void XalangParser::Op_assignContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<XalangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOp_assign(this);
}

void XalangParser::Op_assignContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<XalangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOp_assign(this);
}


antlrcpp::Any XalangParser::Op_assignContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<XalangVisitor*>(visitor))
    return parserVisitor->visitOp_assign(this);
  else
    return visitor->visitChildren(this);
}

XalangParser::Op_assignContext* XalangParser::op_assign() {
  Op_assignContext *_localctx = _tracker.createInstance<Op_assignContext>(_ctx, getState());
  enterRule(_localctx, 32, XalangParser::RuleOp_assign);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(211);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << XalangParser::T__30)
      | (1ULL << XalangParser::T__31)
      | (1ULL << XalangParser::T__32)
      | (1ULL << XalangParser::T__33)
      | (1ULL << XalangParser::T__34))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Postfix_expressionContext ------------------------------------------------------------------

XalangParser::Postfix_expressionContext::Postfix_expressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t XalangParser::Postfix_expressionContext::getRuleIndex() const {
  return XalangParser::RulePostfix_expression;
}

void XalangParser::Postfix_expressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<XalangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPostfix_expression(this);
}

void XalangParser::Postfix_expressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<XalangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPostfix_expression(this);
}


antlrcpp::Any XalangParser::Postfix_expressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<XalangVisitor*>(visitor))
    return parserVisitor->visitPostfix_expression(this);
  else
    return visitor->visitChildren(this);
}

XalangParser::Postfix_expressionContext* XalangParser::postfix_expression() {
  Postfix_expressionContext *_localctx = _tracker.createInstance<Postfix_expressionContext>(_ctx, getState());
  enterRule(_localctx, 34, XalangParser::RulePostfix_expression);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(213);
    _la = _input->LA(1);
    if (!(_la == XalangParser::T__35

    || _la == XalangParser::T__36)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeContext ------------------------------------------------------------------

XalangParser::TypeContext::TypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

XalangParser::Type_intContext* XalangParser::TypeContext::type_int() {
  return getRuleContext<XalangParser::Type_intContext>(0);
}

XalangParser::Type_boolContext* XalangParser::TypeContext::type_bool() {
  return getRuleContext<XalangParser::Type_boolContext>(0);
}

XalangParser::Type_strContext* XalangParser::TypeContext::type_str() {
  return getRuleContext<XalangParser::Type_strContext>(0);
}


size_t XalangParser::TypeContext::getRuleIndex() const {
  return XalangParser::RuleType;
}

void XalangParser::TypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<XalangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterType(this);
}

void XalangParser::TypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<XalangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitType(this);
}


antlrcpp::Any XalangParser::TypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<XalangVisitor*>(visitor))
    return parserVisitor->visitType(this);
  else
    return visitor->visitChildren(this);
}

XalangParser::TypeContext* XalangParser::type() {
  TypeContext *_localctx = _tracker.createInstance<TypeContext>(_ctx, getState());
  enterRule(_localctx, 36, XalangParser::RuleType);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(218);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case XalangParser::T__37: {
        enterOuterAlt(_localctx, 1);
        setState(215);
        type_int();
        break;
      }

      case XalangParser::T__38: {
        enterOuterAlt(_localctx, 2);
        setState(216);
        type_bool();
        break;
      }

      case XalangParser::T__39: {
        enterOuterAlt(_localctx, 3);
        setState(217);
        type_str();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Type_intContext ------------------------------------------------------------------

XalangParser::Type_intContext::Type_intContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t XalangParser::Type_intContext::getRuleIndex() const {
  return XalangParser::RuleType_int;
}

void XalangParser::Type_intContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<XalangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterType_int(this);
}

void XalangParser::Type_intContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<XalangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitType_int(this);
}


antlrcpp::Any XalangParser::Type_intContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<XalangVisitor*>(visitor))
    return parserVisitor->visitType_int(this);
  else
    return visitor->visitChildren(this);
}

XalangParser::Type_intContext* XalangParser::type_int() {
  Type_intContext *_localctx = _tracker.createInstance<Type_intContext>(_ctx, getState());
  enterRule(_localctx, 38, XalangParser::RuleType_int);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(220);
    match(XalangParser::T__37);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Type_boolContext ------------------------------------------------------------------

XalangParser::Type_boolContext::Type_boolContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t XalangParser::Type_boolContext::getRuleIndex() const {
  return XalangParser::RuleType_bool;
}

void XalangParser::Type_boolContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<XalangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterType_bool(this);
}

void XalangParser::Type_boolContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<XalangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitType_bool(this);
}


antlrcpp::Any XalangParser::Type_boolContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<XalangVisitor*>(visitor))
    return parserVisitor->visitType_bool(this);
  else
    return visitor->visitChildren(this);
}

XalangParser::Type_boolContext* XalangParser::type_bool() {
  Type_boolContext *_localctx = _tracker.createInstance<Type_boolContext>(_ctx, getState());
  enterRule(_localctx, 40, XalangParser::RuleType_bool);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(222);
    match(XalangParser::T__38);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Type_strContext ------------------------------------------------------------------

XalangParser::Type_strContext::Type_strContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t XalangParser::Type_strContext::getRuleIndex() const {
  return XalangParser::RuleType_str;
}

void XalangParser::Type_strContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<XalangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterType_str(this);
}

void XalangParser::Type_strContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<XalangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitType_str(this);
}


antlrcpp::Any XalangParser::Type_strContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<XalangVisitor*>(visitor))
    return parserVisitor->visitType_str(this);
  else
    return visitor->visitChildren(this);
}

XalangParser::Type_strContext* XalangParser::type_str() {
  Type_strContext *_localctx = _tracker.createInstance<Type_strContext>(_ctx, getState());
  enterRule(_localctx, 42, XalangParser::RuleType_str);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(224);
    match(XalangParser::T__39);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LiteralContext ------------------------------------------------------------------

XalangParser::LiteralContext::LiteralContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* XalangParser::LiteralContext::IntLiteral() {
  return getToken(XalangParser::IntLiteral, 0);
}

tree::TerminalNode* XalangParser::LiteralContext::BoolLiteral() {
  return getToken(XalangParser::BoolLiteral, 0);
}

tree::TerminalNode* XalangParser::LiteralContext::StringLiteral() {
  return getToken(XalangParser::StringLiteral, 0);
}


size_t XalangParser::LiteralContext::getRuleIndex() const {
  return XalangParser::RuleLiteral;
}

void XalangParser::LiteralContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<XalangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLiteral(this);
}

void XalangParser::LiteralContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<XalangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLiteral(this);
}


antlrcpp::Any XalangParser::LiteralContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<XalangVisitor*>(visitor))
    return parserVisitor->visitLiteral(this);
  else
    return visitor->visitChildren(this);
}

XalangParser::LiteralContext* XalangParser::literal() {
  LiteralContext *_localctx = _tracker.createInstance<LiteralContext>(_ctx, getState());
  enterRule(_localctx, 44, XalangParser::RuleLiteral);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(226);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << XalangParser::IntLiteral)
      | (1ULL << XalangParser::BoolLiteral)
      | (1ULL << XalangParser::StringLiteral))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

bool XalangParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 13: return expressionSempred(dynamic_cast<ExpressionContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool XalangParser::expressionSempred(ExpressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 3);

  default:
    break;
  }
  return true;
}

// Static vars and initialization.
std::vector<dfa::DFA> XalangParser::_decisionToDFA;
atn::PredictionContextCache XalangParser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN XalangParser::_atn;
std::vector<uint16_t> XalangParser::_serializedATN;

std::vector<std::string> XalangParser::_ruleNames = {
  "program", "code_instruction", "var_def", "var_names", "var_name_init", 
  "operator_rule", "for_operator_chain", "for_operator", "assign", "print", 
  "if_op", "for_op", "while_op", "expression", "unary_sign", "binary_sign", 
  "op_assign", "postfix_expression", "type", "type_int", "type_bool", "type_str", 
  "literal"
};

std::vector<std::string> XalangParser::_literalNames = {
  "", "','", "'='", "'AXXAAXAAAXAX_'", "'('", "')'", "'AAAAXA_'", "'{'", 
  "'}'", "'AAXAAAAAAXA_'", "'AAXAAAAAA_'", "'AAXAXXXAXA_'", "'AXXAAAAAAAXAAA_'", 
  "'-'", "'!'", "'~'", "'+'", "'*'", "'**'", "'/'", "'div'", "'%'", "'&'", 
  "'|'", "'^'", "'=='", "'!='", "'>'", "'<'", "'>='", "'<='", "'+='", "'-='", 
  "'*='", "'/='", "'%='", "'++'", "'--'", "'AAXAX'", "'XAAAXXXXXXAXAA'", 
  "'AAAXAXA'", "", "", "", "", "':)'"
};

std::vector<std::string> XalangParser::_symbolicNames = {
  "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
  "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
  "", "", "", "", "", "Ident", "IntLiteral", "BoolLiteral", "StringLiteral", 
  "Semicolon", "Space", "BlockComment", "LineComment"
};

dfa::Vocabulary XalangParser::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> XalangParser::_tokenNames;

XalangParser::Initializer::Initializer() {
	for (size_t i = 0; i < _symbolicNames.size(); ++i) {
		std::string name = _vocabulary.getLiteralName(i);
		if (name.empty()) {
			name = _vocabulary.getSymbolicName(i);
		}

		if (name.empty()) {
			_tokenNames.push_back("<INVALID>");
		} else {
      _tokenNames.push_back(name);
    }
	}

  static const uint16_t serializedATNSegment0[] = {
    0x3, 0x608b, 0xa72a, 0x8133, 0xb9ed, 0x417c, 0x3be7, 0x7786, 0x5964, 
       0x3, 0x32, 0xe7, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 
       0x9, 0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 
       0x7, 0x4, 0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 
       0x4, 0xb, 0x9, 0xb, 0x4, 0xc, 0x9, 0xc, 0x4, 0xd, 0x9, 0xd, 0x4, 
       0xe, 0x9, 0xe, 0x4, 0xf, 0x9, 0xf, 0x4, 0x10, 0x9, 0x10, 0x4, 0x11, 
       0x9, 0x11, 0x4, 0x12, 0x9, 0x12, 0x4, 0x13, 0x9, 0x13, 0x4, 0x14, 
       0x9, 0x14, 0x4, 0x15, 0x9, 0x15, 0x4, 0x16, 0x9, 0x16, 0x4, 0x17, 
       0x9, 0x17, 0x4, 0x18, 0x9, 0x18, 0x3, 0x2, 0x7, 0x2, 0x32, 0xa, 0x2, 
       0xc, 0x2, 0xe, 0x2, 0x35, 0xb, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x3, 
       0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x5, 0x3, 0x3d, 0xa, 0x3, 0x3, 0x4, 
       0x3, 0x4, 0x3, 0x4, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 
       0x5, 0x5, 0x5, 0x47, 0xa, 0x5, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 
       0x6, 0x5, 0x6, 0x4d, 0xa, 0x6, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 
       0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x5, 0x7, 
       0x58, 0xa, 0x7, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x7, 0x8, 0x5d, 0xa, 
       0x8, 0xc, 0x8, 0xe, 0x8, 0x60, 0xb, 0x8, 0x3, 0x9, 0x3, 0x9, 0x5, 
       0x9, 0x64, 0xa, 0x9, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 
       0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x5, 0xa, 0x6f, 0xa, 
       0xa, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xc, 
       0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x7, 0xc, 0x7c, 
       0xa, 0xc, 0xc, 0xc, 0xe, 0xc, 0x7f, 0xb, 0xc, 0x3, 0xc, 0x3, 0xc, 
       0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x7, 0xc, 0x88, 
       0xa, 0xc, 0xc, 0xc, 0xe, 0xc, 0x8b, 0xb, 0xc, 0x3, 0xc, 0x3, 0xc, 
       0x7, 0xc, 0x8f, 0xa, 0xc, 0xc, 0xc, 0xe, 0xc, 0x92, 0xb, 0xc, 0x3, 
       0xc, 0x3, 0xc, 0x3, 0xc, 0x7, 0xc, 0x97, 0xa, 0xc, 0xc, 0xc, 0xe, 
       0xc, 0x9a, 0xb, 0xc, 0x3, 0xc, 0x5, 0xc, 0x9d, 0xa, 0xc, 0x3, 0xd, 
       0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 
       0xd, 0x3, 0xd, 0x3, 0xd, 0x7, 0xd, 0xa9, 0xa, 0xd, 0xc, 0xd, 0xe, 
       0xd, 0xac, 0xb, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xe, 0x3, 0xe, 0x3, 
       0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x7, 0xe, 0xb6, 0xa, 0xe, 0xc, 
       0xe, 0xe, 0xe, 0xb9, 0xb, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xf, 0x3, 
       0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 
       0x3, 0xf, 0x3, 0xf, 0x5, 0xf, 0xc7, 0xa, 0xf, 0x3, 0xf, 0x3, 0xf, 
       0x3, 0xf, 0x3, 0xf, 0x7, 0xf, 0xcd, 0xa, 0xf, 0xc, 0xf, 0xe, 0xf, 
       0xd0, 0xb, 0xf, 0x3, 0x10, 0x3, 0x10, 0x3, 0x11, 0x3, 0x11, 0x3, 
       0x12, 0x3, 0x12, 0x3, 0x13, 0x3, 0x13, 0x3, 0x14, 0x3, 0x14, 0x3, 
       0x14, 0x5, 0x14, 0xdd, 0xa, 0x14, 0x3, 0x15, 0x3, 0x15, 0x3, 0x16, 
       0x3, 0x16, 0x3, 0x17, 0x3, 0x17, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 
       0x2, 0x3, 0x1c, 0x19, 0x2, 0x4, 0x6, 0x8, 0xa, 0xc, 0xe, 0x10, 0x12, 
       0x14, 0x16, 0x18, 0x1a, 0x1c, 0x1e, 0x20, 0x22, 0x24, 0x26, 0x28, 
       0x2a, 0x2c, 0x2e, 0x2, 0x7, 0x3, 0x2, 0xf, 0x11, 0x4, 0x2, 0xf, 0xf, 
       0x12, 0x20, 0x3, 0x2, 0x21, 0x25, 0x3, 0x2, 0x26, 0x27, 0x3, 0x2, 
       0x2c, 0x2e, 0x2, 0xe8, 0x2, 0x33, 0x3, 0x2, 0x2, 0x2, 0x4, 0x3c, 
       0x3, 0x2, 0x2, 0x2, 0x6, 0x3e, 0x3, 0x2, 0x2, 0x2, 0x8, 0x46, 0x3, 
       0x2, 0x2, 0x2, 0xa, 0x4c, 0x3, 0x2, 0x2, 0x2, 0xc, 0x57, 0x3, 0x2, 
       0x2, 0x2, 0xe, 0x59, 0x3, 0x2, 0x2, 0x2, 0x10, 0x63, 0x3, 0x2, 0x2, 
       0x2, 0x12, 0x6e, 0x3, 0x2, 0x2, 0x2, 0x14, 0x70, 0x3, 0x2, 0x2, 0x2, 
       0x16, 0x75, 0x3, 0x2, 0x2, 0x2, 0x18, 0x9e, 0x3, 0x2, 0x2, 0x2, 0x1a, 
       0xaf, 0x3, 0x2, 0x2, 0x2, 0x1c, 0xc6, 0x3, 0x2, 0x2, 0x2, 0x1e, 0xd1, 
       0x3, 0x2, 0x2, 0x2, 0x20, 0xd3, 0x3, 0x2, 0x2, 0x2, 0x22, 0xd5, 0x3, 
       0x2, 0x2, 0x2, 0x24, 0xd7, 0x3, 0x2, 0x2, 0x2, 0x26, 0xdc, 0x3, 0x2, 
       0x2, 0x2, 0x28, 0xde, 0x3, 0x2, 0x2, 0x2, 0x2a, 0xe0, 0x3, 0x2, 0x2, 
       0x2, 0x2c, 0xe2, 0x3, 0x2, 0x2, 0x2, 0x2e, 0xe4, 0x3, 0x2, 0x2, 0x2, 
       0x30, 0x32, 0x5, 0x4, 0x3, 0x2, 0x31, 0x30, 0x3, 0x2, 0x2, 0x2, 0x32, 
       0x35, 0x3, 0x2, 0x2, 0x2, 0x33, 0x31, 0x3, 0x2, 0x2, 0x2, 0x33, 0x34, 
       0x3, 0x2, 0x2, 0x2, 0x34, 0x36, 0x3, 0x2, 0x2, 0x2, 0x35, 0x33, 0x3, 
       0x2, 0x2, 0x2, 0x36, 0x37, 0x7, 0x2, 0x2, 0x3, 0x37, 0x3, 0x3, 0x2, 
       0x2, 0x2, 0x38, 0x39, 0x5, 0x6, 0x4, 0x2, 0x39, 0x3a, 0x7, 0x2f, 
       0x2, 0x2, 0x3a, 0x3d, 0x3, 0x2, 0x2, 0x2, 0x3b, 0x3d, 0x5, 0xc, 0x7, 
       0x2, 0x3c, 0x38, 0x3, 0x2, 0x2, 0x2, 0x3c, 0x3b, 0x3, 0x2, 0x2, 0x2, 
       0x3d, 0x5, 0x3, 0x2, 0x2, 0x2, 0x3e, 0x3f, 0x5, 0x26, 0x14, 0x2, 
       0x3f, 0x40, 0x5, 0x8, 0x5, 0x2, 0x40, 0x7, 0x3, 0x2, 0x2, 0x2, 0x41, 
       0x47, 0x5, 0xa, 0x6, 0x2, 0x42, 0x43, 0x5, 0xa, 0x6, 0x2, 0x43, 0x44, 
       0x7, 0x3, 0x2, 0x2, 0x44, 0x45, 0x5, 0x8, 0x5, 0x2, 0x45, 0x47, 0x3, 
       0x2, 0x2, 0x2, 0x46, 0x41, 0x3, 0x2, 0x2, 0x2, 0x46, 0x42, 0x3, 0x2, 
       0x2, 0x2, 0x47, 0x9, 0x3, 0x2, 0x2, 0x2, 0x48, 0x4d, 0x7, 0x2b, 0x2, 
       0x2, 0x49, 0x4a, 0x7, 0x2b, 0x2, 0x2, 0x4a, 0x4b, 0x7, 0x4, 0x2, 
       0x2, 0x4b, 0x4d, 0x5, 0x1c, 0xf, 0x2, 0x4c, 0x48, 0x3, 0x2, 0x2, 
       0x2, 0x4c, 0x49, 0x3, 0x2, 0x2, 0x2, 0x4d, 0xb, 0x3, 0x2, 0x2, 0x2, 
       0x4e, 0x4f, 0x5, 0x12, 0xa, 0x2, 0x4f, 0x50, 0x7, 0x2f, 0x2, 0x2, 
       0x50, 0x58, 0x3, 0x2, 0x2, 0x2, 0x51, 0x52, 0x5, 0x14, 0xb, 0x2, 
       0x52, 0x53, 0x7, 0x2f, 0x2, 0x2, 0x53, 0x58, 0x3, 0x2, 0x2, 0x2, 
       0x54, 0x58, 0x5, 0x16, 0xc, 0x2, 0x55, 0x58, 0x5, 0x18, 0xd, 0x2, 
       0x56, 0x58, 0x5, 0x1a, 0xe, 0x2, 0x57, 0x4e, 0x3, 0x2, 0x2, 0x2, 
       0x57, 0x51, 0x3, 0x2, 0x2, 0x2, 0x57, 0x54, 0x3, 0x2, 0x2, 0x2, 0x57, 
       0x55, 0x3, 0x2, 0x2, 0x2, 0x57, 0x56, 0x3, 0x2, 0x2, 0x2, 0x58, 0xd, 
       0x3, 0x2, 0x2, 0x2, 0x59, 0x5e, 0x5, 0x10, 0x9, 0x2, 0x5a, 0x5b, 
       0x7, 0x3, 0x2, 0x2, 0x5b, 0x5d, 0x5, 0xe, 0x8, 0x2, 0x5c, 0x5a, 0x3, 
       0x2, 0x2, 0x2, 0x5d, 0x60, 0x3, 0x2, 0x2, 0x2, 0x5e, 0x5c, 0x3, 0x2, 
       0x2, 0x2, 0x5e, 0x5f, 0x3, 0x2, 0x2, 0x2, 0x5f, 0xf, 0x3, 0x2, 0x2, 
       0x2, 0x60, 0x5e, 0x3, 0x2, 0x2, 0x2, 0x61, 0x64, 0x5, 0x6, 0x4, 0x2, 
       0x62, 0x64, 0x5, 0x12, 0xa, 0x2, 0x63, 0x61, 0x3, 0x2, 0x2, 0x2, 
       0x63, 0x62, 0x3, 0x2, 0x2, 0x2, 0x64, 0x11, 0x3, 0x2, 0x2, 0x2, 0x65, 
       0x66, 0x7, 0x2b, 0x2, 0x2, 0x66, 0x67, 0x7, 0x4, 0x2, 0x2, 0x67, 
       0x6f, 0x5, 0x1c, 0xf, 0x2, 0x68, 0x69, 0x7, 0x2b, 0x2, 0x2, 0x69, 
       0x6a, 0x5, 0x22, 0x12, 0x2, 0x6a, 0x6b, 0x5, 0x1c, 0xf, 0x2, 0x6b, 
       0x6f, 0x3, 0x2, 0x2, 0x2, 0x6c, 0x6d, 0x7, 0x2b, 0x2, 0x2, 0x6d, 
       0x6f, 0x5, 0x24, 0x13, 0x2, 0x6e, 0x65, 0x3, 0x2, 0x2, 0x2, 0x6e, 
       0x68, 0x3, 0x2, 0x2, 0x2, 0x6e, 0x6c, 0x3, 0x2, 0x2, 0x2, 0x6f, 0x13, 
       0x3, 0x2, 0x2, 0x2, 0x70, 0x71, 0x7, 0x5, 0x2, 0x2, 0x71, 0x72, 0x7, 
       0x6, 0x2, 0x2, 0x72, 0x73, 0x5, 0x1c, 0xf, 0x2, 0x73, 0x74, 0x7, 
       0x7, 0x2, 0x2, 0x74, 0x15, 0x3, 0x2, 0x2, 0x2, 0x75, 0x76, 0x7, 0x8, 
       0x2, 0x2, 0x76, 0x77, 0x7, 0x6, 0x2, 0x2, 0x77, 0x78, 0x5, 0x1c, 
       0xf, 0x2, 0x78, 0x79, 0x7, 0x7, 0x2, 0x2, 0x79, 0x7d, 0x7, 0x9, 0x2, 
       0x2, 0x7a, 0x7c, 0x5, 0xc, 0x7, 0x2, 0x7b, 0x7a, 0x3, 0x2, 0x2, 0x2, 
       0x7c, 0x7f, 0x3, 0x2, 0x2, 0x2, 0x7d, 0x7b, 0x3, 0x2, 0x2, 0x2, 0x7d, 
       0x7e, 0x3, 0x2, 0x2, 0x2, 0x7e, 0x80, 0x3, 0x2, 0x2, 0x2, 0x7f, 0x7d, 
       0x3, 0x2, 0x2, 0x2, 0x80, 0x90, 0x7, 0xa, 0x2, 0x2, 0x81, 0x82, 0x7, 
       0xb, 0x2, 0x2, 0x82, 0x83, 0x7, 0x6, 0x2, 0x2, 0x83, 0x84, 0x5, 0x1c, 
       0xf, 0x2, 0x84, 0x85, 0x7, 0x7, 0x2, 0x2, 0x85, 0x89, 0x7, 0x9, 0x2, 
       0x2, 0x86, 0x88, 0x5, 0x4, 0x3, 0x2, 0x87, 0x86, 0x3, 0x2, 0x2, 0x2, 
       0x88, 0x8b, 0x3, 0x2, 0x2, 0x2, 0x89, 0x87, 0x3, 0x2, 0x2, 0x2, 0x89, 
       0x8a, 0x3, 0x2, 0x2, 0x2, 0x8a, 0x8c, 0x3, 0x2, 0x2, 0x2, 0x8b, 0x89, 
       0x3, 0x2, 0x2, 0x2, 0x8c, 0x8d, 0x7, 0xa, 0x2, 0x2, 0x8d, 0x8f, 0x3, 
       0x2, 0x2, 0x2, 0x8e, 0x81, 0x3, 0x2, 0x2, 0x2, 0x8f, 0x92, 0x3, 0x2, 
       0x2, 0x2, 0x90, 0x8e, 0x3, 0x2, 0x2, 0x2, 0x90, 0x91, 0x3, 0x2, 0x2, 
       0x2, 0x91, 0x9c, 0x3, 0x2, 0x2, 0x2, 0x92, 0x90, 0x3, 0x2, 0x2, 0x2, 
       0x93, 0x94, 0x7, 0xc, 0x2, 0x2, 0x94, 0x98, 0x7, 0x9, 0x2, 0x2, 0x95, 
       0x97, 0x5, 0x4, 0x3, 0x2, 0x96, 0x95, 0x3, 0x2, 0x2, 0x2, 0x97, 0x9a, 
       0x3, 0x2, 0x2, 0x2, 0x98, 0x96, 0x3, 0x2, 0x2, 0x2, 0x98, 0x99, 0x3, 
       0x2, 0x2, 0x2, 0x99, 0x9b, 0x3, 0x2, 0x2, 0x2, 0x9a, 0x98, 0x3, 0x2, 
       0x2, 0x2, 0x9b, 0x9d, 0x7, 0xa, 0x2, 0x2, 0x9c, 0x93, 0x3, 0x2, 0x2, 
       0x2, 0x9c, 0x9d, 0x3, 0x2, 0x2, 0x2, 0x9d, 0x17, 0x3, 0x2, 0x2, 0x2, 
       0x9e, 0x9f, 0x7, 0xd, 0x2, 0x2, 0x9f, 0xa0, 0x7, 0x6, 0x2, 0x2, 0xa0, 
       0xa1, 0x5, 0xe, 0x8, 0x2, 0xa1, 0xa2, 0x7, 0x2f, 0x2, 0x2, 0xa2, 
       0xa3, 0x5, 0x1c, 0xf, 0x2, 0xa3, 0xa4, 0x7, 0x2f, 0x2, 0x2, 0xa4, 
       0xa5, 0x5, 0xe, 0x8, 0x2, 0xa5, 0xa6, 0x7, 0x7, 0x2, 0x2, 0xa6, 0xaa, 
       0x7, 0x9, 0x2, 0x2, 0xa7, 0xa9, 0x5, 0x4, 0x3, 0x2, 0xa8, 0xa7, 0x3, 
       0x2, 0x2, 0x2, 0xa9, 0xac, 0x3, 0x2, 0x2, 0x2, 0xaa, 0xa8, 0x3, 0x2, 
       0x2, 0x2, 0xaa, 0xab, 0x3, 0x2, 0x2, 0x2, 0xab, 0xad, 0x3, 0x2, 0x2, 
       0x2, 0xac, 0xaa, 0x3, 0x2, 0x2, 0x2, 0xad, 0xae, 0x7, 0xa, 0x2, 0x2, 
       0xae, 0x19, 0x3, 0x2, 0x2, 0x2, 0xaf, 0xb0, 0x7, 0xe, 0x2, 0x2, 0xb0, 
       0xb1, 0x7, 0x6, 0x2, 0x2, 0xb1, 0xb2, 0x5, 0x1c, 0xf, 0x2, 0xb2, 
       0xb3, 0x7, 0x7, 0x2, 0x2, 0xb3, 0xb7, 0x7, 0x9, 0x2, 0x2, 0xb4, 0xb6, 
       0x5, 0x4, 0x3, 0x2, 0xb5, 0xb4, 0x3, 0x2, 0x2, 0x2, 0xb6, 0xb9, 0x3, 
       0x2, 0x2, 0x2, 0xb7, 0xb5, 0x3, 0x2, 0x2, 0x2, 0xb7, 0xb8, 0x3, 0x2, 
       0x2, 0x2, 0xb8, 0xba, 0x3, 0x2, 0x2, 0x2, 0xb9, 0xb7, 0x3, 0x2, 0x2, 
       0x2, 0xba, 0xbb, 0x7, 0xa, 0x2, 0x2, 0xbb, 0x1b, 0x3, 0x2, 0x2, 0x2, 
       0xbc, 0xbd, 0x8, 0xf, 0x1, 0x2, 0xbd, 0xbe, 0x7, 0x6, 0x2, 0x2, 0xbe, 
       0xbf, 0x5, 0x1c, 0xf, 0x2, 0xbf, 0xc0, 0x7, 0x7, 0x2, 0x2, 0xc0, 
       0xc7, 0x3, 0x2, 0x2, 0x2, 0xc1, 0xc2, 0x5, 0x1e, 0x10, 0x2, 0xc2, 
       0xc3, 0x5, 0x1c, 0xf, 0x6, 0xc3, 0xc7, 0x3, 0x2, 0x2, 0x2, 0xc4, 
       0xc7, 0x7, 0x2b, 0x2, 0x2, 0xc5, 0xc7, 0x5, 0x2e, 0x18, 0x2, 0xc6, 
       0xbc, 0x3, 0x2, 0x2, 0x2, 0xc6, 0xc1, 0x3, 0x2, 0x2, 0x2, 0xc6, 0xc4, 
       0x3, 0x2, 0x2, 0x2, 0xc6, 0xc5, 0x3, 0x2, 0x2, 0x2, 0xc7, 0xce, 0x3, 
       0x2, 0x2, 0x2, 0xc8, 0xc9, 0xc, 0x5, 0x2, 0x2, 0xc9, 0xca, 0x5, 0x20, 
       0x11, 0x2, 0xca, 0xcb, 0x5, 0x1c, 0xf, 0x6, 0xcb, 0xcd, 0x3, 0x2, 
       0x2, 0x2, 0xcc, 0xc8, 0x3, 0x2, 0x2, 0x2, 0xcd, 0xd0, 0x3, 0x2, 0x2, 
       0x2, 0xce, 0xcc, 0x3, 0x2, 0x2, 0x2, 0xce, 0xcf, 0x3, 0x2, 0x2, 0x2, 
       0xcf, 0x1d, 0x3, 0x2, 0x2, 0x2, 0xd0, 0xce, 0x3, 0x2, 0x2, 0x2, 0xd1, 
       0xd2, 0x9, 0x2, 0x2, 0x2, 0xd2, 0x1f, 0x3, 0x2, 0x2, 0x2, 0xd3, 0xd4, 
       0x9, 0x3, 0x2, 0x2, 0xd4, 0x21, 0x3, 0x2, 0x2, 0x2, 0xd5, 0xd6, 0x9, 
       0x4, 0x2, 0x2, 0xd6, 0x23, 0x3, 0x2, 0x2, 0x2, 0xd7, 0xd8, 0x9, 0x5, 
       0x2, 0x2, 0xd8, 0x25, 0x3, 0x2, 0x2, 0x2, 0xd9, 0xdd, 0x5, 0x28, 
       0x15, 0x2, 0xda, 0xdd, 0x5, 0x2a, 0x16, 0x2, 0xdb, 0xdd, 0x5, 0x2c, 
       0x17, 0x2, 0xdc, 0xd9, 0x3, 0x2, 0x2, 0x2, 0xdc, 0xda, 0x3, 0x2, 
       0x2, 0x2, 0xdc, 0xdb, 0x3, 0x2, 0x2, 0x2, 0xdd, 0x27, 0x3, 0x2, 0x2, 
       0x2, 0xde, 0xdf, 0x7, 0x28, 0x2, 0x2, 0xdf, 0x29, 0x3, 0x2, 0x2, 
       0x2, 0xe0, 0xe1, 0x7, 0x29, 0x2, 0x2, 0xe1, 0x2b, 0x3, 0x2, 0x2, 
       0x2, 0xe2, 0xe3, 0x7, 0x2a, 0x2, 0x2, 0xe3, 0x2d, 0x3, 0x2, 0x2, 
       0x2, 0xe4, 0xe5, 0x9, 0x6, 0x2, 0x2, 0xe5, 0x2f, 0x3, 0x2, 0x2, 0x2, 
       0x14, 0x33, 0x3c, 0x46, 0x4c, 0x57, 0x5e, 0x63, 0x6e, 0x7d, 0x89, 
       0x90, 0x98, 0x9c, 0xaa, 0xb7, 0xc6, 0xce, 0xdc, 
  };

  _serializedATN.insert(_serializedATN.end(), serializedATNSegment0,
    serializedATNSegment0 + sizeof(serializedATNSegment0) / sizeof(serializedATNSegment0[0]));


  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

XalangParser::Initializer XalangParser::_init;
