// Function: FUN_00491343
// Entry:    00491343
// Size:     25 bytes
// Conv:     unknown
// Signature: undefined FUN_00491343(void)
// Decompiled by Ghidra 12.1.2


undefined4 *
FUN_00491343(int param_1,undefined4 param_2,LPCSTR param_3,uint param_4,int param_5,
            undefined4 param_6)

{
  LPSTR lpString1;
  int iVar1;
  undefined1 *puVar2;
  undefined4 *extraout_ECX;
  void *unaff_EBX;
  undefined *local_8;
  
  local_8 = &DAT_0300efc0;
  __CxxThrowException_8(&local_8,&DAT_02fa2f10);
  FUN_004858b8();
  FUN_004941d5(0,param_6);
  extraout_ECX[0x2b] = PTR_DAT_02fd8088;
  local_8 = (undefined *)0x1;
  *extraout_ECX = &PTR_LAB_02f9bdf0;
  _memset(extraout_ECX + 0x17,0,0x4c);
  extraout_ECX[0x2a] = param_1;
  lpString1 = (LPSTR)(extraout_ECX + 0x3c);
  *lpString1 = '\0';
  extraout_ECX[0xf] = 0x7005 - (uint)(param_1 != 0);
  extraout_ECX[0x26] = param_2;
  *(undefined1 *)(extraout_ECX + 0x2c) = 0;
  extraout_ECX[0x24] = extraout_ECX[0x24] | param_4 | 0x800020;
  extraout_ECX[0x7d] = 0;
  extraout_ECX[0x17] = 0x4c;
  extraout_ECX[0x1e] = lpString1;
  extraout_ECX[0x1f] = 0x104;
  extraout_ECX[0x20] = extraout_ECX + 0x2c;
  extraout_ECX[0x21] = 0x40;
  if (DAT_03010cfc == 0) {
    iVar1 = FUN_004944b9();
    if (iVar1 != 0) {
      extraout_ECX[0x24] = extraout_ECX[0x24] | 0x10;
    }
    if (DAT_03010cfc == 0) goto LAB_00491436;
  }
  *(byte *)((int)extraout_ECX + 0x92) = *(byte *)((int)extraout_ECX + 0x92) | 8;
  iVar1 = FUN_0049c724();
  extraout_ECX[0x19] = *(undefined4 *)(iVar1 + 0xc);
LAB_00491436:
  extraout_ECX[0x28] = FUN_0049191e;
  if (param_3 != (LPCSTR)0x0) {
    lstrcpynA(lpString1,param_3,0x104);
  }
  if (param_5 != 0) {
    FUN_00493313(param_5);
    puVar2 = (undefined1 *)FUN_004935ba(0);
    while( true ) {
      puVar2 = (undefined1 *)FUN_004858d7(puVar2,0x7c);
      if (puVar2 == (undefined1 *)0x0) break;
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
    extraout_ECX[0x1a] = extraout_ECX[0x2b];
  }
  ExceptionList = unaff_EBX;
  return extraout_ECX;
}

