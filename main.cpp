/**
 * 去掉标题之后添加边框阴影
 *
 * main.cpp
 * 入口函数文件。
 *
 * FlyWM_
 * GitHub: https://github.com/FlyWM
 * CSDN: https://blog.csdn.net/a844651990
 *
 */

#include <QApplication>
#include "ShadowEffectWidget.h"
#include "WinAPIShadowWidget.h"
#include "DrawBorderPixmapWidget.h"
#include "MakePixmapWidget.h"
#include "NoShadowWidget.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    WinAPIShadowWidget w;
    w.show();

    return a.exec();
}
