// Function: FUN_00441420
// Entry:    00441420
// Size:     79 bytes
// Conv:     unknown
// Signature: undefined FUN_00441420(void)
// Decompiled by Ghidra 12.1.2


int FUN_00441420(undefined4 param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = 0;
  uVar2 = 0;
  do {
    uVar1 = 0;
    do {
      uVar3 = 0;
      iVar5 = iVar4;
      do {
        iVar4 = iVar5 + 1;
        FUN_00440d60(param_1,iVar5,uVar2,uVar1,uVar3,0xff,1);
        uVar3 = uVar3 + 0x33;
        iVar5 = iVar4;
      } while (uVar3 < 0x132);
      uVar1 = uVar1 + 0x33;
    } while (uVar1 < 0x132);
    uVar2 = uVar2 + 0x33;
  } while (uVar2 < 0x132);
  return iVar4;
}

