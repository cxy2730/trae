// Function: FUN_0049132a
// Entry:    0049132a
// Size:     25 bytes
// Conv:     unknown
// Signature: undefined FUN_0049132a(void)
// Decompiled by Ghidra 12.1.2


undefined4 * FUN_0049132a(LPCSTR param_1,uint param_2,int param_3,undefined4 param_4)

{
  LPSTR lpString1;
  int iVar1;
  undefined1 *puVar2;
  undefined4 *extraout_ECX;
  void *unaff_EBX;
  int unaff_EBP;
  undefined4 unaff_retaddr;
  undefined **ppuStack_10;
  undefined *puStack_c;
  undefined *local_8;
  
  ppuStack_10 = &local_8;
  puStack_c = &DAT_02fa2ec8;
  local_8 = &DAT_0300f058;
  __CxxThrowException_8();
  ppuStack_10 = (undefined **)&DAT_0300efc0;
  puStack_c = &stack0xfffffffc;
  __CxxThrowException_8(&ppuStack_10,&DAT_02fa2f10);
  FUN_004858b8();
  FUN_004941d5(0,param_4);
  extraout_ECX[0x2b] = PTR_DAT_02fd8088;
  ppuStack_10 = (undefined **)0x1;
  *extraout_ECX = &PTR_LAB_02f9bdf0;
  _memset(extraout_ECX + 0x17,0,0x4c);
  extraout_ECX[0x2a] = unaff_EBP;
  lpString1 = (LPSTR)(extraout_ECX + 0x3c);
  *lpString1 = '\0';
  extraout_ECX[0xf] = 0x7005 - (uint)(unaff_EBP != 0);
  extraout_ECX[0x26] = unaff_retaddr;
  *(undefined1 *)(extraout_ECX + 0x2c) = 0;
  extraout_ECX[0x24] = extraout_ECX[0x24] | param_2 | 0x800020;
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
  if (param_1 != (LPCSTR)0x0) {
    lstrcpynA(lpString1,param_1,0x104);
  }
  if (param_3 != 0) {
    FUN_00493313(param_3);
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

