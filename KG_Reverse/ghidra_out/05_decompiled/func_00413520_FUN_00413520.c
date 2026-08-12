// Function: FUN_00413520
// Entry:    00413520
// Size:     953 bytes
// Conv:     unknown
// Signature: undefined FUN_00413520(void)
// Decompiled by Ghidra 12.1.2


undefined4 __thiscall FUN_00413520(int param_1,char *param_2,char *param_3,int param_4)

{
  char cVar1;
  char *pcVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  HMODULE hModule;
  FARPROC pFVar5;
  int iVar6;
  undefined4 uVar7;
  char *pcVar8;
  undefined4 uVar9;
  LPCOLESTR lpsz;
  HRESULT HVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  char *pcVar14;
  CLSID *pclsid;
  undefined **local_5c [5];
  undefined **local_48 [5];
  CLSID local_34;
  undefined1 local_24 [4];
  undefined1 local_20 [4];
  undefined1 local_1c [4];
  int local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  pcVar8 = param_3;
  local_8 = 0xffffffff;
  puStack_c = &LAB_0049e8c0;
  local_10 = ExceptionList;
  if (*(int *)(param_1 + 0xc4) == 2) {
    return 0;
  }
  if (*param_3 == '\0') {
    return 0;
  }
  iVar11 = -1;
  pcVar2 = param_2;
  do {
    if (iVar11 == 0) break;
    iVar11 = iVar11 + -1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  ExceptionList = &local_10;
  local_18 = param_1;
  FUN_004835e0();
  uVar12 = 0xffffffff;
  pcVar2 = param_2;
  do {
    pcVar14 = pcVar2;
    if (uVar12 == 0) break;
    uVar12 = uVar12 - 1;
    pcVar14 = pcVar2 + 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar14;
  } while (cVar1 != '\0');
  uVar12 = ~uVar12;
  pcVar2 = pcVar14 + -uVar12;
  pcVar14 = &stack0xffffff98;
  for (uVar13 = uVar12 >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
    *(undefined4 *)pcVar14 = *(undefined4 *)pcVar2;
    pcVar2 = pcVar2 + 4;
    pcVar14 = pcVar14 + 4;
  }
  for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
    *pcVar14 = *pcVar2;
    pcVar2 = pcVar2 + 1;
    pcVar14 = pcVar14 + 1;
  }
  param_3 = (char *)FUN_004134e0(&stack0xffffff98,0x23,local_1c);
  pcVar2 = (char *)FUN_004134e0(0,0x23,local_1c);
  uVar3 = FUN_004134e0(0,0x23,local_1c);
  if (((pcVar2 != (char *)0x0) && (*pcVar2 != '\0')) && (*pcVar2 != '{')) {
    if (param_4 == 0) {
      uVar7 = FUN_00482c94(pcVar2);
      pcVar8 = _strrchr(pcVar2,0x2e);
      if (pcVar8 == (char *)0x0) {
        uVar9 = 0;
      }
      else {
        uVar9 = FUN_00482c94(pcVar8 + 1);
      }
      FUN_004062a0();
      pclsid = &local_34;
      local_8 = 5;
      lpsz = (LPCOLESTR)FUN_0041d220(param_3,local_5c);
      HVar10 = CLSIDFromString(lpsz,pclsid);
      if (-1 < HVar10) {
        uVar3 = FUN_00482c94(uVar3,1);
        Ordinal_186(&local_34,uVar7,uVar9,uVar3);
      }
      local_8 = 0xffffffff;
      local_5c[0] = &PTR_FUN_02f95460;
      FUN_004064a0();
      ExceptionList = local_10;
      return 1;
    }
    param_3 = PTR_DAT_02fd8088;
    local_8 = 1;
    local_14 = (int *)0x0;
    FUN_004062a0();
    local_8._0_1_ = 2;
    iVar11 = 0;
    do {
      if (iVar11 == 0) {
        if (*(int *)(*(int *)(local_18 + 0xd8) + -8) != 0) {
          uVar3 = FUN_0049341f(local_20,local_18 + 0xd8,pcVar8);
          local_8._0_1_ = 3;
          FUN_004932c3(uVar3);
          local_8._0_1_ = 2;
          FUN_004931d6();
          goto LAB_00413788;
        }
      }
      else {
        if (iVar11 == 1) {
          uVar3 = FUN_0049341f(local_24,local_18 + 0xd0,pcVar8);
          local_8._0_1_ = 4;
          FUN_004932c3(uVar3);
          local_8._0_1_ = 2;
          FUN_004931d6();
        }
        else {
          FUN_00493313(pcVar8);
        }
LAB_00413788:
        uVar3 = FUN_0041d220(param_3,local_48,&local_14);
        iVar6 = Ordinal_161(uVar3);
        if (-1 < iVar6) break;
        local_14 = (int *)0x0;
      }
      iVar11 = iVar11 + 1;
    } while (iVar11 < 3);
    if (local_14 == (int *)0x0) {
LAB_004137e5:
      local_8 = CONCAT31(local_8._1_3_,1);
      local_48[0] = &PTR_FUN_02f95460;
      FUN_004064a0();
      local_8 = 0xffffffff;
      FUN_004931d6();
      ExceptionList = local_10;
      return 0;
    }
    uVar3 = FUN_0041d220(param_3,local_48,0);
    iVar11 = Ordinal_163(local_14,uVar3);
    if (iVar11 < 0) {
      (**(code **)(*local_14 + 8))(local_14);
      goto LAB_004137e5;
    }
    (**(code **)(*local_14 + 8))(local_14);
    local_8 = CONCAT31(local_8._1_3_,1);
    local_48[0] = &PTR_FUN_02f95460;
    FUN_004064a0();
    local_8 = 0xffffffff;
    FUN_004931d6();
    goto LAB_00413696;
  }
  if (*(int *)(*(int *)(local_18 + 0xd8) + -8) == 0) {
LAB_00413614:
    uVar3 = FUN_0049341f(&local_14,local_18 + 0xd0,&DAT_02faaca8);
    local_8 = 0;
    puVar4 = (undefined4 *)FUN_0049341f(&param_3,uVar3,pcVar8);
    hModule = LoadLibraryA((LPCSTR)*puVar4);
    FUN_004931d6();
    local_8 = 0xffffffff;
    FUN_004931d6();
    if (hModule == (HMODULE)0x0) {
      ExceptionList = local_10;
      return 0;
    }
  }
  else {
    puVar4 = (undefined4 *)FUN_0049341f(&param_3,local_18 + 0xd8,pcVar8);
    hModule = LoadLibraryA((LPCSTR)*puVar4);
    FUN_004931d6();
    if (hModule == (HMODULE)0x0) goto LAB_00413614;
  }
  pcVar2 = s_DllRegisterServer_02faaea4;
  if (param_4 == 0) {
    pcVar2 = s_DllUnregisterServer_02faae90;
  }
  pFVar5 = GetProcAddress(hModule,pcVar2);
  if (pFVar5 == (FARPROC)0x0) {
    FreeLibrary(hModule);
    ExceptionList = local_10;
    return 0;
  }
  (*pFVar5)();
  FreeLibrary(hModule);
LAB_00413696:
  iVar11 = local_18;
  if (param_4 != 0) {
    FUN_00492581(*(undefined4 *)(local_18 + 0xe4),param_2);
    FUN_00492581(*(undefined4 *)(iVar11 + 0xf8),pcVar8);
  }
  ExceptionList = local_10;
  return 1;
}

