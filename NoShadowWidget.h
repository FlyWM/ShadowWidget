/**
 * 去掉标题之后添加边框阴影
 *
 * NoShadowWidget.h
 * 去掉标题栏之后无边框阴影的头文件。
 *
 * FlyWM_
 * GitHub: https://github.com/FlyWM
 * CSDN: https://blog.csdn.net/a844651990
 *
 */

#ifndef NOSHADOWWIDGET_H
#define NOSHADOWWIDGET_H

#include <QWidget>

class NoShadowWidget : public QWidget
{
    Q_OBJECT
public:
    explicit NoShadowWidget(QWidget *parent = nullptr);

signals:

public slots:
};

#endif // NOSHADOWWIDGET_H
