// Function: FUN_00498efa
// Entry:    00498efa
// Size:     111 bytes
// Conv:     unknown
// Signature: undefined FUN_00498efa(void)
// Decompiled by Ghidra 12.1.2


undefined4 FUN_00498efa(uint *param_1,undefined4 param_2,undefined2 *param_3)

{
  short sVar1;
  uint uVar2;
  undefined2 *puVar3;
  LPSTR lpMultiByteStr;
  int cbMultiByte;
  LPCSTR lpDefaultChar;
  LPBOOL lpUsedDefaultChar;
  
  if (*(short *)((int)param_1 + 2) == -1) {
    uVar2 = param_1[3];
  }
  else {
    uVar2 = *param_1;
  }
  if ((uVar2 & 0x40) == 0) {
    return 0;
  }
  puVar3 = (undefined2 *)FUN_00498dec(param_1);
  lpUsedDefaultChar = (LPBOOL)0x0;
  *param_3 = *puVar3;
  sVar1 = *(short *)((int)param_1 + 2);
  lpDefaultChar = (LPCSTR)0x0;
  cbMultiByte = 0x20;
  lpMultiByteStr = (LPSTR)FUN_00493631(0x20);
  WideCharToMultiByte(0,0,puVar3 + ((sVar1 != -1) - 1 & 2) + 1,-1,lpMultiByteStr,cbMultiByte,
                      lpDefaultChar,lpUsedDefaultChar);
  FUN_00493609(0xffffffff);
  return 1;
}

