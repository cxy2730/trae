// Function: FUN_0041ce10
// Entry:    0041ce10
// Size:     57 bytes
// Conv:     unknown
// Signature: undefined FUN_0041ce10(void)
// Decompiled by Ghidra 12.1.2


void FUN_0041ce10(HINSTANCE param_1,LPCSTR param_2,undefined4 *param_3,undefined4 *param_4)

{
  HANDLE pvVar1;
  
  pvVar1 = LoadImageA(param_1,param_2,1,0x20,0x20,0);
  *param_3 = pvVar1;
  pvVar1 = LoadImageA(param_1,param_2,1,0x10,0x10,0);
  *param_4 = pvVar1;
  return;
}

