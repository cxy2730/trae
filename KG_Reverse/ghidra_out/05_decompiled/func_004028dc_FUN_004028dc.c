// Function: FUN_004028dc
// Entry:    004028dc
// Size:     415 bytes
// Conv:     unknown
// Signature: undefined FUN_004028dc(void)
// Decompiled by Ghidra 12.1.2


void FUN_004028dc(int param_1,int param_2)

{
  undefined4 uVar1;
  
  if (param_2 == 0) {
    thunk_FUN_0041b590(0x52010003,0x160101a4,1,0xffffffff,0xf1,0);
    thunk_FUN_0041b590(0x52010003,0x160101cf,8,0xffffffff,1,0);
    thunk_FUN_0041b590(0x52010003,0x160101dd,8,0xffffffff,0,0);
    if (param_1 == 1) {
      thunk_FUN_0041b590(0x52010003,0x16010223,8,0xffffffff,1,0);
    }
  }
  else {
    thunk_FUN_0041b590(0x52010003,0x160101cf,8,0xffffffff,0,0);
    thunk_FUN_0041b590(0x52010003,0x160101dd,8,0xffffffff,1,0);
    thunk_FUN_0041b590(0x52010003,0x16010223,8,0xffffffff,0,0);
    uVar1 = thunk_FUN_0041b210(1,&LAB_00402e17,0,0x80000006);
    thunk_FUN_0041b1d0(10,2,0,0x80000301,0,0,0x80000301,0,0,0x80000301,0,0,0x80000301,10,0,
                       0x80000301,10,0,0x80000301,uVar1,0,0x80000301,param_1,0,0x80000301,0,0,
                       0x80000002,1,0,0x80000002);
  }
  return;
}

