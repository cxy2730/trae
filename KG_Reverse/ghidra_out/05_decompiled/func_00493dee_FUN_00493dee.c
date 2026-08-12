// Function: FUN_00493dee
// Entry:    00493dee
// Size:     58 bytes
// Conv:     unknown
// Signature: undefined FUN_00493dee(void)
// Decompiled by Ghidra 12.1.2


undefined4 FUN_00493dee(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  int *piVar2;
  
  if (param_2 == 0x110) {
    uVar1 = FUN_00494bd9(param_1);
    piVar2 = (int *)FUN_0049896d(&PTR_s_CDialog_02f9b090,uVar1);
    if (piVar2 == (int *)0x0) {
      uVar1 = 1;
    }
    else {
      uVar1 = (**(code **)(*piVar2 + 0xbc))();
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

