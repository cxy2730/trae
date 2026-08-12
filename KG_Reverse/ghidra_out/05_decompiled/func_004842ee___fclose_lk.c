// Function: __fclose_lk
// Entry:    004842ee
// Size:     76 bytes
// Conv:     unknown
// Signature: undefined __fclose_lk(void)
// Decompiled by Ghidra 12.1.2


/* Library Function - Single Match
    __fclose_lk
   
   Library: Visual Studio 2003 Release */

undefined4 __fclose_lk(FILE *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0xffffffff;
  if ((param_1->_flag & 0x83) != 0) {
    uVar2 = FUN_00484552(param_1);
    __freebuf(param_1);
    iVar1 = FUN_0048caa6(param_1->_file);
    if (iVar1 < 0) {
      uVar2 = 0xffffffff;
    }
    else if (param_1->_tmpfname != (char *)0x0) {
      FUN_004837fe(param_1->_tmpfname);
      param_1->_tmpfname = (char *)0x0;
    }
  }
  param_1->_flag = 0;
  return uVar2;
}

