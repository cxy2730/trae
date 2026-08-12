// Function: FUN_004368d0
// Entry:    004368d0
// Size:     1255 bytes
// Conv:     unknown
// Signature: undefined FUN_004368d0(void)
// Decompiled by Ghidra 12.1.2


void __fastcall FUN_004368d0(int param_1)

{
  undefined4 uVar1;
  LRESULT LVar2;
  int iVar3;
  float10 fVar4;
  undefined *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_004a0a48;
  local_c = ExceptionList;
  local_10 = PTR_DAT_02fd8088;
  local_4 = 0;
  ExceptionList = &local_c;
  FUN_0049557d(&local_10);
  fVar4 = (float10)FUN_00482bb2(local_10);
  if ((float10)0.0 <= fVar4 * (float10)10.0) {
    FUN_00482bb2(local_10);
  }
  uVar1 = __ftol();
  *(undefined4 *)(param_1 + 0x5c0) = uVar1;
  FUN_0049557d(&local_10);
  fVar4 = (float10)FUN_00482bb2(local_10);
  if ((float10)0.0 <= fVar4 * (float10)10.0) {
    FUN_00482bb2(local_10);
  }
  uVar1 = __ftol();
  *(undefined4 *)(param_1 + 0x5c4) = uVar1;
  FUN_0049557d(&local_10);
  fVar4 = (float10)FUN_00482bb2(local_10);
  if ((float10)0.0 <= fVar4 * (float10)10.0) {
    FUN_00482bb2(local_10);
  }
  uVar1 = __ftol();
  *(undefined4 *)(param_1 + 0x5c8) = uVar1;
  FUN_0049557d(&local_10);
  fVar4 = (float10)FUN_00482bb2(local_10);
  if ((float10)0.0 <= fVar4 * (float10)10.0) {
    FUN_00482bb2(local_10);
  }
  uVar1 = __ftol();
  *(undefined4 *)(param_1 + 0x5cc) = uVar1;
  LVar2 = SendMessageA(*(HWND *)(param_1 + 0x294),0x147,0,0);
  if (LVar2 < 0) {
    LVar2 = 0;
  }
  else {
    LVar2 = SendMessageA(*(HWND *)(param_1 + 0x294),0x147,0,0);
  }
  *(LRESULT *)(param_1 + 0x5d0) = LVar2;
  FUN_0049557d(&local_10);
  iVar3 = FUN_00482c94(local_10);
  if (iVar3 < 1) {
    uVar1 = 1;
  }
  else {
    uVar1 = FUN_00482c94(local_10);
  }
  *(undefined4 *)(param_1 + 0x5d4) = uVar1;
  FUN_0049557d(&local_10);
  iVar3 = FUN_00482c94(local_10);
  if (iVar3 < 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_00482c94(local_10);
  }
  *(undefined4 *)(param_1 + 0x618) = uVar1;
  FUN_0049557d(&local_10);
  iVar3 = FUN_00482c94(local_10);
  if (iVar3 < 1) {
    uVar1 = 1;
  }
  else {
    uVar1 = FUN_00482c94(local_10);
  }
  *(undefined4 *)(param_1 + 0x5d8) = uVar1;
  LVar2 = SendMessageA(*(HWND *)(param_1 + 0x438),0xf0,0,0);
  *(uint *)(param_1 + 0x5dc) = (uint)(LVar2 == 1);
  FUN_0049557d(param_1 + 0x5e0);
  LVar2 = SendMessageA(*(HWND *)(param_1 + 0xb4),0xf0,0,0);
  *(uint *)(param_1 + 0x5e4) = (uint)(LVar2 == 1);
  LVar2 = SendMessageA(*(HWND *)(param_1 + 0x78),0xf0,0,0);
  *(uint *)(param_1 + 0x5e8) = (uint)(LVar2 == 1);
  LVar2 = SendMessageA(*(HWND *)(param_1 + 0x21c),0x147,0,0);
  if (LVar2 < 0) {
    LVar2 = 0;
  }
  else {
    LVar2 = SendMessageA(*(HWND *)(param_1 + 0x21c),0x147,0,0);
  }
  *(LRESULT *)(param_1 + 0x5ec) = LVar2;
  LVar2 = SendMessageA(*(HWND *)(param_1 + 0x4ec),0xf0,0,0);
  if (LVar2 == 1) {
    *(undefined4 *)(param_1 + 0x5f0) = 1;
  }
  else {
    LVar2 = SendMessageA(*(HWND *)(param_1 + 0x528),0xf0,0,0);
    if (LVar2 == 1) {
      *(undefined4 *)(param_1 + 0x5f0) = 2;
    }
    else {
      *(undefined4 *)(param_1 + 0x5f0) = 0;
    }
  }
  FUN_0049557d(&local_10);
  iVar3 = FUN_00482c94(local_10);
  if (iVar3 < 1) {
    uVar1 = 1;
  }
  else {
    uVar1 = FUN_00482c94(local_10);
  }
  *(undefined4 *)(param_1 + 0x5f4) = uVar1;
  LVar2 = SendMessageA(*(HWND *)(param_1 + 0x168),0xf0,0,0);
  if (LVar2 == 1) {
    *(undefined4 *)(param_1 + 0x5f8) = 0;
  }
  else {
    FUN_0049557d(&local_10);
    iVar3 = FUN_00482c94(local_10);
    if (iVar3 < 1) {
      *(undefined4 *)(param_1 + 0x5f8) = 1;
    }
    else {
      uVar1 = FUN_00482c94(local_10);
      *(undefined4 *)(param_1 + 0x5f8) = uVar1;
    }
  }
  LVar2 = SendMessageA(*(HWND *)(param_1 + 0x474),0x147,0,0);
  if (LVar2 == -1) {
    FUN_00493161();
  }
  else {
    FUN_004932c3(*(int *)(param_1 + 0x624) + LVar2 * 4);
  }
  iVar3 = FUN_0049733e(0x45d);
  LVar2 = SendMessageA(*(HWND *)(iVar3 + 0x1c),0xf0,0,0);
  if (LVar2 == 1) {
    *(undefined4 *)(param_1 + 0x61c) = 0xffffffff;
  }
  else {
    iVar3 = FUN_0049733e(0x45e);
    LVar2 = SendMessageA(*(HWND *)(iVar3 + 0x1c),0xf0,0,0);
    if (LVar2 == 1) {
      *(undefined4 *)(param_1 + 0x61c) = 0xfffffffe;
    }
    else {
      FUN_0049557d(&local_10);
      uVar1 = FUN_00482c94(local_10);
      *(undefined4 *)(param_1 + 0x61c) = uVar1;
      uVar1 = FUN_004295c0();
      *(undefined4 *)(param_1 + 0x61c) = uVar1;
    }
  }
  FUN_00494577();
  local_4 = 0xffffffff;
  FUN_004931d6();
  ExceptionList = local_c;
  return;
}

