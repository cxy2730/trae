// Function: FUN_00499a5b
// Entry:    00499a5b
// Size:     72 bytes
// Conv:     unknown
// Signature: undefined FUN_00499a5b(void)
// Decompiled by Ghidra 12.1.2


void __thiscall FUN_00499a5b(int param_1,int param_2,int param_3)

{
  HRGN pHVar1;
  
  pHVar1 = (HRGN)0x0;
  if (*(HDC *)(param_1 + 4) != *(HDC *)(param_1 + 8)) {
    if (param_2 != 0) {
      pHVar1 = *(HRGN *)(param_2 + 4);
    }
    ExtSelectClipRgn(*(HDC *)(param_1 + 4),pHVar1,param_3);
  }
  if (*(HDC *)(param_1 + 8) != (HDC)0x0) {
    if (param_2 == 0) {
      pHVar1 = (HRGN)0x0;
    }
    else {
      pHVar1 = *(HRGN *)(param_2 + 4);
    }
    ExtSelectClipRgn(*(HDC *)(param_1 + 8),pHVar1,param_3);
  }
  return;
}

