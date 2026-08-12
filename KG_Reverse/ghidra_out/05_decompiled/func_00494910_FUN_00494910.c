// Function: FUN_00494910
// Entry:    00494910
// Size:     97 bytes
// Conv:     unknown
// Signature: undefined FUN_00494910(void)
// Decompiled by Ghidra 12.1.2


void FUN_00494910(int param_1,WPARAM param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 local_c;
  undefined4 local_8;
  
  uVar1 = FUN_00497418();
  if ((uVar1 & 0x40000000) == 0) {
    iVar2 = FUN_0049617e();
    iVar3 = FUN_0049617e();
    if (iVar2 != iVar3) {
      local_c = *(undefined4 *)(param_1 + 0x1c);
      if (param_3 == 0) {
        local_8 = 0;
      }
      else {
        local_8 = *(undefined4 *)(param_3 + 0x1c);
      }
      SendMessageA(*(HWND *)(iVar2 + 0x1c),0x36e,param_2,(LPARAM)&local_c);
    }
  }
  return;
}

