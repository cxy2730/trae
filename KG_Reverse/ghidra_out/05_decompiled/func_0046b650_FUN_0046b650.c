// Function: FUN_0046b650
// Entry:    0046b650
// Size:     189 bytes
// Conv:     unknown
// Signature: undefined FUN_0046b650(void)
// Decompiled by Ghidra 12.1.2


void __thiscall FUN_0046b650(int param_1,undefined4 *param_2)

{
  char cVar1;
  BOOL BVar2;
  int iVar3;
  uint uVar4;
  char *pcVar5;
  
  iVar3 = param_2[1];
  if (param_2 != (undefined4 *)0x0) {
    (**(code **)*param_2)(1);
  }
  if ((iVar3 == 0x4d) || (iVar3 == 0xc)) {
    if (*(undefined4 **)(param_1 + 0x234) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(param_1 + 0x234))(1);
      *(undefined4 *)(param_1 + 0x234) = 0;
    }
    FUN_0046b770(3);
    if (*(HWND *)(param_1 + 0x30) != (HWND)0x0) {
      BVar2 = IsWindow(*(HWND *)(param_1 + 0x30));
      if (BVar2 != 0) {
        PostMessageA(*(HWND *)(param_1 + 0x30),0x8075,100,0);
      }
    }
    uVar4 = 0xffffffff;
    pcVar5 = *(char **)(param_1 + 0x20);
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    pcVar5 = (char *)(*(int *)(param_1 + 0x20) + ~uVar4);
    *(char **)(param_1 + 0x20) = pcVar5;
    if (*pcVar5 == '\0') {
      *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_1 + 0x1c);
      if ((0 < *(int *)(param_1 + 0x18)) &&
         (iVar3 = *(int *)(param_1 + 0x18) + -1, *(int *)(param_1 + 0x18) = iVar3, iVar3 == 0)) {
        *(undefined4 *)(param_1 + 0x10) = 1;
        return;
      }
    }
    FUN_0046b7d0(*(undefined4 *)(param_1 + 0x30),param_1 + 0x34,0);
  }
  return;
}

