// Function: FUN_00426c00
// Entry:    00426c00
// Size:     63 bytes
// Conv:     unknown
// Signature: undefined FUN_00426c00(void)
// Decompiled by Ghidra 12.1.2


undefined4 * __thiscall FUN_00426c00(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  
  puVar1 = *(undefined4 **)(param_1 + 8);
  puVar2 = param_2;
  while (param_3 != puVar1) {
    puVar4 = param_3 + 0x15;
    puVar5 = puVar2 + 0x15;
    puVar6 = param_3;
    puVar7 = puVar2;
    for (iVar3 = 0x15; param_3 = puVar4, puVar2 = puVar5, iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar7 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar7 = puVar7 + 1;
    }
  }
  *(undefined4 **)(param_1 + 8) = puVar2;
  return param_2;
}

