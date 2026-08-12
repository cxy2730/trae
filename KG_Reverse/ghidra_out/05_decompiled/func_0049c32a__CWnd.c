// Function: ~CWnd
// Entry:    0049c32a
// Size:     5 bytes
// Conv:     __thiscall
// Signature: void ~CWnd(CWnd * this)
// Decompiled by Ghidra 12.1.2


void __thiscall CWnd::~CWnd(CWnd *this)

{
  int iVar1;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_004858b8();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  *extraout_ECX = &PTR_LAB_02f9b690;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if ((((extraout_ECX[7] != 0) && (extraout_ECX != (undefined4 *)&DAT_03010b68)) &&
      (extraout_ECX != (undefined4 *)&DAT_03010b28)) &&
     ((extraout_ECX != (undefined4 *)&DAT_03010ae8 && (extraout_ECX != (undefined4 *)&DAT_03010aa8))
     )) {
    FUN_004953fe();
  }
  if ((int *)extraout_ECX[0xd] != (int *)0x0) {
    (**(code **)(*(int *)extraout_ECX[0xd] + 4))(1);
  }
  iVar1 = extraout_ECX[0xe];
  if ((iVar1 != 0) && (*(undefined4 **)(iVar1 + 0x24) == extraout_ECX)) {
    *(undefined4 *)(iVar1 + 0x24) = 0;
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00497a7a();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}

