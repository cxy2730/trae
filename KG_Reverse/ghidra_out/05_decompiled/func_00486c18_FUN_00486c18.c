// Function: FUN_00486c18
// Entry:    00486c18
// Size:     153 bytes
// Conv:     unknown
// Signature: undefined FUN_00486c18(void)
// Decompiled by Ghidra 12.1.2


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00486c18(void)

{
  void *pvVar1;
  char *pcVar2;
  int local_c;
  int local_8;
  
  if (DAT_030151ec == 0) {
    FUN_00486973();
  }
  GetModuleFileNameA((HMODULE)0x0,&DAT_03011004,0x104);
  _DAT_03010fec = &DAT_03011004;
  pcVar2 = &DAT_03011004;
  if (*DAT_03016204 != '\0') {
    pcVar2 = DAT_03016204;
  }
  FUN_00486cb1(pcVar2,0,0,&local_8,&local_c);
  pvVar1 = _malloc(local_c + local_8 * 4);
  if (pvVar1 == (void *)0x0) {
    __amsg_exit(8);
  }
  FUN_00486cb1(pcVar2,pvVar1,(void *)((int)pvVar1 + local_8 * 4),&local_8,&local_c);
  _DAT_03010fd4 = pvVar1;
  _DAT_03010fd0 = local_8 + -1;
  return;
}

