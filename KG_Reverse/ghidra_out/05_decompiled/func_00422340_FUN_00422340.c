// Function: FUN_00422340
// Entry:    00422340
// Size:     72 bytes
// Conv:     unknown
// Signature: undefined FUN_00422340(void)
// Decompiled by Ghidra 12.1.2


undefined4 FUN_00422340(undefined1 *param_1,int param_2,int param_3)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  int iVar3;
  
  if (param_1 != (undefined1 *)0x0) {
    for (; puVar2 = param_1, iVar3 = param_2, param_3 != 0; param_3 = param_3 + -1) {
      for (; iVar3 != 0; iVar3 = iVar3 + -1) {
        uVar1 = *puVar2;
        *puVar2 = puVar2[2];
        puVar2[2] = uVar1;
        puVar2 = puVar2 + 3;
      }
      param_1 = param_1 + param_2 * 3;
    }
    return 1;
  }
  return 0;
}

