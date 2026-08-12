// Function: FUN_00496c6b
// Entry:    00496c6b
// Size:     80 bytes
// Conv:     unknown
// Signature: undefined FUN_00496c6b(void)
// Decompiled by Ghidra 12.1.2


undefined4 FUN_00496c6b(LPCSTR param_1)

{
  HMODULE hModule;
  int iVar1;
  HRSRC hResInfo;
  HGLOBAL hResData;
  undefined4 uVar2;
  LPVOID pvVar3;
  
  pvVar3 = (LPVOID)0x0;
  if (param_1 != (LPCSTR)0x0) {
    iVar1 = FUN_0049c724();
    hModule = *(HMODULE *)(iVar1 + 0xc);
    hResInfo = FindResourceA(hModule,param_1,(LPCSTR)0xf0);
    if (hResInfo != (HRSRC)0x0) {
      hResData = LoadResource(hModule,hResInfo);
      if (hResData == (HGLOBAL)0x0) {
        return 0;
      }
      pvVar3 = LockResource(hResData);
    }
  }
  uVar2 = FUN_00496cbb(pvVar3);
  return uVar2;
}

