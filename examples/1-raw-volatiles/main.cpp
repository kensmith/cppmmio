#include <cstdint>

using reg_val_t = volatile unsigned uint32_t;
using reg_t = reg_val_t*;
reg_t device = reinterpret_cast<reg_t>(0xffff0000);

int main()
{
   *device |= 1;
   reg_val_t status = *device;
}
