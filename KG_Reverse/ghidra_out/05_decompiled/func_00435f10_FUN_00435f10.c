// Function: FUN_00435f10
// Entry:    00435f10
// Size:     326 bytes
// Conv:     unknown
// Signature: undefined FUN_00435f10(void)
// Decompiled by Ghidra 12.1.2


void FUN_00435f10(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  undefined *local_44;
  CHAR local_40 [52];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_004a0a28;
  local_c = ExceptionList;
  local_44 = PTR_DAT_02fd8088;
  local_4 = 0;
  ExceptionList = &local_c;
  FUN_0049557d(&local_44);
  iVar1 = FUN_00482c94(local_44);
  iVar2 = param_3;
  if ((int)(iVar1 + ((*(int *)(param_4 + 0x10) < 1) - 1 & 0xfffffffe) + 1) <= param_3) {
    iVar2 = FUN_00482c94(local_44);
    iVar2 = iVar2 + ((*(int *)(param_4 + 0x10) < 1) - 1 & 0xfffffffe) + 1;
  }
  if ((param_2 <= iVar2) &&
     (iVar2 = FUN_00482c94(local_44), param_2 = param_3,
     (int)(iVar2 + ((*(int *)(param_4 + 0x10) < 1) - 1 & 0xfffffffe) + 1) <= param_3)) {
    iVar2 = FUN_00482c94(local_44);
    param_2 = iVar2 + ((*(int *)(param_4 + 0x10) < 1) - 1 & 0xfffffffe) + 1;
  }
  wsprintfA(local_40,&DAT_02fb1004,param_2);
  FUN_004974ae(local_40);
  SendMessageA(*(HWND *)(param_1 + 0x1c),0xb1,0,-1);
  SendMessageA(*(HWND *)(param_1 + 0x1c),0xb7,0,0);
  FUN_004975e9();
  local_4 = 0xffffffff;
  FUN_004931d6();
  ExceptionList = local_c;
  return;
}

