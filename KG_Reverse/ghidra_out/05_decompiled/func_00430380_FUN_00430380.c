// Function: FUN_00430380
// Entry:    00430380
// Size:     491 bytes
// Conv:     unknown
// Signature: undefined FUN_00430380(void)
// Decompiled by Ghidra 12.1.2


void FUN_00430380(int *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  char cVar1;
  LONG LVar2;
  HFONT pHVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  char *pcVar8;
  LOGFONTA *pLVar9;
  char *pcVar10;
  CHAR *pCVar11;
  LONG *pLVar12;
  undefined **local_78;
  tagSIZE local_74;
  char acStack_6c [4];
  CHAR local_68 [32];
  LOGFONTA local_48;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004a0250;
  local_c = ExceptionList;
  if (param_3 != 0) {
    ExceptionList = &local_c;
    wsprintfA(local_68,&DAT_02fb0404,param_4);
    pLVar9 = &local_48;
    for (iVar4 = 0xf; iVar4 != 0; iVar4 = iVar4 + -1) {
      pLVar9->lfHeight = 0;
      pLVar9 = (LOGFONTA *)&pLVar9->lfWidth;
    }
    uVar5 = 0xffffffff;
    pcVar8 = &DAT_02fb03f8;
    do {
      pcVar10 = pcVar8;
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      pcVar10 = pcVar8 + 1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar10;
    } while (cVar1 != '\0');
    uVar5 = ~uVar5;
    local_48.lfCharSet = '\x01';
    local_48.lfQuality = '\x02';
    local_48.lfOutPrecision = '\a';
    pcVar8 = pcVar10 + -uVar5;
    pCVar11 = local_48.lfFaceName;
    for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined4 *)pCVar11 = *(undefined4 *)pcVar8;
      pcVar8 = pcVar8 + 4;
      pCVar11 = pCVar11 + 4;
    }
    local_74.cx = 0;
    local_78 = &PTR_LAB_02f9640c;
    for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *pCVar11 = *pcVar8;
      pcVar8 = pcVar8 + 1;
      pCVar11 = pCVar11 + 1;
    }
    local_48.lfHeight = 0x28;
    local_4 = 0;
    pHVar3 = CreateFontIndirectA(&local_48);
    FUN_00499e1d(pHVar3);
    (**(code **)(*param_1 + 0x28))(&local_78);
    uVar5 = 0xffffffff;
    pcVar8 = acStack_6c;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar1 != '\0');
    GetTextExtentPoint32A((HDC)param_1[2],acStack_6c,~uVar5 - 1,&local_74);
    if ((param_3 == 1) || (param_3 == 4)) {
      iVar4 = *param_1;
    }
    else if ((param_3 == 2) || (param_3 == 5)) {
      iVar4 = ((param_1[2] - *param_1) - local_74.cx) / 2 + *param_1;
    }
    else {
      iVar4 = param_1[2] - local_74.cx;
    }
    if (((param_3 == 1) || (param_3 == 2)) || (param_3 == 3)) {
      iVar7 = (param_1[1] - local_74.cy) + -0x28;
    }
    else {
      iVar7 = param_1[3] + 0x28;
    }
    FUN_0049954d(1);
    (**(code **)(*param_1 + 0x30))(0);
    uVar5 = 0xffffffff;
    pLVar12 = &local_74.cy;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      LVar2 = *pLVar12;
      pLVar12 = (LONG *)((int)pLVar12 + 1);
    } while ((char)LVar2 != '\0');
    (**(code **)(*param_1 + 0x5c))(iVar4,iVar7,&local_74.cy,~uVar5 - 1);
    (**(code **)(*param_1 + 0x30))(local_48.lfFaceName._28_4_);
    (**(code **)(*param_1 + 0x28))(local_48.lfFaceName._28_4_);
    local_78 = &PTR_LAB_02f96400;
    local_4 = 1;
    FUN_00499e74();
  }
  ExceptionList = local_c;
  return;
}

