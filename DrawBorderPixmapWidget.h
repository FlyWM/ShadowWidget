/**
 * 去掉标题之后添加边框阴影
 *
 * DrawBorderPixmapWidget.h
 * 使用Qt的qDrawBorderPixmap函数来实现阴影边框的头文件。
 *
 * FlyWM_
 * GitHub: https://github.com/FlyWM
 * CSDN: https://blog.csdn.net/a844651990
 *
 */

#ifndef DRAWBORDERPIXMAPWIDGET_H
#define DRAWBORDERPIXMAPWIDGET_H

#include <QWidget>

class DrawBorderPixmapWidget : public QWidget
{
    Q_OBJECT
public:
    explicit DrawBorderPixmapWidget(QWidget *parent = nullptr);

    virtual void paintEvent(QPaintEvent *e);

signals:

public slots:
};

#endif // DRAWBORDERPIXMAPWIDGET_H
