/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *MonitorPB;
    QWidget *widget;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QTextEdit *HumiTE;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QTextEdit *TempTE;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QTextEdit *SR04TE;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *openmjpgstreamer;
    QPushButton *openserverPB;
    QVBoxLayout *verticalLayout_4;
    QPushButton *BeepPB;
    QPushButton *LightPB;
    QWidget *widget2;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *closemjpgstreamer;
    QPushButton *closeserverPB;
    QVBoxLayout *verticalLayout_2;
    QPushButton *ledonPB;
    QPushButton *ledoffPB;
    QPushButton *motorPB;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(680, 480);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        MonitorPB = new QPushButton(centralwidget);
        MonitorPB->setObjectName(QString::fromUtf8("MonitorPB"));
        MonitorPB->setGeometry(QRect(500, 340, 111, 71));
        widget = new QWidget(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(9, 9, 232, 172));
        verticalLayout_3 = new QVBoxLayout(widget);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMinimumSize(QSize(120, 50));
        label->setMaximumSize(QSize(120, 50));
        QFont font;
        font.setPointSize(14);
        label->setFont(font);

        horizontalLayout_2->addWidget(label);

        HumiTE = new QTextEdit(widget);
        HumiTE->setObjectName(QString::fromUtf8("HumiTE"));
        HumiTE->setMinimumSize(QSize(100, 50));
        HumiTE->setMaximumSize(QSize(100, 50));

        horizontalLayout_2->addWidget(HumiTE);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setMinimumSize(QSize(120, 50));
        label_2->setMaximumSize(QSize(120, 50));
        label_2->setFont(font);

        horizontalLayout->addWidget(label_2);

        TempTE = new QTextEdit(widget);
        TempTE->setObjectName(QString::fromUtf8("TempTE"));
        TempTE->setMaximumSize(QSize(100, 50));

        horizontalLayout->addWidget(TempTE);


        verticalLayout->addLayout(horizontalLayout);


        verticalLayout_3->addLayout(verticalLayout);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_3 = new QLabel(widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setMinimumSize(QSize(120, 50));
        label_3->setMaximumSize(QSize(120, 50));
        label_3->setFont(font);
        label_3->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(label_3);

        SR04TE = new QTextEdit(widget);
        SR04TE->setObjectName(QString::fromUtf8("SR04TE"));
        SR04TE->setMaximumSize(QSize(100, 50));

        horizontalLayout_3->addWidget(SR04TE);


        verticalLayout_3->addLayout(horizontalLayout_3);

        widget1 = new QWidget(centralwidget);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setGeometry(QRect(9, 207, 464, 102));
        horizontalLayout_5 = new QHBoxLayout(widget1);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        openmjpgstreamer = new QPushButton(widget1);
        openmjpgstreamer->setObjectName(QString::fromUtf8("openmjpgstreamer"));
        openmjpgstreamer->setMinimumSize(QSize(100, 100));
        QFont font1;
        font1.setPointSize(16);
        openmjpgstreamer->setFont(font1);

        horizontalLayout_5->addWidget(openmjpgstreamer);

        openserverPB = new QPushButton(widget1);
        openserverPB->setObjectName(QString::fromUtf8("openserverPB"));
        openserverPB->setMinimumSize(QSize(100, 100));
        openserverPB->setFont(font1);

        horizontalLayout_5->addWidget(openserverPB);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        BeepPB = new QPushButton(widget1);
        BeepPB->setObjectName(QString::fromUtf8("BeepPB"));
        BeepPB->setFont(font1);

        verticalLayout_4->addWidget(BeepPB);

        LightPB = new QPushButton(widget1);
        LightPB->setObjectName(QString::fromUtf8("LightPB"));
        LightPB->setFont(font1);

        verticalLayout_4->addWidget(LightPB);


        horizontalLayout_5->addLayout(verticalLayout_4);

        widget2 = new QWidget(centralwidget);
        widget2->setObjectName(QString::fromUtf8("widget2"));
        widget2->setGeometry(QRect(9, 315, 421, 112));
        horizontalLayout_4 = new QHBoxLayout(widget2);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        closemjpgstreamer = new QPushButton(widget2);
        closemjpgstreamer->setObjectName(QString::fromUtf8("closemjpgstreamer"));
        closemjpgstreamer->setMinimumSize(QSize(100, 100));
        closemjpgstreamer->setFont(font1);

        horizontalLayout_4->addWidget(closemjpgstreamer);

        closeserverPB = new QPushButton(widget2);
        closeserverPB->setObjectName(QString::fromUtf8("closeserverPB"));
        closeserverPB->setMinimumSize(QSize(100, 100));
        closeserverPB->setFont(font1);

        horizontalLayout_4->addWidget(closeserverPB);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        ledonPB = new QPushButton(widget2);
        ledonPB->setObjectName(QString::fromUtf8("ledonPB"));
        ledonPB->setFont(font1);

        verticalLayout_2->addWidget(ledonPB);

        ledoffPB = new QPushButton(widget2);
        ledoffPB->setObjectName(QString::fromUtf8("ledoffPB"));
        ledoffPB->setFont(font1);

        verticalLayout_2->addWidget(ledoffPB);

        motorPB = new QPushButton(widget2);
        motorPB->setObjectName(QString::fromUtf8("motorPB"));
        motorPB->setFont(font1);

        verticalLayout_2->addWidget(motorPB);


        horizontalLayout_4->addLayout(verticalLayout_2);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 680, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        MonitorPB->setText(QApplication::translate("MainWindow", "Monitor", nullptr));
        label->setText(QApplication::translate("MainWindow", "    Humidity", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "Temperature", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "Distance", nullptr));
        openmjpgstreamer->setText(QApplication::translate("MainWindow", "open mjpg-streamer", nullptr));
        openserverPB->setText(QApplication::translate("MainWindow", "open server", nullptr));
        BeepPB->setText(QApplication::translate("MainWindow", "Beep switch", nullptr));
        LightPB->setText(QApplication::translate("MainWindow", "Light switch", nullptr));
        closemjpgstreamer->setText(QApplication::translate("MainWindow", "close mjpg-streamer", nullptr));
        closeserverPB->setText(QApplication::translate("MainWindow", "close server", nullptr));
        ledonPB->setText(QApplication::translate("MainWindow", "led on", nullptr));
        ledoffPB->setText(QApplication::translate("MainWindow", "led off", nullptr));
        motorPB->setText(QApplication::translate("MainWindow", "motor", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
