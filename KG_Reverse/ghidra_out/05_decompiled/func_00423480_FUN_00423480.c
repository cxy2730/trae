// Function: FUN_00423480
// Entry:    00423480
// Size:     197 bytes
// Conv:     unknown
// Signature: undefined FUN_00423480(void)
// Decompiled by Ghidra 12.1.2


undefined4 * FUN_00423480(undefined4 param_1)

{
  int *piVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  
  puVar3 = (undefined4 *)FUN_00492f17(0x18);
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3[2] = 0;
    puVar3[3] = 0;
    puVar3[4] = 0;
    puVar3[5] = 0;
  }
  piVar1 = puVar3 + 2;
  piVar2 = puVar3 + 1;
  iVar4 = FUN_0043bc50(param_1,piVar2,piVar1);
  puVar3[4] = iVar4;
  if (iVar4 == 0) {
    if (puVar3 != (undefined4 *)0x0) {
      *puVar3 = 0;
      *piVar2 = 0;
      *piVar1 = 0;
      puVar3[5] = 0;
      if ((HICON)puVar3[3] != (HICON)0x0) {
        DestroyIcon((HICON)puVar3[3]);
        puVar3[3] = 0;
      }
      if (puVar3[4] != 0) {
        FUN_00492f40(puVar3[4]);
        puVar3[4] = 0;
      }
      FUN_00492f40(puVar3);
    }
    return (undefined4 *)0x0;
  }
  FUN_00422340(iVar4,*piVar2,*piVar1);
  FUN_00422390(puVar3[4],*piVar2 * 3,*piVar1);
  *puVar3 = 2;
  puVar3[5] = *piVar1 * *piVar2 * 3;
  return puVar3;
}

