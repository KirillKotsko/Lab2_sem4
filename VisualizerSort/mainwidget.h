/**
*   @file mainwidget.h
*	@author Kirill Kotsko
*	@version 1.1
*/
#ifndef MAINWIDGET_H
#define MAINWIDGET_H

#include <QWidget>
#include "drawwidget.h"
#include "MementoSorting.h"
#include "sorting.h"
#include "unit_test_framework.h"

#include <QTimer>

#define NUMBERS_COUNT 111

namespace Ui {
class MainWidget;
}

/*!
 * @brief Main Widget class, UI
 */
class MainWidget : public QWidget
{
    Q_OBJECT

public:
    /*!
     * @brief constructor
     * @param parent
     */
    explicit MainWidget(QWidget *parent = nullptr);
    ~MainWidget();
private slots:
    void on_btn_sort_clicked();
    void showSortTime(int elapsed_time);

    void on_btn_stop_clicked();

private:

    /*!
     * @brief user interface
     */
    Ui::MainWidget *ui;

    /*!
     * @brief timer
     */
    double my_timer = 0;

signals:
    /*!
     * @brief start sort
     * @param mode
     */
    void startSort(int _mode);

    /*!
     * @brief stop sort
     */
    void stopSort();
};

#endif // MAINWIDGET_H
