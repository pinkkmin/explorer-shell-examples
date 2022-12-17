// dllmain.h: 模块类的声明。

class CoverlayiconsModule : public ATL::CAtlDllModuleT< CoverlayiconsModule >
{
public :
	DECLARE_LIBID(LIBID_overlayiconsLib)
	DECLARE_REGISTRY_APPID_RESOURCEID(IDR_OVERLAYICONS, "{f097393c-82c4-421a-9ac3-85bd20b57475}")
};

extern class CoverlayiconsModule _AtlModule;
