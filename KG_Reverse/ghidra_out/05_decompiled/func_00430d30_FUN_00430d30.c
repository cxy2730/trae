// Function: FUN_00430d30
// Entry:    00430d30
// Size:     666 bytes
// Conv:     unknown
// Signature: undefined FUN_00430d30(void)
// Decompiled by Ghidra 12.1.2


int __thiscall FUN_00430d30(int param_1,int param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  uint uVar5;
  int *piVar6;
  undefined4 *puVar7;
  int *local_28;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004a0338;
  local_c = ExceptionList;
  if (*(int *)(param_1 + 0x1c) == 0) {
    iVar2 = -0x1b;
  }
  else {
    if (*(int *)(param_1 + 0x20) < 1) {
      if (*(int *)(param_1 + 0x40) == 0) {
        local_28 = (int *)0x0;
      }
      else {
        local_28 = *(int **)(param_1 + 0x38);
      }
      uVar5 = *(uint *)(param_1 + 0x40) >> 3;
      ExceptionList = &local_c;
      FUN_004062a0();
      bVar4 = false;
      iVar2 = 0;
      local_4 = 0;
      piVar6 = local_28;
      if (uVar5 != 0) {
        do {
          if (*piVar6 == -1) {
            bVar4 = true;
            break;
          }
          piVar6 = piVar6 + 2;
          iVar2 = iVar2 + 1;
        } while (iVar2 < (int)uVar5);
      }
      iVar2 = 0;
      piVar6 = local_28;
      if (uVar5 != 0) {
        do {
          if (*piVar6 == param_2) {
            iVar2 = piVar6[1];
            if (param_3 == 1) {
              piVar6[1] = iVar2 + 1;
            }
            else if (iVar2 == 0) {
              if (param_2 == -1) {
                FUN_004065e0(param_1 + 0x30);
                piVar6 = (int *)0x0;
                FUN_00430fe0(*(undefined4 *)(param_1 + 0x1c),0xffffffff,0);
                do {
                  if ((*piVar6 != -1) &&
                     (iVar2 = FUN_00430fe0(*(undefined4 *)(param_1 + 0x1c),*piVar6,1), iVar2 == 0))
                  {
                    FUN_004069d0(piVar6,8);
                  }
                  piVar6 = piVar6 + 2;
                  uVar5 = uVar5 - 1;
                } while (uVar5 != 0);
              }
              else {
                if (!bVar4) {
                  FUN_00430fe0(*(undefined4 *)(param_1 + 0x1c),param_2,0);
                }
                FUN_00406b50(((int)piVar6 - (int)local_28 >> 2) << 2,8);
              }
            }
            else {
              piVar6[1] = iVar2 + -1;
            }
            goto LAB_00430f9a;
          }
          piVar6 = piVar6 + 2;
          iVar2 = iVar2 + 1;
        } while (iVar2 < (int)uVar5);
      }
      if (param_3 == 0) {
        local_4 = 0xffffffff;
        FUN_004064a0();
        ExceptionList = local_c;
        return -0x1d;
      }
      if (!bVar4) {
        uVar1 = uVar5;
        if (param_2 == -1) {
          for (; uVar1 != 0; uVar1 = uVar1 - 1) {
            FUN_00430fe0(*(undefined4 *)(param_1 + 0x1c),*local_28,0);
            local_28 = local_28 + 2;
          }
        }
        iVar2 = FUN_00430fe0(*(undefined4 *)(param_1 + 0x1c),param_2,1);
        if (iVar2 != 0) {
          if (param_2 == -1) {
            FUN_004065e0(param_1 + 0x30);
            puVar7 = (undefined4 *)0x0;
            for (; uVar5 != 0; uVar5 = uVar5 - 1) {
              iVar3 = FUN_00430fe0(*(undefined4 *)(param_1 + 0x1c),*puVar7,1);
              if (iVar3 == 0) {
                FUN_004069d0(puVar7,8);
              }
              puVar7 = puVar7 + 2;
            }
          }
          local_4 = 0xffffffff;
          FUN_004064a0();
          ExceptionList = local_c;
          return iVar2;
        }
      }
      FUN_004065a0(param_2);
      FUN_004065a0(0);
LAB_00430f9a:
      local_4 = 0xffffffff;
      FUN_004064a0();
    }
    iVar2 = 0;
  }
  ExceptionList = local_c;
  return iVar2;
}

