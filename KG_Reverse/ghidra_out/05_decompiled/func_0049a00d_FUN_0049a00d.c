// Function: FUN_0049a00d
// Entry:    0049a00d
// Size:     152 bytes
// Conv:     unknown
// Signature: undefined FUN_0049a00d(void)
// Decompiled by Ghidra 12.1.2


undefined4 FUN_0049a00d(undefined4 param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  bool bVar4;
  undefined4 local_8;
  
  local_8 = FUN_00499fb6(param_1);
  bVar4 = local_8 == -1;
  if (bVar4) {
    local_8 = FUN_00499fb6(param_1);
  }
  uVar2 = (uint)bVar4;
  iVar3 = (uVar2 + 1) * local_8;
  if (local_8 == 0) {
    FUN_00493631(0);
  }
  else {
    FUN_00493631(iVar3 + uVar2);
    iVar1 = FUN_0049a217(*param_2,iVar3);
    if (iVar1 != iVar3) {
      FUN_0049a5f2(3,0);
    }
    if (uVar2 != 0) {
      iVar3 = *param_2;
      *(undefined2 *)(iVar3 + local_8 * 2) = 0;
      *param_2 = (int)PTR_DAT_02fd8088;
      FUN_0049333a(iVar3);
      FUN_004930c5();
    }
  }
  return param_1;
}

