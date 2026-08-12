// Function: FUN_0046e5c0
// Entry:    0046e5c0
// Size:     52 bytes
// Conv:     unknown
// Signature: undefined FUN_0046e5c0(void)
// Decompiled by Ghidra 12.1.2


void __fastcall FUN_0046e5c0(int param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_00492f17(8);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &PTR_LAB_02f99ff4;
    puVar1[1] = 0x4d;
    (**(code **)**(undefined4 **)(param_1 + 0x10))(puVar1);
    return;
  }
  (**(code **)**(undefined4 **)(param_1 + 0x10))(0);
  return;
}

