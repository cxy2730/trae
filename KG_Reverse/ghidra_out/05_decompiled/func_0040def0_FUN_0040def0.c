// Function: FUN_0040def0
// Entry:    0040def0
// Size:     155 bytes
// Conv:     unknown
// Signature: undefined FUN_0040def0(void)
// Decompiled by Ghidra 12.1.2


undefined4 FUN_0040def0(undefined4 param_1,char *param_2)

{
  char cVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  char *pcVar6;
  undefined *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0049e2e8;
  local_c = ExceptionList;
  local_10 = PTR_DAT_02fd8088;
  local_4 = 0;
  ExceptionList = &local_c;
  FUN_004279a0(param_1,&local_10);
  puVar2 = (undefined4 *)FUN_00490ead(&param_1,0x20);
  uVar3 = 0xffffffff;
  pcVar5 = (char *)*puVar2;
  do {
    pcVar6 = pcVar5;
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    pcVar6 = pcVar5 + 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar6;
  } while (cVar1 != '\0');
  uVar3 = ~uVar3;
  pcVar5 = pcVar6 + -uVar3;
  pcVar6 = param_2;
  for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined4 *)pcVar6 = *(undefined4 *)pcVar5;
    pcVar5 = pcVar5 + 4;
    pcVar6 = pcVar6 + 4;
  }
  for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *pcVar6 = *pcVar5;
    pcVar5 = pcVar5 + 1;
    pcVar6 = pcVar6 + 1;
  }
  FUN_004931d6();
  local_4 = 0xffffffff;
  FUN_004931d6();
  ExceptionList = local_c;
  return 0;
}

