// Function: _longjmp
// Entry:    00484244
// Size:     120 bytes
// Conv:     __cdecl
// Signature: void _longjmp(int * _Buf, int _Value)
// Decompiled by Ghidra 12.1.2


/* WARNING: Unable to track spacebase fully for stack */
/* Library Function - Single Match
    _longjmp
   
   Libraries: Visual Studio 1998 Debug, Visual Studio 1998 Release, Visual Studio 2003 Debug, Visual
   Studio 2003 Release */

void __cdecl _longjmp(int *_Buf,int _Value)

{
  void *pvVar1;
  int iVar2;
  
  pvVar1 = (void *)_Buf[6];
  if (pvVar1 != ExceptionList) {
    __global_unwind2(pvVar1);
  }
  if (pvVar1 != (void *)0x0) {
    iVar2 = FUN_0048ca41(_Buf + 8);
    if ((iVar2 == 0) || (_Buf[8] != 0x56433230)) {
      __local_unwind2(pvVar1,_Buf[7]);
    }
    else if ((code *)_Buf[9] != (code *)0x0) {
      (*(code *)_Buf[9])(_Buf);
    }
  }
  FUN_00482b9a(0);
                    /* WARNING: Could not recover jumptable at 0x004842b9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)_Buf[5])();
  return;
}

