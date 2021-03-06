#ifndef WIDGET_H
#define WIDGET_H
#include "genkeyblogic.h"
#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

private:
    Ui::Widget *ui;
    GenKeybLogic *genKeyb;
public slots:
    void onBtnClicked();
    void onDispChanged(QString);
};
#endif // WIDGET_H
