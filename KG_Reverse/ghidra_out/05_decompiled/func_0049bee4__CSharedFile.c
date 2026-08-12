// Function: ~CSharedFile
// Entry:    0049bee4
// Size:     62 bytes
// Conv:     __thiscall
// Signature: void ~CSharedFile(CSharedFile * this)
// Decompiled by Ghidra 12.1.2


/* Library Function - Single Match
    public: virtual __thiscall CSharedFile::~CSharedFile(void)
   
   Library: Visual Studio 2003 Release */

void __thiscall CSharedFile::~CSharedFile(CSharedFile *this)

{
  CMemFile *this_00;
  int unaff_EBP;
  
  FUN_004858b8();
  *(CMemFile **)(unaff_EBP + -0x10) = this_00;
  *(undefined ***)this_00 = &PTR_LAB_02f9c2b0;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (*(int *)(this_00 + 0x20) != 0) {
    FUN_0049ab34();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  CMemFile::~CMemFile(this_00);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}

