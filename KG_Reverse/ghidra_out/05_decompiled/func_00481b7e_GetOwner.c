// Function: GetOwner
// Entry:    00481b7e
// Size:     23 bytes
// Conv:     __thiscall
// Signature: CWnd * GetOwner(CWnd * this)
// Decompiled by Ghidra 12.1.2


/* Library Function - Single Match
    public: class CWnd * __thiscall CWnd::GetOwner(void)const 
   
   Libraries: Visual Studio 2003 Release, Visual Studio 2005 Release */

CWnd * __thiscall CWnd::GetOwner(CWnd *this)

{
  HWND pHVar1;
  CWnd *pCVar2;
  
  pHVar1 = *(HWND *)(this + 0x20);
  if (pHVar1 == (HWND)0x0) {
    pHVar1 = GetParent(*(HWND *)(this + 0x1c));
  }
  pCVar2 = (CWnd *)FUN_00494bb2(pHVar1);
  return pCVar2;
}

