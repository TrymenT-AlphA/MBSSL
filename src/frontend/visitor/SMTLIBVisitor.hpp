#ifndef __SMTLIB_VISITOR_HPP__
#define __SMTLIB_VISITOR_HPP__

#include "frontend/parser/SMTLIBv2BaseVisitor.h"

class SMTLIBVisitor : public SMTLIBv2BaseVisitor {
public:
  virtual std::any visitStart(SMTLIBv2Parser::StartContext *context) override;

  virtual std::any visitResponse(SMTLIBv2Parser::ResponseContext *context) override;

  virtual std::any visitGeneralReservedWord(SMTLIBv2Parser::GeneralReservedWordContext *context) override;

  virtual std::any visitSimpleSymbol(SMTLIBv2Parser::SimpleSymbolContext *context) override;

  virtual std::any visitQuotedSymbol(SMTLIBv2Parser::QuotedSymbolContext *context) override;

  virtual std::any visitPredefSymbol(SMTLIBv2Parser::PredefSymbolContext *context) override;

  virtual std::any visitPredefKeyword(SMTLIBv2Parser::PredefKeywordContext *context) override;

  virtual std::any visitSymbol(SMTLIBv2Parser::SymbolContext *context) override;

  virtual std::any visitNumeral(SMTLIBv2Parser::NumeralContext *context) override;

  virtual std::any visitDecimal(SMTLIBv2Parser::DecimalContext *context) override;

  virtual std::any visitHexadecimal(SMTLIBv2Parser::HexadecimalContext *context) override;

  virtual std::any visitBinary(SMTLIBv2Parser::BinaryContext *context) override;

  virtual std::any visitString(SMTLIBv2Parser::StringContext *context) override;

  virtual std::any visitKeyword(SMTLIBv2Parser::KeywordContext *context) override;

  virtual std::any visitSpec_constant(SMTLIBv2Parser::Spec_constantContext *context) override;

  virtual std::any visitS_expr(SMTLIBv2Parser::S_exprContext *context) override;

  virtual std::any visitIndex(SMTLIBv2Parser::IndexContext *context) override;

  virtual std::any visitIdentifier(SMTLIBv2Parser::IdentifierContext *context) override;

  virtual std::any visitAttribute_value(SMTLIBv2Parser::Attribute_valueContext *context) override;

  virtual std::any visitAttribute(SMTLIBv2Parser::AttributeContext *context) override;

  virtual std::any visitSort(SMTLIBv2Parser::SortContext *context) override;

  virtual std::any visitQual_identifier(SMTLIBv2Parser::Qual_identifierContext *context) override;

  virtual std::any visitVar_binding(SMTLIBv2Parser::Var_bindingContext *context) override;

  virtual std::any visitSorted_var(SMTLIBv2Parser::Sorted_varContext *context) override;

  virtual std::any visitPattern(SMTLIBv2Parser::PatternContext *context) override;

  virtual std::any visitMatch_case(SMTLIBv2Parser::Match_caseContext *context) override;

  virtual std::any visitTerm(SMTLIBv2Parser::TermContext *context) override;

  virtual std::any visitSort_symbol_decl(SMTLIBv2Parser::Sort_symbol_declContext *context) override;

  virtual std::any visitMeta_spec_constant(SMTLIBv2Parser::Meta_spec_constantContext *context) override;

  virtual std::any visitFun_symbol_decl(SMTLIBv2Parser::Fun_symbol_declContext *context) override;

  virtual std::any visitPar_fun_symbol_decl(SMTLIBv2Parser::Par_fun_symbol_declContext *context) override;

  virtual std::any visitTheory_attribute(SMTLIBv2Parser::Theory_attributeContext *context) override;

  virtual std::any visitTheory_decl(SMTLIBv2Parser::Theory_declContext *context) override;

  virtual std::any visitLogic_attribue(SMTLIBv2Parser::Logic_attribueContext *context) override;

  virtual std::any visitLogic(SMTLIBv2Parser::LogicContext *context) override;

  virtual std::any visitSort_dec(SMTLIBv2Parser::Sort_decContext *context) override;

  virtual std::any visitSelector_dec(SMTLIBv2Parser::Selector_decContext *context) override;

  virtual std::any visitConstructor_dec(SMTLIBv2Parser::Constructor_decContext *context) override;

  virtual std::any visitDatatype_dec(SMTLIBv2Parser::Datatype_decContext *context) override;

  virtual std::any visitFunction_dec(SMTLIBv2Parser::Function_decContext *context) override;

  virtual std::any visitFunction_def(SMTLIBv2Parser::Function_defContext *context) override;

  virtual std::any visitProp_literal(SMTLIBv2Parser::Prop_literalContext *context) override;

  virtual std::any visitScript(SMTLIBv2Parser::ScriptContext *context) override;

  virtual std::any visitCmd_assert(SMTLIBv2Parser::Cmd_assertContext *context) override;

  virtual std::any visitCmd_checkSat(SMTLIBv2Parser::Cmd_checkSatContext *context) override;

  virtual std::any visitCmd_checkSatAssuming(SMTLIBv2Parser::Cmd_checkSatAssumingContext *context) override;

  virtual std::any visitCmd_declareConst(SMTLIBv2Parser::Cmd_declareConstContext *context) override;

  virtual std::any visitCmd_declareDatatype(SMTLIBv2Parser::Cmd_declareDatatypeContext *context) override;

