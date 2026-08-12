// Function: FUN_004967b5
// Entry:    004967b5
// Size:     100 bytes
// Conv:     unknown
// Signature: undefined FUN_004967b5(void)
// Decompiled by Ghidra 12.1.2


undefined4 FUN_004967b5(void)

{
  SHORT SVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  
  uVar2 = FUN_00497418();
  if (((((uVar2 & 0x40000000) == 0) && (iVar3 = FUN_00481913(), iVar3 != 0)) &&
      (SVar1 = GetKeyState(0x10), -1 < SVar1)) &&
     ((SVar1 = GetKeyState(0x11), -1 < SVar1 && (SVar1 = GetKeyState(0x12), -1 < SVar1)))) {
    SendMessageA(*(HWND *)(iVar3 + 0x1c),0x111,0xe146,0);
    return 1;
  }
  uVar4 = FUN_00494b19();
  return uVar4;
}

