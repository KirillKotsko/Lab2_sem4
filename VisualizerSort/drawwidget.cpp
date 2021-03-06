#include "drawwidget.h"
#include "sorts.cpp"
#include "mainwidget.h"
#include <QDebug>

#include <QThread>

#define UPDATE_INTERVAL_MS 1

DrawWidget::DrawWidget(QWidget *parent) :
    QWidget(parent)
{
    for (int i = 0; i < NUMBERS_COUNT; i++)
        ints[i] = 10+i*5;
    current_number = 0;
    shuffle();
    sorted = false;
    sort_in_process = false;
    I = 0; J = 0;
    current_mode = 0;
    sort_action = nullptr;
    connect(&tim, SIGNAL(timeout()), this, SLOT(draw()));
    connect(parent, SIGNAL(startSort(int)), this, SLOT(init(int)));
    connect(parent, SIGNAL(stopSort()), this, SLOT(stop_process()));
    tim.start(UPDATE_INTERVAL_MS);

}

DrawWidget::~DrawWidget()
{
    delete sort_action;
}

void DrawWidget::init(int _mode)
{
    current_mode = _mode;
    sort_action = nullptr;
    tim.start(UPDATE_INTERVAL_MS);
}

void DrawWidget::stop_process()
{
    tim.stop();
}

void DrawWidget::shuffle()
{
    shuffle_array(ints, NUMBERS_COUNT);
    emit sortIsDone(-5);
    sorted = false;
    current_number = 0;
    current_mode = 0;
    tim.start(UPDATE_INTERVAL_MS);
}

void DrawWidget::draw()
{
    current_number = NUMBERS_COUNT;
    switch (current_mode)
    {
    case 1:
    {
        if (!sorted) emit sortIsDone(time_elapsed.currentTime().second());
        if (sort_action == nullptr)
            sort_action = new BubbleSort(ints, NUMBERS_COUNT);
        if (!sort_action->sorted() && !sort_in_process)
        {
            sort_in_process = true;
            sort_action->init(ints, NUMBERS_COUNT);
            time_elapsed.restart();
        }
        if (sort_action->sorted()) tim.stop();
    sort_action->step();
    update();
    break;
    }
    case 2:
    {
        if (!sorted) emit sortIsDone(time_elapsed.currentTime().second());
        if (sort_action == nullptr)
            sort_action = new InsertionSort(ints, NUMBERS_COUNT);
        if (!sort_action->sorted() && !sort_in_process)
        {
            sort_in_process = true;
            sort_action->init(ints, NUMBERS_COUNT);
            time_elapsed.restart();
        }
        if (sort_action->sorted()) tim.stop();
        sort_action->step();
        update();
        break;
    }
    case 3:
    {
        if (!sorted) emit sortIsDone(time_elapsed.currentTime().second());
        if (sort_action == nullptr)
            sort_action = new SelectionSort(ints, NUMBERS_COUNT);
        if (!sort_action->sorted() && !sort_in_process)
        {
            sort_in_process = true;
            sort_action->init(ints, NUMBERS_COUNT);
            time_elapsed.restart();
        }
        if (sort_action->sorted()) tim.stop();
        sort_action->step();
        update();
        break;
    }
    default:
    {
        drawAll();
        break;
    }
    }
}

void DrawWidget::drawAll()
{
    update();
    current_number++;
    if (current_number >= NUMBERS_COUNT){
        tim.stop();
    }
}

void DrawWidget::paintEvent(QPaintEvent *e)
{
    QWidget::paintEvent(e);
    QPainter painter(this);
    painter.setRenderHint(QPainter::Antialiasing);
    painter.setPen(Qt::black);
    painter.setBrush(QColor::fromRgb(250, 250, 250));
    QRect bg(0, 0, width(), height());
    painter.fillRect(bg, painter.brush());
    painter.drawRect(bg);
    painter.setBrush(Qt::red);
    for (int i = 0; i < current_number; i++)
    {
        QRect rect(17*i, height(), 15, -ints[i]);
        painter.fillRect(rect, painter.brush());
        painter.drawRect(rect);
    }
}
