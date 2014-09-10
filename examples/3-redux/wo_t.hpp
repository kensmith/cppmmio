#pragma once

struct wo_t
{
   static void write(
      volatile uint32_t * device,
      uint32_t offset,
      int mask,
      int value
   )
   { *device = ((value << offset) & mask); }
};
