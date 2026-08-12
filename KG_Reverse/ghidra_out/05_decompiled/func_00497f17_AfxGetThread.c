// Function: AfxGetThread
// Entry:    00497f17
// Size:     21 bytes
// Conv:     __stdcall
// Signature: CWinThread * AfxGetThread(void)
// Decompiled by Ghidra 12.1.2


/* Library Function - Single Match
    class CWinThread * __stdcall AfxGetThread(void)
   
   Library: Visual Studio 1998 Release */

CWinThread * AfxGetThread(void)

{
  AFX_MODULE_THREAD_STATE *pAVar1;
  int iVar2;
  CWinThread *pCVar3;
  
  pAVar1 = AfxGetModuleThreadState();
  pCVar3 = *(CWinThread **)(pAVar1 + 4);
  if (pCVar3 == (CWinThread *)0x0) {
    iVar2 = FUN_0049c724();
    pCVar3 = *(CWinThread **)(iVar2 + 4);
  }
  return pCVar3;
}

