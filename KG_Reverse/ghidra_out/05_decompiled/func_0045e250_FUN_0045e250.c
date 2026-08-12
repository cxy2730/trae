// Function: FUN_0045e250
// Entry:    0045e250
// Size:     545 bytes
// Conv:     unknown
// Signature: undefined FUN_0045e250(void)
// Decompiled by Ghidra 12.1.2


void FUN_0045e250(int *param_1,int *param_2)

{
  ushort *puVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  short *psVar13;
  ushort *puVar14;
  uint uVar15;
  undefined4 *puVar16;
  int iVar17;
  uint uVar18;
  int local_1c;
  int local_14;
  
  iVar9 = (int)param_1;
  iVar3 = *param_2;
  iVar4 = param_2[1];
  piVar5 = (int *)param_2[2];
  iVar11 = *piVar5;
  iVar6 = piVar5[1];
  uVar18 = piVar5[4];
  iVar7 = piVar5[2];
  local_1c = 0;
  puVar16 = (undefined4 *)((int)param_1 + 0xb34);
  for (iVar12 = 8; iVar12 != 0; iVar12 = iVar12 + -1) {
    *puVar16 = 0;
    puVar16 = puVar16 + 1;
  }
  *(undefined2 *)
   (iVar3 + 2 + *(int *)((int)param_1 + 0xb54 + *(int *)((int)param_1 + 0x144c) * 4) * 4) = 0;
  iVar12 = *(int *)((int)param_1 + 0x144c) + 1;
  if (iVar12 < 0x23d) {
    param_1 = (int *)((int)param_1 + 0xb54 + iVar12 * 4);
    local_14 = 0x23d - iVar12;
    iVar12 = iVar12 + local_14;
    do {
      iVar8 = *param_1;
      uVar10 = *(ushort *)(iVar3 + 2 + (uint)*(ushort *)(iVar3 + 2 + iVar8 * 4) * 4) + 1;
      if ((int)uVar18 < (int)uVar10) {
        local_1c = local_1c + 1;
        uVar10 = uVar18;
      }
      *(short *)(iVar3 + 2 + iVar8 * 4) = (short)uVar10;
      if (iVar8 <= iVar4) {
        psVar13 = (short *)(iVar9 + 0xb34 + uVar10 * 2);
        *psVar13 = *psVar13 + 1;
        iVar17 = 0;
        if (iVar7 <= iVar8) {
          iVar17 = *(int *)(iVar6 + (iVar8 - iVar7) * 4);
        }
        uVar15 = (uint)*(ushort *)(iVar3 + iVar8 * 4);
        *(int *)(iVar9 + 0x16a0) = *(int *)(iVar9 + 0x16a0) + (uVar10 + iVar17) * uVar15;
        if (iVar11 != 0) {
          *(uint *)(iVar9 + 0x16a4) =
               *(int *)(iVar9 + 0x16a4) +
               ((uint)*(ushort *)(iVar11 + 2 + iVar8 * 4) + iVar17) * uVar15;
        }
      }
      param_1 = param_1 + 1;
      local_14 = local_14 + -1;
    } while (local_14 != 0);
    if (local_1c != 0) {
      do {
        iVar11 = uVar18 - 1;
        psVar13 = (short *)(iVar9 + 0xb34 + iVar11 * 2);
        sVar2 = *(short *)(iVar9 + 0xb34 + iVar11 * 2);
        while (sVar2 == 0) {
          psVar13 = psVar13 + -1;
          iVar11 = iVar11 + -1;
          sVar2 = *psVar13;
        }
        psVar13 = (short *)(iVar9 + 0xb34 + iVar11 * 2);
        *psVar13 = *psVar13 + -1;
        psVar13 = (short *)(iVar9 + 0xb36 + iVar11 * 2);
        *psVar13 = *psVar13 + 2;
        psVar13 = (short *)(iVar9 + 0xb34 + uVar18 * 2);
        *psVar13 = *psVar13 + -1;
        local_1c = local_1c + -2;
      } while (0 < local_1c);
      if (uVar18 != 0) {
        puVar14 = (ushort *)(iVar9 + 0xb34 + uVar18 * 2);
        param_2 = (int *)iVar12;
        do {
          uVar10 = (uint)*puVar14;
          if (uVar10 != 0) {
            iVar11 = iVar9 + 0xb54 + iVar12 * 4;
            param_1 = (int *)uVar10;
            do {
              iVar6 = *(int *)(iVar11 + -4);
              iVar12 = (int)param_2 + -1;
              iVar11 = iVar11 + -4;
              if (iVar6 <= iVar4) {
                puVar1 = (ushort *)(iVar3 + 2 + iVar6 * 4);
                uVar10 = (uint)*puVar1;
                if (uVar10 != uVar18) {
                  *(uint *)(iVar9 + 0x16a0) =
                       *(int *)(iVar9 + 0x16a0) +
                       (uVar18 - uVar10) * (uint)*(ushort *)(iVar3 + iVar6 * 4);
                  *puVar1 = (ushort)uVar18;
                }
                uVar10 = (int)param_1 - 1;
                param_1 = (int *)uVar10;
              }
              param_2 = (int *)iVar12;
            } while (uVar10 != 0);
          }
          uVar18 = uVar18 - 1;
          puVar14 = puVar14 + -1;
        } while (uVar18 != 0);
      }
    }
  }
  return;
}

