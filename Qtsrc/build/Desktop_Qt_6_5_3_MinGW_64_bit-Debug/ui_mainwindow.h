/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *matALabel;
    QLabel *aEquLabel;
    QLabel *matALeftBracket;
    QLabel *matARightBracket;
    QTextEdit *matAEntryOne;
    QTextEdit *matAEntryTwo;
    QTextEdit *matAEntryThree;
    QTextEdit *matAEntryFour;
    QLabel *uEquLabel;
    QLabel *matULeftBracket;
    QLabel *matURightBracket;
    QLabel *sEquLabel;
    QLabel *matSLeftBracket;
    QLabel *matSRightBracket;
    QLabel *vEquLabel;
    QLabel *matVLeftBracket;
    QLabel *matVRightBracket;
    QLabel *matUEntryOne;
    QLabel *matUEntryTwo;
    QLabel *matUEntryThree;
    QLabel *matUEntryFour;
    QLabel *matSEntryOne;
    QLabel *matSEntryTwo;
    QLabel *matSEntryThree;
    QLabel *matSEntryFour;
    QLabel *matVEntryOne;
    QLabel *matVEntryTwo;
    QLabel *matVEntryThree;
    QLabel *matVEntryFour;
    QLabel *systemLabel;
    QPushButton *pushButton;
    QMenuBar *menubar;
    QMenu *title;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        QFont font;
        font.setPointSize(12);
        MainWindow->setFont(font);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        matALabel = new QLabel(centralwidget);
        matALabel->setObjectName("matALabel");
        matALabel->setGeometry(QRect(350, 50, 100, 20));
        QFont font1;
        font1.setPointSize(14);
        matALabel->setFont(font1);
        matALabel->setFrameShape(QFrame::NoFrame);
        aEquLabel = new QLabel(centralwidget);
        aEquLabel->setObjectName("aEquLabel");
        aEquLabel->setGeometry(QRect(275, 125, 50, 25));
        aEquLabel->setFont(font);
        matALeftBracket = new QLabel(centralwidget);
        matALeftBracket->setObjectName("matALeftBracket");
        matALeftBracket->setGeometry(QRect(300, 50, 50, 150));
        QFont font2;
        font2.setPointSize(75);
        matALeftBracket->setFont(font2);
        matARightBracket = new QLabel(centralwidget);
        matARightBracket->setObjectName("matARightBracket");
        matARightBracket->setGeometry(QRect(450, 50, 50, 150));
        matARightBracket->setFont(font2);
        matAEntryOne = new QTextEdit(centralwidget);
        matAEntryOne->setObjectName("matAEntryOne");
        matAEntryOne->setGeometry(QRect(335, 100, 50, 30));
        matAEntryOne->setFrameShape(QFrame::StyledPanel);
        matAEntryOne->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        matAEntryOne->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        matAEntryTwo = new QTextEdit(centralwidget);
        matAEntryTwo->setObjectName("matAEntryTwo");
        matAEntryTwo->setGeometry(QRect(395, 100, 50, 30));
        matAEntryTwo->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        matAEntryTwo->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        matAEntryThree = new QTextEdit(centralwidget);
        matAEntryThree->setObjectName("matAEntryThree");
        matAEntryThree->setGeometry(QRect(335, 155, 50, 30));
        matAEntryThree->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        matAEntryThree->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        matAEntryFour = new QTextEdit(centralwidget);
        matAEntryFour->setObjectName("matAEntryFour");
        matAEntryFour->setGeometry(QRect(395, 155, 50, 30));
        matAEntryFour->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        matAEntryFour->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        uEquLabel = new QLabel(centralwidget);
        uEquLabel->setObjectName("uEquLabel");
        uEquLabel->setGeometry(QRect(30, 350, 30, 20));
        uEquLabel->setFont(font);
        matULeftBracket = new QLabel(centralwidget);
        matULeftBracket->setObjectName("matULeftBracket");
        matULeftBracket->setGeometry(QRect(55, 270, 50, 150));
        matULeftBracket->setFont(font2);
        matURightBracket = new QLabel(centralwidget);
        matURightBracket->setObjectName("matURightBracket");
        matURightBracket->setGeometry(QRect(205, 270, 50, 150));
        matURightBracket->setFont(font2);
        sEquLabel = new QLabel(centralwidget);
        sEquLabel->setObjectName("sEquLabel");
        sEquLabel->setGeometry(QRect(275, 350, 30, 20));
        sEquLabel->setFont(font);
        matSLeftBracket = new QLabel(centralwidget);
        matSLeftBracket->setObjectName("matSLeftBracket");
        matSLeftBracket->setGeometry(QRect(300, 270, 50, 150));
        matSLeftBracket->setFont(font2);
        matSRightBracket = new QLabel(centralwidget);
        matSRightBracket->setObjectName("matSRightBracket");
        matSRightBracket->setGeometry(QRect(450, 270, 50, 150));
        matSRightBracket->setFont(font2);
        vEquLabel = new QLabel(centralwidget);
        vEquLabel->setObjectName("vEquLabel");
        vEquLabel->setGeometry(QRect(510, 350, 63, 20));
        matVLeftBracket = new QLabel(centralwidget);
        matVLeftBracket->setObjectName("matVLeftBracket");
        matVLeftBracket->setGeometry(QRect(570, 270, 50, 150));
        matVLeftBracket->setFont(font2);
        matVRightBracket = new QLabel(centralwidget);
        matVRightBracket->setObjectName("matVRightBracket");
        matVRightBracket->setGeometry(QRect(720, 270, 50, 150));
        matVRightBracket->setFont(font2);
        matUEntryOne = new QLabel(centralwidget);
        matUEntryOne->setObjectName("matUEntryOne");
        matUEntryOne->setGeometry(QRect(90, 320, 50, 30));
        matUEntryOne->setFrameShape(QFrame::Box);
        matUEntryTwo = new QLabel(centralwidget);
        matUEntryTwo->setObjectName("matUEntryTwo");
        matUEntryTwo->setGeometry(QRect(150, 320, 50, 30));
        matUEntryTwo->setFrameShape(QFrame::Box);
        matUEntryThree = new QLabel(centralwidget);
        matUEntryThree->setObjectName("matUEntryThree");
        matUEntryThree->setGeometry(QRect(90, 375, 50, 30));
        matUEntryThree->setFrameShape(QFrame::Box);
        matUEntryFour = new QLabel(centralwidget);
        matUEntryFour->setObjectName("matUEntryFour");
        matUEntryFour->setGeometry(QRect(150, 375, 50, 30));
        matUEntryFour->setFrameShape(QFrame::Box);
        matSEntryOne = new QLabel(centralwidget);
        matSEntryOne->setObjectName("matSEntryOne");
        matSEntryOne->setGeometry(QRect(335, 320, 50, 30));
        matSEntryOne->setFrameShape(QFrame::Box);
        matSEntryTwo = new QLabel(centralwidget);
        matSEntryTwo->setObjectName("matSEntryTwo");
        matSEntryTwo->setGeometry(QRect(395, 320, 50, 30));
        matSEntryTwo->setFrameShape(QFrame::Box);
        matSEntryThree = new QLabel(centralwidget);
        matSEntryThree->setObjectName("matSEntryThree");
        matSEntryThree->setGeometry(QRect(335, 375, 50, 30));
        matSEntryThree->setFrameShape(QFrame::Box);
        matSEntryFour = new QLabel(centralwidget);
        matSEntryFour->setObjectName("matSEntryFour");
        matSEntryFour->setGeometry(QRect(395, 375, 50, 30));
        matSEntryFour->setFrameShape(QFrame::Box);
        matVEntryOne = new QLabel(centralwidget);
        matVEntryOne->setObjectName("matVEntryOne");
        matVEntryOne->setGeometry(QRect(605, 320, 50, 30));
        matVEntryOne->setFrameShape(QFrame::Box);
        matVEntryTwo = new QLabel(centralwidget);
        matVEntryTwo->setObjectName("matVEntryTwo");
        matVEntryTwo->setGeometry(QRect(665, 320, 50, 30));
        matVEntryTwo->setFrameShape(QFrame::Box);
        matVEntryThree = new QLabel(centralwidget);
        matVEntryThree->setObjectName("matVEntryThree");
        matVEntryThree->setGeometry(QRect(605, 375, 50, 30));
        matVEntryThree->setFrameShape(QFrame::Box);
        matVEntryFour = new QLabel(centralwidget);
        matVEntryFour->setObjectName("matVEntryFour");
        matVEntryFour->setGeometry(QRect(665, 375, 50, 30));
        matVEntryFour->setFrameShape(QFrame::Box);
        systemLabel = new QLabel(centralwidget);
        systemLabel->setObjectName("systemLabel");
        systemLabel->setGeometry(QRect(30, 200, 750, 100));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(275, 450, 250, 30));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 32));
        title = new QMenu(menubar);
        title->setObjectName("title");
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(title->menuAction());

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        matALabel->setText(QCoreApplication::translate("MainWindow", "Matrix A", nullptr));
        aEquLabel->setText(QCoreApplication::translate("MainWindow", "A =", nullptr));
        matALeftBracket->setText(QCoreApplication::translate("MainWindow", "[", nullptr));
        matARightBracket->setText(QCoreApplication::translate("MainWindow", "]", nullptr));
        uEquLabel->setText(QCoreApplication::translate("MainWindow", "U =", nullptr));
        matULeftBracket->setText(QCoreApplication::translate("MainWindow", "[", nullptr));
        matURightBracket->setText(QCoreApplication::translate("MainWindow", "]", nullptr));
        sEquLabel->setText(QCoreApplication::translate("MainWindow", "S =", nullptr));
        matSLeftBracket->setText(QCoreApplication::translate("MainWindow", "[", nullptr));
        matSRightBracket->setText(QCoreApplication::translate("MainWindow", "]", nullptr));
        vEquLabel->setText(QCoreApplication::translate("MainWindow", "V^T =", nullptr));
        matVLeftBracket->setText(QCoreApplication::translate("MainWindow", "[", nullptr));
        matVRightBracket->setText(QCoreApplication::translate("MainWindow", "]", nullptr));
        matUEntryOne->setText(QString());
        matUEntryTwo->setText(QString());
        matUEntryThree->setText(QString());
        matUEntryFour->setText(QString());
        matSEntryOne->setText(QString());
        matSEntryTwo->setText(QString());
        matSEntryThree->setText(QString());
        matSEntryFour->setText(QString());
        matVEntryOne->setText(QString());
        matVEntryTwo->setText(QString());
        matVEntryThree->setText(QString());
        matVEntryFour->setText(QString());
        systemLabel->setText(QCoreApplication::translate("MainWindow", "Enter values inside of Matrix A to generate a SVD.\n"
"Please note that this calculator currently only supports real unique eigenvalues ONLY.\n"
"The resulting decomposition is shown below.", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "Calculate", nullptr));
        title->setTitle(QCoreApplication::translate("MainWindow", "SVD Calculator", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
