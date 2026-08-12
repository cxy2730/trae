// Function: FUN_0041c5d0
// Entry:    0041c5d0
// Size:     66 bytes
// Conv:     unknown
// Signature: undefined FUN_0041c5d0(void)
// Decompiled by Ghidra 12.1.2


void FUN_0041c5d0(int param_1,char *param_2)

{
  char cVar1;
  uint uVar2;
  char *pcVar3;
  
  cVar1 = *param_2;
  do {
    if (cVar1 == '\0') {
      return;
    }
    SendMessageA(*(HWND *)(param_1 + 0x1c),0x143,0,(LPARAM)param_2);
    uVar2 = 0xffffffff;
    pcVar3 = param_2;
    do {
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    cVar1 = param_2[~uVar2];
    param_2 = param_2 + ~uVar2;
  } while( true );
}

