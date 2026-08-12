// Function: FUN_004261b0
// Entry:    004261b0
// Size:     193 bytes
// Conv:     unknown
// Signature: undefined FUN_004261b0(void)
// Decompiled by Ghidra 12.1.2


/* WARNING: Removing unreachable block (ram,0x00426212) */

void __thiscall FUN_004261b0(WPARAM param_1,undefined4 param_2,int param_3)

{
  uint uVar1;
  BOOL BVar2;
  
  uVar1 = *(uint *)(param_3 + 8);
  if ((((byte)uVar1 & 0xf0) == 0xb0) && ((uVar1 & 0xff00) == 0x700)) {
    *(uint *)(*(int *)(param_1 + 0x70) + (uVar1 & 0xf) * 4) = ((uVar1 >> 0x10 & 0x7f) * 100) / 0x7f;
    if ((*(int *)(param_1 + 0x58) != 0) &&
       (BVar2 = IsWindow(*(HWND *)(*(int *)(param_1 + 0x58) + 0x1c)), BVar2 != 0)) {
      PostMessageA(*(HWND *)(*(int *)(param_1 + 0x58) + 0x1c),0x417,param_1,
                   ((*(uint *)(param_3 + 8) >> 0x10 & 0x7f) * 100) / 0x7f << 0x10 |
                   *(byte *)(param_3 + 8) & 0xf);
    }
  }
  return;
}

