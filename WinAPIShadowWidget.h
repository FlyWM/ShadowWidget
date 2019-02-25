/**
 * 去掉标题之后添加边框阴影
 *
 * WinAPIShadowWidget.h
 * 调用Windows相关AP来实现边框阴影的头文件。
 *
 * FlyWM_
 * GitHub: https://github.com/FlyWM
 * CSDN: https://blog.csdn.net/a844651990
 *
 */

#ifndef WINAPISHADOWWIDGET_H
#define WINAPISHADOWWIDGET_H

#include <QWidget>

class WinAPIShadowWidget : public QWidget
{
    Q_OBJECT
public:
    explicit WinAPIShadowWidget(QWidget *parent = nullptr);

    bool nativeEvent(const QByteArray &eventType, void *message, long *result);

public slots:
};

#endif // WINAPISHADOWWIDGET_H
