// Function: FUN_00433ca0
// Entry:    00433ca0
// Size:     1973 bytes
// Conv:     unknown
// Signature: undefined FUN_00433ca0(void)
// Decompiled by Ghidra 12.1.2


int __thiscall FUN_00433ca0(int param_1,int *param_2,int param_3,undefined4 *param_4,int param_5)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined4 *puVar8;
  int *local_24;
  undefined4 local_20;
  int local_1c;
  int local_18;
  undefined4 local_14;
  undefined4 *local_10;
  uint local_c;
  undefined4 *local_8;
  undefined4 *local_4;
  
  if (param_2 == (int *)0x0) {
    return 0;
  }
  iVar1 = FUN_00431c90(param_2[2],param_5);
  if (iVar1 == 0) {
    if (1 < param_2[3]) {
      if (param_2[4] < param_2[3]) {
        iVar2 = FUN_00432b10(param_5,param_2[4]);
        iVar1 = *(int *)(*(int *)(param_1 + 4) + 0xc);
        iVar5 = ((param_2[3] - param_2[4]) + -1) * (iVar1 + 4) + 4;
        if (0 < iVar5) {
          FUN_00483180(iVar2,iVar1 + 4 + iVar2,iVar5);
        }
      }
      iVar1 = param_2[3] + -1;
      param_2[3] = iVar1;
      if (iVar1 < param_2[4]) {
        param_2[4] = iVar1;
      }
      *(short *)(param_5 + 2) = *(short *)(param_5 + 2) + -1;
      iVar2 = *(int *)(*(int *)(param_1 + 4) + 0xc) + 4;
      iVar1 = FUN_00432b10(param_5,param_2[3]);
      FUN_00406ca0(iVar1 + 4,iVar2);
      iVar1 = FUN_00431e20(param_2[2],param_5);
      if (iVar1 != 0) {
        return iVar1;
      }
      iVar1 = 0;
      if ((param_2[4] == param_2[3]) &&
         (iVar1 = FUN_00432bc0(&local_24,&local_20,param_2[2],param_5), iVar1 == 0)) {
        *(int **)local_24[1] = param_2;
        uVar3 = FUN_00432b30(param_5,*(short *)(param_5 + 2) + -1);
        iVar1 = FUN_004339d0(local_20,uVar3);
        *(int **)local_24[1] = local_24;
        FUN_00432520(local_24);
      }
      return iVar1;
    }
    if (param_2[2] == *(int *)(param_1 + 0x3c)) {
      uVar3 = FUN_00432b50(param_5,param_2[4] == 0);
      *(undefined4 *)(param_1 + 0x3c) = uVar3;
      iVar1 = FUN_00431ee0(param_2[2],param_5);
      return iVar1;
    }
    iVar2 = *param_2;
    local_1c = iVar2;
    local_14 = FUN_00432b50(param_5,param_2[4] == 0);
    iVar1 = FUN_00431c90(*(undefined4 *)(iVar2 + 8),param_3);
    if (iVar1 == 0) {
      if (0 < *(int *)(iVar2 + 0x10)) {
        uVar3 = FUN_00432b50(param_3,*(int *)(iVar2 + 0x10) + -1);
        iVar1 = FUN_00431c90(uVar3,param_4);
        if (iVar1 != 0) {
          return iVar1;
        }
        local_18 = (int)*(short *)((int)param_4 + 2);
        if (local_18 < *(int *)(param_1 + 0x30)) {
          iVar1 = FUN_00432bc0(&local_24,&local_20,uVar3,param_3);
          if (iVar1 != 0) {
            return iVar1;
          }
          iVar1 = FUN_00432b10(param_4,local_18);
          local_c = *(uint *)(*(int *)(param_1 + 4) + 0xc);
          local_10 = (undefined4 *)(iVar1 + 4);
          puVar4 = (undefined4 *)FUN_00432b30(param_3,*(short *)(param_3 + 2) + -1);
          puVar8 = (undefined4 *)(iVar1 + 4);
          for (uVar6 = local_c >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
            *puVar8 = *puVar4;
            puVar4 = puVar4 + 1;
            puVar8 = puVar8 + 1;
          }
          for (uVar6 = local_c & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
            *(undefined1 *)puVar8 = *(undefined1 *)puVar4;
            puVar4 = (undefined4 *)((int)puVar4 + 1);
            puVar8 = (undefined4 *)((int)puVar8 + 1);
          }
          *(undefined4 *)(*(int *)(*(int *)(param_1 + 4) + 0xc) + (int)local_10) = local_14;
          *(short *)((int)param_4 + 2) = *(short *)((int)param_4 + 2) + 1;
          iVar1 = FUN_00431e20(uVar3,param_4);
          if ((iVar1 == 0) && (iVar1 = FUN_00431ee0(param_2[2],param_4), iVar1 == 0)) {
            FUN_00432520(local_24);
            iVar2 = FUN_00432bc0(&local_24,&local_20,uVar3,param_3);
            iVar1 = local_1c;
            if (iVar2 != 0) {
              return iVar2;
            }
            *(int *)(local_1c + 0x10) = *(int *)(local_1c + 0x10) + -1;
            *local_24 = local_1c;
            uVar3 = FUN_00432b30(param_3,*(short *)(param_3 + 2) + -1);
            FUN_004339d0(local_20,uVar3);
            *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
            *local_24 = 0;
            FUN_00432520(local_24);
            iVar1 = FUN_00433ca0(iVar1,param_3,param_4,param_5);
            return iVar1;
          }
          FUN_00432520(local_24);
          return iVar1;
        }
      }
      if (*(int *)(local_1c + 0x10) < *(int *)(local_1c + 0xc)) {
        uVar3 = FUN_00432b50(param_3,*(int *)(local_1c + 0x10) + 1);
        iVar1 = FUN_00431c90(uVar3,param_4);
        if (iVar1 != 0) {
          return iVar1;
        }
        if ((int)*(short *)((int)param_4 + 2) < *(int *)(param_1 + 0x30)) {
          if (param_2[4] == 0) {
            iVar1 = FUN_00432bc0(&local_24,&local_20,param_2[2],param_3);
            if (iVar1 != 0) {
              return iVar1;
            }
            puVar4 = (undefined4 *)FUN_00432b30(param_3,*(short *)(param_3 + 2) + -1);
            FUN_00432520(local_24);
          }
          else {
            puVar4 = (undefined4 *)FUN_00432b30(param_5,0);
          }
          iVar1 = *(int *)(*(int *)(param_1 + 4) + 0xc);
          FUN_00483180((undefined1 *)(iVar1 + 4 + (int)(param_4 + 1)),param_4 + 1,
                       (*(int *)(*(int *)(param_1 + 4) + 8) - iVar1) + -8);
          uVar6 = *(uint *)(*(int *)(param_1 + 4) + 0xc);
          puVar8 = param_4 + 2;
          for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
            *puVar8 = *puVar4;
            puVar4 = puVar4 + 1;
            puVar8 = puVar8 + 1;
          }
          for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
            *(undefined1 *)puVar8 = *(undefined1 *)puVar4;
            puVar4 = (undefined4 *)((int)puVar4 + 1);
            puVar8 = (undefined4 *)((int)puVar8 + 1);
          }
          param_4[1] = local_14;
          *(short *)((int)param_4 + 2) = *(short *)((int)param_4 + 2) + 1;
          iVar1 = FUN_00431e20(uVar3,param_4);
          if (iVar1 != 0) {
            return iVar1;
          }
          iVar1 = FUN_00431ee0(param_2[2],param_4);
          if (iVar1 != 0) {
            return iVar1;
          }
          iVar1 = FUN_00433ca0(local_1c,param_3,param_4,param_5);
          return iVar1;
        }
      }
      iVar1 = *(int *)(local_1c + 0x10);
      if (iVar1 < 1) {
        if (iVar1 < *(int *)(local_1c + 0xc)) {
          uVar3 = FUN_00432b50(param_3,iVar1 + 1);
          iVar1 = FUN_00431c90(uVar3,param_4);
          if (iVar1 == 0) {
            if (param_2[4] == 0) {
              *(undefined4 *)(param_5 + 4) = local_14;
              iVar1 = FUN_00432bc0(&local_24,&local_20,local_14,param_3);
              if (iVar1 != 0) {
                return iVar1;
              }
              local_4 = *(undefined4 **)(*(int *)(param_1 + 4) + 0xc);
              puVar4 = (undefined4 *)FUN_00432b30(param_3,*(short *)(param_3 + 2) + -1);
              puVar8 = (undefined4 *)(param_5 + 8);
              for (uVar6 = (uint)local_4 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
                *puVar8 = *puVar4;
                puVar4 = puVar4 + 1;
                puVar8 = puVar8 + 1;
              }
              for (uVar6 = (uint)local_4 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
                *(undefined1 *)puVar8 = *(undefined1 *)puVar4;
                puVar4 = (undefined4 *)((int)puVar4 + 1);
                puVar8 = (undefined4 *)((int)puVar8 + 1);
              }
              FUN_00432520(local_24);
            }
            iVar1 = *(int *)(*(int *)(param_1 + 4) + 0x14);
            iVar2 = *(int *)(*(int *)(param_1 + 4) + 0xc);
            local_18 = *(short *)((int)param_4 + 2) - iVar1;
            local_c = (iVar1 + -1) * (iVar2 + 4) + 4;
            puVar8 = (undefined4 *)(iVar2 + 8 + param_5);
            puVar4 = param_4;
            for (uVar6 = local_c >> 2; puVar4 = puVar4 + 1, uVar6 != 0; uVar6 = uVar6 - 1) {
              *puVar8 = *puVar4;
              puVar8 = puVar8 + 1;
            }
            for (uVar6 = local_c & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
              *(undefined1 *)puVar8 = *(undefined1 *)puVar4;
              puVar4 = (undefined4 *)((int)puVar4 + 1);
              puVar8 = (undefined4 *)((int)puVar8 + 1);
            }
            *(undefined2 *)(param_5 + 2) = *(undefined2 *)(*(int *)(param_1 + 4) + 0x14);
            iVar1 = FUN_00431e20(param_2[2],param_5);
            if (iVar1 == 0) {
              iVar2 = local_c + *(int *)(*(int *)(param_1 + 4) + 0xc);
              FUN_00483180(param_4 + 1,(undefined1 *)(iVar2 + (int)(param_4 + 1)),
                           (*(int *)(*(int *)(param_1 + 4) + 8) - iVar2) + -4);
              *(short *)((int)param_4 + 2) = (short)local_18;
              iVar1 = FUN_00432b10(param_4,local_18);
              FUN_00406ca0(iVar1 + 4,iVar2);
              iVar1 = FUN_00431e20(uVar3,param_4);
              if ((iVar1 == 0) &&
                 (iVar1 = FUN_00432bc0(&local_24,&local_20,param_2[2],param_3), iVar1 == 0)) {
                *local_24 = local_1c;
                uVar3 = FUN_00432b30(param_3,*(short *)(param_3 + 2) + -1);
                FUN_004339d0(local_20,uVar3);
                goto LAB_00434295;
              }
            }
          }
        }
        else {
          iVar1 = -0x1f;
        }
      }
      else {
        uVar3 = FUN_00432b50(param_3,iVar1 + -1);
        iVar1 = FUN_00431c90(uVar3,param_4);
        if ((iVar1 == 0) && (iVar1 = FUN_00432bc0(&local_24,&local_20,uVar3,param_3), iVar1 == 0)) {
          local_8 = (undefined4 *)FUN_00432b30(param_3,*(short *)(param_3 + 2) + -1);
          FUN_00432520(local_24);
          local_18 = (int)*(short *)((int)param_4 + 2) - *(int *)(*(int *)(param_1 + 4) + 0x14);
          local_10 = (undefined4 *)(param_5 + 4);
          local_4 = (undefined4 *)FUN_00432b10(param_4,local_18 + 1);
          local_c = (*(int *)(*(int *)(param_1 + 4) + 0x14) + -1) *
                    (*(int *)(*(int *)(param_1 + 4) + 0xc) + 4) + 4;
          puVar4 = local_4;
          puVar8 = (undefined4 *)(param_5 + 4);
          for (uVar6 = local_c >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
            *puVar8 = *puVar4;
            puVar4 = puVar4 + 1;
            puVar8 = puVar8 + 1;
          }
          for (uVar6 = local_c & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
            *(undefined1 *)puVar8 = *(undefined1 *)puVar4;
            puVar4 = (undefined4 *)((int)puVar4 + 1);
            puVar8 = (undefined4 *)((int)puVar8 + 1);
          }
          uVar6 = *(uint *)(*(int *)(param_1 + 4) + 0xc);
          puVar4 = local_8;
          puVar8 = (undefined4 *)((int)local_10 + local_c);
          for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
            *puVar8 = *puVar4;
            puVar4 = puVar4 + 1;
            puVar8 = puVar8 + 1;
          }
          for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
            *(undefined1 *)puVar8 = *(undefined1 *)puVar4;
            puVar4 = (undefined4 *)((int)puVar4 + 1);
            puVar8 = (undefined4 *)((int)puVar8 + 1);
          }
          *(undefined4 *)(*(int *)(*(int *)(param_1 + 4) + 0xc) + (int)((int)local_10 + local_c)) =
               local_14;
          *(undefined2 *)(param_5 + 2) = *(undefined2 *)(*(int *)(param_1 + 4) + 0x14);
          iVar1 = FUN_00431e20(param_2[2],param_5);
          if (iVar1 == 0) {
            *(undefined2 *)((int)param_4 + 2) = (undefined2)local_18;
            iVar1 = *(int *)(*(int *)(param_1 + 4) + 0xc);
            FUN_00406ca0((int)local_4 - iVar1,iVar1 + local_c);
            iVar1 = FUN_00431e20(uVar3,param_4);
            if ((iVar1 == 0) &&
               (iVar1 = FUN_00432bc0(&local_24,&local_20,uVar3,param_3), iVar2 = local_1c,
               iVar1 == 0)) {
              *local_24 = local_1c;
              *(int *)(local_1c + 0x10) = *(int *)(local_1c + 0x10) + -1;
              uVar3 = FUN_00432b30(param_3,*(short *)(param_3 + 2) + -1);
              FUN_004339d0(local_20,uVar3);
              *(int *)(iVar2 + 0x10) = *(int *)(iVar2 + 0x10) + 1;
LAB_00434295:
              *local_24 = 0;
              FUN_00432520(local_24);
              return 0;
            }
          }
        }
      }
    }
  }
  return iVar1;
}

