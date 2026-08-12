// Function: FUN_00498ac6
// Entry:    00498ac6
// Size:     250 bytes
// Conv:     unknown
// Signature: undefined FUN_00498ac6(void)
// Decompiled by Ghidra 12.1.2


bool FUN_00498ac6(size_t param_1)

{
  AFX_MODULE_THREAD_STATE *pAVar1;
  int iVar2;
  CWinThread *pCVar3;
  int iVar4;
  uint uVar5;
  void *pvVar6;
  
  pAVar1 = AfxGetModuleThreadState();
  if ((*(int *)(pAVar1 + 0x10) != 0) &&
     (iVar2 = *(int *)(pAVar1 + 0x10) + -1, *(int *)(pAVar1 + 0x10) = iVar2, iVar2 == 0)) {
    if (param_1 != 0) {
      if (param_1 != -1) {
        pCVar3 = AfxGetThread();
        if ((pCVar3 != (CWinThread *)0x0) && (*(code **)(pCVar3 + 0x54) != (code *)0x0)) {
          (**(code **)(pCVar3 + 0x54))(0,0);
        }
      }
      FUN_00498ce4();
      FUN_00498ce4();
      FUN_00498ce4();
      FUN_00498ce4();
      FUN_00498ce4();
    }
    iVar2 = FUN_0049c724();
    iVar2 = *(int *)(iVar2 + 4);
    iVar4 = FUN_0049ccac(&LAB_0049c02d);
    if (iVar2 != 0) {
      if (*(int *)(iVar4 + 0xc) != 0) {
        uVar5 = FUN_0048609f(*(int *)(iVar4 + 0xc));
        if (*(uint *)(iVar2 + 0xb8) <= uVar5) goto LAB_00498bb1;
      }
      if (*(int *)(iVar2 + 0xb8) != 0) {
        param_1 = 0;
        if (*(int *)(iVar4 + 0xc) != 0) {
          param_1 = FUN_0048609f(*(int *)(iVar4 + 0xc));
          FUN_004837fe(*(undefined4 *)(iVar4 + 0xc));
        }
        pvVar6 = _malloc(*(size_t *)(iVar2 + 0xb8));
        *(void **)(iVar4 + 0xc) = pvVar6;
        if ((pvVar6 == (void *)0x0) && (param_1 != 0)) {
          pvVar6 = _malloc(param_1);
          *(void **)(iVar4 + 0xc) = pvVar6;
        }
      }
    }
  }
LAB_00498bb1:
  return *(int *)(pAVar1 + 0x10) != 0;
}

