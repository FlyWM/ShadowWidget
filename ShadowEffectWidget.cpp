/**
 * 去掉标题之后添加边框阴影
 *
 * ShadowEffectWidget.cpp
 * 使用Qt的QGraphicsDropShadowEffect类来实现边框阴影cpp文件。
 *
 * FlyWM_
 * GitHub: https://github.com/FlyWM
 * CSDN: https://blog.csdn.net/a844651990
 *
 */

#include <QGraphicsDropShadowEffect>
#include <QLayout>
#include "ShadowEffectWidget.h"

ShadowEffectWidget::ShadowEffectWidget(QWidget *parent)
    : QWidget(parent)
{
    resize(400, 300);
    setWindowFlags(windowFlags() | Qt::FramelessWindowHint);
    setAttribute(Qt::WA_TranslucentBackground);
    QWidget *pCentralWidget = new QWidget(this);
    pCentralWidget->setStyleSheet("background-color: white");
    QHBoxLayout *pLayout = new QHBoxLayout(this);
    pLayout->addWidget(pCentralWidget);
    pLayout->setContentsMargins(20, 20, 20, 20);

    QGraphicsDropShadowEffect *pEffect = new QGraphicsDropShadowEffect(pCentralWidget);
    pEffect->setOffset(0, 0);
    pEffect->setColor(QColor(QStringLiteral("black")));
    pEffect->setBlurRadius(30);
    pCentralWidget->setGraphicsEffect(pEffect);
}
