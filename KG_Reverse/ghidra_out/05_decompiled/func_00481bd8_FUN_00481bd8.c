// Function: FUN_00481bd8
// Entry:    00481bd8
// Size:     36 bytes
// Conv:     unknown
// Signature: undefined FUN_00481bd8(void)
// Decompiled by Ghidra 12.1.2


void FUN_00481bd8(ushort param_1)

{
  int iVar1;
  HBITMAP pHVar2;
  
  iVar1 = FUN_0049c724();
  pHVar2 = LoadBitmapA(*(HINSTANCE *)(iVar1 + 0xc),(LPCSTR)(uint)param_1);
  FUN_00499e1d(pHVar2);
  return;
}

