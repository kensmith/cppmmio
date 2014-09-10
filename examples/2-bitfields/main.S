
main.o:     file format elf32-littlearm


Disassembly of section .text:

00000000 <main>:
};

int main()
{
   reg_t* reg = reinterpret_cast<reg_t*>(0xffff0000);
   reg->flag = 1;
   0:	4b03      	ldr	r3, [pc, #12]	; (10 <main+0x10>)
   2:	781a      	ldrb	r2, [r3, #0]
   4:	f042 0202 	orr.w	r2, r2, #2
   8:	701a      	strb	r2, [r3, #0]
   if (reg->enabled) {}
   a:	681b      	ldr	r3, [r3, #0]
}
   c:	2000      	movs	r0, #0
   e:	4770      	bx	lr
  10:	ffff0000 	.word	0xffff0000
