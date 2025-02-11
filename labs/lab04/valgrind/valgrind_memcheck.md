==439== Memcheck, a memory error detector
==439== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==439== Using Valgrind-3.15.0 and LibVEX; rerun with -h for copyright info
==439== Command: ./memory
==439== 
==439== Conditional jump or move depends on uninitialised value(s)
==439==    at 0x48C0738: __vfprintf_internal (vfprintf-internal.c:1687)
==439==    by 0x48AFF7B: printf (printf.c:33)
==439==    by 0x1087D7: fn (memory.c:7)
==439==    by 0x1087FB: main (memory.c:17)
==439== 
==439== Use of uninitialised value of size 8
==439==    at 0x48AB320: _itoa_word (_itoa.c:179)
==439==    by 0x48C03F3: __vfprintf_internal (vfprintf-internal.c:1687)
==439==    by 0x48AFF7B: printf (printf.c:33)
==439==    by 0x1087D7: fn (memory.c:7)
==439==    by 0x1087FB: main (memory.c:17)
==439== 
==439== Conditional jump or move depends on uninitialised value(s)
==439==    at 0x48AB328: _itoa_word (_itoa.c:179)
==439==    by 0x48C03F3: __vfprintf_internal (vfprintf-internal.c:1687)
==439==    by 0x48AFF7B: printf (printf.c:33)
==439==    by 0x1087D7: fn (memory.c:7)
==439==    by 0x1087FB: main (memory.c:17)
==439== 
==439== Conditional jump or move depends on uninitialised value(s)
==439==    at 0x48C0FF8: __vfprintf_internal (vfprintf-internal.c:1687)
==439==    by 0x48AFF7B: printf (printf.c:33)
==439==    by 0x1087D7: fn (memory.c:7)
==439==    by 0x1087FB: main (memory.c:17)
==439== 
==439== Conditional jump or move depends on uninitialised value(s)
==439==    at 0x48C04C0: __vfprintf_internal (vfprintf-internal.c:1687)
==439==    by 0x48AFF7B: printf (printf.c:33)
==439==    by 0x1087D7: fn (memory.c:7)
==439==    by 0x1087FB: main (memory.c:17)
==439== 
==439== Invalid write of size 4
==439==    at 0x1087E0: fn (memory.c:8)
==439==    by 0x1087FB: main (memory.c:17)
==439==  Address 0x49d9068 is 0 bytes after a block of size 40 alloc'd
==439==    at 0x4849D8C: malloc (in /usr/lib/aarch64-linux-gnu/valgrind/vgpreload_memcheck-arm64-linux.so)
==439==    by 0x1087BB: fn (memory.c:6)
==439==    by 0x1087FB: main (memory.c:17)
==439== 
0==439== 
==439== HEAP SUMMARY:
==439==     in use at exit: 40 bytes in 1 blocks
==439==   total heap usage: 2 allocs, 1 frees, 4,136 bytes allocated
==439== 
==439== LEAK SUMMARY:
==439==    definitely lost: 40 bytes in 1 blocks
==439==    indirectly lost: 0 bytes in 0 blocks
==439==      possibly lost: 0 bytes in 0 blocks
==439==    still reachable: 0 bytes in 0 blocks
==439==         suppressed: 0 bytes in 0 blocks
==439== Rerun with --leak-check=full to see details of leaked memory
==439== 
==439== Use --track-origins=yes to see where uninitialised values come from
==439== For lists of detected and suppressed errors, rerun with: -s
==439== ERROR SUMMARY: 6 errors from 6 contexts (suppressed: 0 from 0)
