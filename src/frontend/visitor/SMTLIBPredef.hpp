#ifndef __SMTLIB_PREDEF_HPP__
#define __SMTLIB_PREDEF_HPP__

namespace SMTLIBv2 {

enum GeneralReservedWords_t {
  GRW_Exclamation,
  GRW_Underscore,
  GRW_As,
  GRW_Binary,
  GRW_Decimal,
  GRW_Exists,
  GRW_Hexadecimal,
  GRW_Forall,
  GRW_Let,
  GRW_Match,
  GRW_Numeral,
  GRW_Par,
  GRW_String,
};

enum PredefSymbol_t {
  PS_Not,
  PS_Bool,
  PS_ContinuedExecution,
  PS_Error,
  PS_False,
  PS_ImmediateExit,
  PS_Incomplete,
  PS_Logic,
  PS_Memout,
  PS_Sat,
  PS_Success,
  PS_Theory,
  PS_True,
  PS_Unknown,
  PS_Unsupported,
  PS_Unsat,
};

enum PredefKeyword_t {
  PK_AllStatistics,
  PK_AssertionStackLevels,
  PK_Authors,
  PK_Category,
  PK_Chainable,
  PK_Definition,
  PK_DiagnosticOutputChannel,
  PK_ErrorBehaviour,
  PK_Extension,
  PK_Funs,
  PK_FunsDescription,
  PK_GlobalDeclarations,
  PK_InteractiveMode,
  PK_Language,
  PK_LeftAssoc,
  PK_License,
  PK_Named,
  PK_Name,
  PK_Notes,
  PK_Pattern,
  PK_PrintSuccess,
  PK_ProduceAssertions,
  PK_ProduceAssignments,
  PK_ProduceModels,
  PK_ProduceProofs,
  PK_ProduceUnsatAssumptions,
  PK_ProduceUnsatCores,
  PK_RandomSeed,
  PK_ReasonUnknown,
  PK_RegularOutputChannel,
  PK_ReproducibleResourceLimit,
  PK_RightAssoc,
  PK_SmtLibVersion,
  PK_Sorts,
  PK_SortsDescription,
  PK_Source,
  PK_Status,
  PK_Theories,
  PK_Values,
  PK_Verbosity,
  PK_Version,
};

}  // namespace SMTLIBv2

#endif
