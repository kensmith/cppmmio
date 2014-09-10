#pragma once

#include "ro_t.hpp"

struct rw_t : ro_t
{
   static void write(
      volatile uint32_t * device,
      uint32_t offset,
      int mask,
      int value
   )
   { *device = (*device & ~mask) | ((value << offset) & mask); }
};
