// Function: FUN_0047f2e0
// Entry:    0047f2e0
// Size:     219 bytes
// Conv:     unknown
// Signature: undefined FUN_0047f2e0(void)
// Decompiled by Ghidra 12.1.2


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0047f2e0(float *param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  float *pfVar3;
  float local_80;
  float afStack_7c [7];
  float local_60;
  float afStack_5c [7];
  undefined1 local_40 [64];
  
  local_60 = _DAT_03011600 * *param_1;
  local_80 = *param_1;
  iVar1 = 0;
  pfVar3 = param_1 + 0x1c;
  do {
    param_1 = param_1 + 2;
    iVar2 = iVar1 + 4;
    *(float *)((int)afStack_7c + iVar1) = *pfVar3 + *param_1;
    *(float *)((int)afStack_5c + iVar1) =
         (*param_1 - *pfVar3) * *(float *)((int)&DAT_03011604 + iVar1);
    iVar1 = iVar2;
    pfVar3 = pfVar3 + -2;
  } while (iVar2 < 0x1c);
  FUN_0047ede0(2,8,&local_80,local_40,&DAT_03011620);
  FUN_0047ede0(4,4,local_40,&local_80,&DAT_03011630);
  FUN_0047ede0(8,2,&local_80,local_40,&DAT_03011638);
  FUN_0047eea0(4,4,local_40,&local_80);
  FUN_0047eea0(2,8,&local_80,local_40);
  FUN_0047eea0(1,0x10,local_40,param_2);
  return;
}

