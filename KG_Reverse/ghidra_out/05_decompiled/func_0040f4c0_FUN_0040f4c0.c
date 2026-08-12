// Function: FUN_0040f4c0
// Entry:    0040f4c0
// Size:     210 bytes
// Conv:     unknown
// Signature: undefined FUN_0040f4c0(void)
// Decompiled by Ghidra 12.1.2


int FUN_0040f4c0(HWND param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  BOOL BVar4;
  int iVar5;
  HWND hWndParent;
  int local_8;
  
  local_8 = 0;
  do {
    iVar5 = 0;
    while (puVar1 = (undefined4 *)FUN_0040e730(iVar5,0), puVar1 != (undefined4 *)0x0) {
      iVar2 = FUN_0040ee10(iVar5);
      if (iVar2 == 0) {
        iVar2 = FUN_00406cf0(puVar1 + 6);
        iVar2 = (int)(puVar1 + 6) + iVar2;
        iVar3 = FUN_00406cf0(iVar2);
        iVar2 = *(int *)(iVar2 + iVar3);
        hWndParent = (HWND)0x0;
        if (iVar2 != 0) {
          hWndParent = *(HWND *)(iVar2 + 0x1c);
        }
        if (hWndParent == param_1) {
          if (iVar5 == 0) {
            return -1;
          }
          return iVar5;
        }
        if ((((hWndParent != (HWND)0x0) && (iVar2 = FUN_00413d70(0x3ea,*puVar1,0), iVar2 != 0)) &&
            ((*(uint *)(iVar2 + 0x14) & 0x200200) != 0)) &&
           (BVar4 = IsChild(hWndParent,param_1), BVar4 != 0)) {
          return iVar5;
        }
      }
      iVar5 = iVar5 + 1;
    }
    if (((param_2 == 0) || (param_1 = GetParent(param_1), param_1 == (HWND)0x0)) ||
       (local_8 = local_8 + 1, 1 < local_8)) {
      return -1;
    }
  } while( true );
}

