// Function: FUN_0043bb70
// Entry:    0043bb70
// Size:     56 bytes
// Conv:     unknown
// Signature: undefined FUN_0043bb70(void)
// Decompiled by Ghidra 12.1.2


void FUN_0043bb70(int param_1,int param_2,int param_3,int param_4)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < param_2) {
    puVar2 = (undefined1 *)(param_2 * param_4 * 3 + 2 + param_3);
    do {
      uVar1 = *(undefined1 *)(iVar3 + param_1);
      iVar3 = iVar3 + 1;
      puVar2[-2] = uVar1;
      puVar2[-1] = uVar1;
      *puVar2 = uVar1;
      puVar2 = puVar2 + 3;
    } while (iVar3 < param_2);
  }
  return;
}

