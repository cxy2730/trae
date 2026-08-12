// Function: FUN_00464040
// Entry:    00464040
// Size:     68 bytes
// Conv:     unknown
// Signature: undefined FUN_00464040(void)
// Decompiled by Ghidra 12.1.2


undefined4 FUN_00464040(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  code *pcVar3;
  undefined4 *puVar4;
  
  iVar2 = param_1[1];
  if (*(int *)(*param_1 + 0xc0) != 0) {
    puVar4 = *(undefined4 **)(*(int *)(*param_1 + 0xc0) + 0xc + iVar2);
    if (puVar4 != (undefined4 *)0x0) {
      pcVar3 = (code *)*puVar4;
      while (pcVar3 != (code *)0x0) {
        (*pcVar3)(iVar2,1,0);
        puVar1 = puVar4 + 1;
        puVar4 = puVar4 + 1;
        pcVar3 = (code *)*puVar1;
      }
    }
    return 1;
  }
  return 1;
}

