#include <cstdint>
#include <limits>
#include <reg_t.hpp>

using enabled = reg_t<ro_t, 0xffff0000, 0, 1>;
using flag = reg_t<wo_t, 0xffff0000, 1, 1>;
using bitrate = reg_t<rw_t, 0xffff0000, 2, 6>;

int main()
{
   flag::write(1);
   if (enabled::read()) {}
   //enabled::write(1); // error
   //flag::read(); //error
}
