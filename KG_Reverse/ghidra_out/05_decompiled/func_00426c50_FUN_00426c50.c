// Function: FUN_00426c50
// Entry:    00426c50
// Size:     50 bytes
// Conv:     unknown
// Signature: undefined FUN_00426c50(void)
// Decompiled by Ghidra 12.1.2


undefined4 * FUN_00426c50(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  
  if (param_1 == param_2) {
    return param_3;
  }
  do {
    puVar3 = param_1 + 6;
    puVar1 = param_3 + 6;
    for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
      *param_3 = *param_1;
      param_1 = param_1 + 1;
      param_3 = param_3 + 1;
    }
    param_3 = puVar1;
    param_1 = puVar3;
  } while (puVar3 != param_2);
  return puVar1;
}

