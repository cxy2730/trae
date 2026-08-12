// Function: FUN_00441380
// Entry:    00441380
// Size:     157 bytes
// Conv:     unknown
// Signature: undefined FUN_00441380(void)
// Decompiled by Ghidra 12.1.2


int FUN_00441380(undefined4 param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  uVar1 = 0x73;
  iVar3 = 0;
  do {
    iVar4 = iVar3;
    uVar2 = uVar1 + 0x100;
    uVar1 = uVar1 / 0xe7;
    FUN_00440d60(param_1,iVar4,uVar1,uVar1,uVar1,0xff,1);
    uVar1 = uVar2;
    iVar3 = iVar4 + 1;
  } while (uVar2 < 0xe773);
  iVar3 = iVar4 + 2;
  FUN_00440d60(param_1,iVar4 + 1,0xff,0xff,0xff,0,1);
  uVar1 = 0x33;
  do {
    uVar2 = 0;
    iVar4 = iVar3;
    do {
      iVar3 = iVar4 + 1;
      FUN_00440d60(param_1,iVar4,uVar2,uVar2,uVar2,uVar1,1);
      uVar2 = uVar2 + 0x33;
      iVar4 = iVar3;
    } while (uVar2 < 0x132);
    uVar1 = uVar1 + 0x33;
  } while (uVar1 < 0xff);
  return iVar3;
}

