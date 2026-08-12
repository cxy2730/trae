// Function: FUN_0043bb20
// Entry:    0043bb20
// Size:     71 bytes
// Conv:     unknown
// Signature: undefined FUN_0043bb20(void)
// Decompiled by Ghidra 12.1.2


void FUN_0043bb20(int param_1,int param_2,int param_3,int param_4)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  
  if (0 < param_2) {
    puVar3 = (undefined1 *)(param_1 + 2);
    puVar4 = (undefined1 *)(param_2 * param_4 * 3 + 2 + param_3);
    do {
      uVar1 = *puVar3;
      uVar2 = puVar3[-1];
      puVar4[-2] = puVar3[-2];
      puVar4[-1] = uVar2;
      puVar3 = puVar3 + 3;
      *puVar4 = uVar1;
      puVar4 = puVar4 + 3;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

