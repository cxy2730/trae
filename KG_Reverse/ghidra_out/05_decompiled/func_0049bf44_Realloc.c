// Function: Realloc
// Entry:    0049bf44
// Size:     56 bytes
// Conv:     __thiscall
// Signature: uchar * Realloc(CSharedFile * this, uchar * param_1, ulong param_2)
// Decompiled by Ghidra 12.1.2


/* Library Function - Single Match
    protected: virtual unsigned char * __thiscall CSharedFile::Realloc(unsigned char *,unsigned
   long)
   
   Library: Visual Studio 2003 Release */

uchar * __thiscall CSharedFile::Realloc(CSharedFile *this,uchar *param_1,ulong param_2)

{
  HGLOBAL hMem;
  uchar *puVar1;
  
  if (*(int *)(this + 0x30) != 0) {
    GlobalUnlock(*(HGLOBAL *)(this + 0x2c));
    hMem = GlobalReAlloc(*(HGLOBAL *)(this + 0x2c),param_2,*(UINT *)(this + 0x28));
    if (hMem != (HGLOBAL)0x0) {
      *(HGLOBAL *)(this + 0x2c) = hMem;
      puVar1 = GlobalLock(hMem);
      return puVar1;
    }
  }
  return (uchar *)0x0;
}

