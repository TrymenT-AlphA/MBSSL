#ifndef __OPTIONCATEGORIES_HPP__
#define __OPTIONCATEGORIES_HPP__

#include "llvm/Support/CommandLine.h"

namespace klee {

extern llvm::cl::OptionCategory TestCompCat;
extern llvm::cl::OptionCategory ExecCat;
extern llvm::cl::OptionCategory DebugCat;
extern llvm::cl::OptionCategory MiscCat;
extern llvm::cl::OptionCategory ModuleCat;
extern llvm::cl::OptionCategory SeedingCat;
extern llvm::cl::OptionCategory SolvingCat;
extern llvm::cl::OptionCategory TerminationCat;
extern llvm::cl::OptionCategory TestGenCat;

}  // namespace klee

#endif
