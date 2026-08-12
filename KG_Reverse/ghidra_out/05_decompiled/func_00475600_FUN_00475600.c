// Function: FUN_00475600
// Entry:    00475600
// Size:     140 bytes
// Conv:     unknown
// Signature: undefined FUN_00475600(void)
// Decompiled by Ghidra 12.1.2


undefined4 __thiscall FUN_00475600(int param_1,int *param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  FUN_0046bae0();
  if (*(char *)(param_1 + 8) != '\0') {
    FUN_0046baf0();
    return 0x1c;
  }
  *param_2 = *(int *)(param_1 + 0x2c) + *(int *)(param_1 + 0x1c);
  uVar1 = *(uint *)(param_1 + 0x1c);
  uVar2 = *(uint *)(param_1 + 0x18);
  if ((int)uVar2 < (int)uVar1) {
    uVar3 = *(uint *)(param_1 + 0x10);
    if (uVar2 < *(uint *)(param_1 + 0x10)) {
      uVar3 = uVar2;
    }
    uVar3 = (*(int *)(param_1 + 0x14) - uVar1) + uVar3;
  }
  else if (uVar1 == uVar2) {
    if (*(int *)(param_1 + 0xc) == 0) goto LAB_0047567a;
    uVar3 = 0;
  }
  else {
    uVar3 = uVar2 - uVar1;
  }
  if (uVar3 < param_3) {
    FUN_0046baf0();
    return 7;
  }
LAB_0047567a:
  *(uint *)(param_1 + 0x24) = param_3;
  FUN_0046baf0();
  return 0;
}

