// Function: FUN_0047be80
// Entry:    0047be80
// Size:     285 bytes
// Conv:     unknown
// Signature: undefined FUN_0047be80(void)
// Decompiled by Ghidra 12.1.2


void FUN_0047be80(int *param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  int local_100 [16];
  int aiStack_c0 [16];
  undefined1 local_80 [128];
  
  piVar8 = param_1 + 0x3e;
  iVar6 = 0;
  do {
    iVar1 = param_1[1];
    iVar2 = *param_1;
    iVar3 = *piVar8;
    iVar4 = piVar8[1];
    iVar7 = iVar6 + 4;
    param_1 = param_1 + 2;
    piVar8 = piVar8 + -2;
    iVar5 = *(int *)((int)&DAT_0300d3dc + iVar6);
    *(int *)((int)local_100 + iVar6) = iVar4 + iVar3 + iVar1 + iVar2 >> 1;
    *(int *)((int)aiStack_c0 + iVar6) = iVar5 * ((iVar1 + iVar2) - (iVar4 + iVar3)) >> 0xb;
    iVar6 = iVar7;
  } while (iVar7 < 0x40);
  FUN_0047bae0(2,0x10,local_100,local_80,&DAT_0300d41c);
  FUN_0047bae0(4,8,local_80,local_100,&DAT_0300d43c);
  FUN_0047bae0(8,4,local_100,local_80,&DAT_0300d44c);
  FUN_0047bba0(0x10,local_80,local_100);
  FUN_0047bbf0(8,4,local_100,local_80);
  FUN_0047bbf0(4,8,local_80,local_100);
  FUN_0047bbf0(2,0x10,local_100,local_80);
  FUN_0047bcf0(0x20,local_80,param_2);
  return;
}

