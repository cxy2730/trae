// Function: FUN_00433430
// Entry:    00433430
// Size:     425 bytes
// Conv:     unknown
// Signature: undefined FUN_00433430(void)
// Decompiled by Ghidra 12.1.2


int __thiscall
FUN_00433430(int param_1,undefined4 param_2,undefined4 *param_3,undefined4 *param_4,int *param_5,
            byte *param_6)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  byte *pbVar5;
  undefined4 local_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004a04d8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_3 = 0xffffffff;
  *param_5 = 0;
  *param_4 = 0;
  FUN_004062a0();
  local_4 = 0;
  if (param_6 == (byte *)0x0) {
    param_6 = (byte *)FUN_004062c0(*(undefined4 *)(*(int *)(param_1 + 4) + 8));
  }
  local_24 = *(undefined4 *)(param_1 + 0x3c);
  do {
    iVar1 = FUN_00432b70(local_24,param_6,param_4,param_5);
    if (iVar1 != 0) {
      local_4 = 0xffffffff;
      FUN_004064a0();
      ExceptionList = local_c;
      return iVar1;
    }
    iVar1 = *param_5;
    pbVar5 = param_6 + 4;
    if ((*param_6 & 1) == 0) {
      iVar3 = 0;
      if (0 < *(int *)(iVar1 + 0xc)) break;
      goto LAB_004335a6;
    }
    uVar2 = FUN_00432b30(param_6,*(int *)(iVar1 + 0xc) + -1);
    iVar3 = FUN_004325d0(param_2,uVar2);
    if (iVar3 < 1) {
      iVar3 = 0;
      if (0 < *(int *)(iVar1 + 0xc)) {
        do {
          iVar4 = FUN_004325d0(param_2,pbVar5 + 4);
          if (iVar4 < 1) {
            *(int *)(iVar1 + 0x10) = iVar3;
            local_24 = *(undefined4 *)pbVar5;
            break;
          }
          iVar3 = iVar3 + 1;
          pbVar5 = pbVar5 + *(int *)(*(int *)(param_1 + 4) + 0xc) + 4;
        } while (iVar3 < *(int *)(iVar1 + 0xc));
      }
    }
    else {
      *(undefined4 *)(iVar1 + 0x10) = *(undefined4 *)(iVar1 + 0xc);
      local_24 = FUN_00432b50(param_6,*(undefined4 *)(iVar1 + 0xc));
    }
  } while( true );
  while( true ) {
    iVar3 = iVar3 + 1;
    pbVar5 = pbVar5 + *(int *)(*(int *)(param_1 + 4) + 0xc) + 4;
    if (*(int *)(iVar1 + 0xc) <= iVar3) break;
    iVar4 = FUN_004325d0(pbVar5 + 4,param_2);
    if (-1 < iVar4) {
      if (iVar4 == 0) {
        *param_3 = *(undefined4 *)pbVar5;
      }
      break;
    }
  }
LAB_004335a6:
  *(int *)(iVar1 + 0x10) = iVar3;
  local_4 = 0xffffffff;
  FUN_004064a0();
  ExceptionList = local_c;
  return 0;
}

