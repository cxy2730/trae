// Function: FUN_00475a90
// Entry:    00475a90
// Size:     59 bytes
// Conv:     unknown
// Signature: undefined FUN_00475a90(void)
// Decompiled by Ghidra 12.1.2


undefined4 * __fastcall FUN_00475a90(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  *param_1 = &PTR_LAB_02f9a0c4;
  puVar2 = param_1;
  for (iVar1 = 0x10; puVar2 = puVar2 + 1, iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
  }
  param_1[0x12] = 0;
  param_1[0x11] = 0;
  param_1[0x13] = 0x67452301;
  param_1[0x14] = 0xefcdab89;
  param_1[0x15] = 0x98badcfe;
  param_1[0x16] = 0x10325476;
  return param_1;
}

