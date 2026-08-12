// Function: FUN_0040f710
// Entry:    0040f710
// Size:     67 bytes
// Conv:     unknown
// Signature: undefined FUN_0040f710(void)
// Decompiled by Ghidra 12.1.2


void FUN_0040f710(void)

{
  int iVar1;
  int iVar2;
  int local_4;
  
  iVar1 = 0;
  while( true ) {
    iVar2 = iVar1 + 1;
    iVar1 = FUN_0040ebf0(iVar1,&local_4);
    if (iVar1 == 0) break;
    iVar1 = iVar2;
    if (local_4 != 0) {
      FUN_0040f760();
      FUN_00492f40(local_4);
    }
  }
  FUN_004064a0();
  return;
}

