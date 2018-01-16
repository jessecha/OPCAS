/********************************************************************************
** Form generated from reading UI file 'joystickstatuswindow.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_JOYSTICKSTATUSWINDOW_H
#define UI_JOYSTICKSTATUSWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_JoystickStatusWindow
{
public:
    QVBoxLayout *verticalLayout_11;
    QHBoxLayout *horizontalLayout;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_9;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLabel *joystickNameLabel;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_2;
    QLabel *joystickNumberLabel;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_4;
    QLabel *joystickAxesLabel;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_6;
    QLabel *joystickButtonsLabel;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_8;
    QLabel *joystickHatsLabel;
    QVBoxLayout *guidVerticalLayout;
    QLabel *guidHeaderLabel;
    QLabel *guidLabel;
    QVBoxLayout *sdlcontrollerVerticalLayout;
    QLabel *sdlcontrollerHeaderLabel;
    QLabel *sdlGameControllerLabel;
    QVBoxLayout *verticalLayout_10;
    QGroupBox *axesGroupBox;
    QVBoxLayout *verticalLayout_6;
    QScrollArea *axesScrollArea;
    QWidget *scrollAreaWidgetContents;
    QSpacerItem *verticalSpacer;
    QGroupBox *buttonsGroupBox;
    QVBoxLayout *verticalLayout_7;
    QScrollArea *buttonsScrollArea;
    QWidget *scrollAreaWidgetContents_2;
    QSpacerItem *verticalSpacer_2;
    QGroupBox *hatsGroupBox;
    QVBoxLayout *verticalLayout_8;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *JoystickStatusWindow)
    {
        if (JoystickStatusWindow->objectName().isEmpty())
            JoystickStatusWindow->setObjectName(QStringLiteral("JoystickStatusWindow"));
        JoystickStatusWindow->setWindowModality(Qt::ApplicationModal);
        JoystickStatusWindow->resize(580, 480);
        JoystickStatusWindow->setMinimumSize(QSize(580, 440));
        JoystickStatusWindow->setStyleSheet(QLatin1String("JoyButtonStatusBox {\n"
"	border: 1px solid rgb(0, 0, 0);\n"
"}\n"
"\n"
"JoyButtonStatusBox[isflashing=\"true\"] {\n"
"    background-color: rgb(0, 0, 255);\n"
"	color: rgb(205, 197, 191);\n"
"}"));
        JoystickStatusWindow->setModal(true);
        verticalLayout_11 = new QVBoxLayout(JoystickStatusWindow);
        verticalLayout_11->setObjectName(QStringLiteral("verticalLayout_11"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        groupBox = new QGroupBox(JoystickStatusWindow);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setMinimumSize(QSize(200, 0));
        verticalLayout_9 = new QVBoxLayout(groupBox);
        verticalLayout_9->setObjectName(QStringLiteral("verticalLayout_9"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);

        verticalLayout->addWidget(label);

        joystickNameLabel = new QLabel(groupBox);
        joystickNameLabel->setObjectName(QStringLiteral("joystickNameLabel"));
        joystickNameLabel->setIndent(10);

        verticalLayout->addWidget(joystickNameLabel);


        verticalLayout_9->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setFont(font);

        verticalLayout_2->addWidget(label_2);

        joystickNumberLabel = new QLabel(groupBox);
        joystickNumberLabel->setObjectName(QStringLiteral("joystickNumberLabel"));
        joystickNumberLabel->setIndent(10);

        verticalLayout_2->addWidget(joystickNumberLabel);


        verticalLayout_9->addLayout(verticalLayout_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setFont(font);

        verticalLayout_3->addWidget(label_4);

        joystickAxesLabel = new QLabel(groupBox);
        joystickAxesLabel->setObjectName(QStringLiteral("joystickAxesLabel"));
        joystickAxesLabel->setIndent(10);

        verticalLayout_3->addWidget(joystickAxesLabel);


        verticalLayout_9->addLayout(verticalLayout_3);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setFont(font);

        verticalLayout_4->addWidget(label_6);

        joystickButtonsLabel = new QLabel(groupBox);
        joystickButtonsLabel->setObjectName(QStringLiteral("joystickButtonsLabel"));
        joystickButtonsLabel->setIndent(10);

        verticalLayout_4->addWidget(joystickButtonsLabel);


        verticalLayout_9->addLayout(verticalLayout_4);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        label_8 = new QLabel(groupBox);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setFont(font);

        verticalLayout_5->addWidget(label_8);

        joystickHatsLabel = new QLabel(groupBox);
        joystickHatsLabel->setObjectName(QStringLiteral("joystickHatsLabel"));
        joystickHatsLabel->setIndent(10);

        verticalLayout_5->addWidget(joystickHatsLabel);


        verticalLayout_9->addLayout(verticalLayout_5);

        guidVerticalLayout = new QVBoxLayout();
        guidVerticalLayout->setObjectName(QStringLiteral("guidVerticalLayout"));
        guidHeaderLabel = new QLabel(groupBox);
        guidHeaderLabel->setObjectName(QStringLiteral("guidHeaderLabel"));
        guidHeaderLabel->setEnabled(true);
        guidHeaderLabel->setFont(font);

        guidVerticalLayout->addWidget(guidHeaderLabel);

        guidLabel = new QLabel(groupBox);
        guidLabel->setObjectName(QStringLiteral("guidLabel"));
        guidLabel->setWordWrap(true);
        guidLabel->setMargin(10);
        guidLabel->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        guidVerticalLayout->addWidget(guidLabel);


        verticalLayout_9->addLayout(guidVerticalLayout);

        sdlcontrollerVerticalLayout = new QVBoxLayout();
        sdlcontrollerVerticalLayout->setObjectName(QStringLiteral("sdlcontrollerVerticalLayout"));
        sdlcontrollerHeaderLabel = new QLabel(groupBox);
        sdlcontrollerHeaderLabel->setObjectName(QStringLiteral("sdlcontrollerHeaderLabel"));
        sdlcontrollerHeaderLabel->setEnabled(true);
        sdlcontrollerHeaderLabel->setFont(font);

        sdlcontrollerVerticalLayout->addWidget(sdlcontrollerHeaderLabel);

        sdlGameControllerLabel = new QLabel(groupBox);
        sdlGameControllerLabel->setObjectName(QStringLiteral("sdlGameControllerLabel"));
        sdlGameControllerLabel->setWordWrap(true);
        sdlGameControllerLabel->setMargin(10);
        sdlGameControllerLabel->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        sdlcontrollerVerticalLayout->addWidget(sdlGameControllerLabel);


        verticalLayout_9->addLayout(sdlcontrollerVerticalLayout);


        horizontalLayout->addWidget(groupBox);

        verticalLayout_10 = new QVBoxLayout();
        verticalLayout_10->setObjectName(QStringLiteral("verticalLayout_10"));
        axesGroupBox = new QGroupBox(JoystickStatusWindow);
        axesGroupBox->setObjectName(QStringLiteral("axesGroupBox"));
        verticalLayout_6 = new QVBoxLayout(axesGroupBox);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(4, 4, 4, 4);
        axesScrollArea = new QScrollArea(axesGroupBox);
        axesScrollArea->setObjectName(QStringLiteral("axesScrollArea"));
        axesScrollArea->setFrameShape(QFrame::NoFrame);
        axesScrollArea->setFrameShadow(QFrame::Sunken);
        axesScrollArea->setLineWidth(1);
        axesScrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 338, 142));
        axesScrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout_6->addWidget(axesScrollArea);

        verticalSpacer = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_6->addItem(verticalSpacer);


        verticalLayout_10->addWidget(axesGroupBox);

        buttonsGroupBox = new QGroupBox(JoystickStatusWindow);
        buttonsGroupBox->setObjectName(QStringLiteral("buttonsGroupBox"));
        verticalLayout_7 = new QVBoxLayout(buttonsGroupBox);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        verticalLayout_7->setContentsMargins(4, 4, 4, 4);
        buttonsScrollArea = new QScrollArea(buttonsGroupBox);
        buttonsScrollArea->setObjectName(QStringLiteral("buttonsScrollArea"));
        buttonsScrollArea->setAutoFillBackground(false);
        buttonsScrollArea->setStyleSheet(QStringLiteral(""));
        buttonsScrollArea->setFrameShape(QFrame::NoFrame);
        buttonsScrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents_2 = new QWidget();
        scrollAreaWidgetContents_2->setObjectName(QStringLiteral("scrollAreaWidgetContents_2"));
        scrollAreaWidgetContents_2->setGeometry(QRect(0, 0, 338, 141));
        buttonsScrollArea->setWidget(scrollAreaWidgetContents_2);

        verticalLayout_7->addWidget(buttonsScrollArea);

        verticalSpacer_2 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_7->addItem(verticalSpacer_2);


        verticalLayout_10->addWidget(buttonsGroupBox);

        hatsGroupBox = new QGroupBox(JoystickStatusWindow);
        hatsGroupBox->setObjectName(QStringLiteral("hatsGroupBox"));
        verticalLayout_8 = new QVBoxLayout(hatsGroupBox);
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        verticalLayout_8->setContentsMargins(4, 4, 4, 14);

        verticalLayout_10->addWidget(hatsGroupBox);


        horizontalLayout->addLayout(verticalLayout_10);


        verticalLayout_11->addLayout(horizontalLayout);

        buttonBox = new QDialogButtonBox(JoystickStatusWindow);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Close);

        verticalLayout_11->addWidget(buttonBox);


        retranslateUi(JoystickStatusWindow);
        QObject::connect(buttonBox, SIGNAL(accepted()), JoystickStatusWindow, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), JoystickStatusWindow, SLOT(reject()));

        QMetaObject::connectSlotsByName(JoystickStatusWindow);
    } // setupUi

    void retranslateUi(QDialog *JoystickStatusWindow)
    {
        JoystickStatusWindow->setWindowTitle(QApplication::translate("JoystickStatusWindow", "Properties", 0));
        groupBox->setTitle(QApplication::translate("JoystickStatusWindow", "Details", 0));
        label->setText(QApplication::translate("JoystickStatusWindow", "Name:", 0));
        joystickNameLabel->setText(QApplication::translate("JoystickStatusWindow", "%1", 0));
        label_2->setText(QApplication::translate("JoystickStatusWindow", "Number:", 0));
        joystickNumberLabel->setText(QApplication::translate("JoystickStatusWindow", "%1", 0));
        label_4->setText(QApplication::translate("JoystickStatusWindow", "Axes:", 0));
        joystickAxesLabel->setText(QApplication::translate("JoystickStatusWindow", "%1", 0));
        label_6->setText(QApplication::translate("JoystickStatusWindow", "Buttons:", 0));
        joystickButtonsLabel->setText(QApplication::translate("JoystickStatusWindow", "%1", 0));
        label_8->setText(QApplication::translate("JoystickStatusWindow", "Hats:", 0));
        joystickHatsLabel->setText(QApplication::translate("JoystickStatusWindow", "%1", 0));
        guidHeaderLabel->setText(QApplication::translate("JoystickStatusWindow", "GUID:", 0));
        guidLabel->setText(QApplication::translate("JoystickStatusWindow", "%1", 0));
        sdlcontrollerHeaderLabel->setText(QApplication::translate("JoystickStatusWindow", "Game Controller:", 0));
        sdlGameControllerLabel->setText(QApplication::translate("JoystickStatusWindow", "%1", 0));
        axesGroupBox->setTitle(QApplication::translate("JoystickStatusWindow", "Axes", 0));
        buttonsGroupBox->setTitle(QApplication::translate("JoystickStatusWindow", "Buttons", 0));
        hatsGroupBox->setTitle(QApplication::translate("JoystickStatusWindow", "Hats", 0));
    } // retranslateUi

};

namespace Ui {
    class JoystickStatusWindow: public Ui_JoystickStatusWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_JOYSTICKSTATUSWINDOW_H
