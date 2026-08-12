// Function: FUN_004430f0
// Entry:    004430f0
// Size:     68 bytes
// Conv:     unknown
// Signature: undefined FUN_004430f0(void)
// Decompiled by Ghidra 12.1.2


void FUN_004430f0(void)

{
  undefined4 uVar1;
  int iVar2;
  CHAR local_34 [52];
  
  uVar1 = FUN_00443c40();
  iVar2 = FUN_00443c30(uVar1);
  wsprintfA(local_34,&DAT_02fb2190,iVar2 + 1);
  FUN_004974ae(local_34);
  return;
}

