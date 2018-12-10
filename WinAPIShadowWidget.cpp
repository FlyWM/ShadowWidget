/**
 * 去掉标题之后添加边框阴影
 *
 * WinAPIShadowWidget.cpp
 * 调用Windows相关AP来实现边框阴影的cpp文件。
 *
 * FlyWM_
 * GitHub: https://github.com/FlyWM
 * CSDN: https://blog.csdn.net/a844651990
 *
 */

#include "WinAPIShadowWidget.h"
#include "windwmapi.h"

WinAPIShadowWidget::WinAPIShadowWidget(QWidget *parent)
    : QWidget(parent)
{
    resize(400, 300);
    setWindowFlags(windowFlags() | Qt::FramelessWindowHint);
    HWND hwnd = (HWND)this->winId();
    DWORD style = ::GetWindowLong(hwnd, GWL_STYLE);
    ::SetWindowLong(hwnd, GWL_STYLE, style | WS_MAXIMIZEBOX | WS_THICKFRAME | WS_CAPTION);
    //we better left 1 piexl width of border untouch, so OS can draw nice shadow around it
    const MARGINS shadow = { 1, 1, 1, 1 };
    WinDwmapi::instance()->DwmExtendFrameIntoClientArea(HWND(winId()), &shadow);
}
