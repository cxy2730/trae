// Function: FUN_0041dbb0
// Entry:    0041dbb0
// Size:     36 bytes
// Conv:     unknown
// Signature: undefined FUN_0041dbb0(void)
// Decompiled by Ghidra 12.1.2


void __fastcall FUN_0041dbb0(int param_1)

{
  HWND pHVar1;
  int iVar2;
  
  pHVar1 = GetCapture();
  iVar2 = FUN_00494bb2(pHVar1);
  if (iVar2 == param_1) {
    ReleaseCapture();
  }
  FUN_00494b19();
  return;
}

