// Function: FUN_00432830
// Entry:    00432830
// Size:     676 bytes
// Conv:     unknown
// Signature: undefined FUN_00432830(void)
// Decompiled by Ghidra 12.1.2


byte * FUN_00432830(byte *param_1,int param_2,int *param_3)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte bVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  ushort uVar11;
  byte *pbVar12;
  byte *pbVar13;
  int *piVar14;
  byte *pbVar15;
  int local_8;
  
  *(undefined4 *)(param_2 + 0x10) = 0;
  if ((*param_3 == 0) && ((*(byte *)(param_3 + 1) & 3) == 0)) {
    return param_1;
  }
  local_8 = param_3[6];
  iVar8 = 0;
  if (0 < local_8) {
    piVar14 = param_3 + 0xf;
    piVar10 = piVar14;
    do {
      if (*piVar10 < 0) {
        while (iVar8 = *piVar14, -1 < iVar8) {
          switch(iVar8) {
          case 1:
          case 7:
            FUN_004069d0(param_1,1);
            pbVar12 = param_1 + 1;
            break;
          case 2:
            FUN_004069d0(param_1,2);
            pbVar12 = param_1 + 2;
            break;
          case 3:
          case 5:
          case 9:
          case 0xb:
          case 0xc:
            FUN_004069d0(param_1,4);
            pbVar12 = param_1 + 4;
            break;
          case 4:
          case 6:
          case 8:
            FUN_004069d0(param_1,8);
            pbVar12 = param_1 + 8;
            break;
          case 10:
            FUN_004069d0(param_1,0);
            pbVar12 = param_1;
            break;
          default:
            FUN_004069d0(param_1,0xffffffff);
            pbVar12 = param_1 + -1;
          }
LAB_00432a9f:
          piVar14 = piVar14 + 1;
          local_8 = local_8 + -1;
          param_1 = pbVar12;
          if (local_8 == 0) {
            if (*(int *)(param_2 + 0x10) == 0) {
              return (byte *)0x0;
            }
            return *(byte **)(param_2 + 8);
          }
        }
        iVar2 = *(int *)(param_2 + 0x10);
        FUN_004069d0(0,-iVar8);
        if (*(int *)(param_2 + 0x10) == 0) {
          iVar9 = 0;
        }
        else {
          iVar9 = *(int *)(param_2 + 8);
        }
        pbVar12 = param_1 + -iVar8;
        pbVar4 = (byte *)(iVar2 + iVar9);
        pbVar13 = param_1;
joined_r0x00432948:
        pbVar3 = pbVar13;
        pbVar15 = pbVar4;
        if (pbVar3 < pbVar12) {
          bVar5 = *pbVar3;
          pbVar13 = pbVar3 + 1;
          param_1 = (byte *)(uint)bVar5;
          if (bVar5 != 0) {
            if ((param_3[1] & 2U) != 0) goto code_r0x0043296a;
            goto LAB_00432983;
          }
        }
        goto LAB_00432a9f;
      }
      iVar8 = iVar8 + 1;
      piVar10 = piVar10 + 1;
    } while (iVar8 < local_8);
  }
  return param_1;
code_r0x0043296a:
  pbVar4 = pbVar15;
  if (bVar5 != 0x20) {
    if (((bVar5 != 0xa1) || (pbVar12 <= pbVar13)) || (*pbVar13 != 0xa1)) {
LAB_00432983:
      if ((((param_3[1] & 1U) != 0) && (0x60 < bVar5)) && (bVar5 < 0x7b)) {
        bVar5 = bVar5 - 0x20;
        param_1 = (byte *)(uint)bVar5;
      }
      iVar8 = *param_3;
      if (((iVar8 == 1) || (iVar8 == 2)) && (((bVar5 & 0x80) == 0x80 && (pbVar13 < pbVar12)))) {
        bVar1 = *pbVar13;
        pbVar13 = pbVar3 + 2;
        if ((((bVar5 < 0xb0) || (0xf7 < bVar5)) || (bVar1 < 0xa1)) || (bVar1 == 0xff)) {
          *pbVar15 = bVar5;
          pbVar15[1] = bVar1;
          pbVar4 = pbVar15 + 2;
        }
        else {
          uVar11 = *(ushort *)
                    ((int)UnwindMapEntry_ARRAY_02fa3758 +
                    ((uint)bVar1 + (int)param_1 * 0x5e) * 2 + 6);
          if (uVar11 == 0) {
            *pbVar15 = bVar5;
            pbVar15[1] = bVar1;
            pbVar4 = pbVar15 + 2;
          }
          else {
            if ((uVar11 & 0x8000) != 0) {
              uVar11 = *(ushort *)(&DAT_02faeec0 + (uVar11 & 0x7fff) * 6);
            }
            if (iVar8 == 2) {
              uVar6 = FUN_0041d2a0(uVar11,0,1);
              uVar7 = FUN_0041d2a0(uVar11 >> 8,uVar6,1);
              uVar11 = CONCAT11(uVar7,uVar6);
            }
            *(ushort *)pbVar15 = uVar11 + 0xb0b0;
            pbVar4 = pbVar15 + 2;
          }
        }
        goto joined_r0x00432948;
      }
      *pbVar15 = bVar5;
      pbVar4 = pbVar15 + 1;
      if ((bVar5 & 0x80) != 0x80) goto joined_r0x00432948;
      if (pbVar12 <= pbVar13) goto LAB_00432a9f;
      pbVar15[1] = *pbVar13;
      pbVar15 = pbVar15 + 2;
    }
    pbVar4 = pbVar15;
    pbVar13 = pbVar3 + 2;
  }
  goto joined_r0x00432948;
}

