// Function: FUN_00407140
// Entry:    00407140
// Size:     156 bytes
// Conv:     unknown
// Signature: undefined FUN_00407140(void)
// Decompiled by Ghidra 12.1.2


int FUN_00407140(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  
  iVar1 = param_2;
  if (param_2 != 0) {
    FUN_00413d70(0x3e9,0,0);
    iVar2 = FUN_0040ec30(param_1,&param_2,0);
    if (iVar2 == 1) {
      iVar2 = 0;
      while( true ) {
        puVar3 = (undefined4 *)FUN_0040e730(iVar2,0);
        if (puVar3 == (undefined4 *)0x0) break;
        iVar4 = FUN_00413d70(0x3ea,*puVar3,0);
        if ((iVar4 != 0) && ((*(uint *)(iVar4 + 0x14) & 0x80000) != 0)) {
          iVar4 = FUN_00406cf0(puVar3 + 6);
          iVar4 = (int)(puVar3 + 6) + iVar4;
          iVar5 = FUN_00406cf0(iVar4);
          iVar4 = *(int *)(iVar4 + iVar5);
          iVar5 = FUN_00427c20();
          if (iVar5 == iVar1) {
            return iVar4 + 0x5c;
          }
        }
        iVar2 = iVar2 + 1;
      }
    }
  }
  return 0;
}

