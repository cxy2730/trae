// Function: FUN_00409f00
// Entry:    00409f00
// Size:     55 bytes
// Conv:     unknown
// Signature: undefined FUN_00409f00(void)
// Decompiled by Ghidra 12.1.2


void FUN_00409f00(void)

{
  bool bVar1;
  int iVar2;
  
  iVar2 = FUN_00436e20();
  bVar1 = false;
  if (iVar2 != 0) {
    iVar2 = FUN_00427c10();
    if (iVar2 != 0) {
      bVar1 = true;
    }
  }
  FUN_004975c2(!bVar1);
  return;
}

