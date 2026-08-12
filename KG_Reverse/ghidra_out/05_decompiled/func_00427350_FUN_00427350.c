// Function: FUN_00427350
// Entry:    00427350
// Size:     523 bytes
// Conv:     unknown
// Signature: undefined FUN_00427350(void)
// Decompiled by Ghidra 12.1.2


undefined4 __fastcall FUN_00427350(int *param_1)

{
  HWND hWnd;
  BOOL BVar1;
  int iVar2;
  int local_40;
  int local_3c;
  int local_2c;
  int local_24;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0049f6d2;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  (**(code **)(param_1[0x24] + 0xc))(0xffffffff);
  hWnd = (HWND)param_1[7];
  FUN_0049269e();
  local_8 = 0;
  FUN_0049269e();
  local_8 = CONCAT31(local_8._1_3_,1);
  FUN_004926fe(param_1 + 0x26);
  FUN_004926fe(param_1 + 0x2b);
  FUN_00427320();
  (**(code **)(param_1[0x24] + 0x14))();
  for (local_2c = 0; local_2c < local_3c; local_2c = local_2c + 1) {
    iVar2 = *(int *)(local_40 + local_2c * 4) + -0x402;
    switch(iVar2) {
    case 0:
      (**(code **)(*param_1 + 0xb8))(1);
      break;
    case 1:
      (**(code **)(*param_1 + 0xb8))(2);
      break;
    case 2:
      (**(code **)(*param_1 + 0xb8))(3);
      break;
    case 3:
      (**(code **)(*param_1 + 0xb8))(4);
      break;
    case 4:
      (**(code **)(*param_1 + 0xb8))(5);
      break;
    case 5:
      (**(code **)(*param_1 + 0xb8))(6);
      break;
    case 6:
      (**(code **)(*param_1 + 0xbc))
                (CONCAT31((int3)((uint)iVar2 >> 8),*(undefined1 *)(local_24 + local_2c * 4)));
      break;
    case 7:
      (**(code **)(*param_1 + 0xb8))(7);
      break;
    case 8:
      (**(code **)(*param_1 + 0xb8))(8);
      break;
    case 9:
      (**(code **)(*param_1 + 0xb8))(9);
      break;
    case 10:
      (**(code **)(*param_1 + 0xb8))(10);
    }
    BVar1 = IsWindow(hWnd);
    if (BVar1 == 0) break;
  }
  local_8 = local_8 & 0xffffff00;
  FUN_004926d1();
  local_8 = 0xffffffff;
  FUN_004926d1();
  ExceptionList = local_10;
  return 0;
}

