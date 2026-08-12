// Function: DeleteDC
// Entry:    00499345
// Size:     22 bytes
// Conv:     __thiscall
// Signature: int DeleteDC(CDC * this)
// Decompiled by Ghidra 12.1.2


/* Library Function - Single Match
    public: int __thiscall CDC::DeleteDC(void)
   
   Libraries: Visual Studio 2003 Release, Visual Studio 2005 Release, Visual Studio 2008 Release,
   Visual Studio 2010 Release */

int __thiscall CDC::DeleteDC(CDC *this)

{
  HDC__ *hdc;
  BOOL BVar1;
  
  if (*(int *)(this + 4) == 0) {
    return 0;
  }
  hdc = Detach(this);
  BVar1 = ::DeleteDC(hdc);
  return BVar1;
}

