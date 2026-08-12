// Function: FUN_00412bb0
// Entry:    00412bb0
// Size:     925 bytes
// Conv:     unknown
// Signature: undefined FUN_00412bb0(void)
// Decompiled by Ghidra 12.1.2


FARPROC __thiscall FUN_00412bb0(int param_1,LPCSTR param_2)

{
  uint uVar1;
  LPCSTR pCVar2;
  FARPROC pFVar3;
  undefined4 *puVar4;
  char *pcVar5;
  int iVar6;
  HMODULE hModule;
  undefined4 uVar7;
  int iVar8;
  undefined **ppuVar9;
  char *local_18;
  undefined1 local_14 [4];
  undefined1 local_10 [4];
  void *local_c;
  undefined1 *puStack_8;
  FARPROC local_4;
  
  iVar8 = (int)param_2;
  local_4 = (FARPROC)0xffffffff;
  puStack_8 = &LAB_0049e850;
  local_c = ExceptionList;
  if (*(int *)(param_1 + 0x1c8) != 0) {
    pcVar5 = *(char **)(param_1 + 0x1cc);
    if (*(int *)(pcVar5 + -8) == 0) {
      pcVar5 = *(char **)(*(int *)(param_1 + 0x164) + (int)param_2 * 4);
    }
    pCVar2 = pcVar5;
    ExceptionList = &local_c;
    if (*pcVar5 == '#') {
      ExceptionList = &local_c;
      uVar1 = FUN_00482c94(pcVar5 + 1);
      pCVar2 = (LPCSTR)(uVar1 & 0xffff);
    }
    pFVar3 = GetProcAddress(*(HMODULE *)(param_1 + 0x1c8),pCVar2);
    if (pFVar3 == (FARPROC)0x0) {
      puVar4 = (undefined4 *)FUN_0041c620(&param_2,&DAT_02faadd4,pcVar5);
      local_4 = pFVar3;
      FUN_00412f90(*puVar4,0,0,0);
      local_4 = (FARPROC)0xffffffff;
      FUN_004931d6();
    }
    FUN_00412b90();
    ExceptionList = local_c;
    return pFVar3;
  }
  pFVar3 = *(FARPROC *)(*(int *)(param_1 + 0x18c) + (int)param_2 * 4);
  if (pFVar3 != (FARPROC)0x0) {
    return pFVar3;
  }
  pcVar5 = *(char **)(*(int *)(param_1 + 0x164) + (int)param_2 * 4);
  ExceptionList = &local_c;
  local_18 = pcVar5;
  if (*pcVar5 == '#') {
    ExceptionList = &local_c;
    uVar1 = FUN_00482c94(pcVar5 + 1);
    pcVar5 = (char *)(uVar1 & 0xffff);
  }
  pCVar2 = *(LPCSTR *)(*(int *)(param_1 + 0x150) + iVar8 * 4);
  param_2 = pCVar2;
  iVar6 = FUN_00406c20(pCVar2);
  if (iVar6 != 0) {
    ppuVar9 = &PTR_s_Kernel32_dll_02faaa4c;
    do {
      hModule = LoadLibraryA(*ppuVar9);
      if (hModule != (HMODULE)0x0) {
        pFVar3 = GetProcAddress(hModule,pcVar5);
        if ((-1 < iVar8) && (iVar8 < (int)(*(uint *)(param_1 + 0x194) >> 2))) {
          *(FARPROC *)(*(int *)(param_1 + 0x18c) + iVar8 * 4) = pFVar3;
        }
        if (*(int *)(*(int *)(param_1 + 0x18c) + iVar8 * 4) != 0) break;
        FreeLibrary(hModule);
        hModule = (HMODULE)0x0;
      }
      ppuVar9 = ppuVar9 + 1;
    } while ((int)ppuVar9 < 0x2faaa64);
    goto LAB_00412e3c;
  }
  iVar6 = FUN_00483ed0(pCVar2,0x3a);
  if (iVar6 == 0) {
    if (*(int *)(*(int *)(param_1 + 0x1d0) + -8) == 0) {
LAB_00412d22:
      uVar7 = FUN_0049341f(local_10,param_1 + 0xd0,&DAT_02faaca8);
      local_4 = (FARPROC)0x1;
      puVar4 = (undefined4 *)FUN_0049341f(local_14,uVar7,pCVar2);
      hModule = LoadLibraryA((LPCSTR)*puVar4);
      FUN_004931d6();
      local_4 = (FARPROC)0xffffffff;
      FUN_004931d6();
      if (hModule == (HMODULE)0x0) {
        if (*(int *)(*(int *)(param_1 + 0xd8) + -8) != 0) {
          puVar4 = (undefined4 *)FUN_0049341f(local_10,param_1 + 0xd8,param_2);
          hModule = LoadLibraryA((LPCSTR)*puVar4);
          FUN_004931d6();
        }
        pCVar2 = param_2;
        if (hModule == (HMODULE)0x0) goto LAB_00412dac;
      }
    }
    else {
      puVar4 = (undefined4 *)FUN_0049341f(local_14,param_1 + 0x1d0,pCVar2);
      hModule = LoadLibraryA((LPCSTR)*puVar4);
      FUN_004931d6();
      pCVar2 = param_2;
      if (hModule == (HMODULE)0x0) goto LAB_00412d22;
    }
  }
  else {
LAB_00412dac:
    hModule = LoadLibraryA(pCVar2);
    if (hModule == (HMODULE)0x0) goto LAB_00412e3c;
  }
  pFVar3 = GetProcAddress(hModule,pcVar5);
  if ((-1 < iVar8) && (iVar8 < (int)(*(uint *)(param_1 + 0x194) >> 2))) {
    *(FARPROC *)(*(int *)(param_1 + 0x18c) + iVar8 * 4) = pFVar3;
  }
LAB_00412e3c:
  if (*(int *)(*(int *)(param_1 + 0x18c) + iVar8 * 4) != 0) {
    if ((-1 < iVar8) && (iVar8 < (int)(*(uint *)(param_1 + 0x180) >> 2))) {
      *(HMODULE *)(*(int *)(param_1 + 0x178) + iVar8 * 4) = hModule;
    }
    ExceptionList = local_c;
    return *(FARPROC *)(*(int *)(param_1 + 0x18c) + iVar8 * 4);
  }
  if (hModule != (HMODULE)0x0) {
    FreeLibrary(hModule);
  }
  pCVar2 = param_2;
  iVar8 = FUN_00406c20(param_2);
  if (iVar8 == 0) {
    puVar4 = (undefined4 *)FUN_0041c620(&param_2,&DAT_02faada4,pCVar2,local_18);
    local_4 = (FARPROC)0x2;
    FUN_00412f90(*puVar4,0,0,0);
    local_4 = (FARPROC)0xffffffff;
    FUN_004931d6();
    ExceptionList = local_c;
    return (FARPROC)0x0;
  }
  puVar4 = (undefined4 *)FUN_0041c620(&local_18,&DAT_02faadd4,local_18);
  local_4 = (FARPROC)0x3;
  FUN_00412f90(*puVar4,0,0,0);
  local_4 = (FARPROC)0xffffffff;
  FUN_004931d6();
  ExceptionList = local_c;
  return (FARPROC)0x0;
}

