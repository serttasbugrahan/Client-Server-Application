/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QListWidget *lstConsole;
    QPushButton *btnClear;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_2;
    QGroupBox *groupBox;
    QFormLayout *formLayout;
    QLabel *label;
    QSpinBox *spnServerPort;
    QPushButton *btnStartServer;
    QLabel *lblConnectionStatus;
    QGroupBox *groupBox_2;
    QFormLayout *formLayout_2;
    QLabel *label_2;
    QLineEdit *lnMessage;
    QPushButton *btnSendToAll;
    QSpacerItem *verticalSpacer;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(535, 329);
        MainWindow->setStyleSheet(QString::fromUtf8("#lblConnectionStatus[state = \"0\"]{\n"
"	\n"
"	background-color: rgb(234, 0, 0);\n"
"}\n"
"\n"
"#lblConnectionStatus[state = \"1\"]{\n"
"	\n"
"	background-color: rgb(67, 135, 100);\n"
"}\n"
""));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(270, 10, 258, 271));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        lstConsole = new QListWidget(layoutWidget);
        lstConsole->setObjectName("lstConsole");

        verticalLayout->addWidget(lstConsole);

        btnClear = new QPushButton(layoutWidget);
        btnClear->setObjectName("btnClear");

        verticalLayout->addWidget(btnClear);

        layoutWidget1 = new QWidget(centralwidget);
        layoutWidget1->setObjectName("layoutWidget1");
        layoutWidget1->setGeometry(QRect(20, 20, 241, 261));
        verticalLayout_2 = new QVBoxLayout(layoutWidget1);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        groupBox = new QGroupBox(layoutWidget1);
        groupBox->setObjectName("groupBox");
        formLayout = new QFormLayout(groupBox);
        formLayout->setObjectName("formLayout");
        label = new QLabel(groupBox);
        label->setObjectName("label");

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        spnServerPort = new QSpinBox(groupBox);
        spnServerPort->setObjectName("spnServerPort");
        spnServerPort->setMinimum(1024);
        spnServerPort->setMaximum(65535);
        spnServerPort->setValue(12345);

        formLayout->setWidget(0, QFormLayout::FieldRole, spnServerPort);

        btnStartServer = new QPushButton(groupBox);
        btnStartServer->setObjectName("btnStartServer");

        formLayout->setWidget(1, QFormLayout::FieldRole, btnStartServer);

        lblConnectionStatus = new QLabel(groupBox);
        lblConnectionStatus->setObjectName("lblConnectionStatus");
        lblConnectionStatus->setMinimumSize(QSize(25, 25));
        lblConnectionStatus->setMaximumSize(QSize(25, 25));

        formLayout->setWidget(1, QFormLayout::LabelRole, lblConnectionStatus);


        verticalLayout_2->addWidget(groupBox);

        groupBox_2 = new QGroupBox(layoutWidget1);
        groupBox_2->setObjectName("groupBox_2");
        formLayout_2 = new QFormLayout(groupBox_2);
        formLayout_2->setObjectName("formLayout_2");
        label_2 = new QLabel(groupBox_2);
        label_2->setObjectName("label_2");

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label_2);

        lnMessage = new QLineEdit(groupBox_2);
        lnMessage->setObjectName("lnMessage");

        formLayout_2->setWidget(0, QFormLayout::FieldRole, lnMessage);

        btnSendToAll = new QPushButton(groupBox_2);
        btnSendToAll->setObjectName("btnSendToAll");

        formLayout_2->setWidget(1, QFormLayout::FieldRole, btnSendToAll);


        verticalLayout_2->addWidget(groupBox_2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 535, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);
        QObject::connect(btnClear, &QPushButton::clicked, lstConsole, qOverload<>(&QListWidget::clear));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Server", nullptr));
        btnClear->setText(QCoreApplication::translate("MainWindow", "Clear", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "Server Information", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Port:", nullptr));
        btnStartServer->setText(QCoreApplication::translate("MainWindow", "Start Server", nullptr));
        lblConnectionStatus->setText(QString());
        lblConnectionStatus->setProperty("state", QVariant(QCoreApplication::translate("MainWindow", "0", nullptr)));
        groupBox_2->setTitle(QCoreApplication::translate("MainWindow", "Message Information", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Mesage:", nullptr));
        btnSendToAll->setText(QCoreApplication::translate("MainWindow", "Send To All", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
