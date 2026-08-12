// Function: FUN_00486b5f
// Entry:    00486b5f
// Size:     185 bytes
// Conv:     unknown
// Signature: undefined FUN_00486b5f(void)
// Decompiled by Ghidra 12.1.2


void FUN_00486b5f(void)

{
  char cVar1;
  size_t sVar2;
  undefined4 *puVar3;
  void *pvVar4;
  int iVar5;
  char *pcVar6;
  
  if (DAT_030151ec == 0) {
    FUN_00486973();
  }
  iVar5 = 0;
  for (pcVar6 = DAT_03010f38; *pcVar6 != '\0'; pcVar6 = pcVar6 + sVar2 + 1) {
    if (*pcVar6 != '=') {
      iVar5 = iVar5 + 1;
    }
    sVar2 = _strlen(pcVar6);
  }
  puVar3 = _malloc(iVar5 * 4 + 4);
  DAT_03010fdc = puVar3;
  if (puVar3 == (undefined4 *)0x0) {
    __amsg_exit(9);
  }
  cVar1 = *DAT_03010f38;
  pcVar6 = DAT_03010f38;
  while (cVar1 != '\0') {
    sVar2 = _strlen(pcVar6);
    if (*pcVar6 != '=') {
      pvVar4 = _malloc(sVar2 + 1);
      *puVar3 = pvVar4;
      if (pvVar4 == (void *)0x0) {
        __amsg_exit(9);
      }
      FUN_00489dc0(*puVar3,pcVar6);
      puVar3 = puVar3 + 1;
    }
    pcVar6 = pcVar6 + sVar2 + 1;
    cVar1 = *pcVar6;
  }
  FUN_004837fe(DAT_03010f38);
  DAT_03010f38 = (char *)0x0;
  *puVar3 = 0;
  DAT_030151e8 = 1;
  return;
}

