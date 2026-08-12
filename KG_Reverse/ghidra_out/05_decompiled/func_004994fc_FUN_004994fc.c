// Function: FUN_004994fc
// Entry:    004994fc
// Size:     34 bytes
// Conv:     unknown
// Signature: undefined FUN_004994fc(void)
// Decompiled by Ghidra 12.1.2


void __thiscall FUN_004994fc(int param_1,int param_2,BOOL param_3)

{
  HPALETTE pHVar1;
  
  pHVar1 = (HPALETTE)0x0;
  if (param_2 != 0) {
    pHVar1 = *(HPALETTE *)(param_2 + 4);
  }
  pHVar1 = SelectPalette(*(HDC *)(param_1 + 4),pHVar1,param_3);
  FUN_00499e08(pHVar1);
  return;
}

