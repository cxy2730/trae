// Function: FUN_0040119d
// Entry:    0040119d
// Size:     368 bytes
// Conv:     unknown
// Signature: undefined FUN_0040119d(void)
// Decompiled by Ghidra 12.1.2


void FUN_0040119d(int param_1)

{
  int iVar1;
  int iVar2;
  
  thunk_FUN_0041b590(0x52010003,0x16010223,8,0xffffffff,0,0);
  if (param_1 == 0) {
    iVar1 = thunk_FUN_0041b570(0x52010003,0x160101d9,0x26,0xffffffff);
    iVar2 = FUN_00401100(iVar1,&DAT_004a5d3c);
    if (iVar1 != 0) {
      thunk_FUN_0041b7c0(iVar1);
    }
    if (iVar2 == 0) {
      thunk_FUN_0041b590(0x52010003,0x160101d9,0x26,0xffffffff,&DAT_004a5d3d,0);
      thunk_FUN_0041b590(0x52010003,0x160101d9,0x12,0xffffffff,0,0);
      thunk_FUN_0041b590(0x52010003,0x160101d9,0x17,0xffffffff,0xff868e96,0);
    }
  }
  else {
    iVar1 = thunk_FUN_0041b570(0x52010003,0x160101d9,0x26,0xffffffff);
    iVar2 = FUN_00401100(iVar1,&DAT_004a5d3d);
    if (iVar1 != 0) {
      thunk_FUN_0041b7c0(iVar1);
    }
    if (iVar2 == 0) {
      thunk_FUN_0041b590(0x52010003,0x160101d9,0x26,0xffffffff,&DAT_004a5d3c,0);
      thunk_FUN_0041b590(0x52010003,0x160101d9,0x17,0xffffffff,0xffffffff,0);
    }
  }
  return;
}

