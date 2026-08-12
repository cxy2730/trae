// Function: FUN_0047f3c0
// Entry:    0047f3c0
// Size:     253 bytes
// Conv:     unknown
// Signature: undefined FUN_0047f3c0(void)
// Decompiled by Ghidra 12.1.2


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0047f3c0(float *param_1,undefined4 param_2)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  float *pfVar5;
  float local_80;
  float afStack_7c [7];
  float local_60;
  float afStack_5c [7];
  undefined1 local_40 [64];
  
  local_80 = (param_1[1] + *param_1) * 0.5;
  local_60 = _DAT_03011600 * local_80;
  iVar3 = 0;
  pfVar5 = param_1 + 0x1c;
  do {
    iVar4 = iVar3 + 4;
    fVar1 = (param_1[3] + param_1[2]) * 0.5;
    fVar2 = (pfVar5[1] + *pfVar5) * 0.5;
    *(float *)((int)afStack_7c + iVar3) = fVar2 + fVar1;
    *(float *)((int)afStack_5c + iVar3) = (fVar1 - fVar2) * *(float *)((int)&DAT_03011604 + iVar3);
    iVar3 = iVar4;
    pfVar5 = pfVar5 + -2;
    param_1 = param_1 + 2;
  } while (iVar4 < 0x1c);
  FUN_0047ede0(2,8,&local_80,local_40,&DAT_03011620);
  FUN_0047ede0(4,4,local_40,&local_80,&DAT_03011630);
  FUN_0047ede0(8,2,&local_80,local_40,&DAT_03011638);
  FUN_0047eea0(4,4,local_40,&local_80);
  FUN_0047eea0(2,8,&local_80,local_40);
  FUN_0047eea0(1,0x10,local_40,param_2);
  return;
}

