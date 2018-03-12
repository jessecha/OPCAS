/********************************************************************************
** Form generated from reading UI file 'advancestickassignmentdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADVANCESTICKASSIGNMENTDIALOG_H
#define UI_ADVANCESTICKASSIGNMENTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AdvanceStickAssignmentDialog
{
public:
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_6;
    QListWidget *listWidget;
    QSpacerItem *horizontalSpacer_2;
    QStackedWidget *stackedWidget;
    QWidget *sticks;
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout_3;
    QLabel *versionTwoMessageLabel;
    QLabel *joystickNumberLabel;
    QHBoxLayout *horizontalLayout_5;
    QVBoxLayout *verticalLayout;
    QLabel *label_5;
    QCheckBox *enableOneCheckBox;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_7;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *quickAssignStick1PushButton;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QComboBox *xAxisOneComboBox;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QComboBox *yAxisOneComboBox;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_6;
    QCheckBox *enableTwoCheckBox;
    QSpacerItem *verticalSpacer_4;
    QHBoxLayout *horizontalLayout_8;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *quickAssignStick2PushButton;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QComboBox *xAxisTwoComboBox;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QComboBox *yAxisTwoComboBox;
    QWidget *dpads;
    QVBoxLayout *verticalLayout_7;
    QLabel *joystickNumberLabel2;
    QLabel *hatNumberLabel;
    QSpacerItem *verticalSpacer_3;
    QVBoxLayout *verticalLayout_6;
    QLabel *label_9;
    QSpacerItem *verticalSpacer_6;
    QCheckBox *vdpadEnableCheckBox;
    QSpacerItem *verticalSpacer_5;
    QGridLayout *gridLayout;
    QComboBox *vdpadUpComboBox;
    QLabel *label_11;
    QComboBox *vdpadDownComboBox;
    QLabel *label_12;
    QComboBox *vdpadRightComboBox;
    QLabel *label_13;
    QLabel *label_10;
    QComboBox *vdpadLeftComboBox;
    QPushButton *vdpadUpPushButton;
    QPushButton *vdpadDownPushButton;
    QPushButton *vdpadLeftPushButton;
    QPushButton *vdpadRightPushButton;
    QSpacerItem *verticalSpacer_2;
    QFrame *line;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *AdvanceStickAssignmentDialog)
    {
        if (AdvanceStickAssignmentDialog->objectName().isEmpty())
            AdvanceStickAssignmentDialog->setObjectName(QStringLiteral("AdvanceStickAssignmentDialog"));
        AdvanceStickAssignmentDialog->resize(770, 440);
        AdvanceStickAssignmentDialog->setMinimumSize(QSize(0, 0));
        AdvanceStickAssignmentDialog->setModal(true);
        verticalLayout_5 = new QVBoxLayout(AdvanceStickAssignmentDialog);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        listWidget = new QListWidget(AdvanceStickAssignmentDialog);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(listWidget->sizePolicy().hasHeightForWidth());
        listWidget->setSizePolicy(sizePolicy);

        horizontalLayout_6->addWidget(listWidget);

        horizontalSpacer_2 = new QSpacerItem(20, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_2);

        stackedWidget = new QStackedWidget(AdvanceStickAssignmentDialog);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        sticks = new QWidget();
        sticks->setObjectName(QStringLiteral("sticks"));
        verticalLayout_4 = new QVBoxLayout(sticks);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        versionTwoMessageLabel = new QLabel(sticks);
        versionTwoMessageLabel->setObjectName(QStringLiteral("versionTwoMessageLabel"));
        QFont font;
        font.setBold(false);
        font.setWeight(50);
        versionTwoMessageLabel->setFont(font);
        versionTwoMessageLabel->setWordWrap(true);

        verticalLayout_3->addWidget(versionTwoMessageLabel);

        joystickNumberLabel = new QLabel(sticks);
        joystickNumberLabel->setObjectName(QStringLiteral("joystickNumberLabel"));
        QFont font1;
        font1.setBold(true);
        font1.setWeight(75);
        joystickNumberLabel->setFont(font1);

        verticalLayout_3->addWidget(joystickNumberLabel, 0, Qt::AlignHCenter);

        horizontalLayout_5 = new QHBoxLayout();
#ifndef Q_OS_MAC
        horizontalLayout_5->setSpacing(-1);
#endif
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        verticalLayout = new QVBoxLayout();
#ifndef Q_OS_MAC
        verticalLayout->setSpacing(-1);
#endif
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label_5 = new QLabel(sticks);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setFont(font1);

        verticalLayout->addWidget(label_5, 0, Qt::AlignHCenter);

        enableOneCheckBox = new QCheckBox(sticks);
        enableOneCheckBox->setObjectName(QStringLiteral("enableOneCheckBox"));
        enableOneCheckBox->setEnabled(true);

        verticalLayout->addWidget(enableOneCheckBox);

        verticalSpacer = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_3);

        quickAssignStick1PushButton = new QPushButton(sticks);
        quickAssignStick1PushButton->setObjectName(QStringLiteral("quickAssignStick1PushButton"));
        quickAssignStick1PushButton->setEnabled(false);

        horizontalLayout_7->addWidget(quickAssignStick1PushButton);


        verticalLayout->addLayout(horizontalLayout_7);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(sticks);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        xAxisOneComboBox = new QComboBox(sticks);
        xAxisOneComboBox->setObjectName(QStringLiteral("xAxisOneComboBox"));
        xAxisOneComboBox->setEnabled(false);

        horizontalLayout->addWidget(xAxisOneComboBox);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_2 = new QLabel(sticks);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_2->addWidget(label_2);

        yAxisOneComboBox = new QComboBox(sticks);
        yAxisOneComboBox->setObjectName(QStringLiteral("yAxisOneComboBox"));
        yAxisOneComboBox->setEnabled(false);

        horizontalLayout_2->addWidget(yAxisOneComboBox);


        verticalLayout->addLayout(horizontalLayout_2);

        verticalLayout->setStretch(4, 3);
        verticalLayout->setStretch(5, 3);

        horizontalLayout_5->addLayout(verticalLayout);

        horizontalSpacer = new QSpacerItem(40, 10, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label_6 = new QLabel(sticks);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setFont(font1);

        verticalLayout_2->addWidget(label_6, 0, Qt::AlignHCenter);

        enableTwoCheckBox = new QCheckBox(sticks);
        enableTwoCheckBox->setObjectName(QStringLiteral("enableTwoCheckBox"));
        enableTwoCheckBox->setEnabled(false);

        verticalLayout_2->addWidget(enableTwoCheckBox);

        verticalSpacer_4 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_2->addItem(verticalSpacer_4);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_4);

        quickAssignStick2PushButton = new QPushButton(sticks);
        quickAssignStick2PushButton->setObjectName(QStringLiteral("quickAssignStick2PushButton"));
        quickAssignStick2PushButton->setEnabled(false);

        horizontalLayout_8->addWidget(quickAssignStick2PushButton);


        verticalLayout_2->addLayout(horizontalLayout_8);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_3 = new QLabel(sticks);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_3->addWidget(label_3);

        xAxisTwoComboBox = new QComboBox(sticks);
        xAxisTwoComboBox->setObjectName(QStringLiteral("xAxisTwoComboBox"));
        xAxisTwoComboBox->setEnabled(false);

        horizontalLayout_3->addWidget(xAxisTwoComboBox);


        verticalLayout_2->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_4 = new QLabel(sticks);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_4->addWidget(label_4);

        yAxisTwoComboBox = new QComboBox(sticks);
        yAxisTwoComboBox->setObjectName(QStringLiteral("yAxisTwoComboBox"));
        yAxisTwoComboBox->setEnabled(false);

        horizontalLayout_4->addWidget(yAxisTwoComboBox);


        verticalLayout_2->addLayout(horizontalLayout_4);

        verticalLayout_2->setStretch(4, 3);
        verticalLayout_2->setStretch(5, 3);

        horizontalLayout_5->addLayout(verticalLayout_2);


        verticalLayout_3->addLayout(horizontalLayout_5);

        verticalLayout_3->setStretch(1, 1);
        verticalLayout_3->setStretch(2, 3);

        verticalLayout_4->addLayout(verticalLayout_3);

        stackedWidget->addWidget(sticks);
        dpads = new QWidget();
        dpads->setObjectName(QStringLiteral("dpads"));
        verticalLayout_7 = new QVBoxLayout(dpads);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        joystickNumberLabel2 = new QLabel(dpads);
        joystickNumberLabel2->setObjectName(QStringLiteral("joystickNumberLabel2"));
        joystickNumberLabel2->setFont(font1);

        verticalLayout_7->addWidget(joystickNumberLabel2, 0, Qt::AlignHCenter);

        hatNumberLabel = new QLabel(dpads);
        hatNumberLabel->setObjectName(QStringLiteral("hatNumberLabel"));
        hatNumberLabel->setFont(font1);

        verticalLayout_7->addWidget(hatNumberLabel, 0, Qt::AlignHCenter);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_7->addItem(verticalSpacer_3);

        verticalLayout_6 = new QVBoxLayout();
#ifndef Q_OS_MAC
        verticalLayout_6->setSpacing(-1);
#endif
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        label_9 = new QLabel(dpads);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setFont(font1);

        verticalLayout_6->addWidget(label_9);

        verticalSpacer_6 = new QSpacerItem(20, 11, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_6->addItem(verticalSpacer_6);

        vdpadEnableCheckBox = new QCheckBox(dpads);
        vdpadEnableCheckBox->setObjectName(QStringLiteral("vdpadEnableCheckBox"));

        verticalLayout_6->addWidget(vdpadEnableCheckBox);

        verticalSpacer_5 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_6->addItem(verticalSpacer_5);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setHorizontalSpacing(41);
        gridLayout->setVerticalSpacing(20);
        vdpadUpComboBox = new QComboBox(dpads);
        vdpadUpComboBox->setObjectName(QStringLiteral("vdpadUpComboBox"));
        vdpadUpComboBox->setEnabled(false);

        gridLayout->addWidget(vdpadUpComboBox, 0, 1, 1, 1);

        label_11 = new QLabel(dpads);
        label_11->setObjectName(QStringLiteral("label_11"));

        gridLayout->addWidget(label_11, 1, 0, 1, 1);

        vdpadDownComboBox = new QComboBox(dpads);
        vdpadDownComboBox->setObjectName(QStringLiteral("vdpadDownComboBox"));
        vdpadDownComboBox->setEnabled(false);

        gridLayout->addWidget(vdpadDownComboBox, 1, 1, 1, 1);

        label_12 = new QLabel(dpads);
        label_12->setObjectName(QStringLiteral("label_12"));

        gridLayout->addWidget(label_12, 2, 0, 1, 1);

        vdpadRightComboBox = new QComboBox(dpads);
        vdpadRightComboBox->setObjectName(QStringLiteral("vdpadRightComboBox"));
        vdpadRightComboBox->setEnabled(false);

        gridLayout->addWidget(vdpadRightComboBox, 3, 1, 1, 1);

        label_13 = new QLabel(dpads);
        label_13->setObjectName(QStringLiteral("label_13"));

        gridLayout->addWidget(label_13, 3, 0, 1, 1);

        label_10 = new QLabel(dpads);
        label_10->setObjectName(QStringLiteral("label_10"));

        gridLayout->addWidget(label_10, 0, 0, 1, 1);

        vdpadLeftComboBox = new QComboBox(dpads);
        vdpadLeftComboBox->setObjectName(QStringLiteral("vdpadLeftComboBox"));
        vdpadLeftComboBox->setEnabled(false);

        gridLayout->addWidget(vdpadLeftComboBox, 2, 1, 1, 1);

        vdpadUpPushButton = new QPushButton(dpads);
        vdpadUpPushButton->setObjectName(QStringLiteral("vdpadUpPushButton"));
        vdpadUpPushButton->setEnabled(false);

        gridLayout->addWidget(vdpadUpPushButton, 0, 2, 1, 1);

        vdpadDownPushButton = new QPushButton(dpads);
        vdpadDownPushButton->setObjectName(QStringLiteral("vdpadDownPushButton"));
        vdpadDownPushButton->setEnabled(false);

        gridLayout->addWidget(vdpadDownPushButton, 1, 2, 1, 1);

        vdpadLeftPushButton = new QPushButton(dpads);
        vdpadLeftPushButton->setObjectName(QStringLiteral("vdpadLeftPushButton"));
        vdpadLeftPushButton->setEnabled(false);

        gridLayout->addWidget(vdpadLeftPushButton, 2, 2, 1, 1);

        vdpadRightPushButton = new QPushButton(dpads);
        vdpadRightPushButton->setObjectName(QStringLiteral("vdpadRightPushButton"));
        vdpadRightPushButton->setEnabled(false);

        gridLayout->addWidget(vdpadRightPushButton, 3, 2, 1, 1);

        gridLayout->setColumnStretch(0, 1);
        gridLayout->setColumnStretch(1, 2);
        gridLayout->setColumnStretch(2, 1);

        verticalLayout_6->addLayout(gridLayout);


        verticalLayout_7->addLayout(verticalLayout_6);

        stackedWidget->addWidget(dpads);

        horizontalLayout_6->addWidget(stackedWidget);

        horizontalLayout_6->setStretch(0, 1);
        horizontalLayout_6->setStretch(1, 1);
        horizontalLayout_6->setStretch(2, 3);

        verticalLayout_5->addLayout(horizontalLayout_6);

        verticalSpacer_2 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_5->addItem(verticalSpacer_2);

        line = new QFrame(AdvanceStickAssignmentDialog);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout_5->addWidget(line);

        buttonBox = new QDialogButtonBox(AdvanceStickAssignmentDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Close);

        verticalLayout_5->addWidget(buttonBox);


        retranslateUi(AdvanceStickAssignmentDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), AdvanceStickAssignmentDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), AdvanceStickAssignmentDialog, SLOT(reject()));
        QObject::connect(listWidget, SIGNAL(currentRowChanged(int)), stackedWidget, SLOT(setCurrentIndex(int)));

        listWidget->setCurrentRow(0);
        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(AdvanceStickAssignmentDialog);
    } // setupUi

    void retranslateUi(QDialog *AdvanceStickAssignmentDialog)
    {
        AdvanceStickAssignmentDialog->setWindowTitle(QApplication::translate("AdvanceStickAssignmentDialog", "Stick/Pad Assignment", 0));

        const bool __sortingEnabled = listWidget->isSortingEnabled();
        listWidget->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = listWidget->item(0);
        ___qlistwidgetitem->setText(QApplication::translate("AdvanceStickAssignmentDialog", "Sticks", 0));
        QListWidgetItem *___qlistwidgetitem1 = listWidget->item(1);
        ___qlistwidgetitem1->setText(QApplication::translate("AdvanceStickAssignmentDialog", "DPads", 0));
        listWidget->setSortingEnabled(__sortingEnabled);

        versionTwoMessageLabel->setText(QApplication::translate("AdvanceStickAssignmentDialog", "Note: This window is meant for backwards compatibility with profiles made before antimicro 2.0. Since version 2.0, use of the Game Controller Mapping window is preferred.", 0));
        joystickNumberLabel->setText(QApplication::translate("AdvanceStickAssignmentDialog", "%1 (Joystick %2)", 0));
        label_5->setText(QApplication::translate("AdvanceStickAssignmentDialog", "Stick 1", 0));
        enableOneCheckBox->setText(QApplication::translate("AdvanceStickAssignmentDialog", "Enabled", 0));
        quickAssignStick1PushButton->setText(QApplication::translate("AdvanceStickAssignmentDialog", "Assign", 0));
        label->setText(QApplication::translate("AdvanceStickAssignmentDialog", "X Axis:", 0));
        label_2->setText(QApplication::translate("AdvanceStickAssignmentDialog", "Y Axis:", 0));
        label_6->setText(QApplication::translate("AdvanceStickAssignmentDialog", "Stick 2", 0));
        enableTwoCheckBox->setText(QApplication::translate("AdvanceStickAssignmentDialog", "Enabled", 0));
        quickAssignStick2PushButton->setText(QApplication::translate("AdvanceStickAssignmentDialog", "Assign", 0));
        label_3->setText(QApplication::translate("AdvanceStickAssignmentDialog", "X Axis:", 0));
        label_4->setText(QApplication::translate("AdvanceStickAssignmentDialog", "Y Axis:", 0));
        joystickNumberLabel2->setText(QApplication::translate("AdvanceStickAssignmentDialog", "%1 (Joystick %2)", 0));
        hatNumberLabel->setText(QApplication::translate("AdvanceStickAssignmentDialog", "Number of Physical DPads: %1", 0));
        label_9->setText(QApplication::translate("AdvanceStickAssignmentDialog", "Virtual DPad 1", 0));
        vdpadEnableCheckBox->setText(QApplication::translate("AdvanceStickAssignmentDialog", "Enabled", 0));
        label_11->setText(QApplication::translate("AdvanceStickAssignmentDialog", "Down:", 0));
        label_12->setText(QApplication::translate("AdvanceStickAssignmentDialog", "Left:", 0));
        label_13->setText(QApplication::translate("AdvanceStickAssignmentDialog", "Right:", 0));
        label_10->setText(QApplication::translate("AdvanceStickAssignmentDialog", "Up:", 0));
        vdpadUpPushButton->setText(QApplication::translate("AdvanceStickAssignmentDialog", "Assign", 0));
        vdpadDownPushButton->setText(QApplication::translate("AdvanceStickAssignmentDialog", "Assign", 0));
        vdpadLeftPushButton->setText(QApplication::translate("AdvanceStickAssignmentDialog", "Assign", 0));
        vdpadRightPushButton->setText(QApplication::translate("AdvanceStickAssignmentDialog", "Assign", 0));
    } // retranslateUi

};

namespace Ui {
    class AdvanceStickAssignmentDialog: public Ui_AdvanceStickAssignmentDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADVANCESTICKASSIGNMENTDIALOG_H
