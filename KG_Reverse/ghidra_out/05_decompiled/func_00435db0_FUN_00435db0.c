// Function: FUN_00435db0
// Entry:    00435db0
// Size:     263 bytes
// Conv:     unknown
// Signature: undefined FUN_00435db0(void)
// Decompiled by Ghidra 12.1.2


void __fastcall FUN_00435db0(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined1 local_208 [4];
  CDialog local_204 [140];
  undefined *local_178;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004a09f1;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0049135c(0,&PTR_DAT_02fb0fc8,s_out_prn_02fb0fcc,0x806,&DAT_02fb0fd4,param_1);
  local_4 = 0;
  local_178 = &DAT_02fb0fb0;
  iVar1 = FUN_004914f6();
  if (iVar1 == 1) {
    puVar2 = (undefined4 *)FUN_004915d1(local_208);
    local_4._0_1_ = 1;
    FUN_004974ae(*puVar2);
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_004931d6();
    SendMessageA(*(HWND *)(param_1 + 0x3fc),0xb1,0,-1);
    SendMessageA(*(HWND *)(param_1 + 0x3fc),0xb7,0,0);
    FUN_004975e9();
  }
  local_4 = 2;
  FUN_004931d6();
  local_4 = 0xffffffff;
  CDialog::~CDialog(local_204);
  ExceptionList = local_c;
  return;
}

