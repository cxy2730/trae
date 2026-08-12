// Function: FUN_00494ae4
// Entry:    00494ae4
// Size:     53 bytes
// Conv:     unknown
// Signature: undefined FUN_00494ae4(void)
// Decompiled by Ghidra 12.1.2


int FUN_00494ae4(void)

{
  int iVar1;
  LONG LVar2;
  DWORD DVar3;
  
  iVar1 = FUN_0049ccac(&LAB_0049c02d);
  LVar2 = GetMessageTime();
  *(LONG *)(iVar1 + 0x44) = LVar2;
  DVar3 = GetMessagePos();
  *(int *)(iVar1 + 0x48) = (int)(short)DVar3;
  *(int *)(iVar1 + 0x4c) = (int)(short)(DVar3 >> 0x10);
  return iVar1 + 0x34;
}

