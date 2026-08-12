// Function: FUN_0046a6d0
// Entry:    0046a6d0
// Size:     1801 bytes
// Conv:     unknown
// Signature: undefined FUN_0046a6d0(void)
// Decompiled by Ghidra 12.1.2


undefined4 FUN_0046a6d0(LPCSTR param_1,char *param_2)

{
  char cVar1;
  uint3 uVar2;
  DWORD _Size;
  undefined4 uVar3;
  void *lpData;
  uint uVar4;
  LPCSTR pCVar5;
  uint uVar6;
  int iVar7;
  char *pcVar8;
  DWORD *pDVar9;
  char *pcVar10;
  DWORD **ppDVar11;
  uint *puVar12;
  undefined *local_124;
  char *local_120;
  DWORD *local_11c;
  undefined *local_118;
  uint local_114;
  undefined1 local_110 [4];
  CHAR local_10c [256];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004a11a7;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  _Size = GetFileVersionInfoSizeA(param_1,(LPDWORD)0x0);
  if (_Size == 0) {
    uVar3 = 0;
  }
  else {
    lpData = _malloc(_Size);
    GetFileVersionInfoA(param_1,0,_Size,lpData);
    local_11c = (DWORD *)0x0;
    local_114 = 0;
    VerQueryValueA(lpData,s__VarFileInfo_Translation_02fd25d4,&local_11c,&local_114);
    local_124 = PTR_DAT_02fd8088;
    local_118 = PTR_DAT_02fd8088;
    local_120 = PTR_DAT_02fd8088;
    local_4._1_3_ = 0;
    uVar2 = local_4._1_3_;
    local_4._0_1_ = 2;
    local_4._1_3_ = 0;
    if (local_114 == 0) {
      local_4._1_3_ = uVar2;
      FUN_00493313(s_040904E4_02fd25bc);
      pcVar8 = param_2 + 0x900;
      for (iVar7 = 0x40; iVar7 != 0; iVar7 = iVar7 + -1) {
        pcVar8[0] = '\0';
        pcVar8[1] = '\0';
        pcVar8[2] = '\0';
        pcVar8[3] = '\0';
        pcVar8 = pcVar8 + 4;
      }
    }
    else {
      uVar4 = local_114 >> 2;
      iVar7 = 0;
      pDVar9 = local_11c;
      if (uVar4 != 0) {
        do {
          VerLanguageNameA(*pDVar9,local_10c,0x100);
          FUN_00493566(local_10c);
          if (iVar7 != uVar4 - 1) {
            FUN_00493566(&DAT_02fd25d0);
          }
          iVar7 = iVar7 + 1;
          pDVar9 = pDVar9 + 1;
        } while (iVar7 < (int)uVar4);
      }
      uVar4 = 0xffffffff;
      pcVar8 = local_120;
      do {
        pcVar10 = pcVar8;
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        pcVar10 = pcVar8 + 1;
        cVar1 = *pcVar8;
        pcVar8 = pcVar10;
      } while (cVar1 != '\0');
      uVar4 = ~uVar4;
      pcVar8 = pcVar10 + -uVar4;
      pcVar10 = param_2 + 0x900;
      for (uVar6 = uVar4 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined4 *)pcVar10 = *(undefined4 *)pcVar8;
        pcVar8 = pcVar8 + 4;
        pcVar10 = pcVar10 + 4;
      }
      for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *pcVar10 = *pcVar8;
        pcVar8 = pcVar8 + 1;
        pcVar10 = pcVar10 + 1;
      }
      FUN_004912ab(&local_120,s_000_x_02fd25c8,(short)*local_11c);
      uVar3 = FUN_00490e31(local_110,4);
      local_4._0_1_ = 3;
      FUN_004932c3(uVar3);
      local_4._0_1_ = 2;
      FUN_004931d6();
      FUN_004912ab(&local_120,s_000_x_02fd25c8,*(undefined2 *)((int)local_11c + 2));
      uVar3 = FUN_00490e31(local_110,4);
      local_4._0_1_ = 4;
      FUN_004935a2(uVar3);
      local_4._0_1_ = 2;
      FUN_004931d6();
    }
    FUN_004912ab(&local_124,s__StringFileInfo__s_FileVersion_02fd259c,local_118);
    puVar12 = &local_114;
    ppDVar11 = &local_11c;
    pCVar5 = (LPCSTR)FUN_00493631(0x100);
    VerQueryValueA(lpData,pCVar5,ppDVar11,puVar12);
    FUN_00493609(0xffffffff);
    FUN_004912ab(&local_120,&DAT_02fd2598,local_11c);
    uVar4 = 0xffffffff;
    pcVar8 = local_120;
    do {
      pcVar10 = pcVar8;
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      pcVar10 = pcVar8 + 1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar10;
    } while (cVar1 != '\0');
    uVar4 = ~uVar4;
    pcVar8 = pcVar10 + -uVar4;
    pcVar10 = param_2;
    for (uVar6 = uVar4 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined4 *)pcVar10 = *(undefined4 *)pcVar8;
      pcVar8 = pcVar8 + 4;
      pcVar10 = pcVar10 + 4;
    }
    for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *pcVar10 = *pcVar8;
      pcVar8 = pcVar8 + 1;
      pcVar10 = pcVar10 + 1;
    }
    FUN_004912ab(&local_124,s__StringFileInfo__s_CompanyName_02fd2578,local_118);
    puVar12 = &local_114;
    ppDVar11 = &local_11c;
    pCVar5 = (LPCSTR)FUN_00493631(0x100);
    VerQueryValueA(lpData,pCVar5,ppDVar11,puVar12);
    FUN_00493609(0xffffffff);
    FUN_004912ab(&local_120,&DAT_02fd2598,local_11c);
    uVar4 = 0xffffffff;
    pcVar8 = local_120;
    do {
      pcVar10 = pcVar8;
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      pcVar10 = pcVar8 + 1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar10;
    } while (cVar1 != '\0');
    uVar4 = ~uVar4;
    pcVar8 = pcVar10 + -uVar4;
    pcVar10 = param_2 + 0x100;
    for (uVar6 = uVar4 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined4 *)pcVar10 = *(undefined4 *)pcVar8;
      pcVar8 = pcVar8 + 4;
      pcVar10 = pcVar10 + 4;
    }
    for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *pcVar10 = *pcVar8;
      pcVar8 = pcVar8 + 1;
      pcVar10 = pcVar10 + 1;
    }
    FUN_004912ab(&local_124,s__StringFileInfo__s_FileDescripti_02fd2554,local_118);
    puVar12 = &local_114;
    ppDVar11 = &local_11c;
    pCVar5 = (LPCSTR)FUN_00493631(0x100);
    VerQueryValueA(lpData,pCVar5,ppDVar11,puVar12);
    FUN_00493609(0xffffffff);
    FUN_004912ab(&local_120,&DAT_02fd2598,local_11c);
    uVar4 = 0xffffffff;
    pcVar8 = local_120;
    do {
      pcVar10 = pcVar8;
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      pcVar10 = pcVar8 + 1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar10;
    } while (cVar1 != '\0');
    uVar4 = ~uVar4;
    pcVar8 = pcVar10 + -uVar4;
    pcVar10 = param_2 + 0x200;
    for (uVar6 = uVar4 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined4 *)pcVar10 = *(undefined4 *)pcVar8;
      pcVar8 = pcVar8 + 4;
      pcVar10 = pcVar10 + 4;
    }
    for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *pcVar10 = *pcVar8;
      pcVar8 = pcVar8 + 1;
      pcVar10 = pcVar10 + 1;
    }
    FUN_004912ab(&local_124,s__StringFileInfo__s_InternalName_02fd2534,local_118);
    puVar12 = &local_114;
    ppDVar11 = &local_11c;
    pCVar5 = (LPCSTR)FUN_00493631(0x100);
    VerQueryValueA(lpData,pCVar5,ppDVar11,puVar12);
    FUN_00493609(0xffffffff);
    FUN_004912ab(&local_120,&DAT_02fd2598,local_11c);
    uVar4 = 0xffffffff;
    pcVar8 = local_120;
    do {
      pcVar10 = pcVar8;
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      pcVar10 = pcVar8 + 1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar10;
    } while (cVar1 != '\0');
    uVar4 = ~uVar4;
    pcVar8 = pcVar10 + -uVar4;
    pcVar10 = param_2 + 0x300;
    for (uVar6 = uVar4 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined4 *)pcVar10 = *(undefined4 *)pcVar8;
      pcVar8 = pcVar8 + 4;
      pcVar10 = pcVar10 + 4;
    }
    for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *pcVar10 = *pcVar8;
      pcVar8 = pcVar8 + 1;
      pcVar10 = pcVar10 + 1;
    }
    FUN_004912ab(&local_124,s__StringFileInfo__s_LegalCopyrigh_02fd2510,local_118);
    puVar12 = &local_114;
    ppDVar11 = &local_11c;
    pCVar5 = (LPCSTR)FUN_00493631(0x100);
    VerQueryValueA(lpData,pCVar5,ppDVar11,puVar12);
    FUN_00493609(0xffffffff);
    FUN_004912ab(&local_120,&DAT_02fd2598,local_11c);
    uVar4 = 0xffffffff;
    pcVar8 = local_120;
    do {
      pcVar10 = pcVar8;
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      pcVar10 = pcVar8 + 1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar10;
    } while (cVar1 != '\0');
    uVar4 = ~uVar4;
    pcVar8 = pcVar10 + -uVar4;
    pcVar10 = param_2 + 0x400;
    for (uVar6 = uVar4 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined4 *)pcVar10 = *(undefined4 *)pcVar8;
      pcVar8 = pcVar8 + 4;
      pcVar10 = pcVar10 + 4;
    }
    for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *pcVar10 = *pcVar8;
      pcVar8 = pcVar8 + 1;
      pcVar10 = pcVar10 + 1;
    }
    FUN_004912ab(&local_124,s__StringFileInfo__s_LegalTrademar_02fd24ec,local_118);
    puVar12 = &local_114;
    ppDVar11 = &local_11c;
    pCVar5 = (LPCSTR)FUN_00493631(0x100);
    VerQueryValueA(lpData,pCVar5,ppDVar11,puVar12);
    FUN_00493609(0xffffffff);
    FUN_004912ab(&local_120,&DAT_02fd2598,local_11c);
    uVar4 = 0xffffffff;
    pcVar8 = local_120;
    do {
      pcVar10 = pcVar8;
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      pcVar10 = pcVar8 + 1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar10;
    } while (cVar1 != '\0');
    uVar4 = ~uVar4;
    pcVar8 = pcVar10 + -uVar4;
    pcVar10 = param_2 + 0x500;
    for (uVar6 = uVar4 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined4 *)pcVar10 = *(undefined4 *)pcVar8;
      pcVar8 = pcVar8 + 4;
      pcVar10 = pcVar10 + 4;
    }
    for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *pcVar10 = *pcVar8;
      pcVar8 = pcVar8 + 1;
      pcVar10 = pcVar10 + 1;
    }
    FUN_004912ab(&local_124,s__StringFileInfo__s_OriginalFilen_02fd24c8,local_118);
    puVar12 = &local_114;
    ppDVar11 = &local_11c;
    pCVar5 = (LPCSTR)FUN_00493631(0x100);
    VerQueryValueA(lpData,pCVar5,ppDVar11,puVar12);
    FUN_00493609(0xffffffff);
    FUN_004912ab(&local_120,&DAT_02fd2598,local_11c);
    uVar4 = 0xffffffff;
    pcVar8 = local_120;
    do {
      pcVar10 = pcVar8;
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      pcVar10 = pcVar8 + 1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar10;
    } while (cVar1 != '\0');
    uVar4 = ~uVar4;
    pcVar8 = pcVar10 + -uVar4;
    pcVar10 = param_2 + 0x600;
    for (uVar6 = uVar4 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined4 *)pcVar10 = *(undefined4 *)pcVar8;
      pcVar8 = pcVar8 + 4;
      pcVar10 = pcVar10 + 4;
    }
    for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *pcVar10 = *pcVar8;
      pcVar8 = pcVar8 + 1;
      pcVar10 = pcVar10 + 1;
    }
    FUN_004912ab(&local_124,s__StringFileInfo__s_ProductName_02fd24a8,local_118);
    puVar12 = &local_114;
    ppDVar11 = &local_11c;
    pCVar5 = (LPCSTR)FUN_00493631(0x100);
    VerQueryValueA(lpData,pCVar5,ppDVar11,puVar12);
    FUN_00493609(0xffffffff);
    FUN_004912ab(&local_120,&DAT_02fd2598,local_11c);
    uVar4 = 0xffffffff;
    pcVar8 = local_120;
    do {
      pcVar10 = pcVar8;
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      pcVar10 = pcVar8 + 1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar10;
    } while (cVar1 != '\0');
    uVar4 = ~uVar4;
    pcVar8 = pcVar10 + -uVar4;
    pcVar10 = param_2 + 0x700;
    for (uVar6 = uVar4 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined4 *)pcVar10 = *(undefined4 *)pcVar8;
      pcVar8 = pcVar8 + 4;
      pcVar10 = pcVar10 + 4;
    }
    for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *pcVar10 = *pcVar8;
      pcVar8 = pcVar8 + 1;
      pcVar10 = pcVar10 + 1;
    }
    FUN_004912ab(&local_124,s__StringFileInfo__s_ProductVersio_02fd2484,local_118);
    puVar12 = &local_114;
    ppDVar11 = &local_11c;
    pCVar5 = (LPCSTR)FUN_00493631(0x100);
    VerQueryValueA(lpData,pCVar5,ppDVar11,puVar12);
    FUN_00493609(0xffffffff);
    FUN_004912ab(&local_120,&DAT_02fd2598,local_11c);
    uVar4 = 0xffffffff;
    pcVar8 = local_120;
    do {
      pcVar10 = pcVar8;
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      pcVar10 = pcVar8 + 1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar10;
    } while (cVar1 != '\0');
    uVar4 = ~uVar4;
    pcVar8 = pcVar10 + -uVar4;
    pcVar10 = param_2 + 0x800;
    for (uVar6 = uVar4 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined4 *)pcVar10 = *(undefined4 *)pcVar8;
      pcVar8 = pcVar8 + 4;
      pcVar10 = pcVar10 + 4;
    }
    for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *pcVar10 = *pcVar8;
      pcVar8 = pcVar8 + 1;
      pcVar10 = pcVar10 + 1;
    }
    FUN_004912ab(&local_124,s__StringFileInfo__s_Comments_02fd2468,local_118);
    puVar12 = &local_114;
    ppDVar11 = &local_11c;
    pCVar5 = (LPCSTR)FUN_00493631(0x100);
    VerQueryValueA(lpData,pCVar5,ppDVar11,puVar12);
    FUN_00493609(0xffffffff);
    FUN_004912ab(&local_120,&DAT_02fd2598,local_11c);
    uVar4 = 0xffffffff;
    pcVar8 = local_120;
    do {
      pcVar10 = pcVar8;
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      pcVar10 = pcVar8 + 1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar10;
    } while (cVar1 != '\0');
    uVar4 = ~uVar4;
    pcVar8 = pcVar10 + -uVar4;
    pcVar10 = param_2 + 0xa00;
    for (uVar6 = uVar4 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined4 *)pcVar10 = *(undefined4 *)pcVar8;
      pcVar8 = pcVar8 + 4;
      pcVar10 = pcVar10 + 4;
    }
    for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *pcVar10 = *pcVar8;
      pcVar8 = pcVar8 + 1;
      pcVar10 = pcVar10 + 1;
    }
    FUN_004837fe(lpData);
    local_4._0_1_ = 1;
    FUN_004931d6();
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_004931d6();
    local_4 = 0xffffffff;
    FUN_004931d6();
    uVar3 = 1;
  }
  ExceptionList = local_c;
  return uVar3;
}

