/**
 * 去掉标题之后添加边框阴影
 *
 * NoShadowWidget.cpp
 * 去掉标题栏之后无边框阴影的cpp文件。
 *
 * FlyWM_
 * GitHub: https://github.com/FlyWM
 * CSDN: https://blog.csdn.net/a844651990
 *
 */
#include "NoShadowWidget.h"

NoShadowWidget::NoShadowWidget(QWidget *parent)
    : QWidget(parent)
{
    setWindowFlags(Qt::FramelessWindowHint);
}
