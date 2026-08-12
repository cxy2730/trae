// Function: FUN_0047f1e0
// Entry:    0047f1e0
// Size:     246 bytes
// Conv:     unknown
// Signature: undefined FUN_0047f1e0(void)
// Decompiled by Ghidra 12.1.2


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0047f1e0(float *param_1,undefined4 param_2)

{
  float *pfVar1;
  float *pfVar2;
  int iVar3;
  float *pfVar4;
  float local_80 [8];
  float local_60 [8];
  undefined1 local_40 [64];
  
  local_60[0] = _DAT_03011600 * *param_1;
  local_80[0] = *param_1;
  iVar3 = 7;
  pfVar1 = param_1 + 1;
  pfVar4 = param_1 + 0xe;
  do {
    pfVar2 = pfVar1 + 1;
    iVar3 = iVar3 + -1;
    *(float *)((int)local_80 + (-4 - (int)param_1) + (int)pfVar2) = *pfVar4 + *pfVar1;
    *(float *)((int)local_80 + (0x1c - (int)param_1) + (int)pfVar2) =
         (*pfVar1 - *pfVar4) * *(float *)((0x30115fc - (int)param_1) + (int)pfVar2);
    pfVar1 = pfVar2;
    pfVar4 = pfVar4 + -1;
  } while (iVar3 != 0);
  FUN_0047ede0(2,8,local_80,local_40,&DAT_03011620);
  FUN_0047ede0(4,4,local_40,local_80,&DAT_03011630);
  FUN_0047ede0(8,2,local_80,local_40,&DAT_03011638);
  FUN_0047eea0(4,4,local_40,local_80);
  FUN_0047eea0(2,8,local_80,local_40);
  FUN_0047eea0(1,0x10,local_40,param_2);
  return;
}

