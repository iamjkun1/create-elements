#ifndef FLASHITEM_H
#define FLASHITEM_H

#include <QObject>
#include <QPainter>
#include <QGraphicsItem>

//实现圆的闪烁功能。闪烁效果是通过利用定时器的
//timer Event() 函数定时重画圆的颜色来实现的。
class FlashItem : public QObject ,public QGraphicsItem
{
    Q_OBJECT
public:
    explicit FlashItem(QObject *parent = 0);
    QRectF boundingRect() const;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);
    void timerEvent(QTimerEvent *);

private:
    bool flash;
    QTimer *timer;


signals:

public slots:
};

#endif // FLASHITEM_H
