#include <windows.h>
#include <stdio.h>

typedef BOOL (WINAPI *IsDebuggerPresent_t)(VOID);
typedef BOOL (WINAPI *CheckRemoteDebuggerPresent_t)(HANDLE, PBOOL);
typedef NTSTATUS (NTAPI *NtQueryInformationProcess_t)(HANDLE, UINT, PVOID, ULONG, PULONG);
typedef NTSTATUS (NTAPI *ZwQueryInformationProcess_t)(HANDLE, UINT, PVOID, ULONG, PULONG);
typedef void (WINAPI *OutputDebugStringA_t)(LPCSTR);
typedef void (WINAPI *OutputDebugStringW_t)(LPCWSTR);

static IsDebuggerPresent_t pOrigIsDebuggerPresent = NULL;
static CheckRemoteDebuggerPresent_t pOrigCheckRemoteDebuggerPresent = NULL;
static NtQueryInformationProcess_t pOrigNtQueryInformationProcess = NULL;
static ZwQueryInformationProcess_t pOrigZwQueryInformationProcess = NULL;
static OutputDebugStringA_t pOrigOutputDebugStringA = NULL;
static OutputDebugStringW_t pOrigOutputDebugStringW = NULL;

BOOL WINAPI HookedIsDebuggerPresent(VOID) {
    return FALSE;
}

BOOL WINAPI HookedCheckRemoteDebuggerPresent(HANDLE hProcess, PBOOL pbDebuggerPresent) {
    if (pbDebuggerPresent) *pbDebuggerPresent = FALSE;
    return TRUE;
}

NTSTATUS NTAPI HookedNtQueryInformationProcess(HANDLE ProcessHandle, UINT ProcessInformationClass,
    PVOID ProcessInformation, ULONG ProcessInformationLength, PULONG ReturnLength) {
    if (ProcessInformationClass == 7) {
        if (ProcessInformation && ProcessInformationLength >= 4) {
            *(DWORD*)ProcessInformation = 0;
            if (ReturnLength) *ReturnLength = 4;
            return 0;
        }
    }
    if (ProcessInformationClass == 30) {
        if (ProcessInformation && ProcessInformationLength >= 4) {
            *(HANDLE*)ProcessInformation = NULL;
            if (ReturnLength) *ReturnLength = 4;
            return 0;
        }
    }
    if (ProcessInformationClass == 31) {
        if (ProcessInformation && ProcessInformationLength >= 4) {
            *(DWORD*)ProcessInformation = 0;
            if (ReturnLength) *ReturnLength = 4;
            return 0;
        }
    }
    if (pOrigNtQueryInformationProcess) {
        return pOrigNtQueryInformationProcess(ProcessHandle, ProcessInformationClass,
            ProcessInformation, ProcessInformationLength, ReturnLength);
    }
    return 0;
}

NTSTATUS NTAPI HookedZwQueryInformationProcess(HANDLE ProcessHandle, UINT ProcessInformationClass,
    PVOID ProcessInformation, ULONG ProcessInformationLength, PULONG ReturnLength) {
    if (ProcessInformationClass == 7) {
        if (ProcessInformation && ProcessInformationLength >= 4) {
            *(DWORD*)ProcessInformation = 0;
            if (ReturnLength) *ReturnLength = 4;
            return 0;
        }
    }
    if (ProcessInformationClass == 30) {
        if (ProcessInformation && ProcessInformationLength >= 4) {
            *(HANDLE*)ProcessInformation = NULL;
            if (ReturnLength) *ReturnLength = 4;
            return 0;
        }
    }
    if (ProcessInformationClass == 31) {
        if (ProcessInformation && ProcessInformationLength >= 4) {
            *(DWORD*)ProcessInformation = 0;
            if (ReturnLength) *ReturnLength = 4;
            return 0;
        }
    }
    if (pOrigZwQueryInformationProcess) {
        return pOrigZwQueryInformationProcess(ProcessHandle, ProcessInformationClass,
            ProcessInformation, ProcessInformationLength, ReturnLength);
    }
    return 0;
}

void WINAPI HookedOutputDebugStringA(LPCSTR lpOutputString) { return; }
void WINAPI HookedOutputDebugStringW(LPCWSTR lpOutputString) { return; }

