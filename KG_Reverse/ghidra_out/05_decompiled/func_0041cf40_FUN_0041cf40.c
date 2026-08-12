// Function: FUN_0041cf40
// Entry:    0041cf40
// Size:     378 bytes
// Conv:     unknown
// Signature: undefined FUN_0041cf40(void)
// Decompiled by Ghidra 12.1.2


void FUN_0041cf40(int param_1,int param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  HANDLE hFindFile;
  undefined4 uVar2;
  BOOL BVar3;
  undefined1 local_158 [4];
  undefined *local_154;
  undefined1 local_150 [4];
  _WIN32_FIND_DATAA local_14c;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0049ef31;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00492438(0,0xffffffff);
  FUN_0049228c(0,0xffffffff);
  FUN_00493244(param_3);
  local_4 = 0;
  puVar1 = (undefined4 *)FUN_0049341f(local_150,local_158,&DAT_02fab788);
  hFindFile = FindFirstFileA((LPCSTR)*puVar1,&local_14c);
  FUN_004931d6();
  if (hFindFile != (HANDLE)0x0) {
    local_154 = PTR_DAT_02fd8088;
    local_4._0_1_ = 1;
    if (hFindFile != (HANDLE)0xffffffff) {
      do {
        if (local_14c.cFileName[0] != '.') {
          uVar2 = FUN_0049341f(local_150,local_158,&DAT_02fab784);
          local_4._0_1_ = 2;
          FUN_004932c3(uVar2);
          local_4._0_1_ = 1;
          FUN_004931d6();
          FUN_00493566(local_14c.cFileName);
          FUN_0049272a(*(undefined4 *)(param_2 + 8),((byte)local_14c.dwFileAttributes & 0x10) != 0);
          FUN_004925ad(*(undefined4 *)(param_1 + 8),&local_154);
        }
        BVar3 = FindNextFileA(hFindFile,&local_14c);
      } while (BVar3 != 0);
      FindClose(hFindFile);
    }
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_004931d6();
  }
  local_4 = 0xffffffff;
  FUN_004931d6();
  ExceptionList = local_c;
  return;
}

