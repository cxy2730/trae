// Function: FUN_00436f40
// Entry:    00436f40
// Size:     396 bytes
// Conv:     unknown
// Signature: undefined FUN_00436f40(void)
// Decompiled by Ghidra 12.1.2


undefined4 FUN_00436f40(int *param_1,uint param_2,HWND param_3)

{
  HWND hWnd;
  BOOL BVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  uint uVar6;
  undefined1 local_2c [4];
  uint local_28;
  int iStack_4;
  
  hWnd = (HWND)param_1[7];
  uVar6 = param_2 & 0xffff;
  uVar5 = param_2 >> 0x10;
  if (param_3 == (HWND)0x0) {
    if (uVar6 == 0) {
      return 0;
    }
    FUN_00495fcb();
    local_28 = uVar6;
    (**(code **)(*param_1 + 0xc))(uVar6,0xffffffff,local_2c,0);
    if (iStack_4 == 0) {
      return 1;
    }
    uVar5 = 0;
  }
  else {
    iVar3 = FUN_0049c4f2();
    if (*(int *)(iVar3 + 0xb8) == param_1[7]) {
      return 1;
    }
    iVar3 = FUN_00436e60(param_3,0);
    if (iVar3 != 0) {
      return 1;
    }
    iVar3 = FUN_00494bd9(param_3);
    if (iVar3 == 0) {
      if ((DAT_02fe8cb0 & 1) == 0) {
        DAT_02fe8cb0 = DAT_02fe8cb0 | 1;
        FUN_0049269e();
        FUN_00483c3b(&LAB_004370d0);
      }
      iVar3 = 0;
      piVar4 = DAT_02fe8cbc;
      if (0 < DAT_02fe8cc0) {
        do {
          if ((HWND)*piVar4 == param_3) {
            return 1;
          }
          iVar3 = iVar3 + 1;
          piVar4 = piVar4 + 1;
        } while (iVar3 < DAT_02fe8cc0);
      }
      FUN_0049272a(DAT_02fe8cc0,param_3);
      SendMessageA(param_3,0x111,param_2,(LPARAM)param_3);
      iVar3 = 0;
      piVar4 = DAT_02fe8cbc;
      if (0 < DAT_02fe8cc0) {
        while ((HWND)*piVar4 != param_3) {
          iVar3 = iVar3 + 1;
          piVar4 = piVar4 + 1;
          if (DAT_02fe8cc0 <= iVar3) {
            return 1;
          }
        }
        FUN_00492751(iVar3,1);
      }
      return 1;
    }
    if (uVar6 == 0) {
      return 0;
    }
  }
  BVar1 = IsWindow(hWnd);
  if (BVar1 == 0) {
    return 1;
  }
  uVar2 = (**(code **)(*param_1 + 0xc))(uVar6,uVar5,0,0);
  return uVar2;
}