BOOL InstallHooks() {
    HMODULE hKernel32 = GetModuleHandleA("kernel32.dll");
    HMODULE hNtdll = GetModuleHandleA("ntdll.dll");
    if (!hKernel32 || !hNtdll) return FALSE;

    pOrigIsDebuggerPresent = (IsDebuggerPresent_t)GetProcAddress(hKernel32, "IsDebuggerPresent");
    pOrigCheckRemoteDebuggerPresent = (CheckRemoteDebuggerPresent_t)GetProcAddress(hKernel32, "CheckRemoteDebuggerPresent");
    pOrigOutputDebugStringA = (OutputDebugStringA_t)GetProcAddress(hKernel32, "OutputDebugStringA");
    pOrigOutputDebugStringW = (OutputDebugStringW_t)GetProcAddress(hKernel32, "OutputDebugStringW");
    pOrigNtQueryInformationProcess = (NtQueryInformationProcess_t)GetProcAddress(hNtdll, "NtQueryInformationProcess");
    pOrigZwQueryInformationProcess = (ZwQueryInformationProcess_t)GetProcAddress(hNtdll, "ZwQueryInformationProcess");

    HMODULE hMainModule = GetModuleHandleA(NULL);
    if (!hMainModule) return FALSE;

    PIMAGE_DOS_HEADER pDosHeader = (PIMAGE_DOS_HEADER)hMainModule;
    PIMAGE_NT_HEADERS pNtHeaders = (PIMAGE_NT_HEADERS)((BYTE*)hMainModule + pDosHeader->e_lfanew);
    if (pNtHeaders->Signature != IMAGE_NT_SIGNATURE) return FALSE;

    PIMAGE_IMPORT_DESCRIPTOR pImportDesc = (PIMAGE_IMPORT_DESCRIPTOR)
        ((BYTE*)hMainModule + pNtHeaders->OptionalHeader.DataDirectory[IMAGE_DIRECTORY_ENTRY_IMPORT].VirtualAddress);

    while (pImportDesc->Name) {
        char* dllName = (char*)((BYTE*)hMainModule + pImportDesc->Name);
        
        if (strcmp(dllName, "kernel32.dll") == 0 || strcmp(dllName, "KERNEL32.dll") == 0) {
            PIMAGE_THUNK_DATA pThunk = (PIMAGE_THUNK_DATA)((BYTE*)hMainModule + pImportDesc->FirstThunk);
            PIMAGE_THUNK_DATA pOriginalThunk = (PIMAGE_THUNK_DATA)((BYTE*)hMainModule + pImportDesc->OriginalFirstThunk);

            while (pThunk->u1.Function) {
                char* funcName = NULL;
                if (pOriginalThunk && pOriginalThunk->u1.AddressOfData) {
                    PIMAGE_IMPORT_BY_NAME pImportByName = (PIMAGE_IMPORT_BY_NAME)
                        ((BYTE*)hMainModule + pOriginalThunk->u1.AddressOfData);
                    funcName = pImportByName->Name;
                }

                if (funcName) {
                    FARPROC hookFunc = NULL;
                    if (strcmp(funcName, "IsDebuggerPresent") == 0) hookFunc = (FARPROC)HookedIsDebuggerPresent;
                    else if (strcmp(funcName, "CheckRemoteDebuggerPresent") == 0) hookFunc = (FARPROC)HookedCheckRemoteDebuggerPresent;
                    else if (strcmp(funcName, "OutputDebugStringA") == 0) hookFunc = (FARPROC)HookedOutputDebugStringA;
                    else if (strcmp(funcName, "OutputDebugStringW") == 0) hookFunc = (FARPROC)HookedOutputDebugStringW;

                    if (hookFunc) {
                        DWORD oldProtect;
                        VirtualProtect(&pThunk->u1.Function, sizeof(FARPROC), PAGE_READWRITE, &oldProtect);
                        pThunk->u1.Function = hookFunc;
                        VirtualProtect(&pThunk->u1.Function, sizeof(FARPROC), oldProtect, &oldProtect);
                    }
                }
                pThunk++;
                if (pOriginalThunk) pOriginalThunk++;
            }
        }

        if (strcmp(dllName, "ntdll.dll") == 0 || strcmp(dllName, "NTDLL.dll") == 0) {
            PIMAGE_THUNK_DATA pThunk = (PIMAGE_THUNK_DATA)((BYTE*)hMainModule + pImportDesc->FirstThunk);
            PIMAGE_THUNK_DATA pOriginalThunk = (PIMAGE_THUNK_DATA)((BYTE*)hMainModule + pImportDesc->OriginalFirstThunk);

            while (pThunk->u1.Function) {
                char* funcName = NULL;
                if (pOriginalThunk && pOriginalThunk->u1.AddressOfData) {
                    PIMAGE_IMPORT_BY_NAME pImportByName = (PIMAGE_IMPORT_BY_NAME)
                        ((BYTE*)hMainModule + pOriginalThunk->u1.AddressOfData);
                    funcName = pImportByName->Name;
                }

                if (funcName) {
                    FARPROC hookFunc = NULL;
                    if (strcmp(funcName, "NtQueryInformationProcess") == 0) hookFunc = (FARPROC)HookedNtQueryInformationProcess;
                    else if (strcmp(funcName, "ZwQueryInformationProcess") == 0) hookFunc = (FARPROC)HookedZwQueryInformationProcess;

                    if (hookFunc) {
                        DWORD oldProtect;
                        VirtualProtect(&pThunk->u1.Function, sizeof(FARPROC), PAGE_READWRITE, &oldProtect);
                        pThunk->u1.Function = hookFunc;
                        VirtualProtect(&pThunk->u1.Function, sizeof(FARPROC), oldProtect, &oldProtect);
                    }
                }
                pThunk++;
                if (pOriginalThunk) pOriginalThunk++;
            }
        }
        pImportDesc++;
    }
    return TRUE;
}

BOOL APIENTRY DllMain(HMODULE hModule, DWORD ul_reason_for_call, LPVOID lpReserved) {
    switch (ul_reason_for_call) {
        case DLL_PROCESS_ATTACH:
            DisableThreadLibraryCalls(hModule);
            InstallHooks();
            break;
        case DLL_PROCESS_DETACH:
            break;
    }
    return TRUE;
}