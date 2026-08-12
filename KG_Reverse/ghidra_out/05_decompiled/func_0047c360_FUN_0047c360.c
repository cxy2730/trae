// Function: FUN_0047c360
// Entry:    0047c360
// Size:     145 bytes
// Conv:     unknown
// Signature: undefined FUN_0047c360(void)
// Decompiled by Ghidra 12.1.2


void FUN_0047c360(int *param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int local_40 [4];
  int aiStack_30 [4];
  undefined1 local_20 [32];
  
  iVar3 = 0;
  piVar4 = param_1 + 0xe;
  do {
    iVar1 = *param_1;
    param_1 = param_1 + 2;
    *(int *)((int)local_40 + iVar3) = *piVar4 + iVar1;
    iVar2 = *piVar4;
    piVar4 = piVar4 + -2;
    *(int *)((int)aiStack_30 + iVar3) = (iVar1 - iVar2) * *(int *)((int)&DAT_0300d43c + iVar3) >> 10
    ;
    iVar3 = iVar3 + 4;
  } while (iVar3 < 0x10);
  FUN_0047bae0(2,4,local_40,local_20,&DAT_0300d44c);
  FUN_0047bba0(4,local_20,local_40);
  FUN_0047bbf0(2,4,local_40,local_20);
  FUN_0047bcf0(8,local_20,param_2);
  return;
}

