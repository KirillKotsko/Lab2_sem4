/**
*   @file drawwidget.h
*	@author Kirill Kotsko
*	@version 1.1
*/
#ifndef DRAWWIDGET_H
#define DRAWWIDGET_H

#include <QWidget>
#include <QPainter>
#include <QTimer>
#include <QTime>

#include "MementoSorting.h"
#include "sorting.h"

#define NUMBERS_COUNT 111

/*!
 * @brief Class that drow sorting algo
 */
class DrawWidget : public QWidget
{

    Q_OBJECT

public:

    /*!
     * @brief constructor
     * @param parent
     */
    DrawWidget(QWidget *parent = nullptr);
    ~DrawWidget();

protected:

    /*!
     * @brief paint of diagram
     * @param e
     */
    void paintEvent(QPaintEvent *e);

    /*!
     * @brief timer
     */
    QTimer tim;

    /*!
     * @brief array to draw
     */
    int ints[NUMBERS_COUNT];
    int32_t current_number;
    bool sorted;

    /*!
     * @brief sort in process
     */
    bool sort_in_process;
    int I, J;

    /*!
     * @brief index of algo
     */
    int current_mode;
    QTime time_elapsed;

    /*!
     * @brief sort algo
     */
    Sorting *sort_action;


    void drawAll();
protected slots:
    /*!
     * @brief initialization
     * @param mode
     */
    void init(int _mode);

    /*!
     * @brief stop process
     */
    void stop_process();
public slots:

    /*!
     * @brief draw of each step
     */
    void draw();

    /*!
     * @brief shuffle array
     */
    void shuffle();

signals:
    void sortIsDone(int ms_time);
    void updateSort();

};

#endif // DRAWWIDGET_H
