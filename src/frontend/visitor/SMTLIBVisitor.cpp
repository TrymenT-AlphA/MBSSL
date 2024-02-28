#include "SMTLIBVisitor.hpp"

std::any SMTLIBVisitor::visitStart(SMTLIBv2Parser::StartContext *context) {
  return visit(context->script());
}

std::any SMTLIBVisitor::visitResponse(SMTLIBv2Parser::ResponseContext *context) {
  return nullptr;
}

std::any SMTLIBVisitor::visitGeneralReservedWord(SMTLIBv2Parser::GeneralReservedWordContext *context) {
  return nullptr;
}

std::any SMTLIBVisitor::visitSimpleSymbol(SMTLIBv2Parser::SimpleSymbolContext *context) {
  return nullptr;
}

std::any SMTLIBVisitor::visitQuotedSymbol(SMTLIBv2Parser::QuotedSymbolContext *context) {
  return nullptr;
}

std::any SMTLIBVisitor::visitPredefSymbol(SMTLIBv2Parser::PredefSymbolContext *context) {
  return nullptr;
}

std::any SMTLIBVisitor::visitPredefKeyword(SMTLIBv2Parser::PredefKeywordContext *context) {
  return nullptr;
}

std::any SMTLIBVisitor::visitSymbol(SMTLIBv2Parser::SymbolContext *context) {
  return nullptr;
}

std::any SMTLIBVisitor::visitNumeral(SMTLIBv2Parser::NumeralContext *context) {
  return nullptr;
}

std::any SMTLIBVisitor::visitDecimal(SMTLIBv2Parser::DecimalContext *context) {
  return nullptr;
}

std::any SMTLIBVisitor::visitHexadecimal(SMTLIBv2Parser::HexadecimalContext *context) {
  return nullptr;
}

std::any SMTLIBVisitor::visitBinary(SMTLIBv2Parser::BinaryContext *context) {
  return nullptr;
}

std::any SMTLIBVisitor::visitString(SMTLIBv2Parser::StringContext *context) {
  return nullptr;
}

std::any SMTLIBVisitor::visitKeyword(SMTLIBv2Parser::KeywordContext *context) {
  return nullptr;
}

std::any SMTLIBVisitor::visitSpec_constant(SMTLIBv2Parser::Spec_constantContext *context) {
  return nullptr;
}

std::any SMTLIBVisitor::visitS_expr(SMTLIBv2Parser::S_exprContext *context) {
  return nullptr;
}

std::any SMTLIBVisitor::visitIndex(SMTLIBv2Parser::IndexContext *context) {
  return nullptr;
}

std::any SMTLIBVisitor::visitIdentifier(SMTLIBv2Parser::IdentifierContext *context) {
  return nullptr;
}

std::any SMTLIBVisitor::visitAttribute_value(SMTLIBv2Parser::Attribute_valueContext *context) {
  return nullptr;
}

std::any SMTLIBVisitor::visitAttribute(SMTLIBv2Parser::AttributeContext *context) {
  return nullptr;
}

std::any SMTLIBVisitor::visitSort(SMTLIBv2Parser::SortContext *context) {
  return nullptr;
}

std::any SMTLIBVisitor::visitQual_identifier(SMTLIBv2Parser::Qual_identifierContext *context) {
  return nullptr;
}

std::any SMTLIBVisitor::visitVar_binding(SMTLIBv2Parser::Var_bindingContext *context) {
  return nullptr;
}

std::any SMTLIBVisitor::visitSorted_var(SMTLIBv2Parser::Sorted_varContext *context) {
  return nullptr;
}

std::any SMTLIBVisitor::visitPattern(SMTLIBv2Parser::PatternContext *context) {
  return nullptr;
}

std::any SMTLIBVisitor::visitMatch_case(SMTLIBv2Parser::Match_caseContext *context) {
  return nullptr;
}

std::any SMTLIBVisitor::visitTerm(SMTLIBv2Parser::TermContext *context) {
  return nullptr;
}

std::any SMTLIBVisitor::visitSort_symbol_decl(SMTLIBv2Parser::Sort_symbol_declContext *context) {
  return nullptr;
}

std::any SMTLIBVisitor::visitMeta_spec_constant(SMTLIBv2Parser::Meta_spec_constantContext *context) {
  return nullptr;
}

std::any SMTLIBVisitor::visitFun_symbol_decl(SMTLIBv2Parser::Fun_symbol_declContext *context) {
  return nullptr;
}

std::any SMTLIBVisitor::visitPar_fun_symbol_decl(SMTLIBv2Parser::Par_fun_symbol_declContext *context) {
  return nullptr;
}

std::any SMTLIBVisitor::visitTheory_attribute(SMTLIBv2Parser::Theory_attributeContext *context) {
  return nullptr;
}

std::any SMTLIBVisitor::visitTheory_decl(SMTLIBv2Parser::Theory_declContext *context) {
  return nullptr;
}

