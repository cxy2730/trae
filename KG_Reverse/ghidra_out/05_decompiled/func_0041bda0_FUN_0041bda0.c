// Function: FUN_0041bda0
// Entry:    0041bda0
// Size:     138 bytes
// Conv:     unknown
// Signature: undefined FUN_0041bda0(void)
// Decompiled by Ghidra 12.1.2


void FUN_0041bda0(undefined4 param_1,undefined4 param_2,char *param_3)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  char *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0049ede8;
  local_c = ExceptionList;
  local_10 = PTR_DAT_02fd8088;
  local_4 = 0;
  ExceptionList = &local_c;
  FUN_004912ab(&local_10,s___13g_02fab738,param_1,param_2);
  uVar2 = 0xffffffff;
  pcVar4 = local_10;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  local_4 = 0xffffffff;
  pcVar4 = pcVar5 + -uVar2;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)param_3 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    param_3 = param_3 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *param_3 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    param_3 = param_3 + 1;
  }
  FUN_004931d6();
  ExceptionList = local_c;
  return;
}

