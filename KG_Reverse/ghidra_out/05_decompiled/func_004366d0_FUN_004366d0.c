// Function: FUN_004366d0
// Entry:    004366d0
// Size:     392 bytes
// Conv:     unknown
// Signature: undefined FUN_004366d0(void)
// Decompiled by Ghidra 12.1.2


void __fastcall FUN_004366d0(int param_1)

{
  LRESULT LVar1;
  undefined *puVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  
  LVar1 = SendMessageA(*(HWND *)(param_1 + 0x438),0xf0,0,0);
  uVar5 = (uint)(LVar1 == 1);
  FUN_004975c2(uVar5);
  FUN_0049733e(0x444);
  FUN_004975c2(uVar5);
  LVar1 = SendMessageA(*(HWND *)(param_1 + 0x4ec),0xf0,0,0);
  if (LVar1 == 1) {
LAB_00436747:
    iVar3 = 1;
  }
  else {
    LVar1 = SendMessageA(*(HWND *)(param_1 + 0x528),0xf0,0,0);
    if (LVar1 == 1) goto LAB_00436747;
    iVar3 = 0;
  }
  FUN_004975c2(iVar3);
  iVar6 = iVar3;
  FUN_0049733e(0x452);
  FUN_004975c2(iVar6);
  FUN_004975c2(iVar3);
  if (iVar3 == 1) {
    LVar1 = SendMessageA(*(HWND *)(param_1 + 0x168),0xf0,0,0);
    if (LVar1 == 0) {
      uVar4 = 1;
      goto LAB_00436797;
    }
  }
  uVar4 = 0;
LAB_00436797:
  FUN_004975c2(uVar4);
  FUN_0049733e(0x454);
  FUN_004975c2(uVar4);
  LVar1 = SendMessageA(*(HWND *)(param_1 + 0x528),0xf0,0,0);
  puVar2 = &DAT_02fb10b8;
  if (LVar1 != 1) {
    puVar2 = &DAT_02fb10ac;
  }
  FUN_004974ae(puVar2);
  LVar1 = SendMessageA(*(HWND *)(param_1 + 0x528),0xf0,0,0);
  puVar2 = &DAT_02fb10a0;
  if (LVar1 != 1) {
    puVar2 = &DAT_02fb1094;
  }
  FUN_004974ae(puVar2);
  iVar3 = FUN_0049733e(0x461);
  LVar1 = SendMessageA(*(HWND *)(iVar3 + 0x1c),0xf0,0,0);
  uVar5 = (uint)(LVar1 == 1);
  FUN_004975c2(uVar5);
  FUN_0049733e(0x460);
  FUN_004975c2(uVar5);
  return;
}

