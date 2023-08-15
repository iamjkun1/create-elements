#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QMenuBar>
#include <QGraphicsEllipseItem>

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void initScene();  //初始化场景
    void createsActions();  //创建主窗体的所有动作
    void createMenus();  //创建主窗口的菜单栏

public slots:
    void slotNew();  //新建一个显示窗体
    void slotClear();  //清除
    void slotAddEllipseItem();  //场景加入一个椭圆图元
    void slotAddPolygonItem(); //多边形图元
    void slotAddTextItem();  //文字图元
    void slotAddRectItem();   //长方形
    void slotAddAlphaItem();  //蝴蝶图片
    void slotAddFlashItem();  //图元闪烁
    void slotAddAnimationItem();  //星形移动

private:
    QGraphicsScene *scene;
    QAction *newAct;
    QAction *clearAct;
    QAction *exitAct;
    QAction *addEllipseItemAct;
    QAction *addPolygonItemAct;
    QAction *addTextItemAct;
    QAction *addRectItemAct;
    QAction *addAlphaItemAct;
    QAction *addFlashItemAct;
    QAction *addAnimItemAct;
};
#endif // MAINWINDOW_H
