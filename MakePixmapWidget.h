/**
 * 去掉标题之后添加边框阴影
 *
 * MakePixmapWidget.h
 * 构造出边框阴影QImage方法的头文件。
 *
 * FlyWM_
 * GitHub: https://github.com/FlyWM
 * CSDN: https://blog.csdn.net/a844651990
 *
 */

#ifndef MAKEPIXMAPWIDGET_H
#define MAKEPIXMAPWIDGET_H

#include <QWidget>

class QPainter;
class QLineEdit;
class QLabel;

class Skin9GridImage
{
protected:
    QImage m_img;
    QRect m_arrayImageGrid[9];
    //
    bool clear();
public:
    static bool splitRect(const QRect& rcSrc, QPoint ptTopLeft, QRect* parrayRect, int nArrayCount);
//    bool setImage(const CString& strImageFileName, QPoint ptTopLeft);
    bool setImage(const QImage& image, QPoint ptTopLeft);
//    //
//    void draw(QPainter* p, QRect rc, int nAlpha) const;
    void drawBorder(QPainter* p, QRect rc) const;
//    bool valid() const;
//    //
//    QSize actualSize() const { return m_img.size(); }
};


class ShadowWidget : public QWidget
{
    Q_OBJECT
public:
    explicit ShadowWidget(int shadowSize, QWidget *parent = nullptr);

    virtual void paintEvent(QPaintEvent *e);

private:
    Skin9GridImage* m_shadow;
    int m_shadowSize;
};

class MakePixmapWidget : public QWidget
{
    Q_OBJECT
public:
    explicit MakePixmapWidget(QWidget *parent = nullptr);

signals:

public slots:
};

#endif // MAKEPIXMAPWIDGET_H
