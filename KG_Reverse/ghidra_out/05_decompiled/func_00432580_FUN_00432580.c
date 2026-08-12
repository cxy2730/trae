// Function: FUN_00432580
// Entry:    00432580
// Size:     72 bytes
// Conv:     unknown
// Signature: undefined FUN_00432580(void)
// Decompiled by Ghidra 12.1.2


undefined4 * __fastcall FUN_00432580(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar2 = *(undefined4 **)(param_1 + 0xc);
  if (puVar2 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)puVar2[1];
    *(undefined4 **)(param_1 + 0xc) = puVar1;
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = 0;
    }
    puVar2[1] = 0;
    *puVar2 = 0;
    puVar2[4] = 0;
    puVar2[3] = 0;
    puVar2[2] = 0;
    return puVar2;
  }
  puVar2 = (undefined4 *)FUN_00492f17(0x14);
  if (puVar2 != (undefined4 *)0x0) {
    puVar2[1] = 0;
    *puVar2 = 0;
    puVar2[4] = 0;
    puVar2[3] = 0;
    puVar2[2] = 0;
    return puVar2;
  }
  return (undefined4 *)0x0;
}

