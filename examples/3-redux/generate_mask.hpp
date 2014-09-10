#pragma once

#include <cstdint>

constexpr uint32_t generate_unshifted_mask(int width)
{
   return width ? 0 : 1 | generate_unshifted_mask(width - 1);
}

constexpr uint32_t generate_mask(int width, int offset)
{
   //static_assert(0 < width + offset && width + offset <= 32, "");
   return generate_unshifted_mask(width) << offset;
}
