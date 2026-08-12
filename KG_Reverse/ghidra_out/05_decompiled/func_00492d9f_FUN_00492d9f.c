// Function: FUN_00492d9f
// Entry:    00492d9f
// Size:     98 bytes
// Conv:     unknown
// Signature: undefined FUN_00492d9f(void)
// Decompiled by Ghidra 12.1.2


undefined4 * __fastcall FUN_00492d9f(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  
  if (*(int *)(param_1 + 0x10) == 0) {
    iVar2 = FUN_00492a00(param_1 + 0x14,*(undefined4 *)(param_1 + 0x18),0x10);
    iVar4 = *(int *)(param_1 + 0x18);
    puVar3 = (undefined4 *)(iVar2 + -0xc + iVar4 * 0x10);
    if (-1 < iVar4 + -1) {
      do {
        *puVar3 = *(undefined4 *)(param_1 + 0x10);
        *(undefined4 **)(param_1 + 0x10) = puVar3;
        puVar3 = puVar3 + -4;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
  }
  puVar3 = *(undefined4 **)(param_1 + 0x10);
  uVar1 = *puVar3;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  FUN_00485580(puVar3 + 2,&PTR_DAT_02fd8088,4);
  puVar3[3] = 0;
  return puVar3;
}