  virtual std::any visitCmd_declareDatatypes(SMTLIBv2Parser::Cmd_declareDatatypesContext *context) override;

  virtual std::any visitCmd_declareFun(SMTLIBv2Parser::Cmd_declareFunContext *context) override;

  virtual std::any visitCmd_declareSort(SMTLIBv2Parser::Cmd_declareSortContext *context) override;

  virtual std::any visitCmd_defineFun(SMTLIBv2Parser::Cmd_defineFunContext *context) override;

  virtual std::any visitCmd_defineFunRec(SMTLIBv2Parser::Cmd_defineFunRecContext *context) override;

  virtual std::any visitCmd_defineFunsRec(SMTLIBv2Parser::Cmd_defineFunsRecContext *context) override;

  virtual std::any visitCmd_defineSort(SMTLIBv2Parser::Cmd_defineSortContext *context) override;

  virtual std::any visitCmd_echo(SMTLIBv2Parser::Cmd_echoContext *context) override;

  virtual std::any visitCmd_exit(SMTLIBv2Parser::Cmd_exitContext *context) override;

  virtual std::any visitCmd_getAssertions(SMTLIBv2Parser::Cmd_getAssertionsContext *context) override;

  virtual std::any visitCmd_getAssignment(SMTLIBv2Parser::Cmd_getAssignmentContext *context) override;

  virtual std::any visitCmd_getInfo(SMTLIBv2Parser::Cmd_getInfoContext *context) override;

  virtual std::any visitCmd_getModel(SMTLIBv2Parser::Cmd_getModelContext *context) override;

  virtual std::any visitCmd_getOption(SMTLIBv2Parser::Cmd_getOptionContext *context) override;

  virtual std::any visitCmd_getProof(SMTLIBv2Parser::Cmd_getProofContext *context) override;

  virtual std::any visitCmd_getUnsatAssumptions(SMTLIBv2Parser::Cmd_getUnsatAssumptionsContext *context) override;

  virtual std::any visitCmd_getUnsatCore(SMTLIBv2Parser::Cmd_getUnsatCoreContext *context) override;

  virtual std::any visitCmd_getValue(SMTLIBv2Parser::Cmd_getValueContext *context) override;

  virtual std::any visitCmd_pop(SMTLIBv2Parser::Cmd_popContext *context) override;

  virtual std::any visitCmd_push(SMTLIBv2Parser::Cmd_pushContext *context) override;

  virtual std::any visitCmd_reset(SMTLIBv2Parser::Cmd_resetContext *context) override;

  virtual std::any visitCmd_resetAssertions(SMTLIBv2Parser::Cmd_resetAssertionsContext *context) override;

  virtual std::any visitCmd_setInfo(SMTLIBv2Parser::Cmd_setInfoContext *context) override;

  virtual std::any visitCmd_setLogic(SMTLIBv2Parser::Cmd_setLogicContext *context) override;

  virtual std::any visitCmd_setOption(SMTLIBv2Parser::Cmd_setOptionContext *context) override;

  virtual std::any visitCommand(SMTLIBv2Parser::CommandContext *context) override;

  virtual std::any visitB_value(SMTLIBv2Parser::B_valueContext *context) override;

  virtual std::any visitOption(SMTLIBv2Parser::OptionContext *context) override;

  virtual std::any visitInfo_flag(SMTLIBv2Parser::Info_flagContext *context) override;

  virtual std::any visitError_behaviour(SMTLIBv2Parser::Error_behaviourContext *context) override;

  virtual std::any visitReason_unknown(SMTLIBv2Parser::Reason_unknownContext *context) override;

  virtual std::any visitModel_response(SMTLIBv2Parser::Model_responseContext *context) override;

  virtual std::any visitInfo_response(SMTLIBv2Parser::Info_responseContext *context) override;

  virtual std::any visitValuation_pair(SMTLIBv2Parser::Valuation_pairContext *context) override;

  virtual std::any visitT_valuation_pair(SMTLIBv2Parser::T_valuation_pairContext *context) override;

  virtual std::any visitCheck_sat_response(SMTLIBv2Parser::Check_sat_responseContext *context) override;

  virtual std::any visitEcho_response(SMTLIBv2Parser::Echo_responseContext *context) override;

  virtual std::any visitGet_assertions_response(SMTLIBv2Parser::Get_assertions_responseContext *context) override;

  virtual std::any visitGet_assignment_response(SMTLIBv2Parser::Get_assignment_responseContext *context) override;

  virtual std::any visitGet_info_response(SMTLIBv2Parser::Get_info_responseContext *context) override;

  virtual std::any visitGet_model_response(SMTLIBv2Parser::Get_model_responseContext *context) override;

  virtual std::any visitGet_option_response(SMTLIBv2Parser::Get_option_responseContext *context) override;

  virtual std::any visitGet_proof_response(SMTLIBv2Parser::Get_proof_responseContext *context) override;

  virtual std::any visitGet_unsat_assump_response(SMTLIBv2Parser::Get_unsat_assump_responseContext *context) override;

  virtual std::any visitGet_unsat_core_response(SMTLIBv2Parser::Get_unsat_core_responseContext *context) override;

  virtual std::any visitGet_value_response(SMTLIBv2Parser::Get_value_responseContext *context) override;

  virtual std::any visitSpecific_success_response(SMTLIBv2Parser::Specific_success_responseContext *context) override;

  virtual std::any visitGeneral_response(SMTLIBv2Parser::General_responseContext *context) override;
};

#endif
