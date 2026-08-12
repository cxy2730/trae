// Function: FUN_0042a6a0
// Entry:    0042a6a0
// Size:     106 bytes
// Conv:     unknown
// Signature: undefined FUN_0042a6a0(void)
// Decompiled by Ghidra 12.1.2


void FUN_0042a6a0(void)

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
  LOGFONTA local_3c;
  
  pLVar7 = &local_3c;
  for (iVar3 = 0xf; iVar3 != 0; iVar3 = iVar3 + -1) {
    pLVar7->lfHeight = 0;
    pLVar7 = (LOGFONTA *)&pLVar7->lfWidth;
  }
  uVar4 = 0xffffffff;
  pcVar6 = &DAT_02fb03f8;
  do {
    pcVar8 = pcVar6;
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    pcVar8 = pcVar6 + 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar8;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4;
  local_3c.lfCharSet = '\x01';
  local_3c.lfQuality = '\x02';
  local_3c.lfOutPrecision = '\a';
  pcVar6 = pcVar8 + -uVar4;
  pCVar9 = local_3c.lfFaceName;
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
  local_3c.lfHeight = 0x28;
  pHVar2 = CreateFontIndirectA(&local_3c);
  FUN_00499e1d(pHVar2);
  return;
}

