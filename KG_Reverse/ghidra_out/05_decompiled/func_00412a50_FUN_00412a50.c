// Function: FUN_00412a50
// Entry:    00412a50
// Size:     173 bytes
// Conv:     unknown
// Signature: undefined FUN_00412a50(void)
// Decompiled by Ghidra 12.1.2


void FUN_00412a50(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = FUN_0040e730(param_2,0);
  iVar2 = FUN_00406cf0(iVar1 + 0x18);
  iVar2 = iVar1 + 0x18 + iVar2;
  iVar1 = FUN_00406cf0(iVar2);
  iVar1 = *(int *)(iVar2 + iVar1);
  iVar2 = FUN_00412b00(param_1,param_2);
  if (iVar2 == -1) {
    SetWindowPos(*(HWND *)(iVar1 + 0x1c),(HWND)0x0,0,0,0,0,0x13);
  }
  else {
    iVar2 = FUN_0040e730(iVar2,0);
    if (iVar2 != 0) {
      iVar3 = FUN_00406cf0(iVar2 + 0x18);
      iVar3 = iVar2 + 0x18 + iVar3;
      iVar2 = FUN_00406cf0(iVar3);
      iVar2 = *(int *)(iVar3 + iVar2);
      if (iVar2 != 0) {
        SetWindowPos(*(HWND *)(iVar1 + 0x1c),*(HWND *)(iVar2 + 0x1c),0,0,0,0,0x13);
        return;
      }
    }
  }
  return;
}

