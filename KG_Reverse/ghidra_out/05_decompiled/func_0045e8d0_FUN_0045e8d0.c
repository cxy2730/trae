// Function: FUN_0045e8d0
// Entry:    0045e8d0
// Size:     1397 bytes
// Conv:     unknown
// Signature: undefined FUN_0045e8d0(void)
// Decompiled by Ghidra 12.1.2


void FUN_0045e8d0(int param_1,int param_2,ushort *param_3)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint local_8;
  int local_4;
  
  local_8 = 0xffffffff;
  iVar2 = 7;
  iVar7 = 4;
  if (*(ushort *)(param_2 + 2) == 0) {
    iVar2 = 0x8a;
    iVar7 = 3;
  }
  if (-1 < (int)param_3) {
    local_4 = (int)param_3 + 1;
    iVar3 = 0;
    uVar5 = (uint)*(ushort *)(param_2 + 2);
    param_3 = (ushort *)(param_2 + 6);
    do {
      iVar4 = iVar3 + 1;
      uVar6 = (uint)*param_3;
      if ((iVar2 <= iVar4) || (uVar5 != uVar6)) {
        if (iVar4 < iVar7) {
          do {
            iVar2 = *(int *)(param_1 + 0x16b4);
            uVar8 = (uint)*(ushort *)(param_1 + 0xa76 + uVar5 * 4);
            if ((int)(0x10 - uVar8) < iVar2) {
              uVar1 = *(ushort *)(param_1 + 0xa74 + uVar5 * 4);
              *(ushort *)(param_1 + 0x16b0) =
                   *(ushort *)(param_1 + 0x16b0) | uVar1 << ((byte)iVar2 & 0x1f);
              *(undefined1 *)(*(int *)(param_1 + 8) + *(int *)(param_1 + 0x14)) =
                   *(undefined1 *)(param_1 + 0x16b0);
              iVar2 = *(int *)(param_1 + 0x14) + 1;
              *(int *)(param_1 + 0x14) = iVar2;
              *(undefined1 *)(iVar2 + *(int *)(param_1 + 8)) = *(undefined1 *)(param_1 + 0x16b1);
              *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
              *(ushort *)(param_1 + 0x16b0) =
                   uVar1 >> (0x10U - (char)*(int *)(param_1 + 0x16b4) & 0x1f);
              *(uint *)(param_1 + 0x16b4) = *(int *)(param_1 + 0x16b4) + -0x10 + uVar8;
            }
            else {
              *(ushort *)(param_1 + 0x16b0) =
                   *(ushort *)(param_1 + 0x16b0) |
                   *(short *)(param_1 + 0xa74 + uVar5 * 4) << ((byte)iVar2 & 0x1f);
              *(uint *)(param_1 + 0x16b4) = iVar2 + uVar8;
            }
            iVar4 = iVar4 + -1;
          } while (iVar4 != 0);
        }
        else if (uVar5 == 0) {
          if (iVar4 < 0xb) {
            iVar2 = *(int *)(param_1 + 0x16b4);
            uVar8 = (uint)*(ushort *)(param_1 + 0xaba);
            if ((int)(0x10 - uVar8) < iVar2) {
              uVar1 = *(ushort *)(param_1 + 0xab8);
              *(ushort *)(param_1 + 0x16b0) =
                   *(ushort *)(param_1 + 0x16b0) | uVar1 << ((byte)iVar2 & 0x1f);
              *(undefined1 *)(*(int *)(param_1 + 8) + *(int *)(param_1 + 0x14)) =
                   *(undefined1 *)(param_1 + 0x16b0);
              iVar2 = *(int *)(param_1 + 0x14) + 1;
              *(int *)(param_1 + 0x14) = iVar2;
              *(undefined1 *)(iVar2 + *(int *)(param_1 + 8)) = *(undefined1 *)(param_1 + 0x16b1);
              *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
              *(ushort *)(param_1 + 0x16b0) =
                   uVar1 >> (0x10U - (char)*(int *)(param_1 + 0x16b4) & 0x1f);
              *(uint *)(param_1 + 0x16b4) = *(int *)(param_1 + 0x16b4) + -0x10 + uVar8;
            }
            else {
              *(ushort *)(param_1 + 0x16b0) =
                   *(ushort *)(param_1 + 0x16b0) |
                   *(short *)(param_1 + 0xab8) << ((byte)iVar2 & 0x1f);
              *(uint *)(param_1 + 0x16b4) = iVar2 + uVar8;
            }
            iVar2 = *(int *)(param_1 + 0x16b4);
            if (iVar2 < 0xe) {
              *(ushort *)(param_1 + 0x16b0) =
                   *(ushort *)(param_1 + 0x16b0) | (ushort)(iVar3 + -2 << ((byte)iVar2 & 0x1f));
              iVar2 = iVar2 + 3;
LAB_0045ede9:
              *(int *)(param_1 + 0x16b4) = iVar2;
            }
            else {
              *(ushort *)(param_1 + 0x16b0) =
                   *(ushort *)(param_1 + 0x16b0) | (ushort)(iVar3 + -2 << ((byte)iVar2 & 0x1f));
              *(undefined1 *)(*(int *)(param_1 + 8) + *(int *)(param_1 + 0x14)) =
                   *(undefined1 *)(param_1 + 0x16b0);
              iVar2 = *(int *)(param_1 + 0x14) + 1;
              *(int *)(param_1 + 0x14) = iVar2;
              *(undefined1 *)(iVar2 + *(int *)(param_1 + 8)) = *(undefined1 *)(param_1 + 0x16b1);
              iVar2 = *(int *)(param_1 + 0x16b4);
              *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
              *(int *)(param_1 + 0x16b4) = iVar2 + -0xd;
              *(ushort *)(param_1 + 0x16b0) = (ushort)(iVar3 + -2) >> (0x10U - (char)iVar2 & 0x1f);
            }
          }
          else {
            iVar2 = *(int *)(param_1 + 0x16b4);
            uVar8 = (uint)*(ushort *)(param_1 + 0xabe);
            if ((int)(0x10 - uVar8) < iVar2) {
              uVar1 = *(ushort *)(param_1 + 0xabc);
              *(ushort *)(param_1 + 0x16b0) =
                   *(ushort *)(param_1 + 0x16b0) | uVar1 << ((byte)iVar2 & 0x1f);
              *(undefined1 *)(*(int *)(param_1 + 8) + *(int *)(param_1 + 0x14)) =
                   *(undefined1 *)(param_1 + 0x16b0);
              iVar2 = *(int *)(param_1 + 0x14) + 1;
              *(int *)(param_1 + 0x14) = iVar2;
              *(undefined1 *)(iVar2 + *(int *)(param_1 + 8)) = *(undefined1 *)(param_1 + 0x16b1);
              *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
              *(ushort *)(param_1 + 0x16b0) =
                   uVar1 >> (0x10U - (char)*(int *)(param_1 + 0x16b4) & 0x1f);
              *(uint *)(param_1 + 0x16b4) = *(int *)(param_1 + 0x16b4) + -0x10 + uVar8;
            }
            else {
              *(ushort *)(param_1 + 0x16b0) =
                   *(ushort *)(param_1 + 0x16b0) |
                   *(short *)(param_1 + 0xabc) << ((byte)iVar2 & 0x1f);
              *(uint *)(param_1 + 0x16b4) = iVar2 + uVar8;
            }
            iVar2 = *(int *)(param_1 + 0x16b4);
            if (iVar2 < 10) {
              *(ushort *)(param_1 + 0x16b0) =
                   *(ushort *)(param_1 + 0x16b0) | (ushort)(iVar3 + -10 << ((byte)iVar2 & 0x1f));
              iVar2 = iVar2 + 7;
              goto LAB_0045ede9;
            }
            *(ushort *)(param_1 + 0x16b0) =
                 *(ushort *)(param_1 + 0x16b0) | (ushort)(iVar3 + -10 << ((byte)iVar2 & 0x1f));
            *(undefined1 *)(*(int *)(param_1 + 8) + *(int *)(param_1 + 0x14)) =
                 *(undefined1 *)(param_1 + 0x16b0);
            iVar2 = *(int *)(param_1 + 0x14) + 1;
            *(int *)(param_1 + 0x14) = iVar2;
            *(undefined1 *)(iVar2 + *(int *)(param_1 + 8)) = *(undefined1 *)(param_1 + 0x16b1);
            iVar2 = *(int *)(param_1 + 0x16b4);
            *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
            *(int *)(param_1 + 0x16b4) = iVar2 + -9;
            *(ushort *)(param_1 + 0x16b0) = (ushort)(iVar3 + -10) >> (0x10U - (char)iVar2 & 0x1f);
          }
        }
        else {
          if (uVar5 != local_8) {
            iVar2 = *(int *)(param_1 + 0x16b4);
            uVar8 = (uint)*(ushort *)(param_1 + 0xa76 + uVar5 * 4);
            iVar4 = iVar3;
            if ((int)(0x10 - uVar8) < iVar2) {
              uVar1 = *(ushort *)(param_1 + 0xa74 + uVar5 * 4);
              *(ushort *)(param_1 + 0x16b0) =
                   *(ushort *)(param_1 + 0x16b0) | uVar1 << ((byte)iVar2 & 0x1f);
              *(undefined1 *)(*(int *)(param_1 + 8) + *(int *)(param_1 + 0x14)) =
                   *(undefined1 *)(param_1 + 0x16b0);
              iVar2 = *(int *)(param_1 + 0x14) + 1;
              *(int *)(param_1 + 0x14) = iVar2;
              *(undefined1 *)(iVar2 + *(int *)(param_1 + 8)) = *(undefined1 *)(param_1 + 0x16b1);
              *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
              *(ushort *)(param_1 + 0x16b0) =
                   uVar1 >> (0x10U - (char)*(int *)(param_1 + 0x16b4) & 0x1f);
              *(uint *)(param_1 + 0x16b4) = *(int *)(param_1 + 0x16b4) + -0x10 + uVar8;
            }
            else {
              *(ushort *)(param_1 + 0x16b0) =
                   *(ushort *)(param_1 + 0x16b0) |
                   *(short *)(param_1 + 0xa74 + uVar5 * 4) << ((byte)iVar2 & 0x1f);
              *(uint *)(param_1 + 0x16b4) = iVar2 + uVar8;
            }
          }
          iVar2 = *(int *)(param_1 + 0x16b4);
          uVar8 = (uint)*(ushort *)(param_1 + 0xab6);
          if ((int)(0x10 - uVar8) < iVar2) {
            uVar1 = *(ushort *)(param_1 + 0xab4);
            *(ushort *)(param_1 + 0x16b0) =
                 *(ushort *)(param_1 + 0x16b0) | uVar1 << ((byte)iVar2 & 0x1f);
            *(undefined1 *)(*(int *)(param_1 + 8) + *(int *)(param_1 + 0x14)) =
                 *(undefined1 *)(param_1 + 0x16b0);
            iVar2 = *(int *)(param_1 + 0x14) + 1;
            *(int *)(param_1 + 0x14) = iVar2;
            *(undefined1 *)(iVar2 + *(int *)(param_1 + 8)) = *(undefined1 *)(param_1 + 0x16b1);
            *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
            *(ushort *)(param_1 + 0x16b0) =
                 uVar1 >> (0x10U - (char)*(int *)(param_1 + 0x16b4) & 0x1f);
            *(uint *)(param_1 + 0x16b4) = *(int *)(param_1 + 0x16b4) + -0x10 + uVar8;
          }
          else {
            *(ushort *)(param_1 + 0x16b0) =
                 *(ushort *)(param_1 + 0x16b0) | *(short *)(param_1 + 0xab4) << ((byte)iVar2 & 0x1f)
            ;
            *(uint *)(param_1 + 0x16b4) = iVar2 + uVar8;
          }
          iVar2 = *(int *)(param_1 + 0x16b4);
          if (iVar2 < 0xf) {
            *(ushort *)(param_1 + 0x16b0) =
                 *(ushort *)(param_1 + 0x16b0) | (ushort)(iVar4 + -3 << ((byte)iVar2 & 0x1f));
            iVar2 = iVar2 + 2;
            goto LAB_0045ede9;
          }
          *(ushort *)(param_1 + 0x16b0) =
               *(ushort *)(param_1 + 0x16b0) | (ushort)(iVar4 + -3 << ((byte)iVar2 & 0x1f));
          *(undefined1 *)(*(int *)(param_1 + 8) + *(int *)(param_1 + 0x14)) =
               *(undefined1 *)(param_1 + 0x16b0);
          iVar2 = *(int *)(param_1 + 0x14) + 1;
          *(int *)(param_1 + 0x14) = iVar2;
          *(undefined1 *)(iVar2 + *(int *)(param_1 + 8)) = *(undefined1 *)(param_1 + 0x16b1);
          iVar2 = *(int *)(param_1 + 0x16b4);
          *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
          *(int *)(param_1 + 0x16b4) = iVar2 + -0xe;
          *(ushort *)(param_1 + 0x16b0) = (ushort)(iVar4 + -3) >> (0x10U - (char)iVar2 & 0x1f);
        }
        iVar4 = 0;
        local_8 = uVar5;
        if (uVar6 == 0) {
          iVar2 = 0x8a;
          iVar7 = 3;
        }
        else if (uVar5 == uVar6) {
          iVar2 = 6;
          iVar7 = 3;
        }
        else {
          iVar2 = 7;
          iVar7 = 4;
        }
      }
      param_3 = param_3 + 2;
      local_4 = local_4 + -1;
      iVar3 = iVar4;
      uVar5 = uVar6;
    } while (local_4 != 0);
  }
  return;
}

