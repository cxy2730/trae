// Function: FUN_0049c30a
// Entry:    0049c30a
// Size:     32 bytes
// Conv:     unknown
// Signature: undefined FUN_0049c30a(void)
// Decompiled by Ghidra 12.1.2


CWnd * __thiscall FUN_0049c30a(CWnd *param_1,byte param_2)

{
  CWnd::~CWnd(param_1);
  if ((param_2 & 1) != 0) {
    FUN_00481dd5(param_1);
  }
  return param_1;
}

