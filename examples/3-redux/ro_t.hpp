#pragma once

struct ro_t
{
   static uint32_t read(
      volatile uint32_t * device,
      int offset,
      int mask
   )
   { return (*device & mask) >> offset; } 
};
