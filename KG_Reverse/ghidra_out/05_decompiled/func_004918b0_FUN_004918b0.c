// Function: FUN_004918b0
// Entry:    004918b0
// Size:     28 bytes
// Conv:     unknown
// Signature: undefined FUN_004918b0(void)
// Decompiled by Ghidra 12.1.2


CDialog * __thiscall FUN_004918b0(CDialog *param_1,byte param_2)

{
  CDialog::~CDialog(param_1);
  if ((param_2 & 1) != 0) {
    FUN_00492f40(param_1);
  }
  return param_1;
}

