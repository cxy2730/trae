// Function: FUN_00432bc0
// Entry:    00432bc0
// Size:     295 bytes
// Conv:     unknown
// Signature: undefined FUN_00432bc0(void)
// Decompiled by Ghidra 12.1.2


int __thiscall FUN_00432bc0(int param_1,undefined4 *param_2,int *param_3,int param_4,byte *param_5)

{
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004a0458;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_3 = 0;
  *param_2 = 0;
  if ((param_4 < 0) || (*(int *)(param_1 + 0x30) < param_4)) {
    iVar1 = -0x34;
  }
  else {
    if (param_4 == 0) {
      param_4 = *(int *)(param_1 + 0x3c);
    }
    FUN_004062a0();
    local_4 = 0;
    if (param_5 == (byte *)0x0) {
      param_5 = (byte *)FUN_004062c0(*(undefined4 *)(*(int *)(param_1 + 4) + 8));
    }
    while (iVar1 = FUN_00432b70(param_4,param_5,param_2,param_3), iVar1 == 0) {
      if ((*param_5 & 1) == 0) {
        local_4 = 0xffffffff;
        *(int *)(*param_3 + 0x10) = *(int *)(*param_3 + 0xc) + -1;
        FUN_004064a0();
        ExceptionList = local_c;
        return 0;
      }
      *(undefined4 *)(*param_3 + 0x10) = *(undefined4 *)(*param_3 + 0xc);
      param_4 = FUN_00432b50(param_5,*(undefined4 *)(*param_3 + 0xc));
    }
    FUN_00432520(*param_2);
    *param_3 = 0;
    *param_2 = 0;
    local_4 = 0xffffffff;
    FUN_004064a0();
  }
  ExceptionList = local_c;
  return iVar1;
}

