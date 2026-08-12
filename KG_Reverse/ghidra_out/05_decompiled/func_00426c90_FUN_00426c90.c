// Function: FUN_00426c90
// Entry:    00426c90
// Size:     50 bytes
// Conv:     unknown
// Signature: undefined FUN_00426c90(void)
// Decompiled by Ghidra 12.1.2


undefined4 * FUN_00426c90(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  
  if (param_1 == param_2) {
    return param_3;
  }
  do {
    puVar3 = param_1 + 0x15;
    puVar1 = param_3 + 0x15;
    for (iVar2 = 0x15; iVar2 != 0; iVar2 = iVar2 + -1) {
      *param_3 = *param_1;
      param_1 = param_1 + 1;
      param_3 = param_3 + 1;
    }
    param_3 = puVar1;
    param_1 = puVar3;
  } while (puVar3 != param_2);
  return puVar1;
}

