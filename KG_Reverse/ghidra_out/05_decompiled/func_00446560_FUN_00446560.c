// Function: FUN_00446560
// Entry:    00446560
// Size:     69 bytes
// Conv:     unknown
// Signature: undefined FUN_00446560(void)
// Decompiled by Ghidra 12.1.2


void FUN_00446560(int param_1,char *param_2)

{
  int iVar1;
  
  iVar1 = 0;
  if (param_1 != 0) {
    if (*param_2 == '#') {
      iVar1 = 1;
      do {
        if (param_2[iVar1] == ' ') break;
        iVar1 = iVar1 + 1;
      } while (iVar1 < 0xf);
    }
    if (*(code **)(param_1 + 0x50) != (code *)0x0) {
      (**(code **)(param_1 + 0x50))(param_1,param_2 + iVar1);
      return;
    }
  }
  FUN_00446960(param_1,param_2 + iVar1);
  return;
}

