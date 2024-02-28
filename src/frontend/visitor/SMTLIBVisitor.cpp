#include "frontend/visitor/SMTLIBVisitor.hpp"

#include "frontend/visitor/SMTLIBPredef.hpp"

std::any SMTLIBVisitor::visitStart(SMTLIBv2Parser::StartContext *context) {
  return visit(context->script());
}

std::any SMTLIBVisitor::visitResponse(SMTLIBv2Parser::ResponseContext *context) {
  return visit(context->general_response());
}

std::any SMTLIBVisitor::visitGeneralReservedWord(SMTLIBv2Parser::GeneralReservedWordContext *context) {
  if (context->GRW_Exclamation()) {
    return SMTLIBv2::GRW_Exclamation;
  } else if (context->GRW_Underscore()) {
    return SMTLIBv2::GRW_Underscore;
  } else if (context->GRW_As()) {
    return SMTLIBv2::GRW_As;
  } else if (context->GRW_Binary()) {
    return SMTLIBv2::GRW_Binary;
  } else if (context->GRW_Decimal()) {
    return SMTLIBv2::GRW_Decimal;
  } else if (context->GRW_Exists()) {
    return SMTLIBv2::GRW_Exists;
  } else if (context->GRW_Hexadecimal()) {
    return SMTLIBv2::GRW_Hexadecimal;
  } else if (context->GRW_Forall()) {
    return SMTLIBv2::GRW_Forall;
  } else if (context->GRW_Let()) {
    return SMTLIBv2::GRW_Let;
  } else if (context->GRW_Match()) {
    return SMTLIBv2::GRW_Match;
  } else if (context->GRW_Numeral()) {
    return SMTLIBv2::GRW_Numeral;
  } else if (context->GRW_Par()) {
    return SMTLIBv2::GRW_Par;
  } else {  // if (context->GRW_String())
    return SMTLIBv2::GRW_String;
  }
}

std::any SMTLIBVisitor::visitSimpleSymbol(SMTLIBv2Parser::SimpleSymbolContext *context) {
  if (context->predefSymbol()) {
    return visit(context->predefSymbol());
  } else {  // if (context->UndefinedSymbol())
    return context->UndefinedSymbol()->getText();
  }
}

std::any SMTLIBVisitor::visitQuotedSymbol(SMTLIBv2Parser::QuotedSymbolContext *context) {
  return context->QuotedSymbol()->getText();
}

std::any SMTLIBVisitor::visitPredefSymbol(SMTLIBv2Parser::PredefSymbolContext *context) {
  if (context->PS_Not()) {
    return SMTLIBv2::PS_Not;
  } else if (context->PS_Bool()) {
    return SMTLIBv2::PS_Bool;
  } else if (context->PS_ContinuedExecution()) {
    return SMTLIBv2::PS_ContinuedExecution;
  } else if (context->PS_Error()) {
    return SMTLIBv2::PS_Error;
  } else if (context->PS_False()) {
    return SMTLIBv2::PS_False;
  } else if (context->PS_ImmediateExit()) {
    return SMTLIBv2::PS_ImmediateExit;
  } else if (context->PS_Incomplete()) {
    return SMTLIBv2::PS_Incomplete;
  } else if (context->PS_Logic()) {
    return SMTLIBv2::PS_Logic;
  } else if (context->PS_Memout()) {
    return SMTLIBv2::PS_Memout;
  } else if (context->PS_Sat()) {
    return SMTLIBv2::PS_Sat;
  } else if (context->PS_Success()) {
    return SMTLIBv2::PS_Success;
  } else if (context->PS_Theory()) {
    return SMTLIBv2::PS_Theory;
  } else if (context->PS_True()) {
    return SMTLIBv2::PS_True;
  } else if (context->PS_Unknown()) {
    return SMTLIBv2::PS_Unknown;
  } else if (context->PS_Unsupported()) {
    return SMTLIBv2::PS_Unsupported;
  } else {  // if (context->PS_Unsat())
    return SMTLIBv2::PS_Unsat;
  }
}

