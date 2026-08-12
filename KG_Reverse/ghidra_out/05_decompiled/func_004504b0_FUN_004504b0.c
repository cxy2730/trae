// Function: FUN_004504b0
// Entry:    004504b0
// Size:     173 bytes
// Conv:     unknown
// Signature: undefined FUN_004504b0(void)
// Decompiled by Ghidra 12.1.2


void FUN_004504b0(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  if ((param_1 != 0) && (param_2 != 0)) {
    if ((*(ushort *)(param_2 + 0x14) != 0) && (*(ushort *)(param_2 + 0x14) < 0x101)) {
      FUN_0043c5f0(param_1,param_2,8,0);
      iVar1 = FUN_00446cf0(param_1,0x200);
      *(int *)(param_2 + 0xcc) = iVar1;
      if (iVar1 != 0) {
        iVar1 = 0;
        *(uint *)(param_2 + 0xe8) = *(uint *)(param_2 + 0xe8) | 8;
        if (*(short *)(param_2 + 0x14) != 0) {
          do {
            *(undefined2 *)(*(int *)(param_2 + 0xcc) + iVar1 * 2) =
                 *(undefined2 *)(param_3 + iVar1 * 2);
            iVar1 = iVar1 + 1;
          } while (iVar1 < (int)(uint)*(ushort *)(param_2 + 0x14));
        }
        *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) | 0x40;
        return;
      }
      FUN_00446560(param_1,s_Insufficient_memory_for_hIST_chu_02fb2de4);
      return;
    }
    FUN_00446560(param_1,s_Invalid_palette_size__hIST_alloc_02fb2db4);
  }
  return;
}

