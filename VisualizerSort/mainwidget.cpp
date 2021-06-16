#include "mainwidget.h"
#include "ui_mainwidget.h"

#include <QPainter>
#include <QPaintEvent>


#include <algorithm>

#include "sorts.cpp"


MainWidget::MainWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MainWidget)
{
    ui->setupUi(this);
    connect(ui->btn_shuffle, SIGNAL(clicked()), ui->wg_screen, SLOT(shuffle()));
    connect(ui->wg_screen, SIGNAL(sortIsDone(int)), this, SLOT(showSortTime(int)));
    ui->lbl_el_time->setText(QString::number(0));
}

MainWidget::~MainWidget()
{
    delete ui;
}

void MainWidget::showSortTime(int time_elapsed)
{
    if (time_elapsed == -5) my_timer = 0;
    else my_timer = my_timer + 0.01;
    ui->lbl_el_time->setText(QString::number(my_timer) + " sec.");
}

void MainWidget::on_btn_sort_clicked()
{
    emit startSort(ui->cbx_sorts->currentIndex()+1);
}

void MainWidget::on_btn_stop_clicked()
{
    emit stopSort();
}
