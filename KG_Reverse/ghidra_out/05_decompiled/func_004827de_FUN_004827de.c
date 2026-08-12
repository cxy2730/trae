// Function: FUN_004827de
// Entry:    004827de
// Size:     45 bytes
// Conv:     unknown
// Signature: undefined FUN_004827de(void)
// Decompiled by Ghidra 12.1.2


void FUN_004827de(code *UNRECOVERED_JUMPTABLE)

{
  ExceptionList = *(void **)ExceptionList;
                    /* WARNING: Could not recover jumptable at 0x00482809. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}

