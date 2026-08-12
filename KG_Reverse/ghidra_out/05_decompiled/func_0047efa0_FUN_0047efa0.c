// Function: FUN_0047efa0
// Entry:    0047efa0
// Size:     268 bytes
// Conv:     unknown
// Signature: undefined FUN_0047efa0(void)
// Decompiled by Ghidra 12.1.2


void FUN_0047efa0(float *param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  float *pfVar3;
  float local_100 [16];
  float afStack_c0 [16];
  undefined1 local_80 [128];
  
  iVar1 = 0;
  pfVar3 = param_1 + 0x3e;
  do {
    iVar2 = iVar1 + 4;
    *(float *)((int)local_100 + iVar1) = *param_1 + *pfVar3;
    *(float *)((int)afStack_c0 + iVar1) =
         (*param_1 - *pfVar3) * *(float *)((int)&DAT_030115c0 + iVar1);
    iVar1 = iVar2;
    param_1 = param_1 + 2;
    pfVar3 = pfVar3 + -2;
  } while (iVar2 < 0x40);
  FUN_0047ede0(2,0x10,local_100,local_80,&DAT_03011600);
  FUN_0047ede0(4,8,local_80,local_100,&DAT_03011620);
  FUN_0047ede0(8,4,local_100,local_80,&DAT_03011630);
  FUN_0047ede0(0x10,2,local_80,local_100,&DAT_03011638);
  FUN_0047eea0(8,4,local_100,local_80);
  FUN_0047eea0(4,8,local_80,local_100);
  FUN_0047eea0(2,0x10,local_100,local_80);
  FUN_0047eea0(1,0x20,local_80,param_2);
  return;
}

