// Function: FUN_00424030
// Entry:    00424030
// Size:     40 bytes
// Conv:     unknown
// Signature: undefined FUN_00424030(void)
// Decompiled by Ghidra 12.1.2


void __fastcall FUN_00424030(int *param_1)

{
  if (((int *)param_1[0x3d] != (int *)0x0) && (*(int *)param_1[0x3d] == 5)) {
    FUN_00437860();
  }
  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 4))(1);
  }
  return;
}

