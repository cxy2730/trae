// Function: FUN_0040f260
// Entry:    0040f260
// Size:     310 bytes
// Conv:     unknown
// Signature: undefined FUN_0040f260(void)
// Decompiled by Ghidra 12.1.2


void __fastcall FUN_0040f260(undefined4 *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  HCURSOR hCursor;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0049e363;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_02f954d8;
  local_4 = 0;
  iVar3 = FUN_00494b40(0);
  iVar7 = 0;
  while (iVar4 = FUN_0040e730(iVar7,0), iVar4 != 0) {
    iVar5 = FUN_0040ee10(iVar7);
    if (iVar5 == 1) {
      iVar7 = iVar7 + 1;
    }
    else {
      iVar4 = iVar4 + 0x18;
      iVar5 = FUN_00406cf0(iVar4);
      iVar5 = iVar4 + iVar5;
      iVar6 = FUN_00406cf0(iVar5);
      piVar2 = *(int **)(iVar6 + iVar5);
      if (piVar2 != (int *)0x0) {
        *(undefined4 *)(iVar6 + iVar5) = 0;
        if ((iVar7 == 0) && ((HACCEL)piVar2[0x77] != (HACCEL)0x0)) {
          DestroyAcceleratorTable((HACCEL)piVar2[0x77]);
          piVar2[0x77] = 0;
        }
        iVar5 = FUN_00406cf0(iVar4);
        iVar6 = FUN_00406cf0(iVar4 + iVar5);
        puVar1 = (undefined4 *)(iVar6 + 0x14 + iVar4 + iVar5);
        hCursor = (HCURSOR)*puVar1;
        if (hCursor != (HCURSOR)0x0) {
          DestroyCursor(hCursor);
          *puVar1 = 0;
        }
        if (iVar3 == 0) {
          piVar2[7] = 0;
        }
        (**(code **)(*piVar2 + 4))(1);
      }
      iVar7 = iVar7 + 1;
    }
  }
  *param_1 = &PTR_FUN_02f954c0;
  local_4 = 1;
  param_1[1] = 0;
  FUN_004064a0();
  local_4 = 0xffffffff;
  param_1[2] = &PTR_FUN_02f95460;
  FUN_004064a0();
  ExceptionList = local_c;
  return;
}

