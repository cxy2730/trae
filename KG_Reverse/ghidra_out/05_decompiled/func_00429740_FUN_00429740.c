// Function: FUN_00429740
// Entry:    00429740
// Size:     99 bytes
// Conv:     unknown
// Signature: undefined FUN_00429740(void)
// Decompiled by Ghidra 12.1.2


void __fastcall FUN_00429740(int param_1)

{
  undefined4 *puVar1;
  
  if (*(int *)(param_1 + 0x30) != 0) {
    FUN_00492f40(*(int *)(param_1 + 0x30));
    *(undefined4 *)(param_1 + 0x30) = 0;
  }
  puVar1 = *(undefined4 **)(param_1 + 0x38);
  *(undefined4 *)(param_1 + 0x34) = 0;
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
    *(undefined4 *)(param_1 + 0x38) = 0;
  }
  return;
}

