/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *action_Open_File;
    QAction *action_Zoom_in;
    QAction *action_Zoom_out;
    QAction *action_Original_size;
    QAction *action_Adjust_the_size;
    QAction *actionSave_File;
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QTabWidget *tabWidget;
    QWidget *Photos;
    QGridLayout *gridLayout_2;
    QListWidget *listWidget;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QPushButton *pushButton_2;
    QLineEdit *lineEdit;
    QWidget *tab_2;
    QMenuBar *menubar;
    QMenu *menuBrowse;
    QMenu *menuScale;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1283, 785);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        QIcon icon;
        icon.addFile(QString::fromUtf8("../Image_sources/1200px-Picture_icon_BLACK.svg.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        MainWindow->setIconSize(QSize(24, 24));
        action_Open_File = new QAction(MainWindow);
        action_Open_File->setObjectName("action_Open_File");
        action_Open_File->setCheckable(false);
        action_Zoom_in = new QAction(MainWindow);
        action_Zoom_in->setObjectName("action_Zoom_in");
        action_Zoom_out = new QAction(MainWindow);
        action_Zoom_out->setObjectName("action_Zoom_out");
        action_Original_size = new QAction(MainWindow);
        action_Original_size->setObjectName("action_Original_size");
        action_Adjust_the_size = new QAction(MainWindow);
        action_Adjust_the_size->setObjectName("action_Adjust_the_size");
        actionSave_File = new QAction(MainWindow);
        actionSave_File->setObjectName("actionSave_File");
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        centralwidget->setEnabled(true);
        sizePolicy.setHeightForWidth(centralwidget->sizePolicy().hasHeightForWidth());
        centralwidget->setSizePolicy(sizePolicy);
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName("gridLayout");
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName("tabWidget");
        tabWidget->setEnabled(true);
        sizePolicy.setHeightForWidth(tabWidget->sizePolicy().hasHeightForWidth());
        tabWidget->setSizePolicy(sizePolicy);
        tabWidget->setMinimumSize(QSize(0, 0));
        tabWidget->setSizeIncrement(QSize(0, 0));
        tabWidget->setBaseSize(QSize(0, 0));
        QFont font;
        font.setPointSize(15);
        font.setBold(false);
        font.setItalic(false);
        font.setUnderline(false);
        font.setStrikeOut(false);
        font.setKerning(true);
        tabWidget->setFont(font);
        tabWidget->setMouseTracking(false);
        tabWidget->setTabletTracking(false);
        tabWidget->setTabPosition(QTabWidget::North);
        tabWidget->setTabShape(QTabWidget::Rounded);
        tabWidget->setIconSize(QSize(16, 16));
        tabWidget->setElideMode(Qt::ElideNone);
        Photos = new QWidget();
        Photos->setObjectName("Photos");
        Photos->setEnabled(true);
        Photos->setFont(font);
        gridLayout_2 = new QGridLayout(Photos);
        gridLayout_2->setObjectName("gridLayout_2");
        listWidget = new QListWidget(Photos);
        listWidget->setObjectName("listWidget");
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(listWidget->sizePolicy().hasHeightForWidth());
        listWidget->setSizePolicy(sizePolicy1);
        listWidget->setMinimumSize(QSize(400, 0));
        listWidget->setMaximumSize(QSize(200, 16777215));

        gridLayout_2->addWidget(listWidget, 0, 1, 1, 1);

        scrollArea = new QScrollArea(Photos);
        scrollArea->setObjectName("scrollArea");
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName("scrollAreaWidgetContents");
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 833, 623));
        scrollArea->setWidget(scrollAreaWidgetContents);

        gridLayout_2->addWidget(scrollArea, 0, 0, 1, 1);

        pushButton_2 = new QPushButton(Photos);
        pushButton_2->setObjectName("pushButton_2");

        gridLayout_2->addWidget(pushButton_2, 1, 0, 1, 1);

        lineEdit = new QLineEdit(Photos);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setMinimumSize(QSize(400, 0));
        lineEdit->setMaximumSize(QSize(200, 16777215));

        gridLayout_2->addWidget(lineEdit, 1, 1, 1, 1);

        tabWidget->addTab(Photos, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName("tab_2");
        tabWidget->addTab(tab_2, QString());

        gridLayout->addWidget(tabWidget, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1283, 22));
        menuBrowse = new QMenu(menubar);
        menuBrowse->setObjectName("menuBrowse");
        menuScale = new QMenu(menubar);
        menuScale->setObjectName("menuScale");
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuBrowse->menuAction());
        menubar->addAction(menuScale->menuAction());
        menuBrowse->addAction(action_Open_File);
        menuBrowse->addAction(actionSave_File);
        menuScale->addAction(action_Zoom_in);
        menuScale->addAction(action_Zoom_out);
        menuScale->addAction(action_Original_size);
        menuScale->addAction(action_Adjust_the_size);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Photo Manager", nullptr));
        action_Open_File->setText(QCoreApplication::translate("MainWindow", "Open File", nullptr));
        action_Zoom_in->setText(QCoreApplication::translate("MainWindow", "Zoom in", nullptr));
#if QT_CONFIG(shortcut)
        action_Zoom_in->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+=", nullptr));
#endif // QT_CONFIG(shortcut)
        action_Zoom_out->setText(QCoreApplication::translate("MainWindow", "Zoom out", nullptr));
#if QT_CONFIG(shortcut)
        action_Zoom_out->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+-", nullptr));
#endif // QT_CONFIG(shortcut)
        action_Original_size->setText(QCoreApplication::translate("MainWindow", "Original size", nullptr));
        action_Adjust_the_size->setText(QCoreApplication::translate("MainWindow", "Adjust the size", nullptr));
        actionSave_File->setText(QCoreApplication::translate("MainWindow", "Save File", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "Move photo into another folder", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(Photos), QCoreApplication::translate("MainWindow", "Photos", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("MainWindow", "tab_2", nullptr));
        menuBrowse->setTitle(QCoreApplication::translate("MainWindow", "Browse", nullptr));
        menuScale->setTitle(QCoreApplication::translate("MainWindow", "Scale", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
