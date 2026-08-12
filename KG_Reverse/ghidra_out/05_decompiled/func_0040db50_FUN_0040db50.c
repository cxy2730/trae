// Function: FUN_0040db50
// Entry:    0040db50
// Size:     125 bytes
// Conv:     unknown
// Signature: undefined FUN_0040db50(void)
// Decompiled by Ghidra 12.1.2


void __fastcall FUN_0040db50(int param_1)

{
  if (*(int *)(param_1 + 0x24c) != 0) {
    *(undefined4 *)(param_1 + 0x244) = 0;
    *(undefined4 *)(param_1 + 0x240) = 0;
    if (*(int *)(param_1 + 0x25c) == 1) {
      EndPage(*(HDC *)(param_1 + 0x24c));
      *(undefined4 *)(param_1 + 0x25c) = 0;
    }
    FUN_0040db10();
    EndDoc(*(HDC *)(param_1 + 0x24c));
    CDC::DeleteDC((CDC *)(param_1 + 0x248));
  }
  if (*(int *)(param_1 + 0xf4) != 0) {
    FUN_0041d9a0();
    (**(code **)(*(int *)(param_1 + 0xd8) + 0x58))();
  }
  FUN_0046b0c0();
  return;
}

