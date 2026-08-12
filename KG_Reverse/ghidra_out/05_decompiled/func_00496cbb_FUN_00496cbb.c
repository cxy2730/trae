// Function: FUN_00496cbb
// Entry:    00496cbb
// Size:     210 bytes
// Conv:     unknown
// Signature: undefined FUN_00496cbb(void)
// Decompiled by Ghidra 12.1.2


int __thiscall FUN_00496cbb(int param_1,ushort *param_2)

{
  int iVar1;
  ushort uVar2;
  uint Msg;
  LRESULT LVar3;
  ushort *puVar4;
  ushort *lParam;
  ushort local_2c [4];
  ushort *local_24;
  int local_8;
  
  local_8 = 1;
  if (param_2 != (ushort *)0x0) {
    do {
      if (*param_2 == 0) break;
      uVar2 = param_2[1];
      iVar1 = *(int *)(param_2 + 2);
      puVar4 = param_2 + 4;
      if (uVar2 == 0x1234) {
LAB_00496d1d:
        local_2c[2] = 0xffff;
        local_2c[3] = 0xffff;
        lParam = local_2c;
        local_2c[0] = 1;
        local_2c[1] = 0;
        Msg = 0x401;
        local_24 = puVar4;
LAB_00496d4b:
        LVar3 = SendDlgItemMessageA(*(HWND *)(param_1 + 0x1c),(uint)*param_2,Msg,0,(LPARAM)lParam);
        if (LVar3 == -1) {
          local_8 = 0;
        }
      }
      else {
        if (uVar2 == 0x401) {
          uVar2 = 0x180;
LAB_00496d44:
          Msg = (uint)uVar2;
          lParam = puVar4;
          goto LAB_00496d4b;
        }
        if (uVar2 == 0x403) {
          uVar2 = 0x143;
        }
        if (uVar2 == 0x401) goto LAB_00496d1d;
        if ((uVar2 == 0x180) || (uVar2 == 0x143)) goto LAB_00496d44;
      }
      param_2 = (ushort *)((int)puVar4 + iVar1);
    } while (local_8 != 0);
    if (local_8 == 0) {
      return 0;
    }
  }
  FUN_00496292(*(undefined4 *)(param_1 + 0x1c),0x364,0,0,0,0);
  return local_8;
}

