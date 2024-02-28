#ifndef __RNG_HPP__
#define __RNG_HPP__

#include <random>

namespace klee {

struct RNG : std::mt19937 {
  RNG();
  explicit RNG(RNG::result_type seed);

  /* generates a random number on [0,0xffffffff]-interval */
  unsigned int getInt32();
  /* generates a random number on [0,1)-real-interval */
  double getDoubleL();
  /* generates a random number on (0,1)-real-interval */
  double getDouble();
  /* generators a random flop */
  bool getBool();
};

}  // namespace klee

#endif
