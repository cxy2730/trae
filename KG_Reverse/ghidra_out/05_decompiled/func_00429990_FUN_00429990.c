// Function: FUN_00429990
// Entry:    00429990
// Size:     45 bytes
// Conv:     unknown
// Signature: undefined FUN_00429990(void)
// Decompiled by Ghidra 12.1.2


void __fastcall FUN_00429990(uint *param_1)

{
  char *pcVar1;
  
  if ((((*param_1 & 0x18000) == 0) && (pcVar1 = (char *)param_1[0xc], pcVar1 != (char *)0x0)) &&
     (*pcVar1 != '\0')) {
    FUN_00493313(pcVar1);
    return;
  }
  FUN_00493161();
  return;
}

