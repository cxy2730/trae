// Function: FUN_004071e0
// Entry:    004071e0
// Size:     209 bytes
// Conv:     unknown
// Signature: undefined FUN_004071e0(void)
// Decompiled by Ghidra 12.1.2


int FUN_004071e0(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  
  puVar1 = param_3;
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = 0;
  }
  iVar2 = FUN_00406c20(param_2);
  if (iVar2 != 1) {
    FUN_00413d70(0x3e9,0,0);
    iVar2 = FUN_0040ec30(param_1,&param_3,0);
    if (iVar2 == 1) {
      iVar2 = 0;
      while (puVar3 = (undefined4 *)FUN_0040e730(iVar2,0), puVar3 != (undefined4 *)0x0) {
        uVar4 = (**(code **)(param_3[5] + 0x14))(puVar3);
        iVar5 = FUN_00482e73(uVar4,param_2);
        if (iVar5 == 0) {
          iVar2 = FUN_00413d70(0x3ea,*puVar3,0);
          if (iVar2 == 0) {
            return 0;
          }
          if ((*(uint *)(iVar2 + 0x14) & 0x80000) == 0) {
            return 0;
          }
          iVar2 = FUN_00406cf0(puVar3 + 6);
          iVar2 = (int)(puVar3 + 6) + iVar2;
          iVar5 = FUN_00406cf0(iVar2);
          iVar2 = *(int *)(iVar2 + iVar5);
          if (puVar1 != (undefined4 *)0x0) {
            *puVar1 = *(undefined4 *)(iVar2 + 0x1c);
          }
          return iVar2 + 0x5c;
        }
        iVar2 = iVar2 + 1;
      }
    }
  }
  return 0;
}

