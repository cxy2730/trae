// Function: FUN_00445430
// Entry:    00445430
// Size:     254 bytes
// Conv:     unknown
// Signature: undefined FUN_00445430(void)
// Decompiled by Ghidra 12.1.2


void __thiscall FUN_00445430(int *param_1,UINT param_2)

{
  int iVar1;
  BOOL BVar2;
  CDialog local_8c [104];
  int local_24;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004a101b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  ReleaseCapture();
  if (param_2 != 0x83ed) {
    if (param_1[0x14] == -2) {
      FUN_00491820(param_1[0x28],0x100,param_1);
      local_4 = 0;
      param_1[0x42] = 1;
      iVar1 = DoModal();
      if (iVar1 == 1) {
        param_1[0x29] = local_24;
      }
      else {
        param_2 = 0x83ed;
      }
      param_1[0x42] = 0;
      local_4 = 0xffffffff;
      CDialog::~CDialog(local_8c);
    }
    if (param_2 != 0x83ed) goto LAB_004454e6;
  }
  param_1[0x29] = param_1[0x28];
LAB_004454e6:
  BVar2 = IsWindow((HWND)param_1[0x40]);
  if (BVar2 != 0) {
    SendMessageA((HWND)param_1[0x40],param_2,param_1[0x29],0);
  }
  (**(code **)(*param_1 + 0x58))();
  ExceptionList = pvStack_c;
  return;
}

