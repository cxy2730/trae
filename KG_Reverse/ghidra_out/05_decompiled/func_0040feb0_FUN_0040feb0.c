// Function: FUN_0040feb0
// Entry:    0040feb0
// Size:     47 bytes
// Conv:     unknown
// Signature: undefined FUN_0040feb0(void)
// Decompiled by Ghidra 12.1.2


undefined4 * __thiscall FUN_0040feb0(undefined4 *param_1,byte param_2)

{
  *param_1 = &PTR_FUN_02f95644;
  if ((param_1[1] == 0) && ((code *)param_1[3] != (code *)0x0)) {
    (*(code *)param_1[3])();
  }
  if ((param_2 & 1) != 0) {
    FUN_00492f40(param_1);
  }
  return param_1;
}

