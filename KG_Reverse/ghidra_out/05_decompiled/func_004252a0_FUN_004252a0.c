// Function: FUN_004252a0
// Entry:    004252a0
// Size:     112 bytes
// Conv:     unknown
// Signature: undefined FUN_004252a0(void)
// Decompiled by Ghidra 12.1.2


undefined4 __thiscall FUN_004252a0(int *param_1,int param_2)

{
  MMRESULT MVar1;
  
  if (param_1[0x13] != 0) {
    FUN_00425420();
    return 1;
  }
  if (param_1[6] != 0) {
    FUN_00425310(1);
  }
  param_1[0x14] = 0;
  if (param_1[9] == 0) {
    param_1[0xe] = 1;
  }
  MVar1 = midiStreamRestart((HMIDISTRM)param_1[7]);
  if (MVar1 != 0) {
    (**(code **)(*param_1 + 4))(MVar1);
    return 0;
  }
  param_1[6] = 1;
  param_1[9] = param_2;
  return 1;
}

