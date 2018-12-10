/**
 * 去掉标题之后添加边框阴影
 *
 * DrawBorderPixmapWidget.cpp
 * 使用Qt的qDrawBorderPixmap函数来实现阴影边框的实现cpp文件。
 *
 * FlyWM_
 * GitHub: https://github.com/FlyWM
 * CSDN: https://blog.csdn.net/a844651990
 *
 */

#include <QPainter>
#include <qdrawutil.h>
#include <QLayout>
#include <QStyleOption>
#include <QPushButton>
#include "DrawBorderPixmapWidget.h"

DrawBorderPixmapWidget::DrawBorderPixmapWidget(QWidget *parent)
    : QWidget(parent)
{
    resize(400, 300);
    setWindowFlags(Qt::FramelessWindowHint);
    setAttribute(Qt::WA_TranslucentBackground);
}

void DrawBorderPixmapWidget::paintEvent(QPaintEvent *e)
{
    Q_UNUSED(e)

    QPainter painter(this);
    QPixmap pixmap(":/client-shadow.png");
    qDrawBorderPixmap(&painter, this->rect(), QMargins(8, 8, 8, 8), pixmap);
    // 绘制中心区域的背景色（不然会是透明的）
    QRect rect(this->rect().x()+8, this->rect().y()+8, this->rect().width()-16, this->rect().height()-16);
    painter.fillRect(rect, QColor(255, 255, 255));
}

