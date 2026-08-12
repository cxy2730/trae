// Function: OnDisplayChange
// Entry:    00496819
// Size:     73 bytes
// Conv:     __thiscall
// Signature: long OnDisplayChange(CWnd * this, uint param_1, long param_2)
// Decompiled by Ghidra 12.1.2


/* Library Function - Single Match
    protected: long __thiscall CWnd::OnDisplayChange(unsigned int,long)
   
   Library: Visual Studio 2003 Release */

long __thiscall CWnd::OnDisplayChange(CWnd *this,uint param_1,long param_2)

{
  CWnd *pCVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  
  pCVar1 = (CWnd *)FUN_00481913();
  if (pCVar1 == this) {
    FUN_00499158();
  }
  uVar2 = FUN_00497418();
  if ((uVar2 & 0x40000000) == 0) {
    iVar3 = FUN_00494ae4();
    FUN_00496292(*(undefined4 *)(this + 0x1c),*(undefined4 *)(iVar3 + 4),*(undefined4 *)(iVar3 + 8),
                 *(undefined4 *)(iVar3 + 0xc),1,1);
  }
  lVar4 = FUN_00494b19();
  return lVar4;
}

