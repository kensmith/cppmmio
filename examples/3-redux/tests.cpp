#include <cassert>
#include <iostream>
#include "generate_mask.hpp"

// #define noisy

int main()
{
  int expected_values[]{
    0x0, 0x1, 0x3, 0x7,
    0xf, 0x1f, 0x3f, 0x7f,
    0xff, 0x1ff, 0x3ff, 0x7ff,
    0xfff, 0x1fff, 0x3fff, 0x7fff,

    0xffff, 0x1ffff, 0x3ffff, 0x7ffff,
    0xfffff, 0x1fffff, 0x3fffff, 0x7fffff,
    0xffffff, 0x1ffffff, 0x3ffffff, 0x7ffffff,
    0xfffffff, 0x1fffffff, 0x3fffffff, 0x7fffffff,
  };

  for (
      int i = 0;
      i < sizeof(expected_values)/sizeof(expected_values[0]);
      ++i
      )
  {
#if defined(noisy)
    std::cout
      << "mask for width i="
      << i
      << " is "
      << static_cast<int>(generate_unshifted_mask(i))
      << " should be "
      << expected_values[i]
      << std::endl;
#endif

    assert(
        expected_values[i]
        ==
        static_cast<int>(generate_unshifted_mask(i)));
  }
};
