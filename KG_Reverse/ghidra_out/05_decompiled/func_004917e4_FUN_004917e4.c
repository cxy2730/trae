// Function: FUN_004917e4
// Entry:    004917e4
// Size:     26 bytes
// Conv:     unknown
// Signature: undefined FUN_004917e4(void)
// Decompiled by Ghidra 12.1.2


undefined4 * __fastcall FUN_004917e4(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  *param_1 = &PTR_FUN_02f9c7d4;
  puVar2 = param_1;
  for (iVar1 = 0x10; puVar2 = puVar2 + 1, iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xffffff;
  }
  return param_1;
}

