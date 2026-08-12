// Function: FUN_00495ff5
// Entry:    00495ff5
// Size:     140 bytes
// Conv:     unknown
// Signature: undefined FUN_00495ff5(void)
// Decompiled by Ghidra 12.1.2


undefined4 __thiscall FUN_00495ff5(int *param_1,uint param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  undefined1 local_30 [4];
  uint local_2c;
  int local_8;
  
  uVar3 = param_2 & 0xffff;
  param_2 = param_2 >> 0x10;
  if (param_3 == 0) {
    if (uVar3 == 0) {
      return 0;
    }
    FUN_00495fcb();
    local_2c = uVar3;
    (**(code **)(*param_1 + 0xc))(uVar3,0xffffffff,local_30,0);
    if (local_8 != 0) {
      param_2 = 0;
LAB_00496039:
      uVar1 = (**(code **)(*param_1 + 0xc))(uVar3,param_2,0,0);
      return uVar1;
    }
  }
  else {
    iVar2 = FUN_0049ccac(&LAB_0049c02d);
    if ((*(int *)(iVar2 + 0xb8) != param_1[7]) && (iVar2 = FUN_00496464(param_3,0), iVar2 == 0)) {
      if (uVar3 == 0) {
        return 0;
      }
      goto LAB_00496039;
    }
  }
  return 1;
}

