// Function: FUN_0049ccac
// Entry:    0049ccac
// Size:     119 bytes
// Conv:     unknown
// Signature: undefined FUN_0049ccac(void)
// Decompiled by Ghidra 12.1.2


/* WARNING: Removing unreachable block (ram,0x0049ccd3) */

int __thiscall FUN_0049ccac(int *param_1,code *param_2)

{
  int iVar1;
  LPVOID pvVar2;
  
  if (*param_1 == 0) {
    if (DAT_03010be0 == (DWORD *)0x0) {
      DAT_03010be0 = (DWORD *)FUN_0049c8ac();
    }
    iVar1 = FUN_0049c945();
    *param_1 = iVar1;
  }
  iVar1 = *param_1;
  pvVar2 = TlsGetValue(*DAT_03010be0);
  if ((pvVar2 == (LPVOID)0x0) || (*(int *)((int)pvVar2 + 8) <= iVar1)) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(*(int *)((int)pvVar2 + 0xc) + iVar1 * 4);
  }
  if (iVar1 == 0) {
    iVar1 = (*param_2)();
    FUN_0049cab4(*param_1,iVar1);
  }
  return iVar1;
}

