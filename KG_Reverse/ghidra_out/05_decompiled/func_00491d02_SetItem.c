// Function: SetItem
// Entry:    00491d02
// Size:     78 bytes
// Conv:     __thiscall
// Signature: int SetItem(CTreeCtrl * this, _TREEITEM * param_1, uint param_2, char * param_3, int param_4, int param_5, uint param_6, uint param_7, long param_8)
// Decompiled by Ghidra 12.1.2


/* Library Function - Single Match
    public: int __thiscall CTreeCtrl::SetItem(struct _TREEITEM *,unsigned int,char const
   *,int,int,unsigned int,unsigned int,long)
   
   Library: Visual Studio 2003 Release */

int __thiscall
CTreeCtrl::SetItem(CTreeCtrl *this,_TREEITEM *param_1,uint param_2,char *param_3,int param_4,
                  int param_5,uint param_6,uint param_7,long param_8)

{
  LRESULT LVar1;
  uint local_2c;
  _TREEITEM *local_28;
  uint local_24;
  uint local_20;
  char *local_1c;
  int local_14;
  int local_10;
  long local_8;
  
  local_28 = param_1;
  local_2c = param_2;
  local_1c = param_3;
  local_14 = param_4;
  local_10 = param_5;
  local_24 = param_6;
  local_20 = param_7;
  local_8 = param_8;
  LVar1 = SendMessageA(*(HWND *)(this + 0x1c),0x110d,0,(LPARAM)&local_2c);
  return LVar1;
}

