
main.o:     file format elf32-littlearm


Disassembly of section .text:

00000000 <main>:
using reg_val_t = volatile unsigned uint32_t;
using reg_t = reg_val_t*;
reg_t device = reinterpret_cast<reg_t>(0xffff0000);

int main()
{
   0:	b082      	sub	sp, #8
   *device |= 1;
   2:	4a06      	ldr	r2, [pc, #24]	; (1c <main+0x1c>)
   4:	6811      	ldr	r1, [r2, #0]
   6:	680b      	ldr	r3, [r1, #0]
   8:	f043 0301 	orr.w	r3, r3, #1
   c:	600b      	str	r3, [r1, #0]
   reg_val_t status = *device;
   e:	6813      	ldr	r3, [r2, #0]
  10:	681b      	ldr	r3, [r3, #0]
  12:	9301      	str	r3, [sp, #4]
}
  14:	2000      	movs	r0, #0
  16:	b002      	add	sp, #8
  18:	4770      	bx	lr
  1a:	bf00      	nop
  1c:	00000000 	.word	0x00000000
