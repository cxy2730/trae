// Function: FUN_004563e0
// Entry:    004563e0
// Size:     34 bytes
// Conv:     unknown
// Signature: undefined FUN_004563e0(void)
// Decompiled by Ghidra 12.1.2


void FUN_004563e0(undefined4 *param_1,undefined4 *param_2,uint param_3)

{
  int iVar1;
  
  for (iVar1 = (param_3 & 0x1ffffff) << 5; iVar1 != 0; iVar1 = iVar1 + -1) {
    *param_2 = *param_1;
    param_1 = param_1 + 1;
    param_2 = param_2 + 1;
  }
  for (iVar1 = 0; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined1 *)param_2 = *(undefined1 *)param_1;
    param_1 = (undefined4 *)((int)param_1 + 1);
    param_2 = (undefined4 *)((int)param_2 + 1);
  }
  return;
}

