#ifndef __PYSIDEWTYPES__
#define __PYSIDEWTYPES__

typedef struct HWND__ *HWND;
typedef unsigned int UINT;
typedef long LONG;
typedef unsigned long DWORD;

#if defined(_WIN64)
typedef unsigned __int64 UINT_PTR;
#else
typedef unsigned int UINT_PTR;
#endif

typedef UINT_PTR WPARAM;
typedef LONG LPARAM;

struct POINT
{
    LONG x;
    LONG y;
};

struct MSG
{
    HWND hwnd;
    UINT message;
    WPARAM wParam;
    LPARAM lParam;
    DWORD time;
    POINT pt;
};

#endif
