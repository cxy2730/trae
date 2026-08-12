// Function: FUN_0043cda0
// Entry:    0043cda0
// Size:     72 bytes
// Conv:     unknown
// Signature: undefined FUN_0043cda0(void)
// Decompiled by Ghidra 12.1.2


uint FUN_0043cda0(undefined4 param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  undefined1 local_20 [32];
  
  uVar1 = FUN_0043cf80(param_1,param_2);
  if (uVar1 == 0) {
    uVar1 = FUN_0043cdf0(local_20,param_1);
    if (uVar1 == 0) {
      iVar2 = FUN_0043d360(param_2,local_20,5);
      uVar1 = (uint)(iVar2 == 0);
    }
  }
  return uVar1;
}

