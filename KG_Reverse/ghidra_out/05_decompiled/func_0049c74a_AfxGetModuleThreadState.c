// Function: AfxGetModuleThreadState
// Entry:    0049c74a
// Size:     23 bytes
// Conv:     __stdcall
// Signature: AFX_MODULE_THREAD_STATE * AfxGetModuleThreadState(void)
// Decompiled by Ghidra 12.1.2


/* Library Function - Single Match
    class AFX_MODULE_THREAD_STATE * __stdcall AfxGetModuleThreadState(void)
   
   Library: Visual Studio 2003 Release */

AFX_MODULE_THREAD_STATE * AfxGetModuleThreadState(void)

{
  AFX_MODULE_THREAD_STATE *pAVar1;
  
  FUN_0049c724();
  pAVar1 = (AFX_MODULE_THREAD_STATE *)FUN_0049ccac(&LAB_0049c796);
  return pAVar1;
}

