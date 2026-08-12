// Function: __abnormal_termination
// Entry:    00482b6e
// Size:     35 bytes
// Conv:     __cdecl
// Signature: int __abnormal_termination(void)
// Decompiled by Ghidra 12.1.2


/* Library Function - Single Match
    __abnormal_termination
   
   Library: Visual Studio */

int __cdecl __abnormal_termination(void)

{
  int iVar1;
  
  iVar1 = 0;
  if ((*(undefined1 **)((int)ExceptionList + 4) == &LAB_00482ae4) &&
     (*(int *)((int)ExceptionList + 8) == *(int *)(*(int *)((int)ExceptionList + 0xc) + 0xc))) {
    iVar1 = 1;
  }
  return iVar1;
}

