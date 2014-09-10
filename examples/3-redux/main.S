
main.o:     file format elf32-littlearm


Disassembly of section .text:

00000000 <main>:
      volatile uint32_t * device,
      uint32_t offset,
      int mask,
      int value
   )
   { *device = ((value << offset) & mask); }
   0:	4b02      	ldr	r3, [pc, #8]	; (c <main+0xc>)
   2:	2000      	movs	r0, #0
   4:	6018      	str	r0, [r3, #0]
   static uint32_t read(
      volatile uint32_t * device,
      int offset,
      int mask
   )
   { return (*device & mask) >> offset; } 
   6:	681b      	ldr	r3, [r3, #0]
{
   flag::write(1);
   if (enabled::read()) {}
   //enabled::write(1); // error
   //flag::read(); //error
}
   8:	4770      	bx	lr
   a:	bf00      	nop
   c:	ffff0000 	.word	0xffff0000
