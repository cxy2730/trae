// Function: FUN_004938d6
// Entry:    004938d6
// Size:     285 bytes
// Conv:     unknown
// Signature: undefined FUN_004938d6(void)
// Decompiled by Ghidra 12.1.2


DWORD __thiscall FUN_004938d6(int param_1,LPCSTR param_2,uint param_3,int param_4)

{
  uint uVar1;
  HANDLE pvVar2;
  undefined4 uVar3;
  DWORD DVar4;
  DWORD DVar5;
  DWORD dwCreationDisposition;
  DWORD dwShareMode;
  undefined1 local_114 [260];
  _SECURITY_ATTRIBUTES local_10;
  
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 4) = 0xffffffff;
  FUN_00493161();
  FUN_00493c02(local_114,param_2);
  FUN_00493313(local_114);
  DVar5 = 0;
  uVar1 = param_3 & 3;
  if (uVar1 == 0) {
    DVar5 = 0x80000000;
  }
  else if (uVar1 == 1) {
    DVar5 = 0x40000000;
  }
  else if (uVar1 == 2) {
    DVar5 = 0xc0000000;
  }
  uVar1 = param_3 & 0x70;
  DVar4 = 1;
  if ((uVar1 != 0) && (uVar1 != 0x10)) {
    dwShareMode = DVar4;
    if (uVar1 == 0x20) goto LAB_0049396d;
    if (uVar1 == 0x30) {
      dwShareMode = 2;
      goto LAB_0049396d;
    }
    if (uVar1 == 0x40) {
      dwShareMode = 3;
      goto LAB_0049396d;
    }
  }
  dwShareMode = 0;
LAB_0049396d:
  local_10.lpSecurityDescriptor = (LPVOID)0x0;
  local_10.bInheritHandle = ~(param_3 & 0xffff7fff) >> 7 & 1;
  local_10.nLength = 0xc;
  if ((param_3 & 0x1000) == 0) {
    dwCreationDisposition = 3;
  }
  else {
    dwCreationDisposition = (-(uint)((param_3 & 0x2000) != 0) & 2) + 2;
  }
  pvVar2 = CreateFileA(param_2,DVar5,dwShareMode,&local_10,dwCreationDisposition,0x80,(HANDLE)0x0);
  if (pvVar2 == (HANDLE)0xffffffff) {
    if (param_4 != 0) {
      DVar5 = GetLastError();
      *(DWORD *)(param_4 + 0xc) = DVar5;
      uVar3 = FUN_004986dd(DVar5);
      *(undefined4 *)(param_4 + 8) = uVar3;
      FUN_00493313(param_2);
    }
    DVar4 = 0;
  }
  else {
    *(HANDLE *)(param_1 + 4) = pvVar2;
    *(undefined4 *)(param_1 + 8) = 1;
  }
  return DVar4;
}

