// Function: FUN_0049218b
// Entry:    0049218b
// Size:     78 bytes
// Conv:     unknown
// Signature: undefined FUN_0049218b(void)
// Decompiled by Ghidra 12.1.2


void __thiscall
FUN_0049218b(int param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined4 param_5)

{
  undefined1 local_30 [16];
  undefined1 local_20 [20];
  undefined4 local_c;
  
  FillInToolInfo(local_30,param_2,param_5);
  if (param_4 != 0) {
    FUN_00485580(local_20,param_4,0x10);
  }
  local_c = param_3;
  SendMessageA(*(HWND *)(param_1 + 0x1c),0x404,0,(LPARAM)local_30);
  return;
}

