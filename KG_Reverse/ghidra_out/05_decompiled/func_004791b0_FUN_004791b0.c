// Function: FUN_004791b0
// Entry:    004791b0
// Size:     195 bytes
// Conv:     unknown
// Signature: undefined FUN_004791b0(void)
// Decompiled by Ghidra 12.1.2


void FUN_004791b0(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  if (param_3 == 0) {
    iVar1 = 0x12;
    do {
      FUN_0047ecc0(param_1,&DAT_0300c7bc + DAT_0300bfb4);
      FUN_0047f890(&DAT_0300c7bc,DAT_0300bfb4,param_2);
      param_1 = param_1 + 0x80;
      param_2 = param_2 + 0x80;
      DAT_0300bfb4 = DAT_0300bfb4 - 0x20 & 0x1ff;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
    return;
  }
  iVar1 = 0x12;
  param_2 = param_2 + 2;
  do {
    FUN_0047ecc0(param_1,&DAT_0300bfb8 + DAT_0300c7b8);
    FUN_0047f890(&DAT_0300bfb8,DAT_0300c7b8,param_2);
    param_1 = param_1 + 0x80;
    DAT_0300c7b8 = DAT_0300c7b8 - 0x20 & 0x1ff;
    param_2 = param_2 + 0x80;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return;
}

