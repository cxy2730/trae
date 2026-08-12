// Function: FUN_004102a0
// Entry:    004102a0
// Size:     166 bytes
// Conv:     unknown
// Signature: undefined FUN_004102a0(void)
// Decompiled by Ghidra 12.1.2


undefined4 FUN_004102a0(HWND param_1)

{
  HWND pHVar1;
  BOOL BVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  pHVar1 = param_1;
  if (param_1 != (HWND)0x0) {
    BVar2 = IsWindow(param_1);
    if (BVar2 != 0) {
      iVar3 = 0;
      while( true ) {
        iVar5 = iVar3 + 1;
        iVar3 = FUN_0040ebf0(iVar3,&param_1);
        if (iVar3 == 0) break;
        iVar6 = 0;
        while( true ) {
          iVar7 = iVar6 + 1;
          iVar4 = FUN_0040e730(iVar6,0);
          iVar3 = iVar5;
          if (iVar4 == 0) break;
          iVar3 = FUN_0040ee10(iVar6);
          iVar6 = iVar7;
          if (iVar3 == 0) {
            iVar3 = FUN_00406cf0(iVar4 + 0x18);
            iVar3 = iVar4 + 0x18 + iVar3;
            iVar4 = FUN_00406cf0(iVar3);
            iVar3 = *(int *)(iVar3 + iVar4);
            if ((iVar3 != 0) && (*(HWND *)(iVar3 + 0x1c) == pHVar1)) {
              return 1;
            }
          }
        }
      }
    }
  }
  return 0;
}

