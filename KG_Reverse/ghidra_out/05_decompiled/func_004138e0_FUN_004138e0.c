// Function: FUN_004138e0
// Entry:    004138e0
// Size:     75 bytes
// Conv:     unknown
// Signature: undefined FUN_004138e0(void)
// Decompiled by Ghidra 12.1.2


void __thiscall FUN_004138e0(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  HMODULE pHVar1;
  char *pcVar2;
  undefined4 *puVar3;
  int iVar4;
  
  if (*(int *)(param_1 + 0x424) == 0) {
    iVar4 = param_1 + 0x428;
    pcVar2 = s_DEFAULT_ICON_02faaeb8;
    puVar3 = (undefined4 *)(param_1 + 0x424);
    pHVar1 = GetModuleHandleA((LPCSTR)0x0);
    FUN_0041ce10(pHVar1,pcVar2,puVar3,iVar4);
  }
  *param_2 = *(undefined4 *)(param_1 + 0x424);
  *param_3 = *(undefined4 *)(param_1 + 0x428);
  return;
}

