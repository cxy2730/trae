// Function: FUN_00442c00
// Entry:    00442c00
// Size:     138 bytes
// Conv:     unknown
// Signature: undefined FUN_00442c00(void)
// Decompiled by Ghidra 12.1.2


void FUN_00442c00(int *param_1)

{
  int iVar1;
  int unaff_ESI;
  undefined4 uStack_28;
  undefined4 uStack_24;
  LONG *pLStack_20;
  LONG LStack_10;
  
  LStack_10 = 2;
  (**(code **)(*param_1 + 0x34))();
  (**(code **)(*param_1 + 0x34))();
  pLStack_20 = (LONG *)0x442c29;
  GetWindowExtEx((HDC)param_1[2],(LPSIZE)&LStack_10);
  iVar1 = -unaff_ESI;
  pLStack_20 = &LStack_10;
  uStack_24 = 0x442c45;
  (**(code **)(*param_1 + 0x48))();
  uStack_24 = 0;
  uStack_28 = 0;
  (**(code **)(*param_1 + 0x38))(&stack0xffffffe4);
  FUN_0049979e(&uStack_28,0,0);
  (**(code **)(*param_1 + 0x4c))(&uStack_28,1000,iVar1,1000,8);
  return;
}

