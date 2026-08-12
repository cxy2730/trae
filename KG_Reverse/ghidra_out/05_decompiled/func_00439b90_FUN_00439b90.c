// Function: FUN_00439b90
// Entry:    00439b90
// Size:     984 bytes
// Conv:     unknown
// Signature: undefined FUN_00439b90(void)
// Decompiled by Ghidra 12.1.2


/* WARNING: Removing unreachable block (ram,0x00439eed) */
/* WARNING: Removing unreachable block (ram,0x00439f0b) */
/* WARNING: Removing unreachable block (ram,0x00439f17) */
/* WARNING: Removing unreachable block (ram,0x00439f1e) */

undefined4 FUN_00439b90(char *param_1,undefined4 *param_2,undefined4 param_3)

{
  char cVar1;
  int iVar2;
  void *pvVar3;
  undefined4 uVar4;
  HANDLE pvVar5;
  int iVar6;
  undefined4 *puVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  char *pcVar11;
  undefined4 *puVar12;
  char *pcVar13;
  undefined4 *puVar14;
  char *pcVar15;
  undefined4 *puVar16;
  
  if (0x23 < (int)param_2) {
    uVar8 = 0xffffffff;
    pcVar11 = &DAT_02fb112c;
    do {
      if (uVar8 == 0) break;
      uVar8 = uVar8 - 1;
      cVar1 = *pcVar11;
      pcVar11 = pcVar11 + 1;
    } while (cVar1 != '\0');
    iVar2 = _strncmp(param_1,&DAT_02fb112c,~uVar8 - 1);
    if (iVar2 == 0) {
      uVar8 = *(uint *)(param_1 + 4);
      uVar9 = 0xffffffff;
      pcVar11 = &DAT_02fb1124;
      do {
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        cVar1 = *pcVar11;
        pcVar11 = pcVar11 + 1;
      } while (cVar1 != '\0');
      iVar2 = _strncmp(param_1 + 8,&DAT_02fb1124,~uVar9 - 1);
      if (iVar2 == 0) {
        pcVar11 = (char *)0x0;
        pcVar13 = (char *)0x0;
        uVar9 = 0;
        pcVar15 = param_1 + 0xc;
        do {
          uVar10 = *(uint *)(pcVar15 + 4);
          iVar2 = _strncmp(pcVar15,&DAT_02fb111c,4);
          if (iVar2 == 0) {
            pcVar11 = pcVar15 + 8;
            if (pcVar13 != (char *)0x0) break;
          }
          else {
            iVar2 = _strncmp(pcVar15,&DAT_02fb1114,4);
            if ((iVar2 == 0) && (pcVar13 = pcVar15 + 8, uVar9 = uVar10, pcVar11 != (char *)0x0))
            goto LAB_00439c6e;
          }
          pcVar15 = pcVar15 + uVar10 + 8;
        } while ((uint)((int)pcVar15 - (int)(param_1 + 0xc)) < uVar8);
        uVar10 = uVar9;
        if (pcVar11 != (char *)0x0) {
LAB_00439c6e:
          if ((pcVar13 != (char *)0x0) && (uVar10 != 0)) {
            param_2 = (undefined4 *)FUN_00492f17(0x4c);
            param_2[2] = uVar10;
            pvVar3 = _malloc(param_2[2]);
            *param_2 = pvVar3;
            if ((char *)*param_2 != (char *)0x0) {
              pcVar15 = (char *)*param_2;
              for (uVar8 = uVar10 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
                *(undefined4 *)pcVar15 = *(undefined4 *)pcVar13;
                pcVar13 = pcVar13 + 4;
                pcVar15 = pcVar15 + 4;
              }
              for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
                *pcVar15 = *pcVar13;
                pcVar13 = pcVar13 + 1;
                pcVar15 = pcVar15 + 1;
              }
              param_2[0x12] = param_3;
              param_2[7] = 0;
              uVar4 = FUN_00439980(0x3c00,0x14);
              param_2[3] = uVar4;
              pvVar5 = CreateEventA((LPSECURITY_ATTRIBUTES)0x0,1,0,(LPCSTR)0x0);
              param_2[0xb] = pvVar5;
              pvVar5 = CreateSemaphoreA((LPSECURITY_ATTRIBUTES)0x0,0x14,0x14,(LPCSTR)0x0);
              param_2[10] = pvVar5;
              param_2[5] = 0;
              param_2[4] = 0x14;
              InitializeCriticalSection((LPCRITICAL_SECTION)(param_2 + 0xc));
              FUN_004399f0(param_2 + 1,pcVar11,param_2,&LAB_0043a1c0);
              pvVar5 = CreateThread((LPSECURITY_ATTRIBUTES)0x0,0,
                                    (LPTHREAD_START_ROUTINE)&LAB_00439f70,param_2,4,param_2 + 9);
              param_2[8] = pvVar5;
              EnterCriticalSection((LPCRITICAL_SECTION)&DAT_02fe8cd0);
              puVar14 = DAT_02fe8cf0;
              if ((int)DAT_02fe8cf4 - (int)DAT_02fe8cf0 >> 2 == 0) {
                if ((DAT_02fe8cec == (undefined4 *)0x0) ||
                   ((uint)((int)DAT_02fe8cf0 - (int)DAT_02fe8cec >> 2) < 2)) {
                  iVar2 = 1;
                }
                else {
                  iVar2 = (int)DAT_02fe8cf0 - (int)DAT_02fe8cec >> 2;
                }
                if (DAT_02fe8cec == (undefined4 *)0x0) {
                  iVar6 = 0;
                }
                else {
                  iVar6 = (int)DAT_02fe8cf0 - (int)DAT_02fe8cec >> 2;
                }
                iVar6 = iVar6 + iVar2;
                iVar2 = iVar6;
                if (iVar6 < 0) {
                  iVar2 = 0;
                }
                puVar7 = (undefined4 *)FUN_00492f17(iVar2 * 4);
                puVar12 = puVar7;
                for (puVar16 = DAT_02fe8cec; puVar16 != puVar14; puVar16 = puVar16 + 1) {
                  FUN_0043a280(puVar12,puVar16);
                  puVar12 = puVar12 + 1;
                }
                FUN_0043a280(puVar12,&param_2);
                puVar16 = DAT_02fe8cf0;
                for (; puVar14 != puVar16; puVar14 = puVar14 + 1) {
                  puVar12 = puVar12 + 1;
                  FUN_0043a280(puVar12,puVar14);
                }
                FUN_00426c40(DAT_02fe8cec,DAT_02fe8cf0);
                FUN_00492f40(DAT_02fe8cec);
                DAT_02fe8cf4 = puVar7 + iVar6;
                iVar2 = FUN_0043a200();
                DAT_02fe8cf0 = puVar7 + iVar2 + 1;
                DAT_02fe8cec = puVar7;
              }
              else {
                FUN_0043a220(DAT_02fe8cf0,DAT_02fe8cf0,DAT_02fe8cf0 + 1);
                FUN_0043a250(DAT_02fe8cf0,1 - ((int)DAT_02fe8cf0 - (int)puVar14 >> 2),&param_2);
                puVar12 = DAT_02fe8cf0;
                for (; puVar14 != puVar12; puVar14 = puVar14 + 1) {
                  *puVar14 = param_2;
                }
                DAT_02fe8cf0 = DAT_02fe8cf0 + 1;
              }
              LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_02fe8cd0);
              ResumeThread((HANDLE)param_2[8]);
              ReleaseSemaphore((HANDLE)param_2[10],0x14,(LPLONG)0x0);
              return 1;
            }
            FUN_00492f40(param_2);
          }
        }
      }
    }
  }
  return 0;
}

