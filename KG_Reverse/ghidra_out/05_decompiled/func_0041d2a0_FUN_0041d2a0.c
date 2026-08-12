// Function: FUN_0041d2a0
// Entry:    0041d2a0
// Size:     176 bytes
// Conv:     unknown
// Signature: undefined FUN_0041d2a0(void)
// Decompiled by Ghidra 12.1.2


char FUN_0041d2a0(char param_1,char param_2,int param_3)

{
  if ((param_3 == 1) && (param_1 != '\0')) {
    if ((param_2 == '\x0f') || (((param_2 == '\x10' || (param_2 == '\x11')) || (param_2 == '\x16')))
       ) {
      if (param_1 == '2') {
        return '\'';
      }
      if (param_1 == '7') {
        return '6';
      }
      if (param_1 == ',') {
        return '*';
      }
    }
    if (param_1 == '\x01') {
      return '\x13';
    }
    if (param_1 == '\x02') {
      return '\x14';
    }
    if (param_1 == '\x03') {
      return '\x15';
    }
    if (param_1 == '\v') {
      return '\n';
    }
    if (param_1 == '/') {
      return '0';
    }
    if (param_1 == '1') {
      return '\'';
    }
    if (param_1 == '\x1f') {
      return '\x19';
    }
    if (param_2 == '\n') {
      if (param_1 == '7') {
        return '6';
      }
    }
    else if ((param_2 == '\x16') && (param_1 == '\x1a')) {
      return '*';
    }
  }
  return param_1;
}

