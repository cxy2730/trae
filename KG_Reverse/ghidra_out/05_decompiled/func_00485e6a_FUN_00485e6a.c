// Function: FUN_00485e6a
// Entry:    00485e6a
// Size:     163 bytes
// Conv:     unknown
// Signature: undefined FUN_00485e6a(void)
// Decompiled by Ghidra 12.1.2


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00485e6a(UINT param_1,int param_2,int param_3)

{
  HANDLE hProcess;
  undefined4 *puVar1;
  UINT uExitCode;
  
  FUN_00485f0f();
  if (DAT_03010ffc == 1) {
    uExitCode = param_1;
    hProcess = GetCurrentProcess();
    TerminateProcess(hProcess,uExitCode);
  }
  _DAT_03010ff8 = 1;
  DAT_03010ff4 = (undefined1)param_3;
  if (param_2 == 0) {
    if ((DAT_030151f4 != (undefined4 *)0x0) &&
       (puVar1 = (undefined4 *)(DAT_030151f0 - 4), DAT_030151f4 <= puVar1)) {
      do {
        if ((code *)*puVar1 != (code *)0x0) {
          (*(code *)*puVar1)();
        }
        puVar1 = puVar1 + -1;
      } while (DAT_030151f4 <= puVar1);
    }
    FUN_00485f21(&DAT_02fa70ec,&DAT_02fa70f8);
  }
  FUN_00485f21(&DAT_02fa70fc,&DAT_02fa7104);
  if (param_3 == 0) {
    DAT_03010ffc = 1;
                    /* WARNING: Subroutine does not return */
    ExitProcess(param_1);
  }
  FUN_00485f18();
  return;
}

