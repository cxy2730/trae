// Function: FUN_00412b00
// Entry:    00412b00
// Size:     137 bytes
// Conv:     unknown
// Signature: undefined FUN_00412b00(void)
// Decompiled by Ghidra 12.1.2


int FUN_00412b00(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = FUN_0040e730(param_2,0);
  if (iVar1 != 0) {
    iVar2 = FUN_00406cf0(iVar1 + 0x18);
    iVar2 = iVar1 + 0x18 + iVar2;
    iVar1 = FUN_00406cf0(iVar2);
    iVar1 = *(int *)(iVar2 + 0x18 + iVar1);
    while (param_2 = param_2 + -1, 0 < param_2) {
      iVar2 = FUN_0040e730(param_2,0);
      iVar3 = FUN_0040ee10(param_2);
      if (iVar3 == 0) {
        iVar3 = FUN_00406cf0(iVar2 + 0x18);
        iVar3 = iVar2 + 0x18 + iVar3;
        iVar2 = FUN_00406cf0(iVar3);
        if (*(int *)(iVar3 + iVar2 + 0x18) == iVar1) {
          return param_2;
        }
      }
    }
  }
  return -1;
}

