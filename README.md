# explorer-shell-examples

## intro

windows右键菜单和图标覆盖示例。基于接口`IShellExtInit`和`IContextMenu`，`IShellIconOverlayIdentifier`.

## docs

文章介绍。

## context-menu

windows 右键菜单工程，编译x64/x86 release版本。

### overlayicons

windows 图标覆盖工程，编译x64/x86 release版本。

## bin

管理员权限打开cmd，安装/卸载执行以下命令。

执行完均需要重启explorer.exe才能生效。

```bash
#  安装菜单
regsvr32 demo-menu-x64.dll
# 卸载
regsvr32 -U demo-menu-x64.dll
```

需要把`bin`目录下的`demo.ico`文件复制至`C:\`根目录，因为代码里指定了绝对路径。

```bash
#  安装
regsvr32 overlayicons-x64.dll
# 卸载
regsvr32 -U overlayicons-x64.dll
```

## Demo

![](C:\Users\HP\Desktop\examples\explorer-shell-examples\docs\.context-menu-windows.assets\2022-12-14-09-06-17-image.png)

![](C:\Users\HP\Desktop\examples\explorer-shell-examples\docs\.context-menu-windows.assets\2022-12-14-14-54-00-image.png)

![](C:\Users\HP\Desktop\examples\explorer-shell-examples\docs\.windows-shell-overlayicons.assets\2022-12-16-17-17-37-image.png)