// Function: FUN_00422540
// Entry:    00422540
// Size:     134 bytes
// Conv:     unknown
// Signature: undefined FUN_00422540(void)
// Decompiled by Ghidra 12.1.2


undefined4 FUN_00422540(char *param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uVar5;
  
  if (param_1 != (char *)0x0) {
    iVar3 = -1;
    pcVar4 = param_1;
    do {
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    if (iVar3 != -2) {
      uVar5 = 0;
      uVar2 = FUN_00423550(param_1);
      switch(uVar2) {
      case 1:
        uVar2 = FUN_004231a0(param_1);
        return uVar2;
      case 2:
        uVar2 = FUN_00423360(param_1);
        return uVar2;
      case 3:
      case 4:
        uVar2 = FUN_00423770(param_1,1);
        return uVar2;
      case 5:
        uVar2 = FUN_00423b60(param_1);
        return uVar2;
      case 6:
      case 7:
        uVar5 = FUN_00423420(param_1);
        break;
      case 8:
        uVar2 = FUN_004233c0(param_1);
        return uVar2;
      }
      return uVar5;
    }
  }
  return 0;
}

