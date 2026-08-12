// Function: FUN_00419090
// Entry:    00419090
// Size:     163 bytes
// Conv:     unknown
// Signature: undefined FUN_00419090(void)
// Decompiled by Ghidra 12.1.2


undefined4 __thiscall FUN_00419090(int param_1,HWND param_2,undefined4 param_3)

{
  HWND pHVar1;
  BOOL BVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  
  pHVar1 = param_2;
  if (param_2 != (HWND)0x0) {
    BVar2 = IsChild(*(HWND *)(param_1 + 0x1c),param_2);
    if (BVar2 != 0) {
      FUN_00413d70(0x3e9,0,0);
      iVar3 = FUN_0040ec30(*(undefined4 *)(param_1 + 0xdc),&param_2,0);
      if (iVar3 != 0) {
        iVar3 = FUN_0040f4c0(pHVar1,0);
        if (iVar3 != -1) {
          uVar5 = 0;
          puVar4 = (undefined4 *)FUN_0040e730(iVar3,0);
          iVar3 = FUN_00413d70(0x3ea,*puVar4,uVar5);
          if ((iVar3 != 0) && ((*(uint *)(iVar3 + 0x14) & 0x400) != 0)) {
            FUN_00419140(pHVar1,param_3,1,0);
            return 1;
          }
        }
      }
    }
  }
  return 0;
}

