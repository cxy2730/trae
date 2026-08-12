// Function: FUN_004072c0
// Entry:    004072c0
// Size:     182 bytes
// Conv:     unknown
// Signature: undefined FUN_004072c0(void)
// Decompiled by Ghidra 12.1.2


undefined4 FUN_004072c0(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = param_2;
  iVar1 = FUN_00406c20(param_2);
  if (iVar1 != 1) {
    FUN_00413d70(0x3e9,0,0);
    iVar1 = FUN_0040ec30(param_1,&param_2,0);
    if (iVar1 == 1) {
      iVar1 = 0;
      while (puVar2 = (undefined4 *)FUN_0040e730(iVar1,0), puVar2 != (undefined4 *)0x0) {
        uVar3 = (**(code **)(*(int *)(param_2 + 0x14) + 0x14))(puVar2);
        iVar4 = FUN_00482e73(uVar3,iVar5);
        if (iVar4 == 0) {
          iVar5 = FUN_00413d70(0x3ea,*puVar2,0);
          if (iVar5 == 0) {
            return 0;
          }
          if ((*(uint *)(iVar5 + 0x14) & 0x40000) == 0) {
            return 0;
          }
          iVar5 = FUN_00406cf0(puVar2 + 6);
          iVar5 = (int)(puVar2 + 6) + iVar5;
          iVar1 = FUN_00406cf0(iVar5);
          return *(undefined4 *)(*(int *)(iVar5 + iVar1) + 0x44);
        }
        iVar1 = iVar1 + 1;
      }
    }
  }
  return 0;
}

