// Function: FUN_00478330
// Entry:    00478330
// Size:     63 bytes
// Conv:     unknown
// Signature: undefined FUN_00478330(void)
// Decompiled by Ghidra 12.1.2


void FUN_00478330(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  if (DAT_02fd3720 != 0) {
    FUN_00478370();
    DAT_02fd3720 = 0;
  }
  puVar2 = &DAT_0300bfb8;
  for (iVar1 = 0x200; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  puVar2 = &DAT_0300c7bc;
  for (iVar1 = 0x200; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  DAT_0300bfb4 = 0;
  DAT_0300c7b8 = 0;
  return;
}

