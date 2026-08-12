// Function: FUN_00489b77
// Entry:    00489b77
// Size:     391 bytes
// Conv:     unknown
// Signature: undefined FUN_00489b77(void)
// Decompiled by Ghidra 12.1.2


undefined4 FUN_00489b77(char *param_1,int param_2)

{
  char *pcVar1;
  int iVar2;
  int *piVar3;
  size_t sVar4;
  LPCSTR lpName;
  int *piVar5;
  bool bVar6;
  
  if (param_1 == (char *)0x0) {
    return 0xffffffff;
  }
  pcVar1 = (char *)FUN_004858d7(param_1,0x3d);
  if (pcVar1 == (char *)0x0) {
    return 0xffffffff;
  }
  if (param_1 == pcVar1) {
    return 0xffffffff;
  }
  bVar6 = pcVar1[1] == '\0';
  if (DAT_03010fdc == DAT_03010fe0) {
    DAT_03010fdc = (int *)FUN_00489d56(DAT_03010fdc);
  }
  if (DAT_03010fdc == (int *)0x0) {
    if ((param_2 == 0) || (DAT_03010fe4 == (undefined4 *)0x0)) {
      if (bVar6) {
        return 0;
      }
      DAT_03010fdc = _malloc(4);
      if (DAT_03010fdc == (int *)0x0) {
        return 0xffffffff;
      }
      *DAT_03010fdc = 0;
      if (DAT_03010fe4 == (undefined4 *)0x0) {
        DAT_03010fe4 = _malloc(4);
        if (DAT_03010fe4 == (undefined4 *)0x0) {
          return 0xffffffff;
        }
        *DAT_03010fe4 = 0;
      }
    }
    else {
      iVar2 = FUN_00489b09();
      if (iVar2 != 0) {
        return 0xffffffff;
      }
    }
  }
  piVar3 = DAT_03010fdc;
  iVar2 = FUN_00489cfe(param_1,(int)pcVar1 - (int)param_1);
  if ((iVar2 < 0) || (*piVar3 == 0)) {
    if (bVar6) {
      return 0;
    }
    if (iVar2 < 0) {
      iVar2 = -iVar2;
    }
    piVar3 = (int *)FUN_004848e3(piVar3,iVar2 * 4 + 8);
    if (piVar3 == (int *)0x0) {
      return 0xffffffff;
    }
    piVar3[iVar2] = (int)param_1;
    piVar3[iVar2 + 1] = 0;
  }
  else {
    if (!bVar6) {
      piVar3[iVar2] = (int)param_1;
      goto LAB_00489cab;
    }
    piVar5 = piVar3 + iVar2;
    FUN_004837fe(piVar3[iVar2]);
    for (; *piVar5 != 0; piVar5 = piVar5 + 1) {
      iVar2 = iVar2 + 1;
      *piVar5 = piVar5[1];
    }
    piVar3 = (int *)FUN_004848e3(piVar3,iVar2 << 2);
    if (piVar3 == (int *)0x0) goto LAB_00489cab;
  }
  DAT_03010fdc = piVar3;
LAB_00489cab:
  if (param_2 != 0) {
    sVar4 = _strlen(param_1);
    lpName = _malloc(sVar4 + 2);
    if (lpName != (LPCSTR)0x0) {
      FUN_00489dc0(lpName,param_1);
      pcVar1[(int)lpName - (int)param_1] = '\0';
      SetEnvironmentVariableA
                (lpName,(LPCSTR)(~-(uint)bVar6 & (uint)(pcVar1 + ((int)lpName - (int)param_1) + 1)))
      ;
      FUN_004837fe(lpName);
    }
  }
  return 0;
}

