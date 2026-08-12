// Function: FUN_00497fa0
// Entry:    00497fa0
// Size:     127 bytes
// Conv:     unknown
// Signature: undefined FUN_00497fa0(void)
// Decompiled by Ghidra 12.1.2


void __fastcall FUN_00497fa0(int *param_1)

{
  bool bVar1;
  BOOL BVar2;
  int iVar3;
  int iVar4;
  int local_4;
  
  bVar1 = true;
  local_4 = 0;
  do {
    if (bVar1) {
      do {
        BVar2 = PeekMessageA((LPMSG)(param_1 + 0xc),(HWND)0x0,0,0,0);
        if (BVar2 != 0) break;
        iVar4 = local_4 + 1;
        iVar3 = (**(code **)(*param_1 + 0x60))(local_4);
        if (iVar3 == 0) {
          bVar1 = false;
        }
        local_4 = iVar4;
      } while (bVar1);
    }
    do {
      iVar4 = (**(code **)(*param_1 + 0x5c))();
      if (iVar4 == 0) {
        (**(code **)(*param_1 + 0x68))();
        return;
      }
      iVar4 = (**(code **)(*param_1 + 100))((LPMSG)(param_1 + 0xc));
      if (iVar4 != 0) {
        local_4 = 0;
        bVar1 = true;
      }
      BVar2 = PeekMessageA((LPMSG)(param_1 + 0xc),(HWND)0x0,0,0,0);
    } while (BVar2 != 0);
  } while( true );
}

