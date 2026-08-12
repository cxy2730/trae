// Function: FUN_00493861
// Entry:    00493861
// Size:     117 bytes
// Conv:     unknown
// Signature: undefined FUN_00493861(void)
// Decompiled by Ghidra 12.1.2


int * __fastcall FUN_00493861(HANDLE param_1)

{
  int iVar1;
  int *piVar2;
  HANDLE hTargetProcessHandle;
  HANDLE hSourceProcessHandle;
  HANDLE hSourceHandle;
  HANDLE *lpTargetHandle;
  DWORD DVar3;
  BOOL BVar4;
  DWORD dwOptions;
  undefined4 uVar5;
  HANDLE local_8;
  
  local_8 = param_1;
  iVar1 = FUN_00492f17(0x10);
  if (iVar1 == 0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = (int *)FUN_004937fa(0xffffffff);
  }
  dwOptions = 2;
  BVar4 = 0;
  lpTargetHandle = &local_8;
  DVar3 = 0;
  hTargetProcessHandle = GetCurrentProcess();
  hSourceHandle = *(HANDLE *)((int)param_1 + 4);
  hSourceProcessHandle = GetCurrentProcess();
  BVar4 = DuplicateHandle(hSourceProcessHandle,hSourceHandle,hTargetProcessHandle,lpTargetHandle,
                          DVar3,BVar4,dwOptions);
  if (BVar4 == 0) {
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 4))(1);
    }
    uVar5 = 0;
    DVar3 = GetLastError();
    FUN_004985b1(DVar3,uVar5);
  }
  piVar2[1] = (int)local_8;
  piVar2[2] = *(int *)((int)param_1 + 8);
  return piVar2;
}

