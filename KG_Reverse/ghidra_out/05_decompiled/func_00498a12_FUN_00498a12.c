// Function: FUN_00498a12
// Entry:    00498a12
// Size:     132 bytes
// Conv:     unknown
// Signature: undefined FUN_00498a12(void)
// Decompiled by Ghidra 12.1.2


bool FUN_00498a12(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined1 local_108 [260];
  
  iVar1 = FUN_00498a96(param_1,local_108,0x100);
  if (0x100U - iVar1 < 3) {
    iVar3 = 0x100;
    do {
      iVar4 = iVar3 + 0x100;
      iVar1 = iVar4;
      uVar2 = FUN_004935ba(iVar3 + 0xff);
      iVar1 = FUN_00498a96(param_1,uVar2,iVar1);
      iVar3 = iVar4;
    } while (iVar4 - iVar1 < 3);
    FUN_00493609(0xffffffff);
  }
  else {
    FUN_00493313(local_108);
  }
  return 0 < iVar1;
}

