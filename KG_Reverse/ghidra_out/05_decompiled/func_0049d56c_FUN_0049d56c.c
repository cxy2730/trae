// Function: FUN_0049d56c
// Entry:    0049d56c
// Size:     285 bytes
// Conv:     unknown
// Signature: undefined FUN_0049d56c(void)
// Decompiled by Ghidra 12.1.2


void __fastcall FUN_0049d56c(int param_1)

{
  LPSTR pCVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined1 *puVar5;
  undefined1 local_310 [256];
  CHAR local_210 [260];
  CHAR local_10c [260];
  LPSTR local_8;
  
  iVar2 = FUN_0049c724();
  *(undefined4 *)(iVar2 + 8) = *(undefined4 *)(param_1 + 0x68);
  *(undefined4 *)(iVar2 + 0xc) = *(undefined4 *)(param_1 + 0x68);
  GetModuleFileNameA(*(HMODULE *)(param_1 + 0x68),local_210,0x104);
  local_8 = (LPSTR)FUN_00483fd4(local_210,0x2e);
  *local_8 = '\0';
  FUN_0049d689(local_210,local_10c,0x104);
  if (*(int *)(param_1 + 0x88) == 0) {
    uVar3 = FUN_00485551(local_10c);
    *(undefined4 *)(param_1 + 0x88) = uVar3;
  }
  if (*(int *)(param_1 + 0x78) == 0) {
    iVar4 = FUN_00498a96(0xe000,local_310,0x100);
    if (iVar4 == 0) {
      puVar5 = *(undefined1 **)(param_1 + 0x88);
    }
    else {
      puVar5 = local_310;
    }
    uVar3 = FUN_00485551(puVar5);
    *(undefined4 *)(param_1 + 0x78) = uVar3;
  }
  pCVar1 = local_8;
  *(undefined4 *)(iVar2 + 0x10) = *(undefined4 *)(param_1 + 0x78);
  if (*(int *)(param_1 + 0x8c) == 0) {
    lstrcpyA(local_8,".HLP");
    uVar3 = FUN_00485551(local_210);
    *(undefined4 *)(param_1 + 0x8c) = uVar3;
    *pCVar1 = '\0';
  }
  if (*(int *)(param_1 + 0x90) == 0) {
    lstrcatA(local_10c,".INI");
    uVar3 = FUN_00485551(local_10c);
    *(undefined4 *)(param_1 + 0x90) = uVar3;
  }
  return;
}

