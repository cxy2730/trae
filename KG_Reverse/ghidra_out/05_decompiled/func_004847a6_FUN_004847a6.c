// Function: FUN_004847a6
// Entry:    004847a6
// Size:     289 bytes
// Conv:     unknown
// Signature: undefined FUN_004847a6(void)
// Decompiled by Ghidra 12.1.2


LPVOID FUN_004847a6(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint _Size;
  LPVOID local_24;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_02f9ca38;
  puStack_10 = &LAB_00485274;
  local_14 = ExceptionList;
  uVar2 = param_1 * param_2;
  uVar3 = uVar2;
  ExceptionList = &local_14;
  if (uVar2 < 0xffffffe1) {
    if (uVar2 == 0) {
      uVar3 = 1;
    }
    uVar3 = uVar3 + 0xf & 0xfffffff0;
    ExceptionList = &local_14;
  }
  do {
    local_24 = (LPVOID)0x0;
    if (uVar3 < 0xffffffe1) {
      if (DAT_03014ea8 == 3) {
        if (uVar2 <= DAT_03014ea0) {
          FUN_00489a54(9);
          local_8 = 0;
          local_24 = (LPVOID)FUN_0048b031(uVar2);
          local_8 = 0xffffffff;
          FUN_0048483f();
          _Size = uVar2;
          if (local_24 == (void *)0x0) goto LAB_00484893;
LAB_00484882:
          _memset(local_24,0,_Size);
        }
LAB_0048488e:
        if (local_24 != (LPVOID)0x0) {
          ExceptionList = local_14;
          return local_24;
        }
      }
      else {
        if ((DAT_03014ea8 != 2) || (DAT_02fdbaf4 < uVar3)) goto LAB_0048488e;
        FUN_00489a54(9);
        local_8 = 1;
        local_24 = (LPVOID)FUN_0048bad4(uVar3 >> 4);
        local_8 = 0xffffffff;
        FUN_004848c8();
        _Size = uVar3;
        if (local_24 != (void *)0x0) goto LAB_00484882;
      }
LAB_00484893:
      local_24 = HeapAlloc(DAT_03014ea4,8,uVar3);
    }
    if (local_24 != (LPVOID)0x0) {
      ExceptionList = local_14;
      return local_24;
    }
    if (DAT_03011178 == 0) {
      ExceptionList = local_14;
      return (LPVOID)0x0;
    }
    iVar1 = FUN_0048bea9(uVar3);
    if (iVar1 == 0) {
      ExceptionList = local_14;
      return (LPVOID)0x0;
    }
  } while( true );
}

