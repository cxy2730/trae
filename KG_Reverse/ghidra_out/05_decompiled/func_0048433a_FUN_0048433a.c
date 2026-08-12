// Function: FUN_0048433a
// Entry:    0048433a
// Size:     115 bytes
// Conv:     unknown
// Signature: undefined FUN_0048433a(void)
// Decompiled by Ghidra 12.1.2


void FUN_0048433a(uint param_1)

{
  uint *puVar1;
  undefined4 *puVar2;
  int iVar3;
  
  puVar1 = (uint *)FUN_004843b6();
  iVar3 = 0;
  *puVar1 = param_1;
  puVar1 = &DAT_02fd8cb0;
  do {
    if (param_1 == *puVar1) {
      puVar2 = (undefined4 *)FUN_004843ad();
      *puVar2 = *(undefined4 *)(iVar3 * 8 + 0x2fd8cb4);
      return;
    }
    puVar1 = puVar1 + 2;
    iVar3 = iVar3 + 1;
  } while (puVar1 < &DAT_02fd8e18);
  if ((0x12 < param_1) && (param_1 < 0x25)) {
    puVar2 = (undefined4 *)FUN_004843ad();
    *puVar2 = 0xd;
    return;
  }
  if ((0xbb < param_1) && (param_1 < 0xcb)) {
    puVar2 = (undefined4 *)FUN_004843ad();
    *puVar2 = 8;
    return;
  }
  puVar2 = (undefined4 *)FUN_004843ad();
  *puVar2 = 0x16;
  return;
}

