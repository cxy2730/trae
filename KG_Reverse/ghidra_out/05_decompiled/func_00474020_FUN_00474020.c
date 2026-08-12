// Function: FUN_00474020
// Entry:    00474020
// Size:     21 bytes
// Conv:     unknown
// Signature: undefined FUN_00474020(void)
// Decompiled by Ghidra 12.1.2


void FUN_00474020(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = &DAT_03012a60;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *param_1 = *puVar2;
    puVar2 = puVar2 + 1;
    param_1 = param_1 + 1;
  }
  return;
}

