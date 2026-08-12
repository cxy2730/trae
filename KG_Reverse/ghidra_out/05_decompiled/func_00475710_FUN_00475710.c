// Function: FUN_00475710
// Entry:    00475710
// Size:     267 bytes
// Conv:     unknown
// Signature: undefined FUN_00475710(void)
// Decompiled by Ghidra 12.1.2


undefined4 __thiscall FUN_00475710(int param_1,int *param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  if (*(char *)(param_1 + 8) != '\0') {
    return 0x1c;
  }
  FUN_0046bae0();
  if ((*(char *)(param_1 + 0x20) != '\0') && (*(uint *)(param_1 + 0xc) < param_3)) {
    FUN_0046baf0();
    return 0x21;
  }
  if (*(uint *)(param_1 + 0xc) < param_3) {
    FUN_0046baf0();
    return 0x18;
  }
  uVar3 = *(uint *)(param_1 + 0x18);
  uVar4 = *(uint *)(param_1 + 0x1c);
  if ((int)uVar4 < (int)uVar3) {
    uVar1 = *(uint *)(param_1 + 0x10);
    if (uVar1 == 0) {
      uVar4 = (*(int *)(param_1 + 0x14) - uVar3) + uVar4;
    }
    else {
      if (uVar1 <= uVar4) {
        uVar4 = uVar1;
      }
      uVar4 = (*(int *)(param_1 + 0x14) - uVar3) + uVar4;
    }
  }
  else if (uVar3 == uVar4) {
    if (*(uint *)(param_1 + 0xc) != 0) goto LAB_004757b8;
    uVar4 = 0;
  }
  else {
    uVar4 = uVar4 - uVar3;
  }
  if (uVar4 < param_3) {
    FUN_0046baf0();
    return 0x18;
  }
LAB_004757b8:
  iVar2 = *(int *)(param_1 + 0x10);
  uVar3 = (uVar3 - *(int *)(param_1 + 0x14)) + param_3;
  if (iVar2 != 0) {
    if (iVar2 < (int)uVar3) {
      FUN_0046baf0();
      return 2;
    }
    if ((iVar2 != 0) && (0 < (int)uVar3)) {
      puVar5 = *(undefined4 **)(param_1 + 0x2c);
      puVar6 = (undefined4 *)(*(int *)(param_1 + 0x14) + (int)*(undefined4 **)(param_1 + 0x2c));
      for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
        *puVar6 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar6 = puVar6 + 1;
      }
      for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
        *(undefined1 *)puVar6 = *(undefined1 *)puVar5;
        puVar5 = (undefined4 *)((int)puVar5 + 1);
        puVar6 = (undefined4 *)((int)puVar6 + 1);
      }
    }
  }
  *(uint *)(param_1 + 0x28) = param_3;
  FUN_0046baf0();
  *param_2 = *(int *)(param_1 + 0x2c) + *(int *)(param_1 + 0x18);
  return 0;
}

