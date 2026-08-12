// Function: FUN_00402a7b
// Entry:    00402a7b
// Size:     893 bytes
// Conv:     unknown
// Signature: undefined FUN_00402a7b(void)
// Decompiled by Ghidra 12.1.2


undefined4
FUN_00402a7b(undefined4 param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5,
            int param_6)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (param_2 == 1) {
    uVar1 = thunk_FUN_0041b570(0x52010003,0x160101f5,0,0xffffffff);
    uVar2 = thunk_FUN_0041b570(0x52010003,0x160101dd,2,0xffffffff);
    thunk_FUN_0041b1d0(5,param_1,0,0x80000301,0,0,0x80000301,3,0,0x80000301,uVar1,0,0x80000301,uVar2
                       ,0,0x80000301);
  }
  else if (param_2 != 2) {
    if (param_2 == 3) {
      if (param_3 == 0) {
        thunk_FUN_0041b590(0x52010003,0x160101f5,0,0xffffffff,param_4,0);
      }
    }
    else if (param_2 == 4) {
      thunk_FUN_0041b1d0(1,0,0,0);
    }
    else if (param_2 == 5) {
      if (param_6 == 0) {
        if (DAT_02fdc0fc == 0) {
          DAT_02fdc0fc = 0;
          FUN_004028dc(0,0);
        }
        else {
          iVar3 = thunk_FUN_0041b570(0x52010003,0x160101f5,2,0xffffffff);
          uVar1 = FUN_00401c3a(-(double)iVar3);
          thunk_FUN_0041b590(0x52010003,0x160101f5,0,0xffffffff,uVar1,0);
          uVar1 = thunk_FUN_0041b210(1,&LAB_00402df8,0,0x80000006);
          thunk_FUN_0041b1d0(10,2,0,0x80000301,0,0,0x80000301,0,0,0x80000301,0,0,0x80000301,10,0,
                             0x80000301,10,0,0x80000301,uVar1,0,0x80000301,0,0,0x80000301,0,0,
                             0x80000002,1,0,0x80000002);
        }
      }
      if (param_6 == 1) {
        if (DAT_02fdc0fc == 2) {
          DAT_02fdc0fc = 0;
          FUN_004028dc(1,0);
        }
        else {
          iVar3 = thunk_FUN_0041b570(0x52010003,0x160101f5,2,0xffffffff);
          uVar1 = FUN_00401c3a(-(double)iVar3);
          thunk_FUN_0041b590(0x52010003,0x160101f5,0,0xffffffff,uVar1,0);
          uVar1 = thunk_FUN_0041b210(1,&LAB_00402df8,0,0x80000006);
          thunk_FUN_0041b1d0(10,2,0,0x80000301,0,0,0x80000301,0,0,0x80000301,0,0,0x80000301,10,0,
                             0x80000301,10,0,0x80000301,uVar1,0,0x80000301,1,0,0x80000301,0,0,
                             0x80000002,1,0,0x80000002);
          DAT_02fdc0fc = DAT_02fdc0fc + 1;
        }
      }
    }
  }
  return 0;
}

