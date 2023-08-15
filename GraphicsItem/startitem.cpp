#include "startitem.h"

// Startltem() 构造函数中仅完成读取图片信息的工作。
StartItem::StartItem()
{

    pix.load("星星.png");
}

//定义图元的边界函数 boundingRectO, 它是所有自定义图元均必须实现的函数
QRectF StartItem::boundingRect() const{

    return QRectF(-pix.width()/2, -pix.height()/2, pix.width(), pix.height());
}

void StartItem::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget){

    painter->drawPixmap(boundingRect().topLeft(), pix);
}
