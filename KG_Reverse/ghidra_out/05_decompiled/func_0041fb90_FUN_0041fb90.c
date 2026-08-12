// Function: FUN_0041fb90
// Entry:    0041fb90
// Size:     89 bytes
// Conv:     unknown
// Signature: undefined FUN_0041fb90(void)
// Decompiled by Ghidra 12.1.2


void __fastcall FUN_0041fb90(int param_1)

{
  if (*(int *)(param_1 + 0x78) != 1) {
    if (*(int *)(param_1 + 0x60) == 0xb) {
      if (((*(int *)(param_1 + 0x7c) == 1) && (*(int *)(param_1 + 0xfc) != 0)) &&
         (*(int *)(*(int *)(param_1 + 0xfc) + 0x1c) != 0)) {
        FUN_00424180();
        *(undefined4 *)(param_1 + 0x74) = 0;
        FUN_0041f180();
        return;
      }
      if (*(int *)(param_1 + 0x7c) == 2) {
        FUN_0041fb20();
      }
    }
    *(undefined4 *)(param_1 + 0x74) = 0;
    FUN_0041f180();
  }
  return;
}

