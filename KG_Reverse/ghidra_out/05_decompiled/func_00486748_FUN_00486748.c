// Function: FUN_00486748
// Entry:    00486748
// Size:     74 bytes
// Conv:     unknown
// Signature: undefined FUN_00486748(void)
// Decompiled by Ghidra 12.1.2


UINT FUN_00486748(UINT param_1)

{
  UINT UVar1;
  bool bVar2;
  
  if (param_1 == 0xfffffffe) {
    DAT_03011000 = 1;
                    /* WARNING: Could not recover jumptable at 0x00486762. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UVar1 = GetOEMCP();
    return UVar1;
  }
  if (param_1 == 0xfffffffd) {
    DAT_03011000 = 1;
                    /* WARNING: Could not recover jumptable at 0x00486777. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UVar1 = GetACP();
    return UVar1;
  }
  bVar2 = param_1 == 0xfffffffc;
  if (bVar2) {
    param_1 = DAT_030111ac;
  }
  DAT_03011000 = (uint)bVar2;
  return param_1;
}

