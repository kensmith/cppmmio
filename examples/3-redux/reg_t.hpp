#include <generate_mask.hpp>
#include <rw_t.hpp>
#include <ro_t.hpp>
#include <wo_t.hpp>

template<typename mut_t, uint32_t addr, int offset, int width>
struct reg_t
{
   static_assert(width > 0, "nonpositive width");
   static_assert(offset >= 0, "negative offset");
   static_assert(width + offset <= std::numeric_limits<uint32_t>::digits, "width overflow");

   static uint32_t read()
   {
      mut_t::read(
         reinterpret_cast<volatile uint32_t*>(addr), offset,
         generate_mask(offset, width));
   }

   static void write(uint32_t val)
   {
      mut_t::write(
         reinterpret_cast<volatile uint32_t*>(addr), offset,
         generate_mask(offset, width), val);
   }
};

