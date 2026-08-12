// Function: FUN_00498a96
// Entry:    00498a96
// Size:     39 bytes
// Conv:     unknown
// Signature: undefined FUN_00498a96(void)
// Decompiled by Ghidra 12.1.2


void FUN_00498a96(UINT param_1,LPSTR param_2,int param_3)

{
  int iVar1;
  
  iVar1 = FUN_0049c724();
  iVar1 = LoadStringA(*(HINSTANCE *)(iVar1 + 0xc),param_1,param_2,param_3);
  if (iVar1 == 0) {
    *param_2 = '\0';
  }
  return;
}

