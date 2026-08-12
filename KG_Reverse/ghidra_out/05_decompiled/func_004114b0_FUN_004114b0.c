// Function: FUN_004114b0
// Entry:    004114b0
// Size:     264 bytes
// Conv:     unknown
// Signature: undefined FUN_004114b0(void)
// Decompiled by Ghidra 12.1.2


void FUN_004114b0(undefined4 param_1,undefined4 param_2,int param_3)

{
  HWND hWnd;
  char cVar1;
  int iVar2;
  int iVar3;
  BOOL BVar4;
  HWND hWnd_00;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_8;
  undefined4 local_4;
  
  iVar2 = FUN_0040e730(0,0);
  iVar3 = FUN_00406cf0(iVar2 + 0x18);
  iVar3 = iVar2 + 0x18 + iVar3;
  iVar2 = FUN_00406cf0(iVar3);
  iVar2 = *(int *)(iVar3 + iVar2);
  if (iVar2 == 0) {
    return;
  }
  if (param_3 != 0) {
    FUN_00497580(5);
    return;
  }
  hWnd = *(HWND *)(iVar2 + 0x1c);
  if (DAT_02fe82f4 == 0) {
    cVar1 = '\x05';
  }
  else {
    if (*(int *)(iVar2 + 0x70) == 3) {
      FUN_0041ae90();
      goto LAB_0041152a;
    }
    cVar1 = (-(*(int *)(iVar2 + 0x70) != 2) & 3U) + 2;
  }
  FUN_00497580(cVar1);
LAB_0041152a:
  BVar4 = IsWindow(hWnd);
  if ((BVar4 == 0) || (hWnd_00 = GetFocus(), hWnd_00 == (HWND)0x0)) {
    return;
  }
  if (hWnd_00 == hWnd) {
    iVar2 = 0;
  }
  else {
    BVar4 = IsChild(hWnd,hWnd_00);
    if (BVar4 == 0) {
      return;
    }
    iVar2 = FUN_0040f4c0(hWnd_00,0);
    if (iVar2 < 0) {
      return;
    }
  }
  local_28 = FUN_0040e780(iVar2);
  local_2c = param_1;
  local_24 = 0xfffffff9;
  local_20 = 0;
  local_8 = 0;
  local_4 = 0;
  FUN_00413d70(0x7d8,&local_2c,0);
  return;
}

