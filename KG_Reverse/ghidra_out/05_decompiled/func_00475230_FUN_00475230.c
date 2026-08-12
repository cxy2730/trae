// Function: FUN_00475230
// Entry:    00475230
// Size:     38 bytes
// Conv:     unknown
// Signature: undefined FUN_00475230(void)
// Decompiled by Ghidra 12.1.2


bool FUN_00475230(char *param_1,char *param_2)

{
  if (*param_1 != *param_2) {
    return false;
  }
  return param_1[1] == param_2[1];
}

