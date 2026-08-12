// Function: FUN_0040a410
// Entry:    0040a410
// Size:     418 bytes
// Conv:     unknown
// Signature: undefined FUN_0040a410(void)
// Decompiled by Ghidra 12.1.2


void __thiscall FUN_0040a410(int param_1,LPARAM param_2)

{
  undefined4 *puVar1;
  int iVar2;
  HANDLE hFindFile;
  BOOL BVar3;
  LPCSTR local_18c;
  undefined1 local_184 [4];
  LPARAM local_180 [6];
  CHAR *local_168;
  undefined4 local_160;
  undefined4 local_15c;
  _WIN32_FIND_DATAA local_14c;
  void *local_c;
  undefined1 *puStack_8;
  HANDLE local_4;
  
  local_4 = (HANDLE)0xffffffff;
  puStack_8 = &LAB_0049e01b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00492f4b(param_1 + 0x40);
  local_4 = (HANDLE)0x0;
  if (*(int *)(local_18c + -8) != 0) {
    puVar1 = (undefined4 *)FUN_00490e31(local_184,1);
    iVar2 = FUN_00482dc4(*puVar1,&DAT_02faaca8);
    FUN_004931d6();
    if (iVar2 != 0) {
      FUN_00493566(&DAT_02faaca8);
    }
  }
  FUN_00493566(&DAT_02faacb4);
  hFindFile = FindFirstFileA(local_18c,&local_14c);
  if (hFindFile == (HANDLE)0xffffffff) {
    local_4 = hFindFile;
    FUN_004931d6();
  }
  else {
    do {
      if (((((byte)local_14c.dwFileAttributes & 0x10) != 0) &&
          (iVar2 = FUN_00482dc4(local_14c.cFileName,&DAT_02faacb0), iVar2 != 0)) &&
         (iVar2 = FUN_00482dc4(local_14c.cFileName,&DAT_02faacac), iVar2 != 0)) {
        local_168 = local_14c.cFileName;
        local_180[0] = param_2;
        local_180[1] = 0xffff0003;
        local_160 = 0;
        local_15c = 1;
        local_180[2] = 0x23;
        SendMessageA(*(HWND *)(param_1 + 0x1c),0x1100,0,(LPARAM)local_180);
      }
      BVar3 = FindNextFileA(hFindFile,&local_14c);
    } while (BVar3 != 0);
    FindClose(hFindFile);
    SendMessageA(*(HWND *)(param_1 + 0x1c),0x1102,2,param_2);
    local_4 = (HANDLE)0xffffffff;
    FUN_004931d6();
  }
  ExceptionList = local_c;
  return;
}

