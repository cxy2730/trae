// Function: FUN_0043dca0
// Entry:    0043dca0
// Size:     82 bytes
// Conv:     unknown
// Signature: undefined FUN_0043dca0(void)
// Decompiled by Ghidra 12.1.2


void FUN_0043dca0(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = FUN_0043dd00(param_1,param_3,param_4);
  if (iVar1 != 0) {
    FUN_0043d4f0(param_1,param_2,
                 (((uint)*(byte *)(param_3 + 0x40) * 0x100 + (uint)*(byte *)(param_3 + 0x41)) *
                  0x100 + (uint)*(byte *)(param_3 + 0x42)) * 0x100 + (uint)*(byte *)(param_3 + 0x43)
                );
  }
  return;
}

