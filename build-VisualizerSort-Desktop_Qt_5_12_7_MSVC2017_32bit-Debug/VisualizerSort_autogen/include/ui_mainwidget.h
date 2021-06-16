/********************************************************************************
** Form generated from reading UI file 'mainwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.12.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWIDGET_H
#define UI_MAINWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>
#include <drawwidget.h>

QT_BEGIN_NAMESPACE

class Ui_MainWidget
{
public:
    QHBoxLayout *horizontalLayout;
    QGridLayout *gridLayout;
    QComboBox *cbx_sorts;
    QLabel *lbl_el_time;
    QPushButton *btn_shuffle;
    DrawWidget *wg_screen;
    QPushButton *btn_stop;
    QPushButton *btn_sort;

    void setupUi(QWidget *MainWidget)
    {
        if (MainWidget->objectName().isEmpty())
            MainWidget->setObjectName(QString::fromUtf8("MainWidget"));
        MainWidget->resize(1211, 637);
        MainWidget->setMinimumSize(QSize(410, 0));
        MainWidget->setMaximumSize(QSize(16777215, 16777215));
        horizontalLayout = new QHBoxLayout(MainWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setSizeConstraint(QLayout::SetMaximumSize);
        gridLayout->setVerticalSpacing(5);
        cbx_sorts = new QComboBox(MainWidget);
        cbx_sorts->addItem(QString());
        cbx_sorts->addItem(QString());
        cbx_sorts->addItem(QString());
        cbx_sorts->setObjectName(QString::fromUtf8("cbx_sorts"));
        QFont font;
        font.setFamily(QString::fromUtf8("Times New Roman"));
        font.setPointSize(14);
        cbx_sorts->setFont(font);

        gridLayout->addWidget(cbx_sorts, 0, 0, 1, 1);

        lbl_el_time = new QLabel(MainWidget);
        lbl_el_time->setObjectName(QString::fromUtf8("lbl_el_time"));
        lbl_el_time->setFont(font);

        gridLayout->addWidget(lbl_el_time, 0, 6, 1, 1);

        btn_shuffle = new QPushButton(MainWidget);
        btn_shuffle->setObjectName(QString::fromUtf8("btn_shuffle"));
        btn_shuffle->setFont(font);

        gridLayout->addWidget(btn_shuffle, 0, 1, 1, 1);

        wg_screen = new DrawWidget(MainWidget);
        wg_screen->setObjectName(QString::fromUtf8("wg_screen"));

        gridLayout->addWidget(wg_screen, 1, 0, 1, 7);

        btn_stop = new QPushButton(MainWidget);
        btn_stop->setObjectName(QString::fromUtf8("btn_stop"));
        btn_stop->setFont(font);

        gridLayout->addWidget(btn_stop, 0, 4, 1, 2);

        btn_sort = new QPushButton(MainWidget);
        btn_sort->setObjectName(QString::fromUtf8("btn_sort"));
        btn_sort->setFont(font);

        gridLayout->addWidget(btn_sort, 0, 2, 1, 2);


        horizontalLayout->addLayout(gridLayout);


        retranslateUi(MainWidget);

        QMetaObject::connectSlotsByName(MainWidget);
    } // setupUi

    void retranslateUi(QWidget *MainWidget)
    {
        MainWidget->setWindowTitle(QApplication::translate("MainWidget", "Visual Sort", nullptr));
        cbx_sorts->setItemText(0, QApplication::translate("MainWidget", "\320\221\321\203\320\273\321\214\320\261\320\260\321\210\320\272\320\276\320\262\320\260", nullptr));
        cbx_sorts->setItemText(1, QApplication::translate("MainWidget", "\320\222\321\201\321\202\320\260\320\262\320\272\320\260\320\274\320\270", nullptr));
        cbx_sorts->setItemText(2, QApplication::translate("MainWidget", "\320\222\320\270\320\261\320\276\321\200\320\276\320\274", nullptr));

        lbl_el_time->setText(QApplication::translate("MainWidget", "TextLabel", nullptr));
        btn_shuffle->setText(QApplication::translate("MainWidget", "\320\237\320\265\321\200\320\265\321\202\320\260\321\201\321\203\320\262\320\260\321\202\320\270", nullptr));
        btn_stop->setText(QApplication::translate("MainWidget", "\320\241\321\202\320\276\320\277", nullptr));
        btn_sort->setText(QApplication::translate("MainWidget", "\320\241\320\276\321\200\321\202\321\203\320\262\320\260\321\202\320\270", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWidget: public Ui_MainWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWIDGET_H
