// Function: Detach
// Entry:    00499314
// Size:     49 bytes
// Conv:     __thiscall
// Signature: HDC__ * Detach(CDC * this)
// Decompiled by Ghidra 12.1.2


/* Library Function - Single Match
    public: struct HDC__ * __thiscall CDC::Detach(void)
   
   Library: Visual Studio 2003 Release */

HDC__ * __thiscall CDC::Detach(CDC *this)

{
  HDC__ *pHVar1;
  int iVar2;
  
  pHVar1 = *(HDC__ **)(this + 4);
  if (pHVar1 != (HDC__ *)0x0) {
    iVar2 = FUN_00499256(0);
    if (iVar2 != 0) {
      FUN_00492be8(*(undefined4 *)(this + 4));
    }
  }
  (**(code **)(*(int *)this + 0x14))();
  *(undefined4 *)(this + 4) = 0;
  return pHVar1;
}

