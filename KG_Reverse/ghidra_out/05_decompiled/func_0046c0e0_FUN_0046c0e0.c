// Function: FUN_0046c0e0
// Entry:    0046c0e0
// Size:     538 bytes
// Conv:     unknown
// Signature: undefined FUN_0046c0e0(void)
// Decompiled by Ghidra 12.1.2


int __fastcall FUN_0046c0e0(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  int local_4;
  
  iVar7 = -1;
  local_18 = -1;
  local_14 = -1;
  local_10 = -1;
  local_4 = 0;
  do {
    iVar3 = FUN_0046cb10(&local_8,0x10e3,0);
    if (iVar3 != 0) {
      if ((iVar3 != 0x21) && (iVar3 != 0x1c)) {
        (**(code **)(*param_1 + 0x18))();
      }
      return iVar3;
    }
    local_1c = 0;
    iVar3 = 0;
    iVar5 = iVar7;
    do {
      iVar4 = FUN_00474f70(iVar3 + local_8,0x10e3 - iVar3,param_1 + 0x12,param_1 + 0x1f,&local_c);
      param_1[0xe] = iVar4;
      if (iVar4 < 1) {
LAB_0046c290:
        FUN_0046cca0(0);
        iVar3 = FUN_0046c040();
        iVar7 = iVar5;
        if (iVar3 != 0) {
          return iVar3;
        }
        break;
      }
      if (local_1c == 0) {
        iVar7 = param_1[0x1a];
        local_18 = param_1[0x17];
        iVar3 = iVar3 + param_1[0x18] + iVar4 + local_c;
        local_14 = param_1[0x14];
        local_10 = param_1[0x13];
      }
      else {
        if (((0x5a0 < iVar4) ||
            (((iVar1 = param_1[0x14], iVar1 != 1 && (iVar1 != 2)) || (local_18 != param_1[0x17]))))
           || (((local_14 != iVar1 || (iVar2 = param_1[0x13], local_10 != iVar2)) ||
               (iVar7 = param_1[0x1a], iVar5 != iVar7)))) goto LAB_0046c290;
        local_18 = param_1[0x17];
        iVar3 = iVar3 + param_1[0x18] + iVar4 + local_c;
        local_14 = iVar1;
        local_10 = iVar2;
        if (1 < local_1c) {
          if (param_1[0x28] != 0) {
            FUN_00492f40(*(undefined4 *)(param_1[0x28] + 0x18));
            FUN_00492f40(param_1[0x28]);
          }
          iVar5 = FUN_00492f17(0x1c);
          param_1[0x28] = iVar5;
          uVar6 = FUN_00492f17(100);
          *(undefined4 *)(param_1[0x28] + 0x18) = uVar6;
          iVar5 = FUN_0046c360(param_1[0x28],local_8);
          if (iVar5 == 0) {
            FUN_00492f40(*(undefined4 *)(param_1[0x28] + 0x18));
            FUN_00492f40(param_1[0x28]);
            param_1[0x28] = 0;
          }
        }
      }
      local_1c = local_1c + 1;
      iVar5 = iVar7;
    } while (local_1c < 3);
    if (local_1c == 3) {
      FUN_0046cca0(0);
      return 0;
    }
    local_4 = local_4 + 1;
    if (0x1f < local_4) {
      return 0x3e9;
    }
  } while( true );
}