std::any SMTLIBVisitor::visitLogic_attribue(SMTLIBv2Parser::Logic_attribueContext *context) {
  return nullptr;
}

std::any SMTLIBVisitor::visitLogic(SMTLIBv2Parser::LogicContext *context) {
  return nullptr;
}

std::any SMTLIBVisitor::visitSort_dec(SMTLIBv2Parser::Sort_decContext *context) {
  return nullptr;
}

std::any SMTLIBVisitor::visitSelector_dec(SMTLIBv2Parser::Selector_decContext *context) {
  return nullptr;
}

std::any SMTLIBVisitor::visitConstructor_dec(SMTLIBv2Parser::Constructor_decContext *context) {
  return nullptr;
}

std::any SMTLIBVisitor::visitDatatype_dec(SMTLIBv2Parser::Datatype_decContext *context) {
  return nullptr;
}

std::any SMTLIBVisitor::visitFunction_dec(SMTLIBv2Parser::Function_decContext *context) {
  return nullptr;
}

std::any SMTLIBVisitor::visitFunction_def(SMTLIBv2Parser::Function_defContext *context) {
  return nullptr;
}

std::any SMTLIBVisitor::visitProp_literal(SMTLIBv2Parser::Prop_literalContext *context) {
  return nullptr;
}

std::any SMTLIBVisitor::visitScript(SMTLIBv2Parser::ScriptContext *context) {
  return nullptr;
}

std::any SMTLIBVisitor::visitCmd_assert(SMTLIBv2Parser::Cmd_assertContext *context) {
  return nullptr;
}

std::any SMTLIBVisitor::visitCmd_checkSat(SMTLIBv2Parser::Cmd_checkSatContext *context) {
  return nullptr;
}

std::any SMTLIBVisitor::visitCmd_checkSatAssuming(SMTLIBv2Parser::Cmd_checkSatAssumingContext *context) {
  return nullptr;
}

std::any SMTLIBVisitor::visitCmd_declareConst(SMTLIBv2Parser::Cmd_declareConstContext *context) {
  return nullptr;
}

std::any SMTLIBVisitor::visitCmd_declareDatatype(SMTLIBv2Parser::Cmd_declareDatatypeContext *context) {
  return nullptr;
}

std::any SMTLIBVisitor::visitCmd_declareDatatypes(SMTLIBv2Parser::Cmd_declareDatatypesContext *context) {
  return nullptr;
}

std::any SMTLIBVisitor::visitCmd_declareFun(SMTLIBv2Parser::Cmd_declareFunContext *context) {
  return nullptr;
}

std::any SMTLIBVisitor::visitCmd_declareSort(SMTLIBv2Parser::Cmd_declareSortContext *context) {
  return nullptr;
}

std::any SMTLIBVisitor::visitCmd_defineFun(SMTLIBv2Parser::Cmd_defineFunContext *context) {
  return nullptr;
}

std::any SMTLIBVisitor::visitCmd_defineFunRec(SMTLIBv2Parser::Cmd_defineFunRecContext *context) {
  return nullptr;
}

std::any SMTLIBVisitor::visitCmd_defineFunsRec(SMTLIBv2Parser::Cmd_defineFunsRecContext *context) {
  return nullptr;
}

std::any SMTLIBVisitor::visitCmd_defineSort(SMTLIBv2Parser::Cmd_defineSortContext *context) {
  return nullptr;
}

std::any SMTLIBVisitor::visitCmd_echo(SMTLIBv2Parser::Cmd_echoContext *context) {
  return nullptr;
}

std::any SMTLIBVisitor::visitCmd_exit(SMTLIBv2Parser::Cmd_exitContext *context) {
  return nullptr;
}

std::any SMTLIBVisitor::visitCmd_getAssertions(SMTLIBv2Parser::Cmd_getAssertionsContext *context) {
  return nullptr;
}

std::any SMTLIBVisitor::visitCmd_getAssignment(SMTLIBv2Parser::Cmd_getAssignmentContext *context) {
  return nullptr;
}

std::any SMTLIBVisitor::visitCmd_getInfo(SMTLIBv2Parser::Cmd_getInfoContext *context) {
  return nullptr;
}

std::any SMTLIBVisitor::visitCmd_getModel(SMTLIBv2Parser::Cmd_getModelContext *context) {
  return nullptr;
}

std::any SMTLIBVisitor::visitCmd_getOption(SMTLIBv2Parser::Cmd_getOptionContext *context) {
  return nullptr;
}

std::any SMTLIBVisitor::visitCmd_getProof(SMTLIBv2Parser::Cmd_getProofContext *context) {
  return nullptr;
}

std::any SMTLIBVisitor::visitCmd_getUnsatAssumptions(SMTLIBv2Parser::Cmd_getUnsatAssumptionsContext *context) {
  return nullptr;
}

