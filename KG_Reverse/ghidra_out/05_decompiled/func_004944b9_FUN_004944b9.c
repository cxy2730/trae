// Function: FUN_004944b9
// Entry:    004944b9
// Size:     86 bytes
// Conv:     unknown
// Signature: undefined FUN_004944b9(void)
// Decompiled by Ghidra 12.1.2


undefined4 FUN_004944b9(void)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined1 local_c [8];
  
  iVar1 = FUN_0049c724();
  if (*(int *)(iVar1 + 4) == 0) {
    uVar2 = 0;
  }
  else {
    piVar3 = (int *)FUN_00481913();
    if ((piVar3 != (int *)0x0) &&
       (iVar1 = (**(code **)(*piVar3 + 0xc))(0xe146,0,0,local_c), iVar1 != 0)) {
      return 1;
    }
    iVar1 = FUN_0049c724();
    uVar2 = (**(code **)(**(int **)(iVar1 + 4) + 0xc))(0xe146,0,0,local_c);
  }
  return uVar2;
}

