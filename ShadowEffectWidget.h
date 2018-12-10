/**
 * 去掉标题之后添加边框阴影
 *
 * ShadowEffectWidget.h
 * 使用Qt的QGraphicsDropShadowEffect类来实现边框阴影的头文件。
 *
 * FlyWM_
 * GitHub: https://github.com/FlyWM
 * CSDN: https://blog.csdn.net/a844651990
 *
 */

#ifndef SHADOWEFFECTWIDGET_H
#define SHADOWEFFECTWIDGET_H

#include <QWidget>

class ShadowEffectWidget : public QWidget
{
    Q_OBJECT
public:
    explicit ShadowEffectWidget(QWidget *parent = nullptr);

signals:

public slots:
};

#endif // SHADOWEFFECTWIDGET_H
