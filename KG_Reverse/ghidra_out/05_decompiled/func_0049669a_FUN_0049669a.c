// Function: FUN_0049669a
// Entry:    0049669a
// Size:     125 bytes
// Conv:     unknown
// Signature: undefined FUN_0049669a(void)
// Decompiled by Ghidra 12.1.2


void __fastcall FUN_0049669a(int param_1)

{
  int iVar1;
  CWinThread *pCVar2;
  uint uVar3;
  
  iVar1 = FUN_0049c724();
  if ((*(int *)(iVar1 + 4) != 0) && (*(int *)(*(int *)(iVar1 + 4) + 0x1c) == param_1)) {
    FUN_00499114();
  }
  iVar1 = FUN_0049c724();
  if (*(char *)(iVar1 + 0x14) == '\0') {
    pCVar2 = AfxGetThread();
    if (pCVar2 != (CWinThread *)0x0) {
      pCVar2 = AfxGetThread();
      if (*(int *)(pCVar2 + 0x1c) == param_1) {
        iVar1 = FUN_0049cd41(&LAB_0049c3a6);
        if (*(code **)(iVar1 + 0x1c) != (code *)0x0) {
          (**(code **)(iVar1 + 0x1c))();
        }
      }
    }
  }
  uVar3 = FUN_00497418();
  if ((uVar3 & 0x40000000) == 0) {
    FUN_00496292(*(undefined4 *)(param_1 + 0x1c),0x15,0,0,1,1);
  }
  FUN_00494b19();
  return;
}

