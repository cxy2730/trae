// Function: FUN_004241a0
// Entry:    004241a0
// Size:     455 bytes
// Conv:     unknown
// Signature: undefined FUN_004241a0(void)
// Decompiled by Ghidra 12.1.2


uint __thiscall FUN_004241a0(int *param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  int local_34 [10];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0049f578;
  local_c = ExceptionList;
  uVar4 = 0;
  if ((param_2 == 0) || (param_3 < 1)) {
    ExceptionList = &local_c;
    FUN_00424180();
    ExceptionList = local_c;
    return 1;
  }
  ExceptionList = &local_c;
  FUN_00424120();
  FUN_0049a8c4(0x400);
  local_4 = 0;
  FUN_0049a910(param_2,param_3,0);
  uVar1 = FUN_004236b0(local_34);
  (**(code **)(local_34[0] + 0x28))(0,0);
  switch(uVar1) {
  case 1:
    iVar2 = FUN_00423210(local_34);
    goto LAB_00424301;
  case 2:
    iVar2 = FUN_00423480(local_34);
    param_1[0x3d] = iVar2;
    uVar4 = (uint)(iVar2 != 0);
    break;
  case 3:
  case 4:
    iVar2 = FUN_004237d0(local_34,1);
    param_1[0x3d] = iVar2;
    uVar4 = (uint)(iVar2 != 0);
    break;
  case 5:
    if (param_1[0x40] == 1) {
      uVar4 = FUN_004390c0(param_2,param_3);
      if (uVar4 == 1) {
        puVar3 = (undefined4 *)FUN_00492f17(0x18);
        if (puVar3 == (undefined4 *)0x0) {
          param_1[0x3d] = 0;
          uRam00000000 = 5;
        }
        else {
          *puVar3 = 0;
          puVar3[1] = 0;
          puVar3[2] = 0;
          puVar3[3] = 0;
          puVar3[4] = 0;
          puVar3[5] = 0;
          param_1[0x3d] = (int)puVar3;
          *puVar3 = 5;
        }
      }
    }
    else {
      iVar2 = FUN_00423bc0(local_34);
      param_1[0x3d] = iVar2;
      uVar4 = (uint)(iVar2 != 0);
    }
    break;
  case 6:
  case 7:
    iVar2 = FUN_00424460(param_2,param_3);
    goto LAB_00424301;
  case 8:
    iVar2 = FUN_004249f0(param_2,param_3);
LAB_00424301:
    param_1[0x3d] = iVar2;
    uVar4 = (uint)(iVar2 != 0);
  }
  if (param_1[0x34] == 3) {
    (**(code **)(*param_1 + 0xb8))();
  }
  InvalidateRect((HWND)param_1[7],(RECT *)0x0,0);
  local_4 = 0xffffffff;
  CMemFile::~CMemFile((CMemFile *)local_34);
  ExceptionList = local_c;
  return uVar4;
}

