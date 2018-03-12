/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "joytabwidgetcontainer.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionQuit;
    QAction *actionUpdate_Joysticks;
    QAction *actionHide;
    QAction *actionAbout;
    QAction *actionAbout_Qt;
    QAction *actionProperties;
    QAction *actionKeyValue;
    QAction *actionHomePage;
    QAction *actionGitHubPage;
    QAction *actionGameController_Mapping;
    QAction *actionOptions;
    QAction *actionStick_Pad_Assign;
    QAction *actionWiki;
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QStackedWidget *stackedWidget;
    QWidget *page1;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QWidget *joystick_tabs;
    QVBoxLayout *verticalLayout_3;
    JoyTabWidgetContainer *tabWidget;
    QPushButton *uacPushButton;
    QMenuBar *menuBar;
    QMenu *menuQuit;
    QMenu *menuOptions;
    QMenu *menuHelp;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->setWindowModality(Qt::WindowModal);
        MainWindow->resize(650, 580);
        MainWindow->setMinimumSize(QSize(650, 0));
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/antimicro.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        MainWindow->setStyleSheet(QLatin1String("JoyButtonWidget[isflashing=\"true\"],\n"
"JoyAxisWidget[isflashing=\"true\"],\n"
"JoyControlStickPushButton[isflashing=\"true\"],\n"
"JoyControlStickButtonPushButton[isflashing=\"true\"],\n"
"DPadPushButton[isflashing=\"true\"] {\n"
"    background-color: rgb(0, 0, 255);\n"
"	color: rgb(205, 197, 191);\n"
"}\n"
"\n"
"QPushButton#setPushButton1[setActive=\"false\"],\n"
"QPushButton#setPushButton2[setActive=\"false\"],\n"
"QPushButton#setPushButton3[setActive=\"false\"],\n"
"QPushButton#setPushButton4[setActive=\"false\"],\n"
"QPushButton#setPushButton5[setActive=\"false\"],\n"
"QPushButton#setPushButton6[setActive=\"false\"],\n"
"QPushButton#setPushButton7[setActive=\"false\"],\n"
"QPushButton#setPushButton8[setActive=\"false\"] {\n"
"	background-color: rgb(190, 190, 190);\n"
"}\n"
"\n"
"QStackedWidget#stackedWidget{\n"
"    padding-top: 10px;\n"
"}\n"
"\n"
"QPushButton#namesPushButton[isDisplayingNames=\"true\"] {\n"
"	background-color: rgb(192, 255, 192);\n"
"}"));
        actionQuit = new QAction(MainWindow);
        actionQuit->setObjectName(QStringLiteral("actionQuit"));
        QIcon icon1;
        QString iconThemeName = QStringLiteral("application-exit");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon1 = QIcon::fromTheme(iconThemeName);
        } else {
            icon1.addFile(QStringLiteral(""), QSize(), QIcon::Normal, QIcon::Off);
        }
        actionQuit->setIcon(icon1);
        actionUpdate_Joysticks = new QAction(MainWindow);
        actionUpdate_Joysticks->setObjectName(QStringLiteral("actionUpdate_Joysticks"));
        actionUpdate_Joysticks->setEnabled(true);
        QIcon icon2;
        iconThemeName = QStringLiteral("view-refresh");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon2 = QIcon::fromTheme(iconThemeName);
        } else {
            icon2.addFile(QStringLiteral(""), QSize(), QIcon::Normal, QIcon::Off);
        }
        actionUpdate_Joysticks->setIcon(icon2);
        actionHide = new QAction(MainWindow);
        actionHide->setObjectName(QStringLiteral("actionHide"));
        QIcon icon3;
        iconThemeName = QStringLiteral("view-restore");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon3 = QIcon::fromTheme(iconThemeName);
        } else {
            icon3.addFile(QStringLiteral(""), QSize(), QIcon::Normal, QIcon::Off);
        }
        actionHide->setIcon(icon3);
        actionAbout = new QAction(MainWindow);
        actionAbout->setObjectName(QStringLiteral("actionAbout"));
        QIcon icon4;
        iconThemeName = QStringLiteral("help-about");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon4 = QIcon::fromTheme(iconThemeName);
        } else {
            icon4.addFile(QStringLiteral(""), QSize(), QIcon::Normal, QIcon::Off);
        }
        actionAbout->setIcon(icon4);
        actionAbout_Qt = new QAction(MainWindow);
        actionAbout_Qt->setObjectName(QStringLiteral("actionAbout_Qt"));
        actionProperties = new QAction(MainWindow);
        actionProperties->setObjectName(QStringLiteral("actionProperties"));
        actionKeyValue = new QAction(MainWindow);
        actionKeyValue->setObjectName(QStringLiteral("actionKeyValue"));
        actionHomePage = new QAction(MainWindow);
        actionHomePage->setObjectName(QStringLiteral("actionHomePage"));
        actionGitHubPage = new QAction(MainWindow);
        actionGitHubPage->setObjectName(QStringLiteral("actionGitHubPage"));
        actionGameController_Mapping = new QAction(MainWindow);
        actionGameController_Mapping->setObjectName(QStringLiteral("actionGameController_Mapping"));
        actionOptions = new QAction(MainWindow);
        actionOptions->setObjectName(QStringLiteral("actionOptions"));
        actionStick_Pad_Assign = new QAction(MainWindow);
        actionStick_Pad_Assign->setObjectName(QStringLiteral("actionStick_Pad_Assign"));
        actionWiki = new QAction(MainWindow);
        actionWiki->setObjectName(QStringLiteral("actionWiki"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(4, 0, -1, 0);
        stackedWidget = new QStackedWidget(centralWidget);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(stackedWidget->sizePolicy().hasHeightForWidth());
        stackedWidget->setSizePolicy(sizePolicy);
        stackedWidget->setFrameShape(QFrame::NoFrame);
        stackedWidget->setFrameShadow(QFrame::Plain);
        stackedWidget->setLineWidth(1);
        page1 = new QWidget();
        page1->setObjectName(QStringLiteral("page1"));
        verticalLayout_2 = new QVBoxLayout(page1);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label = new QLabel(page1);
        label->setObjectName(QStringLiteral("label"));
        label->setScaledContents(true);
        label->setAlignment(Qt::AlignCenter);
        label->setWordWrap(true);

        verticalLayout_2->addWidget(label);

        stackedWidget->addWidget(page1);
        joystick_tabs = new QWidget();
        joystick_tabs->setObjectName(QStringLiteral("joystick_tabs"));
        sizePolicy.setHeightForWidth(joystick_tabs->sizePolicy().hasHeightForWidth());
        joystick_tabs->setSizePolicy(sizePolicy);
        verticalLayout_3 = new QVBoxLayout(joystick_tabs);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        tabWidget = new JoyTabWidgetContainer(joystick_tabs);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setEnabled(true);
        sizePolicy.setHeightForWidth(tabWidget->sizePolicy().hasHeightForWidth());
        tabWidget->setSizePolicy(sizePolicy);
        tabWidget->setLayoutDirection(Qt::LeftToRight);
        tabWidget->setTabPosition(QTabWidget::North);
        tabWidget->setTabShape(QTabWidget::Rounded);
        tabWidget->setUsesScrollButtons(true);
        tabWidget->setDocumentMode(false);
        tabWidget->setTabsClosable(false);
        tabWidget->setMovable(false);

        verticalLayout_3->addWidget(tabWidget);

        stackedWidget->addWidget(joystick_tabs);

        verticalLayout->addWidget(stackedWidget);

        uacPushButton = new QPushButton(centralWidget);
        uacPushButton->setObjectName(QStringLiteral("uacPushButton"));
        uacPushButton->setAutoDefault(false);
        uacPushButton->setDefault(false);
        uacPushButton->setFlat(false);

        verticalLayout->addWidget(uacPushButton);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 650, 21));
        menuQuit = new QMenu(menuBar);
        menuQuit->setObjectName(QStringLiteral("menuQuit"));
        menuOptions = new QMenu(menuBar);
        menuOptions->setObjectName(QStringLiteral("menuOptions"));
        menuHelp = new QMenu(menuBar);
        menuHelp->setObjectName(QStringLiteral("menuHelp"));
        MainWindow->setMenuBar(menuBar);

        menuBar->addAction(menuQuit->menuAction());
        menuBar->addAction(menuOptions->menuAction());
        menuBar->addAction(menuHelp->menuAction());
        menuQuit->addAction(actionHide);
        menuQuit->addAction(actionQuit);
        menuOptions->addAction(actionProperties);
        menuOptions->addAction(actionKeyValue);
        menuOptions->addAction(actionGameController_Mapping);
        menuOptions->addAction(actionStick_Pad_Assign);
        menuOptions->addAction(actionOptions);
        menuOptions->addAction(actionUpdate_Joysticks);
        menuHelp->addAction(actionGitHubPage);
        menuHelp->addAction(actionWiki);
        menuHelp->addSeparator();
        menuHelp->addAction(actionAbout);
        menuHelp->addAction(actionAbout_Qt);

        retranslateUi(MainWindow);
        QObject::connect(actionQuit, SIGNAL(triggered()), MainWindow, SLOT(quitProgram()));
        QObject::connect(actionUpdate_Joysticks, SIGNAL(triggered()), MainWindow, SLOT(startJoystickRefresh()));
        QObject::connect(actionHide, SIGNAL(triggered()), MainWindow, SLOT(hideWindow()));
        QObject::connect(actionAbout, SIGNAL(triggered()), MainWindow, SLOT(openAboutDialog()));
        QObject::connect(actionStick_Pad_Assign, SIGNAL(triggered()), MainWindow, SLOT(showStickAssignmentDialog()));

        stackedWidget->setCurrentIndex(0);
        tabWidget->setCurrentIndex(-1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "antimicro", 0));
        actionQuit->setText(QApplication::translate("MainWindow", "&Quit", 0));
        actionQuit->setShortcut(QApplication::translate("MainWindow", "Ctrl+Q", 0));
        actionUpdate_Joysticks->setText(QApplication::translate("MainWindow", "&Update Joysticks", 0));
        actionUpdate_Joysticks->setShortcut(QApplication::translate("MainWindow", "Ctrl+U", 0));
        actionHide->setText(QApplication::translate("MainWindow", "&Hide", 0));
        actionHide->setShortcut(QApplication::translate("MainWindow", "Ctrl+H", 0));
        actionAbout->setText(QApplication::translate("MainWindow", "&About", 0));
        actionAbout->setShortcut(QApplication::translate("MainWindow", "Ctrl+A", 0));
        actionAbout_Qt->setText(QApplication::translate("MainWindow", "About Qt", 0));
        actionProperties->setText(QApplication::translate("MainWindow", "Properties", 0));
        actionKeyValue->setText(QApplication::translate("MainWindow", "Key Checker", 0));
        actionHomePage->setText(QApplication::translate("MainWindow", "Home Page", 0));
        actionGitHubPage->setText(QApplication::translate("MainWindow", "GitHub Page", 0));
        actionGameController_Mapping->setText(QApplication::translate("MainWindow", "Game Controller Mapping", 0));
        actionOptions->setText(QApplication::translate("MainWindow", "Settings", 0));
        actionStick_Pad_Assign->setText(QApplication::translate("MainWindow", "Stick/Pad Assign", 0));
        actionWiki->setText(QApplication::translate("MainWindow", "Wiki", 0));
        label->setText(QApplication::translate("MainWindow", "No Joysticks have been found.\n"
" Please plug in a joystick and then choose the \"Update Joysticks\" option in the main menu", 0));
        uacPushButton->setText(QApplication::translate("MainWindow", "If events are not seen by a game, please click here to run this application as the Adminstrator.", 0));
        menuQuit->setTitle(QApplication::translate("MainWindow", "&App", 0));
        menuOptions->setTitle(QApplication::translate("MainWindow", "&Options", 0));
        menuHelp->setTitle(QApplication::translate("MainWindow", "&Help", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