std::any SMTLIBVisitor::visitCmd_getUnsatCore(SMTLIBv2Parser::Cmd_getUnsatCoreContext *context) {
  return nullptr;
}

std::any SMTLIBVisitor::visitCmd_getValue(SMTLIBv2Parser::Cmd_getValueContext *context) {
  return nullptr;
}

std::any SMTLIBVisitor::visitCmd_pop(SMTLIBv2Parser::Cmd_popContext *context) {
  return nullptr;
}

std::any SMTLIBVisitor::visitCmd_push(SMTLIBv2Parser::Cmd_pushContext *context) {
  return nullptr;
}

std::any SMTLIBVisitor::visitCmd_reset(SMTLIBv2Parser::Cmd_resetContext *context) {
  return nullptr;
}

std::any SMTLIBVisitor::visitCmd_resetAssertions(SMTLIBv2Parser::Cmd_resetAssertionsContext *context) {
  return nullptr;
}

std::any SMTLIBVisitor::visitCmd_setInfo(SMTLIBv2Parser::Cmd_setInfoContext *context) {
  return nullptr;
}

std::any SMTLIBVisitor::visitCmd_setLogic(SMTLIBv2Parser::Cmd_setLogicContext *context) {
  return nullptr;
}

std::any SMTLIBVisitor::visitCmd_setOption(SMTLIBv2Parser::Cmd_setOptionContext *context) {
  return nullptr;
}

std::any SMTLIBVisitor::visitCommand(SMTLIBv2Parser::CommandContext *context) {
  return nullptr;
}

std::any SMTLIBVisitor::visitB_value(SMTLIBv2Parser::B_valueContext *context) {
  return nullptr;
}

std::any SMTLIBVisitor::visitOption(SMTLIBv2Parser::OptionContext *context) {
  return nullptr;
}

std::any SMTLIBVisitor::visitInfo_flag(SMTLIBv2Parser::Info_flagContext *context) {
  return nullptr;
}

std::any SMTLIBVisitor::visitError_behaviour(SMTLIBv2Parser::Error_behaviourContext *context) {
  return nullptr;
}

std::any SMTLIBVisitor::visitReason_unknown(SMTLIBv2Parser::Reason_unknownContext *context) {
  return nullptr;
}

std::any SMTLIBVisitor::visitModel_response(SMTLIBv2Parser::Model_responseContext *context) {
  return nullptr;
}

std::any SMTLIBVisitor::visitInfo_response(SMTLIBv2Parser::Info_responseContext *context) {
  return nullptr;
}

std::any SMTLIBVisitor::visitValuation_pair(SMTLIBv2Parser::Valuation_pairContext *context) {
  return nullptr;
}

std::any SMTLIBVisitor::visitT_valuation_pair(SMTLIBv2Parser::T_valuation_pairContext *context) {
  return nullptr;
}

std::any SMTLIBVisitor::visitCheck_sat_response(SMTLIBv2Parser::Check_sat_responseContext *context) {
  return nullptr;
}

std::any SMTLIBVisitor::visitEcho_response(SMTLIBv2Parser::Echo_responseContext *context) {
  return nullptr;
}

std::any SMTLIBVisitor::visitGet_assertions_response(SMTLIBv2Parser::Get_assertions_responseContext *context) {
  return nullptr;
}

std::any SMTLIBVisitor::visitGet_assignment_response(SMTLIBv2Parser::Get_assignment_responseContext *context) {
  return nullptr;
}

std::any SMTLIBVisitor::visitGet_info_response(SMTLIBv2Parser::Get_info_responseContext *context) {
  return nullptr;
}

std::any SMTLIBVisitor::visitGet_model_response(SMTLIBv2Parser::Get_model_responseContext *context) {
  return nullptr;
}

std::any SMTLIBVisitor::visitGet_option_response(SMTLIBv2Parser::Get_option_responseContext *context) {
  return nullptr;
}

std::any SMTLIBVisitor::visitGet_proof_response(SMTLIBv2Parser::Get_proof_responseContext *context) {
  return nullptr;
}

std::any SMTLIBVisitor::visitGet_unsat_assump_response(SMTLIBv2Parser::Get_unsat_assump_responseContext *context) {
  return nullptr;
}

std::any SMTLIBVisitor::visitGet_unsat_core_response(SMTLIBv2Parser::Get_unsat_core_responseContext *context) {
  return nullptr;
}

std::any SMTLIBVisitor::visitGet_value_response(SMTLIBv2Parser::Get_value_responseContext *context) {
  return nullptr;
}

std::any SMTLIBVisitor::visitSpecific_success_response(SMTLIBv2Parser::Specific_success_responseContext *context) {
  return nullptr;
}

std::any SMTLIBVisitor::visitGeneral_response(SMTLIBv2Parser::General_responseContext *context) {
  return nullptr;
}
