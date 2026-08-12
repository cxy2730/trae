// Function: DocumentPropertiesA
// Entry:    00480fc6
// Size:     6 bytes
// Conv:     __stdcall
// Signature: LONG DocumentPropertiesA(HWND hWnd, HANDLE hPrinter, LPSTR pDeviceName, PDEVMODEA pDevModeOutput, PDEVMODEA pDevModeInput, DWORD fMode)
// Decompiled by Ghidra 12.1.2


LONG DocumentPropertiesA(HWND hWnd,HANDLE hPrinter,LPSTR pDeviceName,PDEVMODEA pDevModeOutput,
                        PDEVMODEA pDevModeInput,DWORD fMode)

{
  LONG LVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00480fc6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LVar1 = DocumentPropertiesA(hWnd,hPrinter,pDeviceName,pDevModeOutput,pDevModeInput,fMode);
  return LVar1;
}

