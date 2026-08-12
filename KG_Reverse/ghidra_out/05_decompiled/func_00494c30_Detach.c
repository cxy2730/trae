// Function: Detach
// Entry:    00494c30
// Size:     46 bytes
// Conv:     __thiscall
// Signature: HWND__ * Detach(CWnd * this)
// Decompiled by Ghidra 12.1.2


/* Library Function - Single Match
    public: struct HWND__ * __thiscall CWnd::Detach(void)
   
   Library: Visual Studio 2008 Release */

HWND__ * __thiscall CWnd::Detach(CWnd *this)

{
  HWND__ *pHVar1;
  int iVar2;
  
  pHVar1 = *(HWND__ **)(this + 0x1c);
  if (pHVar1 != (HWND__ *)0x0) {
    iVar2 = FUN_00494b40(0);
    if (iVar2 != 0) {
      FUN_00492be8(*(undefined4 *)(this + 0x1c));
    }
    *(undefined4 *)(this + 0x1c) = 0;
  }
  *(undefined4 *)(this + 0x38) = 0;
  return pHVar1;
}

