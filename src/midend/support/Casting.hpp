#ifndef __CASTING_HPP__
#define __CASTING_HPP__

#include "llvm/Support/Casting.h"

namespace klee {

using llvm::cast;
using llvm::cast_or_null;
using llvm::dyn_cast;
using llvm::dyn_cast_or_null;
using llvm::isa;
using llvm::isa_and_nonnull;

}  // namespace klee

#endif
