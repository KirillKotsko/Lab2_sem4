#ifndef MAINWIDGET_H
#define MAINWIDGET_H

#include <QWidget>
#include "drawwidget.h"
#include "MementoSorting.h"

#include <QTimer>

#define NUMBERS_COUNT 111

namespace Ui {
class MainWidget;
}

class MainWidget : public QWidget
{
    Q_OBJECT

public:
    explicit MainWidget(QWidget *parent = nullptr);
    ~MainWidget();
private slots:
    void on_btn_sort_clicked();
    void showSortTime(int elapsed_time);

    void on_btn_stop_clicked();

private:
    Ui::MainWidget *ui;
    double my_timer = 0;

signals:
    void startSort(int _mode);
    void stopSort();
};

#endif // MAINWIDGET_H
