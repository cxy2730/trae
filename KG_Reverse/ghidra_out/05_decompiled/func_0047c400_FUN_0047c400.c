// Function: FUN_0047c400
// Entry:    0047c400
// Size:     160 bytes
// Conv:     unknown
// Signature: undefined FUN_0047c400(void)
// Decompiled by Ghidra 12.1.2


void FUN_0047c400(int *param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  int local_40 [4];
  int aiStack_30 [4];
  undefined1 local_20 [32];
  
  piVar8 = param_1 + 0xe;
  iVar6 = 0;
  do {
    iVar1 = param_1[1];
    iVar2 = *param_1;
    iVar3 = *piVar8;
    iVar4 = piVar8[1];
    iVar7 = iVar6 + 4;
    param_1 = param_1 + 2;
    piVar8 = piVar8 + -2;
    iVar5 = *(int *)((int)&DAT_0300d43c + iVar6);
    *(int *)((int)local_40 + iVar6) = iVar4 + iVar3 + iVar1 + iVar2 >> 1;
    *(int *)((int)aiStack_30 + iVar6) = iVar5 * ((iVar1 + iVar2) - (iVar4 + iVar3)) >> 0xb;
    iVar6 = iVar7;
  } while (iVar7 < 0x10);
  FUN_0047bae0(2,4,local_40,local_20,&DAT_0300d44c);
  FUN_0047bba0(4,local_20,local_40);
  FUN_0047bbf0(2,4,local_40,local_20);
  FUN_0047bcf0(8,local_20,param_2);
  return;
}

