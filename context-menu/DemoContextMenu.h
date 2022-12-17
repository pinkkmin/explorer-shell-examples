// DemoContextMenu.h: CDemoContextMenu 的声明

#pragma once
#include "resource.h"       // 主符号
#include "demomenu_i.h"

#include<shlobj.h>
#include<shobjidl.h> 

#include <string>
#include <vector>

#if defined(_WIN32_WCE) && !defined(_CE_DCOM) && !defined(_CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA)
#error "Windows CE 平台(如不提供完全 DCOM 支持的 Windows Mobile 平台)上无法正确支持单线程 COM 对象。定义 _CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA 可强制 ATL 支持创建单线程 COM 对象实现并允许使用其单线程 COM 对象实现。rgs 文件中的线程模型已被设置为“Free”，原因是该模型是非 DCOM Windows CE 平台支持的唯一线程模型。"
#endif

using namespace ATL;


// CDemoContextMenu

class ATL_NO_VTABLE CDemoContextMenu :
	public CComObjectRootEx<CComSingleThreadModel>,
	public CComCoClass<CDemoContextMenu, &CLSID_DemoContextMenu>,
	public IDispatchImpl<IDemoContextMenu, &IID_IDemoContextMenu, &LIBID_demomenuLib, /*wMajor =*/ 1, /*wMinor =*/ 0>,
	public IShellExtInit,
	public IContextMenu

{
public:
	CDemoContextMenu()
	{
	}

DECLARE_REGISTRY_RESOURCEID(106)


BEGIN_COM_MAP(CDemoContextMenu)
	COM_INTERFACE_ENTRY(IDemoContextMenu)
	COM_INTERFACE_ENTRY(IDispatch)
	COM_INTERFACE_ENTRY(IShellExtInit)
	COM_INTERFACE_ENTRY(IContextMenu)
END_COM_MAP()



	DECLARE_PROTECT_FINAL_CONSTRUCT()

	HRESULT FinalConstruct()
	{
		return S_OK;
	}

	void FinalRelease()
	{
	}

public:
	// IShellExtInit Interfaces
	STDMETHODIMP    Initialize(PCIDLIST_ABSOLUTE pidlFolder, IDataObject* pdtobj, HKEY hkeyProgID);

	// IContextMenu Interfaces
	STDMETHODIMP	QueryContextMenu(HMENU hMenu, UINT indexMenu, UINT idCmdFirst, UINT idCmdLast, UINT uFlags);
	STDMETHODIMP	InvokeCommand(LPCMINVOKECOMMANDINFO lpcmi) ;
	STDMETHODIMP	GetCommandString(UINT_PTR idCommand, UINT uFlags, UINT* pReserved, PSTR pszName, UINT cchName);

private:
	void			TweakMenu(HMENU menu);
private:
	enum MyCmd
	{
		CMD_ROOT,
		CMD_SHOW_FILEPATH,
		CMD_SHOW_FILEPATHS,
		CMD_SHOW_DEMO_ABOUT,
		CMD_END
	};
	struct MenuInfo
	{
		std::string name;
		// other infos
	};
	// datas
	std::vector<std::wstring> m_filepaths;		// select files
};

OBJECT_ENTRY_AUTO(__uuidof(DemoContextMenu), CDemoContextMenu)
