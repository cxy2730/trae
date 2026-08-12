// Function: FUN_00455620
// Entry:    00455620
// Size:     43 bytes
// Conv:     unknown
// Signature: undefined FUN_00455620(void)
// Decompiled by Ghidra 12.1.2


void FUN_00455620(undefined4 param_1,int *param_2)

{
  int *piVar1;
  int *piVar2;
  
  piVar2 = (int *)*param_2;
  if (piVar2 != (int *)0x0) {
    *param_2 = 0;
    do {
      piVar1 = (int *)*piVar2;
      FUN_00446d20(param_1,piVar2);
      piVar2 = piVar1;
    } while (piVar1 != (int *)0x0);
  }
  return;
}

