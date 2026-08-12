// Function: FUN_0047f0b0
// Entry:    0047f0b0
// Size:     291 bytes
// Conv:     unknown
// Signature: undefined FUN_0047f0b0(void)
// Decompiled by Ghidra 12.1.2


void FUN_0047f0b0(float *param_1,undefined4 param_2)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  float *pfVar6;
  float local_100 [16];
  float afStack_c0 [16];
  undefined1 local_80 [128];
  
  iVar4 = 0;
  pfVar6 = param_1 + 0x3e;
  do {
    pfVar1 = param_1 + 1;
    fVar2 = *param_1;
    iVar5 = iVar4 + 4;
    param_1 = param_1 + 2;
    fVar2 = (*pfVar1 + fVar2) * 0.5;
    fVar3 = (pfVar6[1] + *pfVar6) * 0.5;
    *(float *)((int)local_100 + iVar4) = fVar3 + fVar2;
    *(float *)((int)afStack_c0 + iVar4) = (fVar2 - fVar3) * *(float *)((int)&DAT_030115c0 + iVar4);
    iVar4 = iVar5;
    pfVar6 = pfVar6 + -2;
  } while (iVar5 < 0x40);
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

