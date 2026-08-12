// Function: FUN_00425420
// Entry:    00425420
// Size:     49 bytes
// Conv:     unknown
// Signature: undefined FUN_00425420(void)
// Decompiled by Ghidra 12.1.2


undefined4 __fastcall FUN_00425420(int param_1)

{
  if ((((*(int *)(param_1 + 0x4c) != 0) && (*(int *)(param_1 + 0x18) != 0)) &&
      (*(int *)(param_1 + 8) != 0)) && (*(HMIDISTRM *)(param_1 + 0x1c) != (HMIDISTRM)0x0)) {
    midiStreamRestart(*(HMIDISTRM *)(param_1 + 0x1c));
    *(undefined4 *)(param_1 + 0x4c) = 0;
  }
  return 0;
}

