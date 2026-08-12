// Function: FUN_0047bd70
// Entry:    0047bd70
// Size:     270 bytes
// Conv:     unknown
// Signature: undefined FUN_0047bd70(void)
// Decompiled by Ghidra 12.1.2


void FUN_0047bd70(int *param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int local_100 [16];
  int aiStack_c0 [16];
  undefined1 local_80 [128];
  
  iVar3 = 0;
  piVar4 = param_1 + 0x3e;
  do {
    iVar1 = *param_1;
    param_1 = param_1 + 2;
    *(int *)((int)local_100 + iVar3) = *piVar4 + iVar1;
    iVar2 = *piVar4;
    piVar4 = piVar4 + -2;
    *(int *)((int)aiStack_c0 + iVar3) = (iVar1 - iVar2) * *(int *)((int)&DAT_0300d3dc + iVar3) >> 10
    ;
    iVar3 = iVar3 + 4;
  } while (iVar3 < 0x40);
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

