// Function: FUN_004452d0
// Entry:    004452d0
// Size:     105 bytes
// Conv:     unknown
// Signature: undefined FUN_004452d0(void)
// Decompiled by Ghidra 12.1.2


void __fastcall FUN_004452d0(int param_1)

{
  int iVar1;
  int iVar2;
  undefined **ppuVar3;
  undefined1 *local_14;
  undefined1 local_10 [16];
  
  iVar1 = FUN_00491fc0(param_1,0);
  if ((iVar1 != 0) && (iVar1 = 0, 0 < *(int *)(param_1 + 0x3c))) {
    ppuVar3 = &PTR_DAT_02fb21a0;
    do {
      local_14 = local_10;
      iVar2 = FUN_00444f40(iVar1,&local_14);
      if (iVar2 != 0) {
        FUN_0049218b(param_1,*ppuVar3,local_10,1);
      }
      iVar1 = iVar1 + 1;
      ppuVar3 = ppuVar3 + 2;
    } while (iVar1 < *(int *)(param_1 + 0x3c));
  }
  return;
}

