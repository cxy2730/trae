// Function: FUN_0047f590
// Entry:    0047f590
// Size:     173 bytes
// Conv:     unknown
// Signature: undefined FUN_0047f590(void)
// Decompiled by Ghidra 12.1.2


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0047f590(float *param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  float *pfVar3;
  float local_40;
  float afStack_3c [4];
  float afStack_2c [3];
  undefined1 local_20 [32];
  
  local_40 = *param_1 + param_1[0xe];
  afStack_3c[3] = (*param_1 - param_1[0xe]) * _DAT_03011620;
  iVar1 = 0;
  pfVar3 = param_1 + 0xc;
  do {
    param_1 = param_1 + 2;
    iVar2 = iVar1 + 4;
    *(float *)((int)afStack_3c + iVar1) = *param_1 + *pfVar3;
    *(float *)((int)afStack_2c + iVar1) =
         (*param_1 - *pfVar3) * *(float *)((int)&DAT_03011624 + iVar1);
    iVar1 = iVar2;
    pfVar3 = pfVar3 + -2;
  } while (iVar2 < 0xc);
  FUN_0047ede0(2,4,&local_40,local_20,&DAT_03011630);
  FUN_0047ede0(4,2,local_20,&local_40,&DAT_03011638);
  FUN_0047eea0(2,4,&local_40,local_20);
  FUN_0047eea0(1,8,local_20,param_2);
  return;
}

