// Function: FUN_0049a5f2
// Entry:    0049a5f2
// Size:     120 bytes
// Conv:     unknown
// Signature: undefined FUN_0049a5f2(void)
// Decompiled by Ghidra 12.1.2


void FUN_0049a5f2(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_004858b8();
  puVar3 = (undefined4 *)FUN_00492f17(0x10);
  *(undefined4 **)(unaff_EBP + -0x14) = puVar3;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    FUN_004936eb();
    puVar3[3] = PTR_DAT_02fd8088;
    uVar1 = *(undefined4 *)(unaff_EBP + 8);
    uVar2 = *(undefined4 *)(unaff_EBP + 0xc);
    *(undefined1 *)(unaff_EBP + -4) = 2;
    *puVar3 = &PTR_LAB_02f9c270;
    puVar3[2] = uVar1;
    FUN_00493313(uVar2);
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  *(undefined4 **)(unaff_EBP + -0x10) = puVar3;
  __CxxThrowException_8(unaff_EBP + -0x10,&DAT_02fa3af0);
  SendMessageA(*(HWND *)(*(int *)(extraout_ECX + 0x1c) + 0x1c),0x10,0,0);
  return;
}

