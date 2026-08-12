// Function: FUN_00424460
// Entry:    00424460
// Size:     725 bytes
// Conv:     unknown
// Signature: undefined FUN_00424460(void)
// Decompiled by Ghidra 12.1.2


undefined4 * FUN_00424460(undefined4 *param_1,uint param_2)

{
  byte bVar1;
  undefined1 uVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  int iVar7;
  uint uVar8;
  int extraout_EDX;
  uint uVar9;
  int iVar10;
  int iVar11;
  undefined1 *puVar12;
  char *pcVar13;
  uint uVar14;
  int iVar15;
  undefined4 *puVar16;
  int local_a8;
  int local_a4;
  int local_a0;
  int local_9c;
  undefined4 *local_90;
  char local_80;
  char local_7f;
  char local_7e;
  char local_7d;
  short local_7c;
  short local_7a;
  short local_78;
  short local_76;
  char local_3f;
  short local_3e;
  
  if (0x80 < param_2) {
    puVar3 = param_1;
    pcVar13 = &local_80;
    for (iVar7 = 0x20; iVar7 != 0; iVar7 = iVar7 + -1) {
      *(undefined4 *)pcVar13 = *puVar3;
      puVar3 = puVar3 + 1;
      pcVar13 = pcVar13 + 4;
    }
    if (((local_80 == '\n') && (local_7e == '\x01')) && (local_7f < '\x06')) {
      iVar11 = 0;
      iVar7 = ((int)local_78 - (int)local_7c) + 1;
      local_9c = ((int)local_76 - (int)local_7a) + 1;
      if ((0 < iVar7) && (0 < local_9c)) {
        if ((local_7d == '\x01') && (local_3f == '\x01')) {
          puVar3 = (undefined4 *)FUN_00424740(param_1,param_2);
          return puVar3;
        }
        if (local_7d == '\b') {
          uVar14 = (int)local_3f * (int)local_3e;
          FUN_00484046(uVar14,4);
          if (0 < extraout_EDX) {
            uVar14 = (uVar14 & 0xfffffffc) + 4;
          }
          local_90 = (undefined4 *)FUN_00492f17(0x18);
          if (local_90 == (undefined4 *)0x0) {
            local_90 = (undefined4 *)0x0;
          }
          else {
            *local_90 = 0;
            local_90[1] = 0;
            local_90[2] = 0;
            local_90[3] = 0;
            local_90[4] = 0;
            local_90[5] = 0;
          }
          iVar15 = uVar14 * local_9c + 0x428;
          *local_90 = 6;
          local_90[1] = iVar7;
          local_90[2] = local_9c;
          local_90[5] = iVar15;
          puVar3 = (undefined4 *)FUN_00492f17(iVar15);
          local_90[4] = puVar3;
          *puVar3 = 0x28;
          puVar3[1] = iVar7;
          puVar3[2] = -local_9c;
          *(short *)(puVar3 + 3) = (short)local_3f;
          *(undefined2 *)((int)puVar3 + 0xe) = 8;
          puVar3[4] = 0;
          puVar3[5] = 0;
          puVar3[6] = 0;
          puVar3[7] = 0;
          puVar3[8] = 0;
          puVar3[9] = 0;
          iVar10 = local_90[4] + 0x428;
          iVar15 = 0x80;
          local_a0 = 0;
          local_a4 = 0x80;
          if (0 < local_9c) {
            do {
              iVar4 = 0;
              local_a8 = 0;
              if (0 < local_3e) {
                do {
                  bVar1 = *(byte *)(iVar15 + (int)param_1);
                  local_a4 = iVar15 + 1;
                  if (bVar1 < 0xc1) {
                    if (local_a8 <= iVar7) {
                      *(byte *)(iVar10 + iVar11) = bVar1;
                      iVar11 = iVar11 + 1;
                      local_a0 = iVar11;
                    }
                    iVar4 = local_a8 + 1;
                  }
                  else {
                    uVar2 = *(undefined1 *)(local_a4 + (int)param_1);
                    uVar9 = bVar1 - 0xc0;
                    local_a4 = iVar15 + 2;
                    if (local_a8 <= iVar7) {
                      puVar16 = (undefined4 *)(iVar10 + iVar11);
                      for (uVar8 = uVar9 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
                        *puVar16 = CONCAT22(CONCAT11(uVar2,uVar2),CONCAT11(uVar2,uVar2));
                        puVar16 = puVar16 + 1;
                      }
                      iVar11 = local_a0 + uVar9;
                      for (uVar8 = uVar9 & 3; local_a0 = iVar11, uVar8 != 0; uVar8 = uVar8 - 1) {
                        *(undefined1 *)puVar16 = uVar2;
                        puVar16 = (undefined4 *)((int)puVar16 + 1);
                      }
                    }
                    iVar4 = local_a8 + uVar9;
                  }
                  iVar15 = local_a4;
                  local_a8 = iVar4;
                } while (iVar4 < local_3e);
              }
              if (iVar4 < (int)uVar14) {
                uVar9 = uVar14 - iVar4;
                puVar16 = (undefined4 *)(iVar10 + iVar11);
                for (uVar8 = uVar9 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
                  *puVar16 = 0;
                  puVar16 = puVar16 + 1;
                }
                for (uVar8 = uVar9 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
                  *(undefined1 *)puVar16 = 0;
                  puVar16 = (undefined4 *)((int)puVar16 + 1);
                }
                iVar11 = iVar11 + uVar9;
                iVar15 = local_a4;
                local_a0 = iVar11;
              }
              local_9c = local_9c + -1;
            } while (local_9c != 0);
          }
          if (*(char *)(iVar15 + (int)param_1) == '\f') {
            puVar5 = (undefined1 *)((int)param_1 + iVar15 + 1);
            iVar7 = 0x100;
            puVar12 = (undefined1 *)((int)puVar3 + 0x29);
            do {
              puVar12[1] = *puVar5;
              puVar6 = puVar5 + 2;
              *puVar12 = puVar5[1];
              puVar5 = puVar5 + 3;
              puVar12[-1] = *puVar6;
              puVar12[2] = 0;
              iVar7 = iVar7 + -1;
              puVar12 = puVar12 + 4;
            } while (iVar7 != 0);
          }
          return local_90;
        }
      }
    }
  }
  return (undefined4 *)0x0;
}

