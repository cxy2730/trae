// Function: FUN_00499605
// Entry:    00499605
// Size:     47 bytes
// Conv:     unknown
// Signature: undefined FUN_00499605(void)
// Decompiled by Ghidra 12.1.2


COLORREF __thiscall FUN_00499605(int param_1,COLORREF param_2)

{
  COLORREF CVar1;
  
  CVar1 = 0xffffffff;
  if (*(HDC *)(param_1 + 4) != *(HDC *)(param_1 + 8)) {
    CVar1 = SetTextColor(*(HDC *)(param_1 + 4),param_2);
  }
  if (*(HDC *)(param_1 + 8) != (HDC)0x0) {
    CVar1 = SetTextColor(*(HDC *)(param_1 + 8),param_2);
  }
  return CVar1;
}

