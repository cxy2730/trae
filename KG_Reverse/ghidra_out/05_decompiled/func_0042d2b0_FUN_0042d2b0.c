// Function: FUN_0042d2b0
// Entry:    0042d2b0
// Size:     357 bytes
// Conv:     unknown
// Signature: undefined FUN_0042d2b0(void)
// Decompiled by Ghidra 12.1.2


void __thiscall FUN_0042d2b0(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  char cVar1;
  HFONT pHVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  LOGFONTA *pLVar7;
  char *pcVar8;
  CHAR *pCVar9;
  char *local_68;
  undefined4 local_64;
  LONG local_60;
  undefined1 local_5c [20];
  LOGFONTA local_48;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_004a0010;
  local_c = ExceptionList;
  local_68 = PTR_DAT_02fd8088;
  local_4 = 0;
  ExceptionList = &local_c;
  FUN_004297f0(&local_68);
  pLVar7 = &local_48;
  for (iVar3 = 0xf; iVar3 != 0; iVar3 = iVar3 + -1) {
    pLVar7->lfHeight = 0;
    pLVar7 = (LOGFONTA *)&pLVar7->lfWidth;
  }
  uVar4 = 0xffffffff;
  local_48.lfCharSet = '\x01';
  local_48.lfQuality = '\x02';
  local_48.lfOutPrecision = '\a';
  pcVar6 = local_68;
  do {
    pcVar8 = pcVar6;
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    pcVar8 = pcVar6 + 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar8;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4;
  pcVar6 = pcVar8 + -uVar4;
  pCVar9 = local_48.lfFaceName;
  for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined4 *)pCVar9 = *(undefined4 *)pcVar6;
    pcVar6 = pcVar6 + 4;
    pCVar9 = pCVar9 + 4;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pCVar9 = *pcVar6;
    pcVar6 = pcVar6 + 1;
    pCVar9 = pCVar9 + 1;
  }
  uVar4 = FUN_004297e0();
  if ((uVar4 & 0x800) != 0) {
    local_48.lfWeight = 700;
  }
  if ((uVar4 & 0x1000) != 0) {
    local_48.lfItalic = '\x01';
  }
  if ((uVar4 & 0x2000) != 0) {
    local_48.lfUnderline = '\x01';
  }
  if ((uVar4 & 0x4000) != 0) {
    local_48.lfStrikeOut = '\x01';
  }
  if (param_4 == 0) {
    local_48.lfHeight = FUN_00429820();
  }
  else {
    FUN_00499b75(0);
    local_4._0_1_ = 1;
    FUN_00442c00(local_5c,*(undefined4 *)(param_1 + 0x58),*(undefined4 *)(param_1 + 0x5c));
    local_60 = FUN_00429820();
    local_64 = 0;
    FUN_00499aa3(&local_64);
    local_48.lfHeight = local_60;
    local_4 = (uint)local_4._1_3_ << 8;
    FID_conflict__CClientDC();
  }
  pHVar2 = CreateFontIndirectA(&local_48);
  FUN_00499e1d(pHVar2);
  local_4 = 0xffffffff;
  FUN_004931d6();
  ExceptionList = local_c;
  return;
}

