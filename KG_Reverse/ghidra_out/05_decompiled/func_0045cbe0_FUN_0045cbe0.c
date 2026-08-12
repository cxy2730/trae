// Function: FUN_0045cbe0
// Entry:    0045cbe0
// Size:     1919 bytes
// Conv:     unknown
// Signature: undefined FUN_0045cbe0(void)
// Decompiled by Ghidra 12.1.2


void FUN_0045cbe0(uint param_1,int *param_2,int param_3)

{
  byte bVar1;
  int *piVar2;
  undefined1 *puVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  uint uVar11;
  byte *pbVar12;
  undefined1 *local_c;
  byte *local_8;
  undefined1 *local_4;
  
  piVar5 = param_2;
  iVar4 = param_1;
  piVar2 = *(int **)(param_1 + 4);
  pbVar12 = (byte *)*param_2;
  uVar11 = *(uint *)(param_1 + 0x1c);
  puVar10 = *(undefined1 **)(param_1 + 0x34);
  if (puVar10 < *(undefined1 **)(param_1 + 0x30)) {
    local_c = *(undefined1 **)(param_1 + 0x30) + (-1 - (int)puVar10);
    param_1 = *(uint *)(param_1 + 0x20);
    param_2 = (int *)param_2[1];
  }
  else {
    local_c = (undefined1 *)(*(int *)(param_1 + 0x2c) - (int)puVar10);
    param_1 = *(uint *)(param_1 + 0x20);
    param_2 = (int *)param_2[1];
  }
  do {
    switch(*piVar2) {
    case 0:
      if (((undefined1 *)0x101 < local_c) && (9 < param_2)) {
        *(uint *)(iVar4 + 0x20) = param_1;
        *(uint *)(iVar4 + 0x1c) = uVar11;
        iVar6 = *piVar5;
        piVar5[1] = (int)param_2;
        *piVar5 = (int)pbVar12;
        piVar5[2] = (int)(pbVar12 + (piVar5[2] - iVar6));
        *(undefined1 **)(iVar4 + 0x34) = puVar10;
        param_3 = FUN_00460a20((char)piVar2[4],*(undefined1 *)((int)piVar2 + 0x11),piVar2[5],
                               piVar2[6],iVar4,piVar5);
        param_2 = (int *)piVar5[1];
        param_1 = *(uint *)(iVar4 + 0x20);
        pbVar12 = (byte *)*piVar5;
        uVar11 = *(uint *)(iVar4 + 0x1c);
        puVar10 = *(undefined1 **)(iVar4 + 0x34);
        if (puVar10 < *(undefined1 **)(iVar4 + 0x30)) {
          local_c = *(undefined1 **)(iVar4 + 0x30) + (-1 - (int)puVar10);
        }
        else {
          local_c = (undefined1 *)(*(int *)(iVar4 + 0x2c) - (int)puVar10);
        }
        if (param_3 != 0) {
          *piVar2 = (-(uint)(param_3 != 1) & 2) + 7;
          break;
        }
      }
      *piVar2 = 1;
      piVar2[3] = (uint)*(byte *)(piVar2 + 4);
      piVar2[2] = piVar2[5];
    case 1:
      for (; uVar11 < (uint)piVar2[3]; uVar11 = uVar11 + 8) {
        if (param_2 == (int *)0x0) {
LAB_0045d189:
          *(uint *)(iVar4 + 0x1c) = uVar11;
          *(uint *)(iVar4 + 0x20) = param_1;
          iVar6 = *piVar5;
          piVar5[1] = 0;
          *piVar5 = (int)pbVar12;
          piVar5[2] = (int)(pbVar12 + (piVar5[2] - iVar6));
          *(undefined1 **)(iVar4 + 0x34) = puVar10;
          FUN_0045daf0(iVar4,piVar5,param_3);
          return;
        }
        param_2 = (int *)((int)param_2 - 1);
        param_3 = 0;
        param_1 = param_1 | (uint)*pbVar12 << ((byte)uVar11 & 0x1f);
        pbVar12 = pbVar12 + 1;
      }
      local_8 = (byte *)(piVar2[2] + (*(uint *)(&DAT_02fb4530 + piVar2[3] * 4) & param_1) * 8);
      param_1 = param_1 >> (local_8[1] & 0x1f);
      uVar11 = uVar11 - local_8[1];
      bVar1 = *local_8;
      uVar8 = (uint)bVar1;
      if (uVar8 == 0) {
        piVar2[2] = *(int *)(local_8 + 4);
        *piVar2 = 6;
      }
      else if ((bVar1 & 0x10) == 0) {
        if ((bVar1 & 0x40) == 0) {
LAB_0045cdb4:
          piVar2[3] = uVar8;
          piVar2[2] = (int)(local_8 + *(int *)(local_8 + 4) * 8);
        }
        else {
          if ((bVar1 & 0x20) == 0) {
            *piVar2 = 9;
            piVar5[6] = (int)s_invalid_literal_length_code_02fb3318;
LAB_0045d1d5:
            *(uint *)(iVar4 + 0x20) = param_1;
            *(uint *)(iVar4 + 0x1c) = uVar11;
            piVar5[1] = (int)param_2;
            piVar5[2] = (int)(pbVar12 + (piVar5[2] - *piVar5));
            *piVar5 = (int)pbVar12;
            *(undefined1 **)(iVar4 + 0x34) = puVar10;
            FUN_0045daf0(iVar4,piVar5,0xfffffffd);
            return;
          }
          *piVar2 = 7;
        }
      }
      else {
        piVar2[2] = bVar1 & 0xf;
        iVar6 = *(int *)(local_8 + 4);
        *piVar2 = 2;
        piVar2[1] = iVar6;
      }
      break;
    case 2:
      uVar8 = piVar2[2];
      for (; uVar11 < uVar8; uVar11 = uVar11 + 8) {
        if (param_2 == (int *)0x0) goto LAB_0045d189;
        param_2 = (int *)((int)param_2 - 1);
        param_3 = 0;
        param_1 = param_1 | (uint)*pbVar12 << ((byte)uVar11 & 0x1f);
        pbVar12 = pbVar12 + 1;
      }
      piVar2[1] = piVar2[1] + (*(uint *)(&DAT_02fb4530 + uVar8 * 4) & param_1);
      param_1 = param_1 >> ((byte)uVar8 & 0x1f);
      uVar11 = uVar11 - uVar8;
      *piVar2 = 3;
      piVar2[3] = (uint)*(byte *)((int)piVar2 + 0x11);
      piVar2[2] = piVar2[6];
    case 3:
      for (; uVar11 < (uint)piVar2[3]; uVar11 = uVar11 + 8) {
        if (param_2 == (int *)0x0) goto LAB_0045d189;
        param_2 = (int *)((int)param_2 - 1);
        param_3 = 0;
        param_1 = param_1 | (uint)*pbVar12 << ((byte)uVar11 & 0x1f);
        pbVar12 = pbVar12 + 1;
      }
      local_8 = (byte *)(piVar2[2] + (*(uint *)(&DAT_02fb4530 + piVar2[3] * 4) & param_1) * 8);
      param_1 = param_1 >> (local_8[1] & 0x1f);
      uVar11 = uVar11 - local_8[1];
      bVar1 = *local_8;
      uVar8 = (uint)bVar1;
      if ((bVar1 & 0x10) == 0) {
        if ((bVar1 & 0x40) != 0) {
          *piVar2 = 9;
          piVar5[6] = (int)s_invalid_distance_code_02fb3300;
          goto LAB_0045d1d5;
        }
        goto LAB_0045cdb4;
      }
      piVar2[2] = bVar1 & 0xf;
      iVar6 = *(int *)(local_8 + 4);
      *piVar2 = 4;
      piVar2[3] = iVar6;
      break;
    case 4:
      uVar8 = piVar2[2];
      for (; uVar11 < uVar8; uVar11 = uVar11 + 8) {
        if (param_2 == (int *)0x0) goto LAB_0045d189;
        param_2 = (int *)((int)param_2 - 1);
        param_3 = 0;
        param_1 = param_1 | (uint)*pbVar12 << ((byte)uVar11 & 0x1f);
        pbVar12 = pbVar12 + 1;
      }
      piVar2[3] = piVar2[3] + (*(uint *)(&DAT_02fb4530 + uVar8 * 4) & param_1);
      param_1 = param_1 >> ((byte)uVar8 & 0x1f);
      uVar11 = uVar11 - uVar8;
      *piVar2 = 5;
    case 5:
      if ((uint)((int)puVar10 - *(int *)(iVar4 + 0x28)) < (uint)piVar2[3]) {
        iVar6 = (*(int *)(iVar4 + 0x2c) - *(int *)(iVar4 + 0x28)) - piVar2[3];
      }
      else {
        iVar6 = -piVar2[3];
      }
      local_4 = puVar10 + iVar6;
      iVar6 = piVar2[1];
      while (iVar6 != 0) {
        puVar9 = puVar10;
        if (local_c == (undefined1 *)0x0) {
          if (puVar10 == *(undefined1 **)(iVar4 + 0x2c)) {
            local_c = *(undefined1 **)(iVar4 + 0x30);
            puVar9 = *(undefined1 **)(iVar4 + 0x28);
            if (local_c != puVar9) {
              if (puVar9 < local_c) {
                local_c = local_c + (-1 - (int)puVar9);
              }
              else {
                local_c = *(undefined1 **)(iVar4 + 0x2c) + -(int)puVar9;
              }
              puVar10 = puVar9;
              if (local_c != (undefined1 *)0x0) goto LAB_0045d06b;
            }
          }
          *(undefined1 **)(iVar4 + 0x34) = puVar10;
          param_3 = FUN_0045daf0(iVar4,piVar5,param_3);
          puVar9 = *(undefined1 **)(iVar4 + 0x34);
          puVar10 = *(undefined1 **)(iVar4 + 0x30);
          if (puVar9 < puVar10) {
            local_c = puVar10 + (-1 - (int)puVar9);
          }
          else {
            local_c = (undefined1 *)(*(int *)(iVar4 + 0x2c) - (int)puVar9);
          }
          if ((puVar9 == *(undefined1 **)(iVar4 + 0x2c)) &&
             (puVar3 = *(undefined1 **)(iVar4 + 0x28), puVar10 != puVar3)) {
            puVar9 = puVar3;
            if (puVar3 < puVar10) {
              local_c = puVar10 + (-1 - (int)puVar3);
            }
            else {
              local_c = *(undefined1 **)(iVar4 + 0x2c) + -(int)puVar3;
            }
          }
          if (local_c == (undefined1 *)0x0) goto LAB_0045d20d;
        }
LAB_0045d06b:
        puVar10 = puVar9 + 1;
        param_3 = 0;
        *puVar9 = *local_4;
        local_4 = local_4 + 1;
        local_c = local_c + -1;
        if (local_4 == *(undefined1 **)(iVar4 + 0x2c)) {
          local_4 = *(undefined1 **)(iVar4 + 0x28);
        }
        iVar6 = piVar2[1] + -1;
        piVar2[1] = iVar6;
      }
      *piVar2 = 0;
      break;
    case 6:
      puVar9 = puVar10;
      if (local_c == (undefined1 *)0x0) {
        if (puVar10 == *(undefined1 **)(iVar4 + 0x2c)) {
          local_c = *(undefined1 **)(iVar4 + 0x30);
          puVar9 = *(undefined1 **)(iVar4 + 0x28);
          if (local_c != puVar9) {
            if (puVar9 < local_c) {
              local_c = local_c + (-1 - (int)puVar9);
            }
            else {
              local_c = *(undefined1 **)(iVar4 + 0x2c) + -(int)puVar9;
            }
            puVar10 = puVar9;
            if (local_c != (undefined1 *)0x0) goto LAB_0045d158;
          }
        }
        *(undefined1 **)(iVar4 + 0x34) = puVar10;
        param_3 = FUN_0045daf0(iVar4,piVar5,param_3);
        puVar9 = *(undefined1 **)(iVar4 + 0x34);
        puVar10 = *(undefined1 **)(iVar4 + 0x30);
        if (puVar9 < puVar10) {
          local_c = puVar10 + (-1 - (int)puVar9);
        }
        else {
          local_c = (undefined1 *)(*(int *)(iVar4 + 0x2c) - (int)puVar9);
        }
        if ((puVar9 == *(undefined1 **)(iVar4 + 0x2c)) &&
           (puVar3 = *(undefined1 **)(iVar4 + 0x28), puVar10 != puVar3)) {
          puVar9 = puVar3;
          if (puVar3 < puVar10) {
            local_c = puVar10 + (-1 - (int)puVar3);
          }
          else {
            local_c = *(undefined1 **)(iVar4 + 0x2c) + -(int)puVar3;
          }
        }
        if (local_c == (undefined1 *)0x0) {
LAB_0045d20d:
          *(uint *)(iVar4 + 0x20) = param_1;
          *(uint *)(iVar4 + 0x1c) = uVar11;
          iVar6 = *piVar5;
          piVar5[1] = (int)param_2;
          *piVar5 = (int)pbVar12;
          piVar5[2] = (int)(pbVar12 + (piVar5[2] - iVar6));
          *(undefined1 **)(iVar4 + 0x34) = puVar9;
          FUN_0045daf0(iVar4,piVar5,param_3);
          return;
        }
      }
LAB_0045d158:
      param_3 = 0;
      *puVar9 = (char)piVar2[2];
      puVar10 = puVar9 + 1;
      local_c = local_c + -1;
      *piVar2 = 0;
      break;
    case 7:
      if (7 < uVar11) {
        uVar11 = uVar11 - 8;
        param_2 = (int *)((int)param_2 + 1);
        pbVar12 = pbVar12 + -1;
      }
      *(undefined1 **)(iVar4 + 0x34) = puVar10;
      uVar7 = FUN_0045daf0(iVar4,piVar5,param_3);
      puVar10 = *(undefined1 **)(iVar4 + 0x34);
      if (*(undefined1 **)(iVar4 + 0x30) != puVar10) {
        *(uint *)(iVar4 + 0x1c) = uVar11;
        *(uint *)(iVar4 + 0x20) = param_1;
        piVar5[1] = (int)param_2;
        piVar5[2] = (int)(pbVar12 + (piVar5[2] - *piVar5));
        *piVar5 = (int)pbVar12;
        *(undefined1 **)(iVar4 + 0x34) = puVar10;
        FUN_0045daf0(iVar4,piVar5,uVar7);
        return;
      }
      *piVar2 = 8;
    case 8:
      goto switchD_0045cc2c_caseD_8;
    case 9:
      *(uint *)(iVar4 + 0x20) = param_1;
      *(uint *)(iVar4 + 0x1c) = uVar11;
      piVar5[1] = (int)param_2;
      piVar5[2] = (int)(pbVar12 + (piVar5[2] - *piVar5));
      *piVar5 = (int)pbVar12;
      *(undefined1 **)(iVar4 + 0x34) = puVar10;
      FUN_0045daf0(iVar4,piVar5,0xfffffffd);
      return;
    default:
      *(uint *)(iVar4 + 0x20) = param_1;
      *(uint *)(iVar4 + 0x1c) = uVar11;
      piVar5[1] = (int)param_2;
      piVar5[2] = (int)(pbVar12 + (piVar5[2] - *piVar5));
      *piVar5 = (int)pbVar12;
      *(undefined1 **)(iVar4 + 0x34) = puVar10;
      FUN_0045daf0(iVar4,piVar5,0xfffffffe);
      return;
    }
  } while( true );
switchD_0045cc2c_caseD_8:
  *(uint *)(iVar4 + 0x20) = param_1;
  *(uint *)(iVar4 + 0x1c) = uVar11;
  piVar5[1] = (int)param_2;
  piVar5[2] = (int)(pbVar12 + (piVar5[2] - *piVar5));
  *piVar5 = (int)pbVar12;
  *(undefined1 **)(iVar4 + 0x34) = puVar10;
  FUN_0045daf0(iVar4,piVar5,1);
  return;
}

