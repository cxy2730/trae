// Function: FUN_0049bec8
// Entry:    0049bec8
// Size:     28 bytes
// Conv:     unknown
// Signature: undefined FUN_0049bec8(void)
// Decompiled by Ghidra 12.1.2


CSharedFile * __thiscall FUN_0049bec8(CSharedFile *param_1,byte param_2)

{
  CSharedFile::~CSharedFile(param_1);
  if ((param_2 & 1) != 0) {
    FUN_00492f40(param_1);
  }
  return param_1;
}

