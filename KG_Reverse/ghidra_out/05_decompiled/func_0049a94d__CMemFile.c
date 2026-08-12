// Function: ~CMemFile
// Entry:    0049a94d
// Size:     76 bytes
// Conv:     __thiscall
// Signature: void ~CMemFile(CMemFile * this)
// Decompiled by Ghidra 12.1.2


/* Library Function - Single Match
    public: virtual __thiscall CMemFile::~CMemFile(void)
   
   Library: Visual Studio 2003 Release */

void __thiscall CMemFile::~CMemFile(CMemFile *this)

{
  int iVar1;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_004858b8();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  *extraout_ECX = &PTR_LAB_02f9ab38;
  iVar1 = extraout_ECX[8];
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (iVar1 != 0) {
    FUN_0049ab34();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  extraout_ECX[4] = 0;
  extraout_ECX[5] = 0;
  extraout_ECX[6] = 0;
  extraout_ECX[7] = 0;
  FUN_00493819();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}

