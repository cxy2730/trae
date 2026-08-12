// Function: FUN_00416480
// Entry:    00416480
// Size:     279 bytes
// Conv:     unknown
// Signature: undefined FUN_00416480(void)
// Decompiled by Ghidra 12.1.2


void FUN_00416480(int param_1)

{
  undefined4 uVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  int local_c;
  int local_8;
  int local_4;
  
  iVar3 = param_1;
  if (*(int *)(param_1 + 0x88) == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(undefined4 *)(param_1 + 0x80);
  }
  uVar1 = *(undefined4 *)(param_1 + 0x88);
  param_1 = FUN_0041c740(uVar4,uVar1,1);
  local_c = FUN_0041c740(uVar4,uVar1,0);
  bVar2 = true;
  if ((local_c == 0) && (param_1 == 0)) {
    bVar2 = false;
    FUN_00413d70(1000,&local_8,0);
    if ((local_4 == 0) && (local_8 == 0)) {
      FUN_004138e0(&param_1,&local_c);
    }
    else {
      param_1 = local_8;
      local_c = local_4;
    }
  }
  SendMessageA(*(HWND *)(iVar3 + 0x1c),0x80,1,param_1);
  SendMessageA(*(HWND *)(iVar3 + 0x1c),0x80,0,local_c);
  if (*(HICON *)(iVar3 + 0x1a4) != (HICON)0x0) {
    DestroyIcon(*(HICON *)(iVar3 + 0x1a4));
  }
  if (*(HICON *)(iVar3 + 0x1a8) != (HICON)0x0) {
    DestroyIcon(*(HICON *)(iVar3 + 0x1a8));
  }
  if (bVar2) {
    *(int *)(iVar3 + 0x1a4) = param_1;
    *(int *)(iVar3 + 0x1a8) = local_c;
    return;
  }
  *(undefined4 *)(iVar3 + 0x1a8) = 0;
  *(undefined4 *)(iVar3 + 0x1a4) = 0;
  return;
}

