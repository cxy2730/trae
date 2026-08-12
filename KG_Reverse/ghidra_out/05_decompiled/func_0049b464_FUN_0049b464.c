// Function: FUN_0049b464
// Entry:    0049b464
// Size:     123 bytes
// Conv:     unknown
// Signature: undefined FUN_0049b464(void)
// Decompiled by Ghidra 12.1.2


void __thiscall FUN_0049b464(int *param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  undefined4 unaff_ESI;
  undefined4 uVar2;
  
  if ((param_3 != 2) || ((param_1[0x10] != 2 && (param_1[0x10] != 3)))) {
    uVar2 = 0x199;
    piVar1 = (int *)(**(code **)(*param_1 + 0xa0))(0x199,param_2,0);
    if (piVar1 != (int *)0xffffffff) {
      if (piVar1 == (int *)0x0) {
        piVar1 = (int *)FUN_00492f17(0xc);
        if (piVar1 == (int *)0x0) {
          piVar1 = (int *)0x0;
        }
        else {
          *piVar1 = 0;
          piVar1[2] = 0;
          piVar1[1] = 1;
        }
      }
      *piVar1 = param_3;
      (**(code **)(*param_1 + 0xa0))(0x19a,unaff_ESI,piVar1);
      FUN_0049b5c6(uVar2);
    }
  }
  return;
}

