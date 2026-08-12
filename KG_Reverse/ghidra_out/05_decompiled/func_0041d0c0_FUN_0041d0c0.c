// Function: FUN_0041d0c0
// Entry:    0041d0c0
// Size:     205 bytes
// Conv:     unknown
// Signature: undefined FUN_0041d0c0(void)
// Decompiled by Ghidra 12.1.2


void FUN_0041d0c0(undefined4 param_1)

{
  int iVar1;
  undefined1 local_34 [4];
  int local_30;
  int local_2c;
  undefined1 local_20 [4];
  int local_1c;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0049ef50;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004923a5();
  iVar1 = 0;
  local_4 = 0;
  FUN_0049269e();
  local_4 = CONCAT31(local_4._1_3_,1);
  FUN_0041cf40(local_34,local_20,param_1);
  if (0 < local_2c) {
    do {
      if (*(int *)(local_1c + iVar1 * 4) == 0) {
        DeleteFileA(*(LPCSTR *)(local_30 + iVar1 * 4));
      }
      else {
        FUN_0041d0c0(*(undefined4 *)(local_30 + iVar1 * 4));
        RemoveDirectoryA(*(LPCSTR *)(local_30 + iVar1 * 4));
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < local_2c);
  }
  local_4 = local_4 & 0xffffff00;
  FUN_004926d1();
  local_4 = 0xffffffff;
  FUN_004923d8();
  ExceptionList = local_c;
  return;
}