std::any SMTLIBVisitor::visitPredefKeyword(SMTLIBv2Parser::PredefKeywordContext *context) {
  if (context->PK_AllStatistics()) {
    return SMTLIBv2::PK_AllStatistics;
  } else if (context->PK_AssertionStackLevels()) {
    return SMTLIBv2::PK_AssertionStackLevels;
  } else if (context->PK_Authors()) {
    return SMTLIBv2::PK_Authors;
  } else if (context->PK_Category()) {
    return SMTLIBv2::PK_Category;
  } else if (context->PK_Chainable()) {
    return SMTLIBv2::PK_Chainable;
  } else if (context->PK_Definition()) {
    return SMTLIBv2::PK_Definition;
  } else if (context->PK_DiagnosticOutputChannel()) {
    return SMTLIBv2::PK_DiagnosticOutputChannel;
  } else if (context->PK_ErrorBehaviour()) {
    return SMTLIBv2::PK_ErrorBehaviour;
  } else if (context->PK_Extension()) {
    return SMTLIBv2::PK_Extension;
  } else if (context->PK_Funs()) {
    return SMTLIBv2::PK_Funs;
  } else if (context->PK_FunsDescription()) {
    return SMTLIBv2::PK_FunsDescription;
  } else if (context->PK_GlobalDeclarations()) {
    return SMTLIBv2::PK_GlobalDeclarations;
  } else if (context->PK_InteractiveMode()) {
    return SMTLIBv2::PK_InteractiveMode;
  } else if (context->PK_Language()) {
    return SMTLIBv2::PK_Language;
  } else if (context->PK_LeftAssoc()) {
    return SMTLIBv2::PK_LeftAssoc;
  } else if (context->PK_License()) {
    return SMTLIBv2::PK_License;
  } else if (context->PK_Named()) {
    return SMTLIBv2::PK_Named;
  } else if (context->PK_Name()) {
    return SMTLIBv2::PK_Name;
  } else if (context->PK_Notes()) {
    return SMTLIBv2::PK_Notes;
  } else if (context->PK_Pattern()) {
    return SMTLIBv2::PK_Pattern;
  } else if (context->PK_PrintSuccess()) {
    return SMTLIBv2::PK_PrintSuccess;
  } else if (context->PK_ProduceAssertions()) {
    return SMTLIBv2::PK_ProduceAssertions;
  } else if (context->PK_ProduceAssignments()) {
    return SMTLIBv2::PK_ProduceAssignments;
  } else if (context->PK_ProduceModels()) {
    return SMTLIBv2::PK_ProduceModels;
  } else if (context->PK_ProduceProofs()) {
    return SMTLIBv2::PK_ProduceProofs;
  } else if (context->PK_ProduceUnsatAssumptions()) {
    return SMTLIBv2::PK_ProduceUnsatAssumptions;
  } else if (context->PK_ProduceUnsatCores()) {
    return SMTLIBv2::PK_ProduceUnsatCores;
  } else if (context->PK_RandomSeed()) {
    return SMTLIBv2::PK_RandomSeed;
  } else if (context->PK_ReasonUnknown()) {
    return SMTLIBv2::PK_ReasonUnknown;
  } else if (context->PK_RegularOutputChannel()) {
    return SMTLIBv2::PK_RegularOutputChannel;
  } else if (context->PK_ReproducibleResourceLimit()) {
    return SMTLIBv2::PK_ReproducibleResourceLimit;
  } else if (context->PK_RightAssoc()) {
    return SMTLIBv2::PK_RightAssoc;
  } else if (context->PK_SmtLibVersion()) {
    return SMTLIBv2::PK_SmtLibVersion;
  } else if (context->PK_Sorts()) {
    return SMTLIBv2::PK_Sorts;
  } else if (context->PK_SortsDescription()) {
    return SMTLIBv2::PK_SortsDescription;
  } else if (context->PK_Source()) {
    return SMTLIBv2::PK_Source;
  } else if (context->PK_Status()) {
    return SMTLIBv2::PK_Status;
  } else if (context->PK_Theories()) {
    return SMTLIBv2::PK_Theories;
  } else if (context->PK_Values()) {
    return SMTLIBv2::PK_Values;
  } else if (context->PK_Verbosity()) {
    return SMTLIBv2::PK_Verbosity;
  } else {  // if (context->PK_Version())
    return SMTLIBv2::PK_Version;
  }
}

