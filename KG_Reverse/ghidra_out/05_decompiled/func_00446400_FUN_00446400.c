// Function: FUN_00446400
// Entry:    00446400
// Size:     60 bytes
// Conv:     unknown
// Signature: undefined FUN_00446400(void)
// Decompiled by Ghidra 12.1.2


void FUN_00446400(int param_1,uint param_2,uint param_3,char *param_4)

{
  char cVar1;
  
  if ((param_1 != 0) && (param_3 < param_2)) {
    if ((param_4 != (char *)0x0) && (cVar1 = *param_4, cVar1 != '\0')) {
      do {
        if (param_2 - 1 <= param_3) break;
        *(char *)(param_1 + param_3) = cVar1;
        cVar1 = param_4[1];
        param_3 = param_3 + 1;
        param_4 = param_4 + 1;
      } while (cVar1 != '\0');
    }
    *(undefined1 *)(param_1 + param_3) = 0;
  }
  return;
}

