// Function: FUN_0047ecc0
// Entry:    0047ecc0
// Size:     286 bytes
// Conv:     unknown
// Signature: undefined FUN_0047ecc0(void)
// Decompiled by Ghidra 12.1.2


void FUN_0047ecc0(float *param_1,undefined4 param_2)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  int iVar4;
  float local_100 [16];
  float local_c0 [16];
  undefined1 local_80 [128];
  
  iVar4 = 0x10;
  pfVar1 = param_1;
  pfVar3 = param_1 + 0x1f;
  do {
    pfVar2 = pfVar1 + 1;
    iVar4 = iVar4 + -1;
    *(float *)((int)local_100 + (-4 - (int)param_1) + (int)pfVar2) = *pfVar3 + *pfVar1;
    *(float *)((int)local_100 + (0x3c - (int)param_1) + (int)pfVar2) =
         (*pfVar1 - *pfVar3) * *(float *)((0x30115bc - (int)param_1) + (int)pfVar2);
    pfVar1 = pfVar2;
    pfVar3 = pfVar3 + -1;
  } while (iVar4 != 0);
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