std::any SMTLIBVisitor::visitSymbol(SMTLIBv2Parser::SymbolContext *context) {
  if (context->simpleSymbol()) {
    return visit(context->simpleSymbol());
  } else {  // if (context->quotedSymbol())
    return visit(context->quotedSymbol());
  }
}

std::any SMTLIBVisitor::visitNumeral(SMTLIBv2Parser::NumeralContext *context) {
  return static_cast<int64_t>(std::stoll(context->Numeral()->getText()));
}

std::any SMTLIBVisitor::visitDecimal(SMTLIBv2Parser::DecimalContext *context) {
  return static_cast<double>(std::stold(context->Decimal()->getText()));
}

std::any SMTLIBVisitor::visitHexadecimal(SMTLIBv2Parser::HexadecimalContext *context) {
  return static_cast<int64_t>(std::stoll(context->HexDecimal()->getText(), nullptr, 16));
}

std::any SMTLIBVisitor::visitBinary(SMTLIBv2Parser::BinaryContext *context) {
  return static_cast<int64_t>(std::stoll(context->Binary()->getText(), nullptr, 2));
}

std::any SMTLIBVisitor::visitString(SMTLIBv2Parser::StringContext *context) {
  return context->String()->getText();
}

std::any SMTLIBVisitor::visitKeyword(SMTLIBv2Parser::KeywordContext *context) {
  if (context->Colon()) {
    return visit(context->simpleSymbol());
  } else {
    return visit(context->predefKeyword());
  }
}

std::any SMTLIBVisitor::visitSpec_constant(SMTLIBv2Parser::Spec_constantContext *context) {
  if (context->numeral()) {
    return visit(context->numeral());
  } else if (context->decimal()) {
    return visit(context->decimal());
  } else if (context->hexadecimal()) {
    return visit(context->hexadecimal());
  } else if (context->binary()) {
    return visit(context->binary());
  } else {  // if (context->string())
    return visit(context->string());
  }
}

std::any SMTLIBVisitor::visitS_expr(SMTLIBv2Parser::S_exprContext *context) {
  if (context->spec_constant()) {
    return visit(context->spec_constant());
  } else if (context->symbol()) {
    return visit(context->symbol());
  } else if (context->keyword()) {
    return visit(context->keyword());
  } else {  // ParOpen s_expr* ParClose
    
  }
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
  if (!context->ParOpen().size()) {
    if (context->spec_constant()) {
    } else if (context->qual_identifier()) {
    } else {  // error
    }
  } else {
    if (context->qual_identifier()) {
    } else if (context->GRW_Let()) {
    } else if (context->GRW_Forall()) {
    } else if (context->GRW_Exists()) {
    } else if (context->GRW_Match()) {
    } else if (context->GRW_Exclamation()) {
    } else {  // error
    }
  }
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
  for (auto command : context->command()) visit(command);
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
  if (context->cmd_assert()) {
    visit(context->term(0));
  } else if (context->cmd_checkSat()) {
  } else if (context->cmd_checkSatAssuming()) {
  } else if (context->cmd_declareConst()) {
  } else if (context->cmd_declareDatatype()) {
  } else if (context->cmd_declareDatatypes()) {
  } else if (context->cmd_declareFun()) {
  } else if (context->cmd_declareSort()) {
  } else if (context->cmd_defineFun()) {
  } else if (context->cmd_defineFunRec()) {
  } else if (context->cmd_defineFunsRec()) {
  } else if (context->cmd_defineSort()) {
  } else if (context->cmd_echo()) {
  } else if (context->cmd_exit()) {
  } else if (context->cmd_getAssertions()) {
  } else if (context->cmd_getAssignment()) {
  } else if (context->cmd_getInfo()) {
  } else if (context->cmd_getModel()) {
  } else if (context->cmd_getOption()) {
  } else if (context->cmd_getProof()) {
  } else if (context->cmd_getUnsatAssumptions()) {
  } else if (context->cmd_getUnsatCore()) {
  } else if (context->cmd_getValue()) {
  } else if (context->cmd_pop()) {
  } else if (context->cmd_push()) {
  } else if (context->cmd_reset()) {
  } else if (context->cmd_resetAssertions()) {
  } else if (context->cmd_setInfo()) {
  } else if (context->cmd_setLogic()) {
  } else if (context->cmd_setOption()) {
  }

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
