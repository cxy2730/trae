// Function: FUN_0045bfb0
// Entry:    0045bfb0
// Size:     119 bytes
// Conv:     unknown
// Signature: undefined FUN_0045bfb0(void)
// Decompiled by Ghidra 12.1.2


void FUN_0045bfb0(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(**(code **)param_1[1])(param_1,1,0x58);
  param_1[0x72] = puVar1;
  *puVar1 = FUN_0045c420;
  puVar1[2] = &DAT_0045a5d0;
  puVar1[3] = FUN_0045cb90;
  puVar1[0x11] = 0;
  puVar1[0xd] = 0;
  if (4 < (int)param_1[0x1e]) {
    (**(code **)*param_1)(param_1);
  }
  if (0x100 < (int)param_1[0x18]) {
    (**(code **)*param_1)(param_1);
  }
  FUN_0045c030(param_1);
  FUN_0045c280(param_1);
  if (param_1[0x16] == 2) {
    FUN_0045c3e0(param_1);
  }
  return;
}

