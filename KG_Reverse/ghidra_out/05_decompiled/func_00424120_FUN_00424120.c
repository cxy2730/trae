// Function: FUN_00424120
// Entry:    00424120
// Size:     88 bytes
// Conv:     unknown
// Signature: undefined FUN_00424120(void)
// Decompiled by Ghidra 12.1.2


void __fastcall FUN_00424120(int param_1)

{
  undefined4 *puVar1;
  
  FUN_004372a0();
  puVar1 = *(undefined4 **)(param_1 + 0xf4);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[5] = 0;
    if ((HICON)puVar1[3] != (HICON)0x0) {
      DestroyIcon((HICON)puVar1[3]);
      puVar1[3] = 0;
    }
    if (puVar1[4] != 0) {
      FUN_00492f40(puVar1[4]);
      puVar1[4] = 0;
    }
    FUN_00492f40(puVar1);
    *(undefined4 *)(param_1 + 0xf4) = 0;
  }
  return;
}

