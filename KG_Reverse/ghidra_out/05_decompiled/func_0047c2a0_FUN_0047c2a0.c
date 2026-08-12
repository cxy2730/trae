// Function: FUN_0047c2a0
// Entry:    0047c2a0
// Size:     178 bytes
// Conv:     unknown
// Signature: undefined FUN_0047c2a0(void)
// Decompiled by Ghidra 12.1.2


void FUN_0047c2a0(int *param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int local_40 [4];
  int local_30 [4];
  undefined1 local_20 [32];
  
  piVar2 = param_1;
  piVar4 = param_1 + 7;
  param_1 = (int *)0x4;
  piVar3 = piVar2;
  do {
    iVar1 = *piVar3;
    piVar3 = piVar3 + 1;
    *(int *)((int)local_30 + (-0x14 - (int)piVar2) + (int)piVar3) = iVar1 + *piVar4;
    *(int *)((int)local_40 + (0xc - (int)piVar2) + (int)piVar3) =
         *(int *)((0x300d438 - (int)piVar2) + (int)piVar3) * (iVar1 - *piVar4) >> 10;
    param_1 = (int *)((int)param_1 + -1);
    piVar4 = piVar4 + -1;
  } while (param_1 != (int *)0x0);
  FUN_0047bae0(2,4,local_40,local_20,&DAT_0300d44c);
  FUN_0047bba0(4,local_20,local_40);
  FUN_0047bbf0(2,4,local_40,local_20);
  FUN_0047bcf0(8,local_20,param_2);
  return;
}

