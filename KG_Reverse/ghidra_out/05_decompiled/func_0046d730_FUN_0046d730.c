// Function: FUN_0046d730
// Entry:    0046d730
// Size:     72 bytes
// Conv:     unknown
// Signature: undefined FUN_0046d730(void)
// Decompiled by Ghidra 12.1.2


undefined4 * __thiscall FUN_0046d730(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  FUN_004758d0(param_2);
  *param_1 = &PTR_FUN_02f99f54;
  param_1[0x52] = 0;
  *(undefined1 *)(param_1 + 0x53) = 0;
  param_1[0x55] = 0;
  puVar2 = (undefined4 *)((int)param_1 + 0x45);
  for (iVar1 = 0x40; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined2 *)puVar2 = 0;
  puVar2 = param_1 + 9;
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined1 *)puVar2 = 0;
  return param_1;
}

