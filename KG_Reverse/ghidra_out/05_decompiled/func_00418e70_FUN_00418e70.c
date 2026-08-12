// Function: FUN_00418e70
// Entry:    00418e70
// Size:     229 bytes
// Conv:     unknown
// Signature: undefined FUN_00418e70(void)
// Decompiled by Ghidra 12.1.2


LRESULT __thiscall FUN_00418e70(int param_1,int param_2)

{
  int iVar1;
  BOOL BVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  LRESULT LVar6;
  
  iVar1 = param_2;
  do {
    if (iVar1 == 0) {
      return 0;
    }
    BVar2 = IsChild(*(HWND *)(param_1 + 0x1c),*(HWND *)(iVar1 + 0x1c));
    if (BVar2 == 0) {
      return 0;
    }
    FUN_00413d70(0x3e9,0,0);
    iVar3 = FUN_0040ec30(*(undefined4 *)(param_1 + 0xdc),&param_2,0);
    if (iVar3 == 0) {
      return 0;
    }
    iVar3 = FUN_0040f4c0(*(undefined4 *)(iVar1 + 0x1c),1);
    if (iVar3 == -1) {
      return 0;
    }
    puVar4 = (undefined4 *)FUN_0040e730(iVar3,0);
    iVar3 = FUN_00413d70(0x3ea,*puVar4,0);
    if (iVar3 == 0) {
      return 0;
    }
    if ((*(uint *)(iVar3 + 0x14) & 0x200040) != 0x200040) {
      return 0;
    }
    iVar3 = FUN_00406cf0(puVar4 + 6);
    iVar3 = (int)(puVar4 + 6) + iVar3;
    iVar5 = FUN_00406cf0(iVar3);
    iVar3 = *(int *)(iVar3 + iVar5);
    if (iVar3 == 0) {
      return 0;
    }
    LVar6 = SendMessageA(*(HWND *)(iVar3 + 0x1c),0x81f5,0,0);
  } while (LVar6 == 0);
  return LVar6;
}

