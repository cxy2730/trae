// Function: FUN_00451a90
// Entry:    00451a90
// Size:     152 bytes
// Conv:     unknown
// Signature: undefined FUN_00451a90(void)
// Decompiled by Ghidra 12.1.2


void FUN_00451a90(int *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int local_4;
  
  puVar3 = param_1;
  local_4 = 0;
  if (0 < param_1[0x51]) {
    param_1 = param_1 + 0x52;
    do {
      iVar1 = *param_1;
      if (*(int *)(iVar1 + 0x4c) == 0) {
        iVar2 = *(int *)(iVar1 + 0x10);
        if (((iVar2 < 0) || (3 < iVar2)) || (puVar3[iVar2 + 0x29] == 0)) {
          (**(code **)*puVar3)(puVar3);
        }
        puVar4 = (undefined4 *)(**(code **)puVar3[1])(puVar3,1,0x84);
        puVar6 = (undefined4 *)puVar3[iVar2 + 0x29];
        puVar7 = puVar4;
        for (iVar5 = 0x21; iVar5 != 0; iVar5 = iVar5 + -1) {
          *puVar7 = *puVar6;
          puVar6 = puVar6 + 1;
          puVar7 = puVar7 + 1;
        }
        *(undefined4 **)(iVar1 + 0x4c) = puVar4;
      }
      local_4 = local_4 + 1;
      param_1 = param_1 + 1;
    } while (local_4 < (int)puVar3[0x51]);
  }
  return;
}

