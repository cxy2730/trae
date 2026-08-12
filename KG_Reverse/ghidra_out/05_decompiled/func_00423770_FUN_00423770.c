// Function: FUN_00423770
// Entry:    00423770
// Size:     90 bytes
// Conv:     unknown
// Signature: undefined FUN_00423770(void)
// Decompiled by Ghidra 12.1.2


undefined4 FUN_00423770(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 local_10 [16];
  
  FUN_004937c4();
  iVar1 = FUN_004938d6(param_1,0x8020,0);
  if (iVar1 == 0) {
    FUN_00493819();
    return 0;
  }
  uVar2 = FUN_004237d0(local_10,param_2);
  FUN_00493819();
  return uVar2;
}

