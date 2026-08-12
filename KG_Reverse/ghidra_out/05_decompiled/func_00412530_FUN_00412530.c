// Function: FUN_00412530
// Entry:    00412530
// Size:     319 bytes
// Conv:     unknown
// Signature: undefined FUN_00412530(void)
// Decompiled by Ghidra 12.1.2


void __thiscall FUN_00412530(int *param_1,int param_2)

{
  bool bVar1;
  BOOL BVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int local_4;
  
  bVar1 = true;
  local_4 = 0;
  do {
    if (bVar1) {
      do {
        BVar2 = PeekMessageA((LPMSG)(param_1 + 0xc),(HWND)0x0,0,0,0);
        if (BVar2 != 0) break;
        uVar3 = (uint)param_1[0x7f] >> 2;
        if (-1 < (int)(uVar3 - 1)) {
          iVar5 = (uVar3 - 1) * 4;
          do {
            BVar2 = IsWindow(*(HWND *)(param_1[0x7d] + iVar5));
            if (BVar2 == 0) {
              FUN_00406b50(iVar5,4);
              FUN_00406b50(iVar5,4);
              FUN_00406b50(iVar5,4);
            }
            else {
              (**(code **)(param_1[0x82] + iVar5))(*(undefined4 *)(param_1[0x87] + iVar5));
            }
            iVar5 = iVar5 + -4;
            uVar3 = uVar3 - 1;
          } while (uVar3 != 0);
        }
        iVar4 = local_4 + 1;
        iVar5 = (**(code **)(*param_1 + 0x60))(local_4);
        if (iVar5 == 0) {
          bVar1 = false;
        }
        if ((param_2 == 1) && (param_1[0x78] == 0)) {
          return;
        }
        local_4 = iVar4;
      } while (bVar1);
    }
    do {
      if ((((param_2 == 1) && (param_1[0xd] == 0x12)) ||
          (iVar5 = (**(code **)(*param_1 + 0x5c))(), iVar5 == 0)) ||
         ((param_2 == 1 && (param_1[0x78] == 0)))) {
        return;
      }
      iVar5 = (**(code **)(*param_1 + 100))((LPMSG)(param_1 + 0xc));
      if (iVar5 != 0) {
        bVar1 = true;
        local_4 = 0;
      }
      BVar2 = PeekMessageA((LPMSG)(param_1 + 0xc),(HWND)0x0,0,0,0);
    } while (BVar2 != 0);
  } while( true );
}

