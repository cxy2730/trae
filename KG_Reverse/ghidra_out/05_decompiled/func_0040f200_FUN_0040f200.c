// Function: FUN_0040f200
// Entry:    0040f200
// Size:     82 bytes
// Conv:     unknown
// Signature: undefined FUN_0040f200(void)
// Decompiled by Ghidra 12.1.2


int FUN_0040f200(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = 0;
  iVar3 = -1;
LAB_0040f20a:
  do {
    iVar2 = iVar1;
    iVar1 = FUN_0040e730(iVar2,0);
    if (iVar1 == 0) {
LAB_0040f237:
      iVar1 = 0;
      if (iVar3 != -1) {
        iVar1 = iVar2 - iVar3;
      }
      if (param_1 != (int *)0x0) {
        *param_1 = iVar3;
      }
      return iVar1;
    }
    iVar1 = FUN_0040ee10(iVar2);
    if (iVar1 == 1) {
      if (iVar3 == -1) {
        iVar1 = iVar2 + 1;
        iVar3 = iVar2;
        goto LAB_0040f20a;
      }
    }
    else if (iVar3 != -1) goto LAB_0040f237;
    iVar1 = iVar2 + 1;
  } while( true );
}

