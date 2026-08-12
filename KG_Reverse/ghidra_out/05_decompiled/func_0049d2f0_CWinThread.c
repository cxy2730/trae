// Function: CWinThread
// Entry:    0049d2f0
// Size:     61 bytes
// Conv:     __thiscall
// Signature: undefined CWinThread(CWinThread * this)
// Decompiled by Ghidra 12.1.2


/* Library Function - Single Match
    public: __thiscall CWinThread::CWinThread(void)
   
   Library: Visual Studio 2003 Release */

undefined4 * __thiscall CWinThread::CWinThread(CWinThread *this)

{
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_004858b8();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  FUN_00497a60();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *extraout_ECX = &PTR_LAB_02f9c448;
  extraout_ECX[0x13] = 0;
  extraout_ECX[0x14] = 0;
  FUN_0049d32d();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return extraout_ECX;
}

