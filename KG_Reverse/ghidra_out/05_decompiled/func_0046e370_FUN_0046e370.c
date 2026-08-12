// Function: FUN_0046e370
// Entry:    0046e370
// Size:     58 bytes
// Conv:     unknown
// Signature: undefined FUN_0046e370(void)
// Decompiled by Ghidra 12.1.2


bool __thiscall FUN_0046e370(LPVOID param_1,undefined4 param_2,undefined4 param_3)

{
  HANDLE pvVar1;
  
  *(undefined4 *)((int)param_1 + 0xc) = param_2;
  *(undefined4 *)((int)param_1 + 0x10) = param_3;
  pvVar1 = CreateThread((LPSECURITY_ATTRIBUTES)0x0,0,(LPTHREAD_START_ROUTINE)&LAB_0046e350,param_1,0
                        ,(LPDWORD)((int)param_1 + 8));
  *(HANDLE *)((int)param_1 + 4) = pvVar1;
  return pvVar1 != (HANDLE)0x0;
}

