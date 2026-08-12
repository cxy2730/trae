// Function: FUN_0049a217
// Entry:    0049a217
// Size:     271 bytes
// Conv:     unknown
// Signature: undefined FUN_0049a217(void)
// Decompiled by Ghidra 12.1.2


int __thiscall FUN_0049a217(int param_1,int param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 local_c;
  undefined4 local_8;
  
  if (param_3 == 0) {
    iVar1 = 0;
  }
  else {
    uVar3 = *(int *)(param_1 + 0x28) - *(int *)(param_1 + 0x24);
    if (param_3 < uVar3) {
      uVar3 = param_3;
    }
    FUN_00485580(param_2,*(int *)(param_1 + 0x24),uVar3);
    *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + uVar3;
    param_2 = param_2 + uVar3;
    uVar3 = param_3 - uVar3;
    if (uVar3 != 0) {
      iVar1 = uVar3 - uVar3 % *(uint *)(param_1 + 0x1c);
      local_c = 0;
      local_8 = iVar1;
      do {
        iVar2 = (**(code **)(**(int **)(param_1 + 0x20) + 0x34))(param_2,local_8);
        param_2 = param_2 + iVar2;
        local_c = local_c + iVar2;
        local_8 = local_8 - iVar2;
        if (iVar2 == 0) break;
      } while (local_8 != 0);
      uVar3 = uVar3 - local_c;
      if (local_c == iVar1) {
        uVar4 = 0;
        if (*(int *)(param_1 + 8) == 0) {
          local_8 = uVar3;
          if (uVar3 <= *(uint *)(param_1 + 0x1c)) {
            local_8 = *(uint *)(param_1 + 0x1c);
          }
          local_c = *(int *)(param_1 + 0x2c);
          do {
            iVar1 = (**(code **)(**(int **)(param_1 + 0x20) + 0x34))(local_c,local_8);
            local_c = local_c + iVar1;
            local_8 = local_8 - iVar1;
            uVar4 = uVar4 + iVar1;
            if ((iVar1 == 0) || (local_8 == 0)) break;
          } while (uVar4 < uVar3);
          iVar1 = *(int *)(param_1 + 0x2c);
          *(int *)(param_1 + 0x24) = iVar1;
          *(uint *)(param_1 + 0x28) = iVar1 + uVar4;
        }
        else {
          (**(code **)(**(int **)(param_1 + 0x20) + 0x50))
                    (0,*(undefined4 *)(param_1 + 0x1c),(int *)(param_1 + 0x2c),param_1 + 0x28);
          iVar1 = *(int *)(param_1 + 0x2c);
          *(int *)(param_1 + 0x24) = iVar1;
        }
        uVar4 = *(int *)(param_1 + 0x28) - iVar1;
        if (uVar3 < uVar4) {
          uVar4 = uVar3;
        }
        FUN_00485580(param_2,iVar1,uVar4);
        *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + uVar4;
        uVar3 = uVar3 - uVar4;
      }
    }
    iVar1 = param_3 - uVar3;
  }
  return iVar1;
}

