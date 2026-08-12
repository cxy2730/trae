// Function: FUN_00475e70
// Entry:    00475e70
// Size:     75 bytes
// Conv:     unknown
// Signature: undefined FUN_00475e70(void)
// Decompiled by Ghidra 12.1.2


void FUN_00475e70(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  
  puVar1 = (undefined4 *)FUN_00479820();
  iVar3 = 0x108;
  do {
    uVar2 = __ftol();
    *puVar1 = uVar2;
    puVar1 = puVar1 + 1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  return;
}

