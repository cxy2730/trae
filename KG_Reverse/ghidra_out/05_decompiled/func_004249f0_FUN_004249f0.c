// Function: FUN_004249f0
// Entry:    004249f0
// Size:     270 bytes
// Conv:     unknown
// Signature: undefined FUN_004249f0(void)
// Decompiled by Ghidra 12.1.2


undefined4 * FUN_004249f0(undefined4 param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0049f5b8;
  local_10 = ExceptionList;
  if (0 < param_2) {
    ExceptionList = &local_10;
    FUN_00493768();
    local_8 = 1;
    puVar3 = (undefined4 *)FUN_00492f17(0x18);
    puVar5 = (undefined4 *)0x0;
    if (puVar3 != (undefined4 *)0x0) {
      *puVar3 = 0;
      puVar3[1] = 0;
      puVar3[2] = 0;
      puVar3[3] = 0;
      puVar3[4] = 0;
      puVar3[5] = 0;
      puVar5 = puVar3;
    }
    piVar1 = puVar5 + 2;
    piVar2 = puVar5 + 1;
    iVar4 = FUN_00424b10(param_1,param_2,piVar2,piVar1);
    puVar5[4] = iVar4;
    if (iVar4 != 0) {
      *puVar5 = 8;
      puVar5[5] = *piVar2 * *piVar1 * 4;
      local_8 = 0xffffffff;
      FUN_004937a6();
      ExceptionList = local_10;
      return puVar5;
    }
    if (puVar5 != (undefined4 *)0x0) {
      *puVar5 = 0;
      *piVar2 = 0;
      *piVar1 = 0;
      puVar5[5] = 0;
      if ((HICON)puVar5[3] != (HICON)0x0) {
        DestroyIcon((HICON)puVar5[3]);
        puVar5[3] = 0;
      }
      if (puVar5[4] != 0) {
        FUN_00492f40(puVar5[4]);
        puVar5[4] = 0;
      }
      FUN_00492f40(puVar5);
    }
    local_8 = 0xffffffff;
    FUN_004937a6();
  }
  ExceptionList = local_10;
  return (undefined4 *)0x0;
}

