/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "interface.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionChange_Size;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *pushButtonPV;
    QPushButton *pushButtonCV;
    QPushButton *pushButtonPB;
    QPushButton *pushButtonCB;
    QPushButton *pushButtonPS;
    QPushButton *pushButtonCS;
    QPushButton *pushButtonPE;
    QPushButton *pushButtonCE;
    QPushButton *pushButtonSAVE;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QVBoxLayout *verticalLayout;
    QSlider *horizontalSliderR;
    QSlider *horizontalSliderG;
    QSlider *horizontalSliderB;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_4;
    QSlider *verticalSliderA;
    QHBoxLayout *horizontalLayout_19;
    Interface *widget;
    QSplitter *splitter;
    QLabel *label_5;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_12;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_8;
    QSlider *horizontalSliderSizeX;
    QLCDNumber *lcdNumberSizeX;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_13;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_9;
    QSlider *horizontalSliderSizeY;
    QLCDNumber *lcdNumberSizeY;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout_14;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_10;
    QSlider *horizontalSliderSizeZ;
    QLCDNumber *lcdNumberSizeZ;
    QLabel *label_6;
    QWidget *layoutWidget3;
    QHBoxLayout *horizontalLayout_15;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_11;
    QSlider *horizontalSliderRadius;
    QLCDNumber *lcdNumberRadius;
    QLabel *label_7;
    QWidget *layoutWidget4;
    QHBoxLayout *horizontalLayout_16;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_12;
    QSlider *horizontalSliderXradius;
    QLCDNumber *lcdNumberXradius;
    QWidget *layoutWidget5;
    QHBoxLayout *horizontalLayout_17;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_13;
    QSlider *horizontalSliderYradius;
    QLCDNumber *lcdNumberYradius;
    QWidget *layoutWidget6;
    QHBoxLayout *horizontalLayout_18;
    QHBoxLayout *horizontalLayout_11;
    QLabel *label_14;
    QSlider *horizontalSliderZradius;
    QLCDNumber *lcdNumberZradius;
    QHBoxLayout *horizontalLayout_2;
    QSlider *horizontalSliderPLANE;
    QLCDNumber *lcdNumberPLANE;
    QMenuBar *menubar;
    QMenu *menuFile;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(818, 475);
        actionChange_Size = new QAction(MainWindow);
        actionChange_Size->setObjectName("actionChange_Size");
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        verticalLayout_3 = new QVBoxLayout(centralwidget);
        verticalLayout_3->setObjectName("verticalLayout_3");
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        pushButtonPV = new QPushButton(centralwidget);
        pushButtonPV->setObjectName("pushButtonPV");
        pushButtonPV->setMinimumSize(QSize(0, 61));
        pushButtonPV->setMaximumSize(QSize(84, 16777215));

        horizontalLayout_4->addWidget(pushButtonPV);

        pushButtonCV = new QPushButton(centralwidget);
        pushButtonCV->setObjectName("pushButtonCV");
        pushButtonCV->setMinimumSize(QSize(0, 61));
        pushButtonCV->setMaximumSize(QSize(84, 16777215));

        horizontalLayout_4->addWidget(pushButtonCV);

        pushButtonPB = new QPushButton(centralwidget);
        pushButtonPB->setObjectName("pushButtonPB");
        pushButtonPB->setMinimumSize(QSize(0, 61));
        pushButtonPB->setMaximumSize(QSize(84, 16777215));

        horizontalLayout_4->addWidget(pushButtonPB);

        pushButtonCB = new QPushButton(centralwidget);
        pushButtonCB->setObjectName("pushButtonCB");
        pushButtonCB->setMinimumSize(QSize(0, 61));
        pushButtonCB->setMaximumSize(QSize(85, 16777215));

        horizontalLayout_4->addWidget(pushButtonCB);

        pushButtonPS = new QPushButton(centralwidget);
        pushButtonPS->setObjectName("pushButtonPS");
        pushButtonPS->setMinimumSize(QSize(0, 61));
        pushButtonPS->setMaximumSize(QSize(84, 16777215));

        horizontalLayout_4->addWidget(pushButtonPS);

        pushButtonCS = new QPushButton(centralwidget);
        pushButtonCS->setObjectName("pushButtonCS");
        pushButtonCS->setMinimumSize(QSize(0, 61));
        pushButtonCS->setMaximumSize(QSize(84, 16777215));

        horizontalLayout_4->addWidget(pushButtonCS);

        pushButtonPE = new QPushButton(centralwidget);
        pushButtonPE->setObjectName("pushButtonPE");
        pushButtonPE->setMinimumSize(QSize(0, 61));
        pushButtonPE->setMaximumSize(QSize(84, 16777215));

        horizontalLayout_4->addWidget(pushButtonPE);

        pushButtonCE = new QPushButton(centralwidget);
        pushButtonCE->setObjectName("pushButtonCE");
        pushButtonCE->setMinimumSize(QSize(0, 61));
        pushButtonCE->setMaximumSize(QSize(84, 16777215));

        horizontalLayout_4->addWidget(pushButtonCE);

        pushButtonSAVE = new QPushButton(centralwidget);
        pushButtonSAVE->setObjectName("pushButtonSAVE");
        pushButtonSAVE->setMinimumSize(QSize(0, 61));
        pushButtonSAVE->setMaximumSize(QSize(75, 61));

        horizontalLayout_4->addWidget(pushButtonSAVE);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setMaximumSize(QSize(16, 16));

        verticalLayout_2->addWidget(label);

        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setMaximumSize(QSize(16, 16));

        verticalLayout_2->addWidget(label_2);

        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setMaximumSize(QSize(16, 16));

        verticalLayout_2->addWidget(label_3);


        horizontalLayout->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        horizontalSliderR = new QSlider(centralwidget);
        horizontalSliderR->setObjectName("horizontalSliderR");
        horizontalSliderR->setMinimumSize(QSize(11, 0));
        horizontalSliderR->setMaximumSize(QSize(91, 16));
        horizontalSliderR->setOrientation(Qt::Horizontal);

        verticalLayout->addWidget(horizontalSliderR);

        horizontalSliderG = new QSlider(centralwidget);
        horizontalSliderG->setObjectName("horizontalSliderG");
        horizontalSliderG->setMinimumSize(QSize(11, 0));
        horizontalSliderG->setMaximumSize(QSize(91, 16));
        horizontalSliderG->setOrientation(Qt::Horizontal);

        verticalLayout->addWidget(horizontalSliderG);

        horizontalSliderB = new QSlider(centralwidget);
        horizontalSliderB->setObjectName("horizontalSliderB");
        horizontalSliderB->setMinimumSize(QSize(11, 0));
        horizontalSliderB->setMaximumSize(QSize(91, 16));
        horizontalSliderB->setOrientation(Qt::Horizontal);

        verticalLayout->addWidget(horizontalSliderB);


        horizontalLayout->addLayout(verticalLayout);


        horizontalLayout_4->addLayout(horizontalLayout);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName("label_4");
        label_4->setMaximumSize(QSize(16, 16));

        horizontalLayout_3->addWidget(label_4);

        verticalSliderA = new QSlider(centralwidget);
        verticalSliderA->setObjectName("verticalSliderA");
        verticalSliderA->setMinimumSize(QSize(16, 61));
        verticalSliderA->setMaximumSize(QSize(16, 61));
        verticalSliderA->setOrientation(Qt::Vertical);

        horizontalLayout_3->addWidget(verticalSliderA);


        horizontalLayout_4->addLayout(horizontalLayout_3);


        verticalLayout_3->addLayout(horizontalLayout_4);

        horizontalLayout_19 = new QHBoxLayout();
        horizontalLayout_19->setObjectName("horizontalLayout_19");
        widget = new Interface(centralwidget);
        widget->setObjectName("widget");

        horizontalLayout_19->addWidget(widget);

        splitter = new QSplitter(centralwidget);
        splitter->setObjectName("splitter");
        splitter->setOrientation(Qt::Vertical);
        label_5 = new QLabel(splitter);
        label_5->setObjectName("label_5");
        label_5->setMinimumSize(QSize(21, 16));
        label_5->setMaximumSize(QSize(21, 16));
        splitter->addWidget(label_5);
        layoutWidget = new QWidget(splitter);
        layoutWidget->setObjectName("layoutWidget");
        horizontalLayout_12 = new QHBoxLayout(layoutWidget);
        horizontalLayout_12->setObjectName("horizontalLayout_12");
        horizontalLayout_12->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        label_8 = new QLabel(layoutWidget);
        label_8->setObjectName("label_8");
        label_8->setMinimumSize(QSize(49, 0));
        label_8->setMaximumSize(QSize(49, 16777215));

        horizontalLayout_5->addWidget(label_8);

        horizontalSliderSizeX = new QSlider(layoutWidget);
        horizontalSliderSizeX->setObjectName("horizontalSliderSizeX");
        horizontalSliderSizeX->setMinimumSize(QSize(151, 16));
        horizontalSliderSizeX->setMaximumSize(QSize(151, 16777215));
        horizontalSliderSizeX->setOrientation(Qt::Horizontal);

        horizontalLayout_5->addWidget(horizontalSliderSizeX);


        horizontalLayout_12->addLayout(horizontalLayout_5);

        lcdNumberSizeX = new QLCDNumber(layoutWidget);
        lcdNumberSizeX->setObjectName("lcdNumberSizeX");
        lcdNumberSizeX->setMaximumSize(QSize(51, 16));

        horizontalLayout_12->addWidget(lcdNumberSizeX);

        splitter->addWidget(layoutWidget);
        layoutWidget1 = new QWidget(splitter);
        layoutWidget1->setObjectName("layoutWidget1");
        horizontalLayout_13 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_13->setObjectName("horizontalLayout_13");
        horizontalLayout_13->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        label_9 = new QLabel(layoutWidget1);
        label_9->setObjectName("label_9");
        label_9->setMinimumSize(QSize(49, 0));
        label_9->setMaximumSize(QSize(49, 16777215));

        horizontalLayout_6->addWidget(label_9);

        horizontalSliderSizeY = new QSlider(layoutWidget1);
        horizontalSliderSizeY->setObjectName("horizontalSliderSizeY");
        horizontalSliderSizeY->setMinimumSize(QSize(151, 16));
        horizontalSliderSizeY->setMaximumSize(QSize(151, 16777215));
        horizontalSliderSizeY->setOrientation(Qt::Horizontal);

        horizontalLayout_6->addWidget(horizontalSliderSizeY);


        horizontalLayout_13->addLayout(horizontalLayout_6);

        lcdNumberSizeY = new QLCDNumber(layoutWidget1);
        lcdNumberSizeY->setObjectName("lcdNumberSizeY");
        lcdNumberSizeY->setMaximumSize(QSize(51, 16));

        horizontalLayout_13->addWidget(lcdNumberSizeY);

        splitter->addWidget(layoutWidget1);
        layoutWidget2 = new QWidget(splitter);
        layoutWidget2->setObjectName("layoutWidget2");
        horizontalLayout_14 = new QHBoxLayout(layoutWidget2);
        horizontalLayout_14->setObjectName("horizontalLayout_14");
        horizontalLayout_14->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        label_10 = new QLabel(layoutWidget2);
        label_10->setObjectName("label_10");
        label_10->setMinimumSize(QSize(49, 0));
        label_10->setMaximumSize(QSize(49, 16777215));

        horizontalLayout_7->addWidget(label_10);

        horizontalSliderSizeZ = new QSlider(layoutWidget2);
        horizontalSliderSizeZ->setObjectName("horizontalSliderSizeZ");
        horizontalSliderSizeZ->setMinimumSize(QSize(151, 16));
        horizontalSliderSizeZ->setMaximumSize(QSize(151, 16));
        horizontalSliderSizeZ->setOrientation(Qt::Horizontal);

        horizontalLayout_7->addWidget(horizontalSliderSizeZ);


        horizontalLayout_14->addLayout(horizontalLayout_7);

        lcdNumberSizeZ = new QLCDNumber(layoutWidget2);
        lcdNumberSizeZ->setObjectName("lcdNumberSizeZ");
        lcdNumberSizeZ->setMaximumSize(QSize(51, 16));

        horizontalLayout_14->addWidget(lcdNumberSizeZ);

        splitter->addWidget(layoutWidget2);
        label_6 = new QLabel(splitter);
        label_6->setObjectName("label_6");
        label_6->setMinimumSize(QSize(41, 16));
        label_6->setMaximumSize(QSize(41, 16));
        splitter->addWidget(label_6);
        layoutWidget3 = new QWidget(splitter);
        layoutWidget3->setObjectName("layoutWidget3");
        horizontalLayout_15 = new QHBoxLayout(layoutWidget3);
        horizontalLayout_15->setObjectName("horizontalLayout_15");
        horizontalLayout_15->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        label_11 = new QLabel(layoutWidget3);
        label_11->setObjectName("label_11");
        label_11->setMinimumSize(QSize(49, 0));
        label_11->setMaximumSize(QSize(49, 16777215));

        horizontalLayout_8->addWidget(label_11);

        horizontalSliderRadius = new QSlider(layoutWidget3);
        horizontalSliderRadius->setObjectName("horizontalSliderRadius");
        horizontalSliderRadius->setMinimumSize(QSize(151, 16));
        horizontalSliderRadius->setMaximumSize(QSize(151, 16777215));
        horizontalSliderRadius->setOrientation(Qt::Horizontal);

        horizontalLayout_8->addWidget(horizontalSliderRadius);


        horizontalLayout_15->addLayout(horizontalLayout_8);

        lcdNumberRadius = new QLCDNumber(layoutWidget3);
        lcdNumberRadius->setObjectName("lcdNumberRadius");
        lcdNumberRadius->setMaximumSize(QSize(51, 16));

        horizontalLayout_15->addWidget(lcdNumberRadius);

        splitter->addWidget(layoutWidget3);
        label_7 = new QLabel(splitter);
        label_7->setObjectName("label_7");
        label_7->setMinimumSize(QSize(49, 16));
        label_7->setMaximumSize(QSize(49, 16));
        splitter->addWidget(label_7);
        layoutWidget4 = new QWidget(splitter);
        layoutWidget4->setObjectName("layoutWidget4");
        horizontalLayout_16 = new QHBoxLayout(layoutWidget4);
        horizontalLayout_16->setObjectName("horizontalLayout_16");
        horizontalLayout_16->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName("horizontalLayout_9");
        label_12 = new QLabel(layoutWidget4);
        label_12->setObjectName("label_12");
        label_12->setMinimumSize(QSize(49, 0));
        label_12->setMaximumSize(QSize(49, 16777215));

        horizontalLayout_9->addWidget(label_12);

        horizontalSliderXradius = new QSlider(layoutWidget4);
        horizontalSliderXradius->setObjectName("horizontalSliderXradius");
        horizontalSliderXradius->setMinimumSize(QSize(151, 16));
        horizontalSliderXradius->setMaximumSize(QSize(151, 16777215));
        horizontalSliderXradius->setOrientation(Qt::Horizontal);

        horizontalLayout_9->addWidget(horizontalSliderXradius);


        horizontalLayout_16->addLayout(horizontalLayout_9);

        lcdNumberXradius = new QLCDNumber(layoutWidget4);
        lcdNumberXradius->setObjectName("lcdNumberXradius");
        lcdNumberXradius->setMaximumSize(QSize(51, 16));

        horizontalLayout_16->addWidget(lcdNumberXradius);

        splitter->addWidget(layoutWidget4);
        layoutWidget5 = new QWidget(splitter);
        layoutWidget5->setObjectName("layoutWidget5");
        horizontalLayout_17 = new QHBoxLayout(layoutWidget5);
        horizontalLayout_17->setObjectName("horizontalLayout_17");
        horizontalLayout_17->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName("horizontalLayout_10");
        label_13 = new QLabel(layoutWidget5);
        label_13->setObjectName("label_13");
        label_13->setMinimumSize(QSize(49, 0));
        label_13->setMaximumSize(QSize(49, 16777215));

        horizontalLayout_10->addWidget(label_13);

        horizontalSliderYradius = new QSlider(layoutWidget5);
        horizontalSliderYradius->setObjectName("horizontalSliderYradius");
        horizontalSliderYradius->setMinimumSize(QSize(151, 16));
        horizontalSliderYradius->setMaximumSize(QSize(151, 16777215));
        horizontalSliderYradius->setOrientation(Qt::Horizontal);

        horizontalLayout_10->addWidget(horizontalSliderYradius);


        horizontalLayout_17->addLayout(horizontalLayout_10);

        lcdNumberYradius = new QLCDNumber(layoutWidget5);
        lcdNumberYradius->setObjectName("lcdNumberYradius");
        lcdNumberYradius->setMaximumSize(QSize(51, 16));

        horizontalLayout_17->addWidget(lcdNumberYradius);

        splitter->addWidget(layoutWidget5);
        layoutWidget6 = new QWidget(splitter);
        layoutWidget6->setObjectName("layoutWidget6");
        horizontalLayout_18 = new QHBoxLayout(layoutWidget6);
        horizontalLayout_18->setObjectName("horizontalLayout_18");
        horizontalLayout_18->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName("horizontalLayout_11");
        label_14 = new QLabel(layoutWidget6);
        label_14->setObjectName("label_14");
        label_14->setMinimumSize(QSize(49, 0));
        label_14->setMaximumSize(QSize(49, 16777215));

        horizontalLayout_11->addWidget(label_14);

        horizontalSliderZradius = new QSlider(layoutWidget6);
        horizontalSliderZradius->setObjectName("horizontalSliderZradius");
        horizontalSliderZradius->setMinimumSize(QSize(151, 16));
        horizontalSliderZradius->setMaximumSize(QSize(151, 16777215));
        horizontalSliderZradius->setOrientation(Qt::Horizontal);

        horizontalLayout_11->addWidget(horizontalSliderZradius);


        horizontalLayout_18->addLayout(horizontalLayout_11);

        lcdNumberZradius = new QLCDNumber(layoutWidget6);
        lcdNumberZradius->setObjectName("lcdNumberZradius");
        lcdNumberZradius->setMaximumSize(QSize(51, 16));

        horizontalLayout_18->addWidget(lcdNumberZradius);

        splitter->addWidget(layoutWidget6);

        horizontalLayout_19->addWidget(splitter);


        verticalLayout_3->addLayout(horizontalLayout_19);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalSliderPLANE = new QSlider(centralwidget);
        horizontalSliderPLANE->setObjectName("horizontalSliderPLANE");
        horizontalSliderPLANE->setOrientation(Qt::Horizontal);

        horizontalLayout_2->addWidget(horizontalSliderPLANE);

        lcdNumberPLANE = new QLCDNumber(centralwidget);
        lcdNumberPLANE->setObjectName("lcdNumberPLANE");
        lcdNumberPLANE->setMaximumSize(QSize(16777215, 23));

        horizontalLayout_2->addWidget(lcdNumberPLANE);


        verticalLayout_3->addLayout(horizontalLayout_2);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 818, 22));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName("menuFile");
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuFile->menuAction());
        menuFile->addAction(actionChange_Size);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionChange_Size->setText(QCoreApplication::translate("MainWindow", "Change Size", nullptr));
        pushButtonPV->setText(QCoreApplication::translate("MainWindow", "Put Voxel", nullptr));
        pushButtonCV->setText(QCoreApplication::translate("MainWindow", "Cut Voxel", nullptr));
        pushButtonPB->setText(QCoreApplication::translate("MainWindow", "Put Box", nullptr));
        pushButtonCB->setText(QCoreApplication::translate("MainWindow", "Cut Box", nullptr));
        pushButtonPS->setText(QCoreApplication::translate("MainWindow", "Put Sphere", nullptr));
        pushButtonCS->setText(QCoreApplication::translate("MainWindow", "Cut Sphere", nullptr));
        pushButtonPE->setText(QCoreApplication::translate("MainWindow", "Put Ellipsoid", nullptr));
        pushButtonCE->setText(QCoreApplication::translate("MainWindow", "Cut Ellipsoid", nullptr));
        pushButtonSAVE->setText(QCoreApplication::translate("MainWindow", "Save Project", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "R", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "G", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "B", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "A", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Box", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "Size X", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "Size Y", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "Size Z", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "Sphere", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "Radius", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "Ellipsoid", nullptr));
        label_12->setText(QCoreApplication::translate("MainWindow", "X Radius", nullptr));
        label_13->setText(QCoreApplication::translate("MainWindow", "Y Radius", nullptr));
        label_14->setText(QCoreApplication::translate("MainWindow", "Z Radius", nullptr));
        menuFile->setTitle(QCoreApplication::translate("MainWindow", "File", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
