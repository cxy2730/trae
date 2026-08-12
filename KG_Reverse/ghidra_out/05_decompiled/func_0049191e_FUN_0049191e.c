// Function: FUN_0049191e
// Entry:    0049191e
// Size:     407 bytes
// Conv:     unknown
// Signature: undefined FUN_0049191e(void)
// Decompiled by Ghidra 12.1.2


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0049191e(HWND param_1,uint param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  
  if (param_1 != (HWND)0x0) {
    iVar1 = FUN_0049ccac(&LAB_0049c02d);
    if ((*(int *)(iVar1 + 0x18) != 0) && (iVar2 = FUN_00494bd9(param_1), iVar2 == 0)) {
      FUN_004972d5(param_1);
      *(undefined4 *)(iVar1 + 0x18) = 0;
    }
    if (param_2 == 0x110) {
      DAT_03010f24 = RegisterWindowMessageA("commdlg_LBSelChangedNotify");
      DAT_03010f20 = RegisterWindowMessageA("commdlg_ShareViolation");
      DAT_03010f1c = RegisterWindowMessageA("commdlg_FileNameOK");
      DAT_03010f18 = RegisterWindowMessageA("commdlg_ColorOK");
      DAT_03010f14 = RegisterWindowMessageA("commdlg_help");
      _DAT_03010f10 = RegisterWindowMessageA("commdlg_SetRGBColor");
      uVar3 = FUN_00493dee(param_1,0x110,param_3,param_4);
      return uVar3;
    }
    if ((param_2 == DAT_03010f14) || ((param_2 == 0x111 && ((short)param_3 == 0x40e)))) {
      SendMessageA(param_1,0x111,0xe146,0);
      return 1;
    }
    if (0xbfff < param_2) {
      piVar4 = (int *)FUN_00494bd9(param_1);
      iVar1 = FUN_0049895b(&PTR_s_CFileDialog_02f9bdc8);
      if ((iVar1 == 0) || ((*(byte *)((int)piVar4 + 0x92) & 8) == 0)) {
        if (param_2 == DAT_03010f20) {
          uVar3 = (**(code **)(*piVar4 + 0xd0))(param_4);
          return uVar3;
        }
        if (param_2 == DAT_03010f1c) {
          if (DAT_03010cfc != 0) {
            piVar4[0x7d] = param_4;
          }
          uVar3 = (**(code **)(*piVar4 + 0xd4))();
          piVar4[0x7d] = 0;
          return uVar3;
        }
        if (param_2 == DAT_03010f24) {
          (**(code **)(*piVar4 + 0xd8))(param_3,param_4 & 0xffff,param_4 >> 0x10);
        }
        else if (param_2 == DAT_03010f18) {
          uVar3 = (**(code **)(*piVar4 + 0xd0))();
          return uVar3;
        }
      }
    }
  }
  return 0;
}

