// Function: __amsg_exit
// Entry:    00481f6d
// Size:     34 bytes
// Conv:     __cdecl
// Signature: void __amsg_exit(int param_1)
// Decompiled by Ghidra 12.1.2


/* Library Function - Single Match
    __amsg_exit
   
   Library: Visual Studio 2003 Release */

void __cdecl __amsg_exit(int param_1)

{
  if (DAT_03010f40 == 1) {
    FUN_004873f3();
  }
  FUN_0048742c(param_1);
  (*(code *)PTR___exit_02fd8970)(0xff);
  return;
}

