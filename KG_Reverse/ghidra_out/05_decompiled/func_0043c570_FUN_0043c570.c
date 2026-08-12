// Function: FUN_0043c570
// Entry:    0043c570
// Size:     45 bytes
// Conv:     unknown
// Signature: undefined FUN_0043c570(void)
// Decompiled by Ghidra 12.1.2


undefined4 * FUN_0043c570(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  
  if (param_1 != 0) {
    puVar1 = (undefined4 *)FUN_00446b50(param_1,0x10c);
    if (puVar1 != (undefined4 *)0x0) {
      puVar3 = puVar1;
      for (iVar2 = 0x43; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar3 = 0;
        puVar3 = puVar3 + 1;
      }
    }
    return puVar1;
  }
  return (undefined4 *)0x0;
}

