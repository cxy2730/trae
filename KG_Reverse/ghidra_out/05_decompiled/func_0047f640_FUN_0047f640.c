// Function: FUN_0047f640
// Entry:    0047f640
// Size:     219 bytes
// Conv:     unknown
// Signature: undefined FUN_0047f640(void)
// Decompiled by Ghidra 12.1.2


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0047f640(float *param_1,undefined4 param_2)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  float *pfVar5;
  float local_40;
  float afStack_3c [4];
  float afStack_2c [3];
  undefined1 local_20 [32];
  
  fVar1 = (param_1[1] + *param_1) * 0.5;
  fVar2 = (param_1[0xf] + param_1[0xe]) * 0.5;
  local_40 = fVar2 + fVar1;
  afStack_3c[3] = (fVar1 - fVar2) * _DAT_03011620;
  iVar3 = 0;
  pfVar5 = param_1 + 0xc;
  do {
    iVar4 = iVar3 + 4;
    fVar1 = (param_1[3] + param_1[2]) * 0.5;
    fVar2 = (pfVar5[1] + *pfVar5) * 0.5;
    *(float *)((int)afStack_3c + iVar3) = fVar2 + fVar1;
    *(float *)((int)afStack_2c + iVar3) = (fVar1 - fVar2) * *(float *)((int)&DAT_03011624 + iVar3);
    iVar3 = iVar4;
    pfVar5 = pfVar5 + -2;
    param_1 = param_1 + 2;
  } while (iVar4 < 0xc);
  FUN_0047ede0(2,4,&local_40,local_20,&DAT_03011630);
  FUN_0047ede0(4,2,local_20,&local_40,&DAT_03011638);
  FUN_0047eea0(2,4,&local_40,local_20);
  FUN_0047eea0(1,8,local_20,param_2);
  return;
}

