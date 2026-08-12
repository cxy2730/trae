// Function: FUN_00412340
// Entry:    00412340
// Size:     114 bytes
// Conv:     unknown
// Signature: undefined FUN_00412340(void)
// Decompiled by Ghidra 12.1.2


undefined4 FUN_00412340(void)

{
  int iVar1;
  int iVar2;
  BOOL BVar3;
  int iVar4;
  undefined1 local_4 [4];
  
  iVar1 = 0;
  do {
    do {
      iVar4 = iVar1 + 1;
      iVar1 = FUN_0040ebf0(iVar1,local_4);
      if (iVar1 == 0) {
        return 0;
      }
      iVar1 = FUN_0040e730(0,0);
      iVar2 = FUN_00406cf0(iVar1 + 0x18);
      iVar2 = iVar1 + 0x18 + iVar2;
      iVar1 = FUN_00406cf0(iVar2);
      iVar2 = *(int *)(iVar2 + iVar1);
      iVar1 = iVar4;
    } while (iVar2 == 0);
    BVar3 = IsWindow(*(HWND *)(iVar2 + 0x1c));
  } while (BVar3 == 0);
  return 1;
}

