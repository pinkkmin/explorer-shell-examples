// dllmain.h: 模块类的声明。

class CdemomenuModule : public ATL::CAtlDllModuleT< CdemomenuModule >
{
public :
	DECLARE_LIBID(LIBID_demomenuLib)
	DECLARE_REGISTRY_APPID_RESOURCEID(IDR_DEMOMENU, "{ff630319-bc87-43a5-83b7-91b5ca1b5628}")
};

extern class CdemomenuModule _AtlModule;
