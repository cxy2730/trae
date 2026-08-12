// Function: FUN_0043ca10
// Entry:    0043ca10
// Size:     82 bytes
// Conv:     unknown
// Signature: undefined FUN_0043ca10(void)
// Decompiled by Ghidra 12.1.2


undefined1 FUN_0043ca10(int param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  if (((param_1 != 0) && (param_2 != (int *)0x0)) && (iVar3 = *(int *)(param_1 + 600), iVar3 != 0))
  {
    iVar2 = *(uint *)(param_1 + 0x25c) + iVar3 * 4;
    uVar4 = iVar3 + -5 + iVar2;
    if (*param_2 != *(int *)(iVar3 + -5 + iVar2)) {
      do {
        if (uVar4 <= *(uint *)(param_1 + 0x25c)) {
          return 0;
        }
        piVar1 = (int *)(uVar4 - 5);
        uVar4 = uVar4 - 5;
      } while (*param_2 != *piVar1);
    }
    return *(undefined1 *)(uVar4 + 4);
  }
  return 0;
}

