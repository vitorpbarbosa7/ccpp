recursion:
Load command 0
      cmd LC_SEGMENT_64
  cmdsize 72
  segname __PAGEZERO
   vmaddr 0x0000000000000000
   vmsize 0x0000000100000000
  fileoff 0
 filesize 0
  maxprot 0x00000000
 initprot 0x00000000
   nsects 0
    flags 0x0
Load command 1
      cmd LC_SEGMENT_64
  cmdsize 392
  segname __TEXT
   vmaddr 0x0000000100000000
   vmsize 0x0000000000004000
  fileoff 0
 filesize 16384
  maxprot 0x00000005
 initprot 0x00000005
   nsects 4
    flags 0x0
Section
  sectname __text
   segname __TEXT
      addr 0x0000000100003eec
      size 0x0000000000000090
    offset 16108
     align 2^2 (4)
    reloff 0
    nreloc 0
     flags 0x80000400
 reserved1 0
 reserved2 0
Section
  sectname __stubs
   segname __TEXT
      addr 0x0000000100003f7c
      size 0x000000000000000c
    offset 16252
     align 2^2 (4)
    reloff 0
    nreloc 0
     flags 0x80000408
 reserved1 0 (index into indirect symbol table)
 reserved2 12 (size of stubs)
Section
  sectname __cstring
   segname __TEXT
      addr 0x0000000100003f88
      size 0x000000000000001f
    offset 16264
     align 2^0 (1)
    reloff 0
    nreloc 0
     flags 0x00000002
 reserved1 0
 reserved2 0
Section
  sectname __unwind_info
   segname __TEXT
      addr 0x0000000100003fa8
      size 0x0000000000000058
    offset 16296
     align 2^2 (4)
    reloff 0
    nreloc 0
     flags 0x00000000
 reserved1 0
 reserved2 0
Load command 2
      cmd LC_SEGMENT_64
  cmdsize 152
  segname __DATA_CONST
   vmaddr 0x0000000100004000
   vmsize 0x0000000000004000
  fileoff 16384
 filesize 16384
  maxprot 0x00000003
 initprot 0x00000003
   nsects 1
    flags 0x10
Section
  sectname __got
   segname __DATA_CONST
      addr 0x0000000100004000
      size 0x0000000000000008
    offset 16384
     align 2^3 (8)
    reloff 0
    nreloc 0
     flags 0x00000006
 reserved1 1 (index into indirect symbol table)
 reserved2 0
Load command 3
      cmd LC_SEGMENT_64
  cmdsize 72
  segname __LINKEDIT
   vmaddr 0x0000000100008000
   vmsize 0x0000000000004000
  fileoff 32768
 filesize 696
  maxprot 0x00000001
 initprot 0x00000001
   nsects 0
    flags 0x0
Load command 4
      cmd LC_DYLD_CHAINED_FIXUPS
  cmdsize 16
  dataoff 32768
 datasize 104
Load command 5
      cmd LC_DYLD_EXPORTS_TRIE
  cmdsize 16
  dataoff 32872
 datasize 56
Load command 6
     cmd LC_SYMTAB
 cmdsize 24
  symoff 32936
   nsyms 4
  stroff 33008
 strsize 40
Load command 7
            cmd LC_DYSYMTAB
        cmdsize 80
      ilocalsym 0
      nlocalsym 0
     iextdefsym 0
     nextdefsym 3
      iundefsym 3
      nundefsym 1
         tocoff 0
           ntoc 0
      modtaboff 0
        nmodtab 0
   extrefsymoff 0
    nextrefsyms 0
 indirectsymoff 33000
  nindirectsyms 2
      extreloff 0
        nextrel 0
      locreloff 0
        nlocrel 0
Load command 8
          cmd LC_LOAD_DYLINKER
      cmdsize 32
         name /usr/lib/dyld (offset 12)
Load command 9
     cmd LC_UUID
 cmdsize 24
    uuid 9F526A4B-35EC-3090-8EAE-1F5D3009A362
Load command 10
      cmd LC_BUILD_VERSION
  cmdsize 32
 platform 1
    minos 15.0
      sdk 15.2
   ntools 1
     tool 3
  version 1115.7.3
Load command 11
      cmd LC_SOURCE_VERSION
  cmdsize 16
  version 0.0
Load command 12
       cmd LC_MAIN
   cmdsize 24
  entryoff 16168
 stacksize 0
Load command 13
          cmd LC_LOAD_DYLIB
      cmdsize 56
         name /usr/lib/libSystem.B.dylib (offset 24)
   time stamp 2 Wed Dec 31 21:00:02 1969
      current version 1351.0.0
compatibility version 1.0.0
Load command 14
      cmd LC_FUNCTION_STARTS
  cmdsize 16
  dataoff 32928
 datasize 8
Load command 15
      cmd LC_DATA_IN_CODE
  cmdsize 16
  dataoff 32936
 datasize 0
Load command 16
      cmd LC_CODE_SIGNATURE
  cmdsize 16
  dataoff 33056
 datasize 408
