// Function: FUN_00493f4c
// Entry:    00493f4c
// Size:     28 bytes
// Conv:     unknown
// Signature: undefined FUN_00493f4c(void)
// Decompiled by Ghidra 12.1.2


CDialog * __thiscall FUN_00493f4c(CDialog *param_1,byte param_2)

{
  CDialog::~CDialog(param_1);
  if ((param_2 & 1) != 0) {
    FUN_00492f40(param_1);
  }
  return param_1;
}

