// Function: FUN_0040dc70
// Entry:    0040dc70
// Size:     172 bytes
// Conv:     unknown
// Signature: undefined FUN_0040dc70(void)
// Decompiled by Ghidra 12.1.2


void __fastcall FUN_0040dc70(undefined4 param_1)

{
  BOOL BVar1;
  undefined4 uVar2;
  int iVar3;
  HBRUSH hbr;
  RECT local_70;
  CPaintDC local_60 [4];
  HDC local_5c;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0049e2b0;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00499cdd(param_1);
  local_4 = 0;
  FUN_0049988e(&local_70);
  BVar1 = IsRectEmpty(&local_70);
  if (BVar1 == 0) {
    uVar2 = FUN_00406fe0(0xff000000);
    iVar3 = FUN_00499eda(uVar2);
    hbr = (HBRUSH)0x0;
    if (iVar3 != 0) {
      hbr = *(HBRUSH *)(iVar3 + 4);
    }
    FillRect(local_5c,&local_70,hbr);
    local_4 = CONCAT31(local_4._1_3_,1);
    FUN_00499e74(&PTR_LAB_02f9547c);
  }
  local_4 = 0xffffffff;
  CPaintDC::~CPaintDC(local_60);
  ExceptionList = local_c;
  return;
}

