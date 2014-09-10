#include <cstdint>

struct reg_t
{
   volatile uint32_t enabled: 1;
   volatile uint32_t flag : 1;
   volatile uint32_t bitrate : 6;
};

int main()
{
   reg_t* reg = reinterpret_cast<reg_t*>(0xffff0000);
   reg->flag = 1;
   if (reg->enabled) {}
}
