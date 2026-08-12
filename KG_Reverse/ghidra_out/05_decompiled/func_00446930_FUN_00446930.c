// Function: FUN_00446930
// Entry:    00446930
// Size:     41 bytes
// Conv:     unknown
// Signature: undefined FUN_00446930(void)
// Decompiled by Ghidra 12.1.2


void FUN_00446930(int param_1,undefined4 param_2)

{
  if (((param_1 != 0) && (*(code **)(param_1 + 0x40) != (code *)0x0)) &&
     (*(int *)(param_1 + 0x44) != 0)) {
    (**(code **)(param_1 + 0x40))(*(int *)(param_1 + 0x44),param_2);
  }
                    /* WARNING: Subroutine does not return */
  ExitProcess(0);
}

