// Function: FUN_00432cf0
// Entry:    00432cf0
// Size:     384 bytes
// Conv:     unknown
// Signature: undefined FUN_00432cf0(void)
// Decompiled by Ghidra 12.1.2


int __thiscall FUN_00432cf0(int param_1,undefined4 param_2,int *param_3,byte *param_4)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004a0478;
  local_c = ExceptionList;
  piVar4 = (int *)*param_3;
  if (piVar4[4] < piVar4[3] + -1) {
    piVar4[4] = piVar4[4] + 1;
  }
  else {
    iVar2 = *(int *)(param_1 + 0x3c);
    if (piVar4[2] == iVar2) {
      return -0x39;
    }
    do {
      piVar4 = (int *)*piVar4;
      if (piVar4[4] < piVar4[3]) break;
    } while (piVar4[2] != iVar2);
    if ((piVar4[2] == iVar2) && (piVar4[3] <= piVar4[4])) {
      return -0x39;
    }
    ExceptionList = &local_c;
    if (piVar4[1] != 0) {
      ExceptionList = &local_c;
      FUN_00432520(piVar4[1]);
      piVar4[1] = 0;
    }
    *param_3 = (int)piVar4;
    piVar4[4] = piVar4[4] + 1;
    FUN_004062a0();
    local_4 = 0;
    if (param_4 == (byte *)0x0) {
      param_4 = (byte *)FUN_004062c0(*(undefined4 *)(*(int *)(param_1 + 4) + 8));
    }
    iVar2 = FUN_00431c90(piVar4[2],param_4);
    if (iVar2 != 0) {
      local_4 = 0xffffffff;
      FUN_004064a0();
      ExceptionList = local_c;
      return iVar2;
    }
    uVar3 = FUN_00432b50(param_4,piVar4[4]);
    bVar1 = *param_4;
    while ((bVar1 & 1) == 1) {
      iVar2 = FUN_00432b70(uVar3,param_4,param_2,param_3);
      if (iVar2 != 0) {
        local_4 = 0xffffffff;
        FUN_004064a0();
        ExceptionList = local_c;
        return iVar2;
      }
      *(undefined4 *)(*param_3 + 0x10) = 0;
      uVar3 = FUN_00432b50(param_4,0);
      bVar1 = *param_4;
    }
    local_4 = 0xffffffff;
    FUN_004064a0();
  }
  ExceptionList = local_c;
  return 0;
}

