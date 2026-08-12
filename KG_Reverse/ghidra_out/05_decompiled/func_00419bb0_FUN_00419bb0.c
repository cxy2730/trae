// Function: FUN_00419bb0
// Entry:    00419bb0
// Size:     237 bytes
// Conv:     unknown
// Signature: undefined FUN_00419bb0(void)
// Decompiled by Ghidra 12.1.2


undefined4 FUN_00419bb0(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  BOOL BVar5;
  code *pcVar6;
  undefined4 unaff_retaddr;
  
  puVar1 = (undefined4 *)FUN_0040e730(param_2,0);
  if (puVar1 != (undefined4 *)0x0) {
    iVar2 = FUN_00413d70(0x3ea,*puVar1,0);
    if ((iVar2 != 0) && ((*(uint *)(iVar2 + 0x14) & 0x800) != 0)) {
      iVar3 = FUN_00406cf0(puVar1 + 6);
      iVar3 = (int)(puVar1 + 6) + iVar3;
      iVar4 = FUN_00406cf0(iVar3);
      iVar3 = *(int *)(iVar3 + iVar4);
      if (iVar3 != 0) {
        BVar5 = IsWindow(*(HWND *)(iVar3 + 0x1c));
        if (BVar5 != 0) {
          iVar4 = FUN_004975a7();
          if (iVar4 != 0) {
            pcVar6 = (code *)(**(code **)(iVar2 + 0x2c))(10);
            if (pcVar6 != (code *)0x0) {
              iVar2 = (*pcVar6)(iVar3);
              if (iVar2 != 0) {
                FUN_0040e780(unaff_retaddr);
                FUN_00413d70(0x7d8,&stack0xffffffcc,0);
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

