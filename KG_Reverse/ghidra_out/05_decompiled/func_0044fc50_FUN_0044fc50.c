// Function: FUN_0044fc50
// Entry:    0044fc50
// Size:     72 bytes
// Conv:     unknown
// Signature: undefined FUN_0044fc50(void)
// Decompiled by Ghidra 12.1.2


void FUN_0044fc50(int param_1,int param_2)

{
  undefined1 uVar1;
  uint uVar2;
  uint uVar3;
  
  if ((*(char *)(param_1 + 9) == '\b') && (*(char *)(param_1 + 8) != '\x03')) {
    uVar3 = param_2 + *(int *)(param_1 + 4);
    uVar2 = *(int *)(param_1 + 4) + uVar3;
    if (uVar3 < uVar2) {
      do {
        uVar1 = *(undefined1 *)(uVar3 - 1);
        uVar3 = uVar3 - 1;
        *(undefined1 *)(uVar2 - 1) = uVar1;
        *(undefined1 *)(uVar2 - 2) = uVar1;
        uVar2 = uVar2 - 2;
      } while (uVar3 < uVar2);
    }
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) << 1;
    *(undefined1 *)(param_1 + 9) = 0x10;
    *(char *)(param_1 + 0xb) = *(char *)(param_1 + 10) << 4;
  }
  return;
}

