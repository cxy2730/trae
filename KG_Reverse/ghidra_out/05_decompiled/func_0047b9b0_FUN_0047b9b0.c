// Function: FUN_0047b9b0
// Entry:    0047b9b0
// Size:     300 bytes
// Conv:     unknown
// Signature: undefined FUN_0047b9b0(void)
// Decompiled by Ghidra 12.1.2


void FUN_0047b9b0(int *param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int local_104;
  int local_100 [16];
  int local_c0 [16];
  undefined1 local_80 [128];
  
  local_104 = 0x10;
  piVar2 = param_1;
  piVar3 = param_1 + 0x1f;
  do {
    iVar1 = *piVar2;
    piVar2 = piVar2 + 1;
    *(int *)((int)local_100 + (-4 - (int)param_1) + (int)piVar2) = iVar1 + *piVar3;
    *(int *)((int)local_100 + (0x3c - (int)param_1) + (int)piVar2) =
         *(int *)((0x300d3d8 - (int)param_1) + (int)piVar2) * (iVar1 - *piVar3) >> 10;
    local_104 = local_104 + -1;
    piVar3 = piVar3 + -1;
  } while (local_104 != 0);
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

