// Function: FUN_0040f8c0
// Entry:    0040f8c0
// Size:     95 bytes
// Conv:     unknown
// Signature: undefined FUN_0040f8c0(void)
// Decompiled by Ghidra 12.1.2


int FUN_0040f8c0(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  BOOL BVar3;
  
  iVar1 = FUN_0040ebf0(param_1,&param_1);
  if (iVar1 == 1) {
    iVar1 = FUN_0040e730(0,0);
    if (iVar1 != 0) {
      iVar2 = FUN_00406cf0(iVar1 + 0x18);
      iVar2 = iVar1 + 0x18 + iVar2;
      iVar1 = FUN_00406cf0(iVar2);
      iVar1 = *(int *)(iVar2 + iVar1);
      if (iVar1 != 0) {
        BVar3 = IsWindow(*(HWND *)(iVar1 + 0x1c));
        if (BVar3 != 0) {
          return iVar1;
        }
      }
    }
  }
  return 0;
}

