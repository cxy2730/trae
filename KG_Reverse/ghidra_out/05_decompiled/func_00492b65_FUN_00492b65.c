// Function: FUN_00492b65
// Entry:    00492b65
// Size:     51 bytes
// Conv:     unknown
// Signature: undefined FUN_00492b65(void)
// Decompiled by Ghidra 12.1.2


undefined4 __thiscall FUN_00492b65(int param_1,uint param_2)

{
  undefined4 *puVar1;
  
  if (*(int *)(param_1 + 4) != 0) {
    for (puVar1 = *(undefined4 **)
                   (*(int *)(param_1 + 4) + ((param_2 >> 4) % *(uint *)(param_1 + 8)) * 4);
        puVar1 != (undefined4 *)0x0; puVar1 = (undefined4 *)*puVar1) {
      if (puVar1[1] == param_2) {
        return puVar1[2];
      }
    }
  }
  return 0;
}

