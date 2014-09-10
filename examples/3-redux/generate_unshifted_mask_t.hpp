#pragma once

/**
 * Generates a bit mask of the given width whose least
 * significant bit is at the same bit position as the least
 * significant bit of the word.
 * @tparam width the number of bits in the mask
 */
template <uint32_t width>
struct generate_unshifted_mask_t
{
   enum { value = (generate_unshifted_mask_t<width - 1>::value << 1) | 1 };
};

/**
 * Base case.
 */
template <>
struct generate_unshifted_mask_t<0>
{
   enum { value = 0 };
};
