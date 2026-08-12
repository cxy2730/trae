// Function: FUN_0049989e
// Entry:    0049989e
// Size:     64 bytes
// Conv:     unknown
// Signature: undefined FUN_0049989e(void)
// Decompiled by Ghidra 12.1.2


void __thiscall FUN_0049989e(int param_1,int param_2)

{
  HRGN pHVar1;
  
  pHVar1 = (HRGN)0x0;
  if (*(HDC *)(param_1 + 4) != *(HDC *)(param_1 + 8)) {
    if (param_2 != 0) {
      pHVar1 = *(HRGN *)(param_2 + 4);
    }
    SelectClipRgn(*(HDC *)(param_1 + 4),pHVar1);
  }
  if (*(HDC *)(param_1 + 8) != (HDC)0x0) {
    if (param_2 == 0) {
      pHVar1 = (HRGN)0x0;
    }
    else {
      pHVar1 = *(HRGN *)(param_2 + 4);
    }
    SelectClipRgn(*(HDC *)(param_1 + 8),pHVar1);
  }
  return;
}

