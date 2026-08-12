// Function: FUN_00430740
// Entry:    00430740
// Size:     262 bytes
// Conv:     unknown
// Signature: undefined FUN_00430740(void)
// Decompiled by Ghidra 12.1.2


void FUN_00430740(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,uint param_5,
                 int param_6,int param_7)

{
  int iVar1;
  int iVar2;
  
  FUN_0042a650();
  if (param_5 == 1) {
    iVar2 = 0;
    if (0 < param_7) {
      do {
        FUN_0042d420(param_1,param_2,param_3,param_4,iVar2,0x20,0,0);
        iVar1 = FUN_00427970(iVar2);
        param_2 = param_2 + iVar1;
        iVar2 = iVar2 + 1;
      } while (iVar2 < param_7);
      FUN_00427930(param_4);
      return;
    }
  }
  else {
    param_5 = 0x18;
    if (param_6 == 1) {
      param_5 = 0x1c;
    }
    iVar2 = 0;
    if (0 < param_7) {
      do {
        FUN_0042d420(param_1,param_2,param_3,param_4,iVar2,1,0,0);
        FUN_0042d420(param_1,param_2,param_3,param_4,iVar2,
                     (-(uint)(iVar2 != 0) & 0xfffffffe) + 2 | param_5,0,0);
        iVar1 = FUN_00427970(iVar2);
        param_2 = param_2 + iVar1;
        iVar2 = iVar2 + 1;
      } while (iVar2 < param_7);
    }
  }
  FUN_00427930(param_4);
  return;
}

