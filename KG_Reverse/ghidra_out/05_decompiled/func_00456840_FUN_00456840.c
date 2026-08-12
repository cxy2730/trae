// Function: FUN_00456840
// Entry:    00456840
// Size:     322 bytes
// Conv:     unknown
// Signature: undefined FUN_00456840(void)
// Decompiled by Ghidra 12.1.2


void FUN_00456840(int param_1,undefined4 param_2,uint *param_3,uint param_4)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *(int *)(param_1 + 0x1a4);
  if (*(int *)(iVar2 + 0x30) == 0) {
    iVar3 = (**(code **)(*(int *)(param_1 + 0x1a8) + 0xc))
                      (param_1,*(undefined4 *)(iVar2 + 0x38 + *(int *)(iVar2 + 0x40) * 4));
    if (iVar3 == 0) {
      return;
    }
    *(undefined4 *)(iVar2 + 0x30) = 1;
    *(int *)(iVar2 + 0x4c) = *(int *)(iVar2 + 0x4c) + 1;
  }
  iVar3 = *(int *)(iVar2 + 0x44);
  if (iVar3 != 0) {
    if (iVar3 == 1) goto LAB_0045690c;
    if (iVar3 != 2) {
      return;
    }
    (**(code **)(*(int *)(param_1 + 0x1ac) + 4))
              (param_1,*(undefined4 *)(iVar2 + 0x38 + *(int *)(iVar2 + 0x40) * 4),
               (uint *)(iVar2 + 0x34),*(undefined4 *)(iVar2 + 0x48),param_2,param_3,param_4);
    if (*(uint *)(iVar2 + 0x34) < *(uint *)(iVar2 + 0x48)) {
      return;
    }
    *(undefined4 *)(iVar2 + 0x44) = 0;
    if (param_4 <= *param_3) {
      return;
    }
  }
  *(undefined4 *)(iVar2 + 0x34) = 0;
  *(int *)(iVar2 + 0x48) = *(int *)(param_1 + 0x138) + -1;
  if (*(int *)(iVar2 + 0x4c) == *(int *)(param_1 + 0x13c)) {
    FUN_00456aa0(param_1);
  }
  *(undefined4 *)(iVar2 + 0x44) = 1;
LAB_0045690c:
  puVar1 = (uint *)(iVar2 + 0x34);
  (**(code **)(*(int *)(param_1 + 0x1ac) + 4))
            (param_1,*(undefined4 *)(iVar2 + 0x38 + *(int *)(iVar2 + 0x40) * 4),puVar1,
             *(undefined4 *)(iVar2 + 0x48),param_2,param_3,param_4);
  if (*(uint *)(iVar2 + 0x48) <= *puVar1) {
    if (*(int *)(iVar2 + 0x4c) == 1) {
      FUN_00456990(param_1);
    }
    *(undefined4 *)(iVar2 + 0x30) = 0;
    *(uint *)(iVar2 + 0x40) = *(uint *)(iVar2 + 0x40) ^ 1;
    *puVar1 = *(int *)(param_1 + 0x138) + 1;
    iVar3 = *(int *)(param_1 + 0x138);
    *(undefined4 *)(iVar2 + 0x44) = 2;
    *(int *)(iVar2 + 0x48) = iVar3 + 2;
  }
  return;
}

