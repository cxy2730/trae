// Function: FUN_00405175
// Entry:    00405175
// Size:     89 bytes
// Conv:     unknown
// Signature: undefined FUN_00405175(void)
// Decompiled by Ghidra 12.1.2


bool FUN_00405175(int *param_1)

{
  int iVar1;
  int iStack_18;
  undefined1 auStack_14 [12];
  undefined1 *local_8;
  
  local_8 = auStack_14;
  iStack_18 = *param_1;
  if (iStack_18 != 0) {
    iStack_18 = iStack_18 + 8;
  }
  iVar1 = thunk_FUN_0041b1c0();
  if ((int *)local_8 != &iStack_18) {
    iVar1 = thunk_FUN_0041b540(6,0x401a923,0x24);
  }
  return iVar1 == 0x10;
}

