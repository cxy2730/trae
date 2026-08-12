// Function: __global_unwind2
// Entry:    00482ac4
// Size:     32 bytes
// Conv:     unknown
// Signature: undefined __global_unwind2(void)
// Decompiled by Ghidra 12.1.2


/* Library Function - Single Match
    __global_unwind2
   
   Libraries: Visual Studio 1998 Debug, Visual Studio 1998 Release, Visual Studio 2003 Debug, Visual
   Studio 2003 Release */

void __global_unwind2(PVOID param_1)

{
  RtlUnwind(param_1,(PVOID)0x482adc,(PEXCEPTION_RECORD)0x0,(PVOID)0x0);
  return;
}

