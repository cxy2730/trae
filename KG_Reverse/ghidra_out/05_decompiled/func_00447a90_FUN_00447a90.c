// Function: FUN_00447a90
// Entry:    00447a90
// Size:     160 bytes
// Conv:     unknown
// Signature: undefined FUN_00447a90(void)
// Decompiled by Ghidra 12.1.2


bool FUN_00447a90(int param_1)

{
  bool bVar1;
  undefined1 local_8;
  undefined1 uStack_7;
  undefined1 uStack_6;
  byte bStack_5;
  
  bVar1 = true;
  if ((*(uint *)(param_1 + 0x11c) & 0x20000000) == 0) {
    if ((*(uint *)(param_1 + 0x78) & 0x800) == 0) goto LAB_00447ac2;
  }
  else if ((*(uint *)(param_1 + 0x78) & 0x300) != 0x300) goto LAB_00447ac2;
  bVar1 = false;
LAB_00447ac2:
  *(undefined4 *)(param_1 + 0x2c4) = 0x81;
  FUN_00447770(param_1,&local_8,4);
  if (!bVar1) {
    return false;
  }
  return (((CONCAT12(uStack_6,CONCAT11(uStack_7,local_8)) & 0xff) * 0x100 +
          (CONCAT12(bStack_5,CONCAT11(uStack_6,uStack_7)) & 0xff)) * 0x100 +
         (CONCAT11(bStack_5,uStack_6) & 0xff)) * 0x100 + (uint)bStack_5 != *(int *)(param_1 + 0x140)
  ;
}

