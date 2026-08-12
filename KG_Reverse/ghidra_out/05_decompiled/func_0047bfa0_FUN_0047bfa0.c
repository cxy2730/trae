// Function: FUN_0047bfa0
// Entry:    0047bfa0
// Size:     262 bytes
// Conv:     unknown
// Signature: undefined FUN_0047bfa0(void)
// Decompiled by Ghidra 12.1.2


void FUN_0047bfa0(int *param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int local_84;
  int local_80 [8];
  int local_60 [8];
  undefined1 local_40 [64];
  
  local_80[0] = *param_1;
  local_60[0] = DAT_0300d41c * local_80[0] >> 10;
  piVar2 = param_1 + 1;
  local_84 = 7;
  piVar3 = param_1 + 0xe;
  do {
    *(int *)(((int)local_80 - (int)param_1) + (int)piVar2) = *piVar3 + *piVar2;
    iVar1 = *piVar2;
    piVar2 = piVar2 + 1;
    *(int *)((int)local_80 + (0x1c - (int)param_1) + (int)piVar2) =
         *(int *)((0x300d418 - (int)param_1) + (int)piVar2) * (iVar1 - *piVar3) >> 10;
    local_84 = local_84 + -1;
    piVar3 = piVar3 + -1;
  } while (local_84 != 0);
  FUN_0047bae0(2,8,local_80,local_40,&DAT_0300d43c);
  FUN_0047bae0(4,4,local_40,local_80,&DAT_0300d44c);
  FUN_0047bba0(8,local_80,local_40);
  FUN_0047bbf0(4,4,local_40,local_80);
  FUN_0047bbf0(2,8,local_80,local_40);
  FUN_0047bcf0(0x10,local_40,param_2);
  return;
}

