// Function: FUN_00430570
// Entry:    00430570
// Size:     454 bytes
// Conv:     unknown
// Signature: undefined FUN_00430570(void)
// Decompiled by Ghidra 12.1.2


void FUN_00430570(undefined4 param_1,int param_2,int param_3,int param_4,uint param_5,int param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004a0268;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_0042a070(param_1);
  iVar7 = 0;
  local_4 = 0;
  param_5 = ((int)param_5 < 0) - 1 & param_5;
  iVar1 = FUN_0042a650();
  if (iVar1 != 0) {
    iVar2 = FUN_004279e0();
    iVar3 = FUN_00427960();
    iVar1 = param_3;
    if (0 < iVar2) {
      do {
        iVar4 = FUN_00430740(param_1,param_2,iVar1,iVar7,1,0,iVar3);
        iVar1 = iVar1 + iVar4;
        iVar7 = iVar7 + 1;
      } while (iVar7 < iVar2);
    }
    iVar7 = 0;
    if (0 < (int)param_5) {
      do {
        iVar4 = FUN_00430740(param_1,param_2,iVar1,param_4 + iVar7,1,0,iVar3);
        iVar1 = iVar1 + iVar4;
        iVar7 = iVar7 + 1;
      } while (iVar7 < (int)param_5);
    }
    uVar6 = 1;
    iVar1 = -iVar2;
    if (iVar1 < (int)param_5) {
      do {
        iVar7 = iVar2;
        if (-1 < iVar1) {
          iVar7 = param_4;
        }
        iVar7 = iVar7 + iVar1;
        iVar4 = FUN_00430740(param_1,param_2,param_3,iVar7,0,uVar6,iVar3);
        param_6 = param_6 - iVar4;
        param_3 = param_3 + iVar4;
        uVar6 = 0;
        iVar1 = iVar1 + 1;
      } while (iVar1 < (int)param_5);
      if (-1 < iVar7) {
        for (; iVar4 <= param_6; param_6 = param_6 - iVar4) {
          iVar2 = 0;
          iVar1 = param_2;
          if (0 < iVar3) {
            do {
              FUN_0042d420(param_1,iVar1,param_3,iVar7,iVar2,
                           (-(uint)(iVar2 != 0) & 0xfffffffe) + 2 | 0x18,0,0);
              iVar5 = FUN_00427970(iVar2);
              iVar1 = iVar1 + iVar5;
              iVar2 = iVar2 + 1;
            } while (iVar2 < iVar3);
          }
          param_3 = param_3 + iVar4;
        }
      }
    }
  }
  FUN_0042a090();
  ExceptionList = pvStack_c;
  return;
}

