// Function: FUN_0049cbba
// Entry:    0049cbba
// Size:     153 bytes
// Conv:     unknown
// Signature: undefined FUN_0049cbba(void)
// Decompiled by Ghidra 12.1.2


void __thiscall FUN_0049cbba(DWORD *param_1,undefined4 *param_2,int param_3)

{
  undefined4 *puVar1;
  bool bVar2;
  int iVar3;
  
  iVar3 = 1;
  bVar2 = true;
  if (1 < (int)param_2[2]) {
    do {
      if ((param_3 == 0) || (*(int *)(param_1[4] + 4 + iVar3 * 8) == param_3)) {
        puVar1 = *(undefined4 **)(param_2[3] + iVar3 * 4);
        if (puVar1 != (undefined4 *)0x0) {
          (**(code **)*puVar1)(1);
        }
        *(undefined4 *)(param_2[3] + iVar3 * 4) = 0;
      }
      else if (*(int *)(param_2[3] + iVar3 * 4) != 0) {
        bVar2 = false;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < (int)param_2[2]);
    if (!bVar2) {
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 7));
  FUN_0049c834(param_2);
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 7));
  LocalFree((HLOCAL)param_2[3]);
  if (param_2 != (undefined4 *)0x0) {
    (**(code **)*param_2)(1);
  }
  TlsSetValue(*param_1,(LPVOID)0x0);
  return;
}

