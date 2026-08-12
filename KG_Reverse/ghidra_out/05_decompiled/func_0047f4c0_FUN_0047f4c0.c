// Function: FUN_0047f4c0
// Entry:    0047f4c0
// Size:     194 bytes
// Conv:     unknown
// Signature: undefined FUN_0047f4c0(void)
// Decompiled by Ghidra 12.1.2


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0047f4c0(float *param_1,undefined4 param_2)

{
  float *pfVar1;
  float *pfVar2;
  int iVar3;
  float *pfVar4;
  float local_40 [4];
  float local_30 [4];
  undefined1 local_20 [32];
  
  local_40[0] = *param_1 + param_1[7];
  iVar3 = 3;
  local_30[0] = (*param_1 - param_1[7]) * _DAT_03011620;
  pfVar1 = param_1 + 1;
  pfVar4 = param_1 + 6;
  do {
    pfVar2 = pfVar1 + 1;
    iVar3 = iVar3 + -1;
    *(float *)((int)local_30 + (-0x14 - (int)param_1) + (int)pfVar2) = *pfVar1 + *pfVar4;
    *(float *)((int)local_40 + (0xc - (int)param_1) + (int)pfVar2) =
         (*pfVar1 - *pfVar4) * *(float *)((0x301161c - (int)param_1) + (int)pfVar2);
    pfVar1 = pfVar2;
    pfVar4 = pfVar4 + -1;
  } while (iVar3 != 0);
  FUN_0047ede0(2,4,local_40,local_20,&DAT_03011630);
  FUN_0047ede0(4,2,local_20,local_40,&DAT_03011638);
  FUN_0047eea0(2,4,local_40,local_20);
  FUN_0047eea0(1,8,local_20,param_2);
  return;
}

