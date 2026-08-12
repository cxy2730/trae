// Function: FUN_00418d90
// Entry:    00418d90
// Size:     210 bytes
// Conv:     unknown
// Signature: undefined FUN_00418d90(void)
// Decompiled by Ghidra 12.1.2


undefined4 __fastcall FUN_00418d90(int param_1)

{
  HWND pHVar1;
  int iVar2;
  BOOL BVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  code *pcVar7;
  undefined4 unaff_retaddr;
  int local_4;
  
  local_4 = param_1;
  pHVar1 = GetFocus();
  iVar2 = FUN_00494bb2(pHVar1);
  if (iVar2 != 0) {
    BVar3 = IsChild(*(HWND *)(param_1 + 0x1c),*(HWND *)(iVar2 + 0x1c));
    if (BVar3 != 0) {
      FUN_00413d70(0x3e9,0,0);
      iVar4 = FUN_0040ec30(*(undefined4 *)(param_1 + 0xdc),&local_4,0);
      if (iVar4 == 1) {
        iVar2 = FUN_0040f4c0(*(undefined4 *)(iVar2 + 0x1c),1);
        if (iVar2 != -1) {
          puVar5 = (undefined4 *)FUN_0040e730(iVar2,0);
          iVar4 = FUN_00413d70(0x3ea,*puVar5,0);
          iVar2 = FUN_00406cf0(puVar5 + 6);
          iVar2 = (int)(puVar5 + 6) + iVar2;
          iVar6 = FUN_00406cf0(iVar2);
          iVar2 = *(int *)(iVar2 + iVar6);
          if ((iVar4 != 0) && (iVar2 != 0)) {
            pcVar7 = (code *)(**(code **)(iVar4 + 0x2c))(8);
            if (pcVar7 != (code *)0x0) {
              iVar2 = (*pcVar7)(iVar2,unaff_retaddr);
              if (iVar2 == 1) {
                return 1;
              }
            }
          }
        }
      }
    }
  }
  return 0;
}

