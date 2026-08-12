// Function: FUN_00450bf0
// Entry:    00450bf0
// Size:     792 bytes
// Conv:     unknown
// Signature: undefined FUN_00450bf0(void)
// Decompiled by Ghidra 12.1.2


undefined4 FUN_00450bf0(int param_1,int param_2,uint param_3,int param_4)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  uint uVar9;
  char *pcVar10;
  uint local_c;
  int local_4;
  
  if ((((param_1 != 0) && (param_2 != 0)) && (0 < param_4)) && (param_3 != 0)) {
    iVar3 = *(int *)(param_2 + 0x80);
    if (*(int *)(param_2 + 0x84) - iVar3 < param_4) {
      if (0x7fffffff - iVar3 < param_4) {
LAB_00450c82:
        FUN_00446810(param_1,s_too_many_text_chunks_02fb2fdc,1);
        return 1;
      }
      if (iVar3 + param_4 < 0x7ffffff7) {
        uVar9 = iVar3 + param_4 + 8U & 0xfffffff8;
      }
      else {
        uVar9 = 0x7fffffff;
      }
      iVar3 = FUN_00446c00(param_1,*(undefined4 *)(param_2 + 0x88),iVar3,uVar9 - iVar3,0x1c);
      if (iVar3 == 0) goto LAB_00450c82;
      FUN_00446d20(param_1,*(undefined4 *)(param_2 + 0x88));
      *(int *)(param_2 + 0x88) = iVar3;
      *(uint *)(param_2 + 0xe8) = *(uint *)(param_2 + 0xe8) | 0x4000;
      *(uint *)(param_2 + 0x84) = uVar9;
    }
    local_4 = 0;
    if (0 < param_4) {
      puVar7 = (undefined4 *)(param_3 + 0x14);
      do {
        piVar1 = (int *)(*(int *)(param_2 + 0x88) + *(int *)(param_2 + 0x80) * 0x1c);
        if ((char *)puVar7[-4] != (char *)0x0) {
          iVar3 = puVar7[-5];
          if ((iVar3 < -1) || (2 < iVar3)) {
            FUN_00446810(param_1,s_text_compression_mode_is_out_of_r_02fb2fb4,1);
          }
          else {
            uVar9 = 0xffffffff;
            pcVar10 = (char *)puVar7[-4];
            do {
              if (uVar9 == 0) break;
              uVar9 = uVar9 - 1;
              cVar2 = *pcVar10;
              pcVar10 = pcVar10 + 1;
            } while (cVar2 != '\0');
            uVar6 = 0;
            uVar9 = ~uVar9 - 1;
            if (iVar3 < 1) {
              param_3 = 0;
            }
            else {
              if ((char *)*puVar7 == (char *)0x0) {
                param_3 = 0;
              }
              else {
                uVar6 = 0xffffffff;
                pcVar10 = (char *)*puVar7;
                do {
                  if (uVar6 == 0) break;
                  uVar6 = uVar6 - 1;
                  cVar2 = *pcVar10;
                  pcVar10 = pcVar10 + 1;
                } while (cVar2 != '\0');
                param_3 = ~uVar6 - 1;
              }
              if ((char *)puVar7[1] == (char *)0x0) {
                uVar6 = 0;
              }
              else {
                uVar6 = 0xffffffff;
                pcVar10 = (char *)puVar7[1];
                do {
                  if (uVar6 == 0) break;
                  uVar6 = uVar6 - 1;
                  cVar2 = *pcVar10;
                  pcVar10 = pcVar10 + 1;
                } while (cVar2 != '\0');
                uVar6 = ~uVar6 - 1;
              }
            }
            pcVar10 = (char *)puVar7[-3];
            if ((pcVar10 == (char *)0x0) || (*pcVar10 == '\0')) {
              local_c = 0;
              *piVar1 = ((iVar3 < 1) - 1 & 2) - 1;
            }
            else {
              uVar5 = 0xffffffff;
              do {
                if (uVar5 == 0) break;
                uVar5 = uVar5 - 1;
                cVar2 = *pcVar10;
                pcVar10 = pcVar10 + 1;
              } while (cVar2 != '\0');
              local_c = ~uVar5 - 1;
              *piVar1 = iVar3;
            }
            puVar4 = (undefined4 *)FUN_00446b50(param_1,local_c + uVar6 + param_3 + 4 + uVar9);
            piVar1[1] = (int)puVar4;
            if (puVar4 == (undefined4 *)0x0) {
              FUN_00446810(param_1,s_text_chunk__out_of_memory_02fb2f98,1);
              return 1;
            }
            puVar8 = (undefined4 *)puVar7[-4];
            for (uVar5 = uVar9 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
              *puVar4 = *puVar8;
              puVar8 = puVar8 + 1;
              puVar4 = puVar4 + 1;
            }
            for (uVar5 = uVar9 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
              *(undefined1 *)puVar4 = *(undefined1 *)puVar8;
              puVar8 = (undefined4 *)((int)puVar8 + 1);
              puVar4 = (undefined4 *)((int)puVar4 + 1);
            }
            *(undefined1 *)(piVar1[1] + uVar9) = 0;
            if ((int)puVar7[-5] < 1) {
              piVar1[5] = 0;
              piVar1[6] = 0;
              piVar1[2] = piVar1[1] + 1 + uVar9;
            }
            else {
              puVar4 = (undefined4 *)(piVar1[1] + 1 + uVar9);
              piVar1[5] = (int)puVar4;
              puVar8 = (undefined4 *)*puVar7;
              for (uVar9 = param_3 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
                *puVar4 = *puVar8;
                puVar8 = puVar8 + 1;
                puVar4 = puVar4 + 1;
              }
              for (uVar9 = param_3 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
                *(undefined1 *)puVar4 = *(undefined1 *)puVar8;
                puVar8 = (undefined4 *)((int)puVar8 + 1);
                puVar4 = (undefined4 *)((int)puVar4 + 1);
              }
              *(undefined1 *)(piVar1[5] + param_3) = 0;
              puVar4 = (undefined4 *)(piVar1[5] + 1 + param_3);
              piVar1[6] = (int)puVar4;
              puVar8 = (undefined4 *)puVar7[1];
              for (uVar9 = uVar6 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
                *puVar4 = *puVar8;
                puVar8 = puVar8 + 1;
                puVar4 = puVar4 + 1;
              }
              for (uVar9 = uVar6 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
                *(undefined1 *)puVar4 = *(undefined1 *)puVar8;
                puVar8 = (undefined4 *)((int)puVar8 + 1);
                puVar4 = (undefined4 *)((int)puVar4 + 1);
              }
              *(undefined1 *)(piVar1[6] + uVar6) = 0;
              piVar1[2] = piVar1[6] + 1 + uVar6;
            }
            if (local_c != 0) {
              puVar4 = (undefined4 *)puVar7[-3];
              puVar8 = (undefined4 *)piVar1[2];
              for (uVar9 = local_c >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
                *puVar8 = *puVar4;
                puVar4 = puVar4 + 1;
                puVar8 = puVar8 + 1;
              }
              for (uVar9 = local_c & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
                *(undefined1 *)puVar8 = *(undefined1 *)puVar4;
                puVar4 = (undefined4 *)((int)puVar4 + 1);
                puVar8 = (undefined4 *)((int)puVar8 + 1);
              }
            }
            *(undefined1 *)(piVar1[2] + local_c) = 0;
            if (*piVar1 < 1) {
              piVar1[3] = local_c;
              piVar1[4] = 0;
            }
            else {
              piVar1[3] = 0;
              piVar1[4] = local_c;
            }
            *(int *)(param_2 + 0x80) = *(int *)(param_2 + 0x80) + 1;
          }
        }
        local_4 = local_4 + 1;
        puVar7 = puVar7 + 7;
      } while (local_4 < param_4);
    }
  }
  return 0;
}

