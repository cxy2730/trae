// Function: FUN_00475d80
// Entry:    00475d80
// Size:     227 bytes
// Conv:     unknown
// Signature: undefined FUN_00475d80(void)
// Decompiled by Ghidra 12.1.2


void FUN_00475d80(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  int local_10;
  int local_c;
  
  puVar1 = (undefined4 *)FUN_00479820();
  local_c = 0x10;
  puVar2 = puVar1;
  do {
    puVar3 = puVar2 + 7;
    local_10 = 7;
    do {
      uVar4 = __ftol();
      *puVar2 = uVar4;
      puVar2 = puVar2 + 1;
      local_10 = local_10 + -1;
    } while (local_10 != 0);
    local_c = local_c + -1;
    puVar2 = puVar3;
  } while (local_c != 0);
  iVar5 = 4;
  puVar1 = puVar1 + 0x70;
  do {
    uVar4 = __ftol();
    *puVar1 = uVar4;
    puVar1 = puVar1 + 1;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  return;
}

