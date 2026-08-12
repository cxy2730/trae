// Function: FUN_00471b40
// Entry:    00471b40
// Size:     42 bytes
// Conv:     unknown
// Signature: undefined FUN_00471b40(void)
// Decompiled by Ghidra 12.1.2


void FUN_00471b40(void)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = -0x1000;
  iVar2 = -0x2000;
  do {
    uVar1 = FUN_00471b70(iVar2);
    (&DAT_03005ce4)[iVar3] = uVar1;
    iVar2 = iVar2 + 2;
    iVar3 = iVar3 + 1;
  } while (iVar2 < 0x2000);
  return;
}

