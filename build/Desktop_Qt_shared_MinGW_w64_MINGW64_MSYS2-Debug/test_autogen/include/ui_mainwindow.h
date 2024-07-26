/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *widget;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_3;
    QHBoxLayout *horizontalLayout_2;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QLabel *label;
    QLabel *label_3;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *inputMaskLineEdit;
    QLineEdit *outputPathLineEdit;
    QLineEdit *xorValueLineEdit;
    QVBoxLayout *verticalLayout_3;
    QCheckBox *deleteFilesCheckBox;
    QCheckBox *overwriteFilesCheckBox;
    QCheckBox *timerCheckBox;
    QSpinBox *intervalSpinBox;
    QPushButton *startButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        widget = new QWidget(centralwidget);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(290, 140, 427, 138));
        verticalLayout_4 = new QVBoxLayout(widget);
        verticalLayout_4->setObjectName("verticalLayout_4");
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        label_2 = new QLabel(widget);
        label_2->setObjectName("label_2");

        verticalLayout->addWidget(label_2);

        label = new QLabel(widget);
        label->setObjectName("label");

        verticalLayout->addWidget(label);

        label_3 = new QLabel(widget);
        label_3->setObjectName("label_3");

        verticalLayout->addWidget(label_3);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        inputMaskLineEdit = new QLineEdit(widget);
        inputMaskLineEdit->setObjectName("inputMaskLineEdit");

        verticalLayout_2->addWidget(inputMaskLineEdit);

        outputPathLineEdit = new QLineEdit(widget);
        outputPathLineEdit->setObjectName("outputPathLineEdit");

        verticalLayout_2->addWidget(outputPathLineEdit);

        xorValueLineEdit = new QLineEdit(widget);
        xorValueLineEdit->setObjectName("xorValueLineEdit");

        verticalLayout_2->addWidget(xorValueLineEdit);


        horizontalLayout->addLayout(verticalLayout_2);


        horizontalLayout_2->addLayout(horizontalLayout);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        deleteFilesCheckBox = new QCheckBox(widget);
        deleteFilesCheckBox->setObjectName("deleteFilesCheckBox");

        verticalLayout_3->addWidget(deleteFilesCheckBox);

        overwriteFilesCheckBox = new QCheckBox(widget);
        overwriteFilesCheckBox->setObjectName("overwriteFilesCheckBox");

        verticalLayout_3->addWidget(overwriteFilesCheckBox);

        timerCheckBox = new QCheckBox(widget);
        timerCheckBox->setObjectName("timerCheckBox");

        verticalLayout_3->addWidget(timerCheckBox);


        horizontalLayout_2->addLayout(verticalLayout_3);


        horizontalLayout_3->addLayout(horizontalLayout_2);

        intervalSpinBox = new QSpinBox(widget);
        intervalSpinBox->setObjectName("intervalSpinBox");

        horizontalLayout_3->addWidget(intervalSpinBox);


        verticalLayout_4->addLayout(horizontalLayout_3);

        startButton = new QPushButton(widget);
        startButton->setObjectName("startButton");

        verticalLayout_4->addWidget(startButton);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 26));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "InputMask", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "OutputMask", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "XOR_value", nullptr));
        deleteFilesCheckBox->setText(QCoreApplication::translate("MainWindow", "DeleteFiles", nullptr));
        overwriteFilesCheckBox->setText(QCoreApplication::translate("MainWindow", "OverwriteFiles", nullptr));
        timerCheckBox->setText(QCoreApplication::translate("MainWindow", "Timer", nullptr));
        startButton->setText(QCoreApplication::translate("MainWindow", "Start", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
