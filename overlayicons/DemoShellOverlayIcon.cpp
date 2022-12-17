// DemoShellOverlayIcon.cpp: CDemoShellOverlayIcon 的实现

#include "pch.h"
#include "DemoShellOverlayIcon.h"
#include<string>

// CDemoShellOverlayIcon

STDMETHODIMP  CDemoShellOverlayIcon::GetOverlayInfo(LPWSTR pwszIconFile, int cchMax, int* pIndex, DWORD* pdwFlags)
{
	// 简单演示，绝对路径
	wcscpy_s(pwszIconFile, cchMax, L"C:\\demo.ico");
	*pIndex = 0;
	*pdwFlags = ISIOI_ICONFILE | ISIOI_ICONINDEX;

	return S_OK;
}

STDMETHODIMP  CDemoShellOverlayIcon::IsMemberOf(LPCWSTR pwszPath, DWORD   dwAttrib)
{
	// 简单的判断，并不准确
	if (NULL != wcsstr(pwszPath, L".txt"))
	{
		return S_OK;
	}	
	return S_FALSE;
}

STDMETHODIMP  CDemoShellOverlayIcon::GetPriority(int* pPriority)
{
	return 0;
}