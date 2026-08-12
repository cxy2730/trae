// Function: FUN_004298d0
// Entry:    004298d0
// Size:     181 bytes
// Conv:     unknown
// Signature: undefined FUN_004298d0(void)
// Decompiled by Ghidra 12.1.2


void __fastcall FUN_004298d0(uint *param_1)

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  char *pcVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0049fc68;
  local_c = ExceptionList;
  if ((((*param_1 & 0x18000) != 0) || (pcVar4 = (char *)param_1[0xc], pcVar4 == (char *)0x0)) ||
     (*pcVar4 == '\0')) {
    ExceptionList = &local_c;
    FUN_00493161();
    ExceptionList = local_c;
    return;
  }
  if ((*param_1 & 0x4000000) == 0) {
    ExceptionList = &local_c;
    FUN_00493313(pcVar4);
    ExceptionList = local_c;
    return;
  }
  uVar3 = 0xffffffff;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  ExceptionList = &local_c;
  uVar2 = FUN_00490de8(0x2a,~uVar3 - 1);
  local_4 = 0;
  FUN_004932c3(uVar2);
  local_4 = 0xffffffff;
  FUN_004931d6();
  ExceptionList = local_c;
  return;
}

