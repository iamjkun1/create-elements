#include "flashitem.h"

//闪烁圆
FlashItem::FlashItem(QObject *parent) : QObject(parent)
{

    flash = true;  //为颜色切换标识赋初值
    setFlag(ItemIsMovable);  //可移动
    startTimer(1000);  //1秒
}

//定义图元边界的函数 boundingRect(), 完成以图元坐标系为基础，增加两个像素点的冗余工作。
QRectF FlashItem::boundingRect() const{

    qreal adjust = 2;
    return QRectF(-10-adjust, -10-adjust, 43+adjust, 43+adjust);
}

//图元重绘
void FlashItem::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget){

    painter->setPen(Qt::NoPen); //闪烁图元的阴影区不绘制边线
    painter->setBrush(Qt::darkGray);  //深灰色
    painter->drawEllipse(-7,-7,40,40);
    painter->setPen(QPen(Qt::black, 0));
    painter->setBrush(flash?(Qt::red):(Qt::yellow));
    painter->drawEllipse(-10, -10, 40, 40);

}

//定时器响应函数 timerEvent() 完成颜色切换标识的反置，并在每次反置后调用 update() 函数
//重绘图元以实现闪烁的效果。
void FlashItem::timerEvent(QTimerEvent *){

    flash = !flash;
    update();
}
