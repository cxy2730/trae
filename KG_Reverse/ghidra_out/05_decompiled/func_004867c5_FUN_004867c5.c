// Function: FUN_004867c5
// Entry:    004867c5
// Size:     41 bytes
// Conv:     unknown
// Signature: undefined FUN_004867c5(void)
// Decompiled by Ghidra 12.1.2


void FUN_004867c5(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = &DAT_030150e0;
  for (iVar1 = 0x40; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined1 *)puVar2 = 0;
  DAT_03014fc4 = 0;
  DAT_03014fdc = 0;
  DAT_030151e4 = 0;
  DAT_03014fd0 = 0;
  DAT_03014fd4 = 0;
  DAT_03014fd8 = 0;
  return;
}

