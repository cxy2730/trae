// Function: FUN_00431200
// Entry:    00431200
// Size:     133 bytes
// Conv:     unknown
// Signature: undefined FUN_00431200(void)
// Decompiled by Ghidra 12.1.2


int FUN_00431200(undefined4 param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  int local_4;
  
  iVar4 = 0;
  if (*(uint *)(param_2 + 0x10) == 0) {
    puVar5 = (undefined4 *)0x0;
  }
  else {
    puVar5 = *(undefined4 **)(param_2 + 8);
  }
  iVar2 = (*(uint *)(param_2 + 0x10) >> 2) - param_3;
  local_4 = iVar2;
  if (0 < iVar2) {
    do {
      uVar1 = *puVar5;
      puVar5 = puVar5 + 1;
      iVar3 = FUN_00430fe0(param_1,uVar1,0);
      if (iVar3 != 0) {
        iVar4 = iVar3;
      }
      local_4 = local_4 + -1;
    } while (local_4 != 0);
  }
  if (param_3 != 0) {
    if (0 < iVar2) {
      FUN_00406b50(0,iVar2 * 4);
    }
    return iVar4;
  }
  FUN_004064a0();
  return iVar4;
}

