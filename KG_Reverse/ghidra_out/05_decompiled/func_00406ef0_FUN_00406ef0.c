// Function: FUN_00406ef0
// Entry:    00406ef0
// Size:     230 bytes
// Conv:     unknown
// Signature: undefined FUN_00406ef0(void)
// Decompiled by Ghidra 12.1.2


undefined4 __thiscall FUN_00406ef0(int *param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  undefined1 auStack_78 [40];
  undefined1 auStack_50 [64];
  void *pvStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0049dd10;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  (**(code **)*param_1)();
  if ((param_2 != 0) && (0 < param_3)) {
    FUN_0049a8c4(0x400);
    uStack_4 = 0;
    FUN_0049a910(param_2,param_3,0);
    FUN_0049a0a5(auStack_78,1,0x1000,0);
    uStack_4 = CONCAT31(uStack_4._1_3_,1);
    uVar1 = (**(code **)(*param_1 + 4))(auStack_50);
    puStack_8 = (undefined1 *)((uint)puStack_8 & 0xffffff00);
    FUN_0049a181();
    puStack_8 = (undefined1 *)0xffffffff;
    CMemFile::~CMemFile((CMemFile *)&stack0xffffff84);
    ExceptionList = pvStack_10;
    return uVar1;
  }
  ExceptionList = pvStack_c;
  return 1;
}

