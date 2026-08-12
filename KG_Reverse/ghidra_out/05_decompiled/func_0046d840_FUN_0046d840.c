// Function: FUN_0046d840
// Entry:    0046d840
// Size:     188 bytes
// Conv:     unknown
// Signature: undefined FUN_0046d840(void)
// Decompiled by Ghidra 12.1.2


int __thiscall FUN_0046d840(int *param_1,int *param_2)

{
  int iVar1;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_004a132b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  if ((undefined4 *)param_1[5] != (undefined4 *)0x0) {
    ExceptionList = &pvStack_c;
    (*(code *)**(undefined4 **)param_1[5])(1);
    param_1[5] = 0;
  }
  iVar1 = FUN_00492f17(0x30);
  uStack_4 = 0;
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = FUN_004752d0(0x10000,0x2000);
  }
  uStack_4 = 0xffffffff;
  param_1[5] = iVar1;
  iVar1 = (**(code **)(*param_1 + 0x28))();
  if (iVar1 == 0) {
    iVar1 = (**(code **)(*param_1 + 0x4c))();
    if (iVar1 == 0) {
      *param_2 = param_1[5];
      ExceptionList = pvStack_c;
      return 0;
    }
  }
  (**(code **)(*param_1 + 0x18))();
  ExceptionList = pvStack_c;
  return iVar1;
}

