// Function: FUN_0040c130
// Entry:    0040c130
// Size:     218 bytes
// Conv:     unknown
// Signature: undefined FUN_0040c130(void)
// Decompiled by Ghidra 12.1.2


void __fastcall FUN_0040c130(int param_1)

{
  uint uVar1;
  LRESULT LVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  if (((*(int *)(param_1 + 0x58) != 1) || (*(int *)(param_1 + 0xc4) == -1)) ||
     (LVar2 = SendMessageA(*(HWND *)(param_1 + 0x1c),0x18b,0,0), LVar2 == -1)) {
    return;
  }
  iVar5 = 0;
  if (0 < LVar2) {
    do {
      iVar3 = FUN_0049b4df(iVar5);
      if (iVar3 == 1) {
        if (iVar5 < LVar2) {
          iVar5 = 0;
          while ((iVar5 == *(int *)(param_1 + 0xc4) || (iVar3 = FUN_0049b4df(iVar5), iVar3 != 1))) {
            iVar5 = iVar5 + 1;
            if (LVar2 <= iVar5) {
              return;
            }
          }
          if (LVar2 <= iVar5) {
            return;
          }
          uVar1 = *(uint *)(param_1 + 0xc4);
          uVar4 = LVar2 - 1;
          if ((int)(((int)uVar1 < 0) - 1 & uVar1) <= (int)uVar4) {
            uVar4 = ((int)uVar1 < 0) - 1 & uVar1;
          }
          FUN_0049b464(uVar4,0);
          return;
        }
        break;
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < LVar2);
  }
  uVar1 = *(uint *)(param_1 + 0xc4);
  uVar4 = LVar2 - 1;
  if ((int)(((int)uVar1 < 0) - 1 & uVar1) <= (int)uVar4) {
    uVar4 = ((int)uVar1 < 0) - 1 & uVar1;
  }
  FUN_0049b464(uVar4,1);
  return;
}

