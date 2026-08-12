// Function: FUN_00497396
// Entry:    00497396
// Size:     79 bytes
// Conv:     unknown
// Signature: undefined FUN_00497396(void)
// Decompiled by Ghidra 12.1.2


int __thiscall
FUN_00497396(int param_1,int param_2,int param_3,RECT *param_4,RECT *param_5,int param_6,
            LPRECT param_7,uint param_8)

{
  HRGN hrgnUpdate;
  int iVar1;
  
  hrgnUpdate = (HRGN)0x0;
  if (param_6 != 0) {
    hrgnUpdate = *(HRGN *)(param_6 + 4);
  }
  iVar1 = ScrollWindowEx(*(HWND *)(param_1 + 0x1c),param_2,param_3,param_4,param_5,hrgnUpdate,
                         param_7,param_8);
  if ((*(int **)(param_1 + 0x34) != (int *)0x0) && ((param_8 & 1) != 0)) {
    (**(code **)(**(int **)(param_1 + 0x34) + 0x58))(param_2,param_3);
  }
  return iVar1;
}

