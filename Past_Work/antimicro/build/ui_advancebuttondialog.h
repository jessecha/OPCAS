/********************************************************************************
** Form generated from reading UI file 'advancebuttondialog.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADVANCEBUTTONDIALOG_H
#define UI_ADVANCEBUTTONDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "slotitemlistwidget.h"

QT_BEGIN_NAMESPACE

class Ui_AdvanceButtonDialog
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QListWidget *listWidget;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QVBoxLayout *verticalLayout_9;
    SlotItemListWidget *slotListWidget;
    QSpacerItem *verticalSpacer_5;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer;
    QComboBox *slotTypeComboBox;
    QSpacerItem *horizontalSpacer_2;
    QVBoxLayout *verticalLayout_2;
    QPushButton *insertSlotButton;
    QPushButton *deleteSlotButton;
    QPushButton *clearAllPushButton;
    QSpacerItem *verticalSpacer_2;
    QLabel *slotTypeHelpLabel;
    QStackedWidget *slotControlsStackedWidget;
    QWidget *timePage;
    QVBoxLayout *verticalLayout_12;
    QSpacerItem *verticalSpacer_7;
    QHBoxLayout *horizontalLayout_2;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_5;
    QLabel *actionTimeLabel;
    QHBoxLayout *horizontalLayout_10;
    QComboBox *actionMinutesComboBox;
    QComboBox *actionSecondsComboBox;
    QComboBox *actionTenthsComboBox;
    QComboBox *actionHundredthsComboBox;
    QWidget *mouseModPage;
    QVBoxLayout *verticalLayout_11;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_8;
    QSpinBox *mouseSpeedModSpinBox;
    QWidget *distancePage;
    QVBoxLayout *verticalLayout_13;
    QHBoxLayout *horizontalLayout_11;
    QLabel *label_6;
    QSpinBox *distanceSpinBox;
    QWidget *resetCyclePage;
    QVBoxLayout *verticalLayout_14;
    QHBoxLayout *horizontalLayout_7;
    QCheckBox *autoResetCycleCheckBox;
    QDoubleSpinBox *resetCycleDoubleSpinBox;
    QLabel *resetCycleSecondsLabel;
    QWidget *loadPage;
    QVBoxLayout *verticalLayout_16;
    QPushButton *loadProfilePushButton;
    QWidget *slotSetChangePage;
    QVBoxLayout *verticalLayout_15;
    QComboBox *slotSetChangeComboBox;
    QWidget *textEntryPage;
    QVBoxLayout *verticalLayout_17;
    QLineEdit *textEntryLineEdit;
    QWidget *execPage;
    QVBoxLayout *verticalLayout_19;
    QVBoxLayout *verticalLayout_18;
    QHBoxLayout *horizontalLayout_13;
    QLabel *label_4;
    QLineEdit *execLineEdit;
    QToolButton *execToolButton;
    QHBoxLayout *horizontalLayout_12;
    QLabel *label_2;
    QLineEdit *execArgumentsLineEdit;
    QSpacerItem *verticalSpacer_6;
    QWidget *page_2;
    QVBoxLayout *verticalLayout_7;
    QVBoxLayout *verticalLayout_6;
    QLabel *toggleLabel;
    QCheckBox *toggleCheckbox;
    QSpacerItem *verticalSpacer_3;
    QWidget *page_3;
    QVBoxLayout *verticalLayout_10;
    QHBoxLayout *horizontalLayout_8;
    QVBoxLayout *verticalLayout_4;
    QLabel *label;
    QCheckBox *turboCheckbox;
    QVBoxLayout *verticalLayout_3;
    QLabel *turboModeLabel;
    QComboBox *turboModeComboBox;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_3;
    QLabel *delayHelpLabel;
    QLabel *delayValueLabel;
    QSlider *turboSlider;
    QSpacerItem *verticalSpacer_4;
    QHBoxLayout *horizontalLayout_4;
    QLabel *rateHelpLabel;
    QLabel *rateValueLabel;
    QWidget *page_4;
    QVBoxLayout *verticalLayout_8;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_3;
    QComboBox *setSelectionComboBox;
    QSpacerItem *verticalSpacer_8;
    QFrame *line;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *AdvanceButtonDialog)
    {
        if (AdvanceButtonDialog->objectName().isEmpty())
            AdvanceButtonDialog->setObjectName(QStringLiteral("AdvanceButtonDialog"));
        AdvanceButtonDialog->setWindowModality(Qt::NonModal);
        AdvanceButtonDialog->resize(750, 439);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(AdvanceButtonDialog->sizePolicy().hasHeightForWidth());
        AdvanceButtonDialog->setSizePolicy(sizePolicy);
        AdvanceButtonDialog->setMinimumSize(QSize(750, 430));
        AdvanceButtonDialog->setStyleSheet(QStringLiteral(""));
        AdvanceButtonDialog->setModal(false);
        verticalLayout = new QVBoxLayout(AdvanceButtonDialog);
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(-1, 4, -1, -1);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        listWidget = new QListWidget(AdvanceButtonDialog);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        listWidget->setEnabled(true);
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(listWidget->sizePolicy().hasHeightForWidth());
        listWidget->setSizePolicy(sizePolicy1);
        listWidget->setMaximumSize(QSize(200, 16777215));

        horizontalLayout->addWidget(listWidget);

        stackedWidget = new QStackedWidget(AdvanceButtonDialog);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(stackedWidget->sizePolicy().hasHeightForWidth());
        stackedWidget->setSizePolicy(sizePolicy2);
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        verticalLayout_9 = new QVBoxLayout(page);
        verticalLayout_9->setObjectName(QStringLiteral("verticalLayout_9"));
        slotListWidget = new SlotItemListWidget(page);
        slotListWidget->setObjectName(QStringLiteral("slotListWidget"));
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(slotListWidget->sizePolicy().hasHeightForWidth());
        slotListWidget->setSizePolicy(sizePolicy3);
        slotListWidget->setMinimumSize(QSize(0, 100));
        slotListWidget->setMaximumSize(QSize(16777215, 100));
        slotListWidget->setAutoFillBackground(false);
        slotListWidget->setFrameShape(QFrame::StyledPanel);
        slotListWidget->setFrameShadow(QFrame::Sunken);
        slotListWidget->setLineWidth(1);
        slotListWidget->setMidLineWidth(0);
        slotListWidget->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        slotListWidget->setFlow(QListView::LeftToRight);
        slotListWidget->setSpacing(0);
        slotListWidget->setViewMode(QListView::ListMode);
        slotListWidget->setSelectionRectVisible(false);

        verticalLayout_9->addWidget(slotListWidget);

        verticalSpacer_5 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_9->addItem(verticalSpacer_5);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalSpacer = new QSpacerItem(50, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer);

        slotTypeComboBox = new QComboBox(page);
        slotTypeComboBox->setObjectName(QStringLiteral("slotTypeComboBox"));

        horizontalLayout_5->addWidget(slotTypeComboBox);

        horizontalSpacer_2 = new QSpacerItem(50, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_2);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        insertSlotButton = new QPushButton(page);
        insertSlotButton->setObjectName(QStringLiteral("insertSlotButton"));
        QIcon icon;
        QString iconThemeName = QStringLiteral("archive-insert");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon = QIcon::fromTheme(iconThemeName);
        } else {
            icon.addFile(QStringLiteral(""), QSize(), QIcon::Normal, QIcon::Off);
        }
        insertSlotButton->setIcon(icon);

        verticalLayout_2->addWidget(insertSlotButton);

        deleteSlotButton = new QPushButton(page);
        deleteSlotButton->setObjectName(QStringLiteral("deleteSlotButton"));
        QIcon icon1;
        iconThemeName = QStringLiteral("edit-delete");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon1 = QIcon::fromTheme(iconThemeName);
        } else {
            icon1.addFile(QStringLiteral(""), QSize(), QIcon::Normal, QIcon::Off);
        }
        deleteSlotButton->setIcon(icon1);

        verticalLayout_2->addWidget(deleteSlotButton);

        clearAllPushButton = new QPushButton(page);
        clearAllPushButton->setObjectName(QStringLiteral("clearAllPushButton"));
        QIcon icon2;
        iconThemeName = QStringLiteral("edit-clear");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon2 = QIcon::fromTheme(iconThemeName);
        } else {
            icon2.addFile(QStringLiteral(""), QSize(), QIcon::Normal, QIcon::Off);
        }
        clearAllPushButton->setIcon(icon2);

        verticalLayout_2->addWidget(clearAllPushButton);


        horizontalLayout_5->addLayout(verticalLayout_2);


        verticalLayout_9->addLayout(horizontalLayout_5);

        verticalSpacer_2 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_9->addItem(verticalSpacer_2);

        slotTypeHelpLabel = new QLabel(page);
        slotTypeHelpLabel->setObjectName(QStringLiteral("slotTypeHelpLabel"));
        slotTypeHelpLabel->setWordWrap(true);

        verticalLayout_9->addWidget(slotTypeHelpLabel);

        slotControlsStackedWidget = new QStackedWidget(page);
        slotControlsStackedWidget->setObjectName(QStringLiteral("slotControlsStackedWidget"));
        timePage = new QWidget();
        timePage->setObjectName(QStringLiteral("timePage"));
        verticalLayout_12 = new QVBoxLayout(timePage);
        verticalLayout_12->setObjectName(QStringLiteral("verticalLayout_12"));
        verticalSpacer_7 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_12->addItem(verticalSpacer_7);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(40);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        label_5 = new QLabel(timePage);
        label_5->setObjectName(QStringLiteral("label_5"));
        QSizePolicy sizePolicy4(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy4);
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        label_5->setFont(font);

        horizontalLayout_9->addWidget(label_5);

        actionTimeLabel = new QLabel(timePage);
        actionTimeLabel->setObjectName(QStringLiteral("actionTimeLabel"));
        QFont font1;
        font1.setBold(false);
        font1.setWeight(50);
        actionTimeLabel->setFont(font1);

        horizontalLayout_9->addWidget(actionTimeLabel);


        horizontalLayout_2->addLayout(horizontalLayout_9);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setSpacing(10);
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        actionMinutesComboBox = new QComboBox(timePage);
        actionMinutesComboBox->setObjectName(QStringLiteral("actionMinutesComboBox"));

        horizontalLayout_10->addWidget(actionMinutesComboBox);

        actionSecondsComboBox = new QComboBox(timePage);
        actionSecondsComboBox->setObjectName(QStringLiteral("actionSecondsComboBox"));
        QSizePolicy sizePolicy5(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(actionSecondsComboBox->sizePolicy().hasHeightForWidth());
        actionSecondsComboBox->setSizePolicy(sizePolicy5);
        actionSecondsComboBox->setMinimumSize(QSize(0, 0));
        actionSecondsComboBox->setMaxVisibleItems(11);

        horizontalLayout_10->addWidget(actionSecondsComboBox);

        actionTenthsComboBox = new QComboBox(timePage);
        actionTenthsComboBox->setObjectName(QStringLiteral("actionTenthsComboBox"));
        sizePolicy5.setHeightForWidth(actionTenthsComboBox->sizePolicy().hasHeightForWidth());
        actionTenthsComboBox->setSizePolicy(sizePolicy5);
        actionTenthsComboBox->setMinimumSize(QSize(0, 0));

        horizontalLayout_10->addWidget(actionTenthsComboBox);

        actionHundredthsComboBox = new QComboBox(timePage);
        actionHundredthsComboBox->setObjectName(QStringLiteral("actionHundredthsComboBox"));

        horizontalLayout_10->addWidget(actionHundredthsComboBox);


        horizontalLayout_2->addLayout(horizontalLayout_10);


        verticalLayout_12->addLayout(horizontalLayout_2);

        slotControlsStackedWidget->addWidget(timePage);
        mouseModPage = new QWidget();
        mouseModPage->setObjectName(QStringLiteral("mouseModPage"));
        verticalLayout_11 = new QVBoxLayout(mouseModPage);
        verticalLayout_11->setObjectName(QStringLiteral("verticalLayout_11"));
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        label_8 = new QLabel(mouseModPage);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setFont(font);

        horizontalLayout_6->addWidget(label_8);

        mouseSpeedModSpinBox = new QSpinBox(mouseModPage);
        mouseSpeedModSpinBox->setObjectName(QStringLiteral("mouseSpeedModSpinBox"));
        mouseSpeedModSpinBox->setMinimumSize(QSize(81, 0));
        mouseSpeedModSpinBox->setMinimum(1);
        mouseSpeedModSpinBox->setMaximum(400);
        mouseSpeedModSpinBox->setSingleStep(1);
        mouseSpeedModSpinBox->setValue(100);

        horizontalLayout_6->addWidget(mouseSpeedModSpinBox);


        verticalLayout_11->addLayout(horizontalLayout_6);

        slotControlsStackedWidget->addWidget(mouseModPage);
        distancePage = new QWidget();
        distancePage->setObjectName(QStringLiteral("distancePage"));
        verticalLayout_13 = new QVBoxLayout(distancePage);
        verticalLayout_13->setObjectName(QStringLiteral("verticalLayout_13"));
        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setSpacing(20);
        horizontalLayout_11->setObjectName(QStringLiteral("horizontalLayout_11"));
        label_6 = new QLabel(distancePage);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setFont(font);

        horizontalLayout_11->addWidget(label_6);

        distanceSpinBox = new QSpinBox(distancePage);
        distanceSpinBox->setObjectName(QStringLiteral("distanceSpinBox"));
        distanceSpinBox->setMinimumSize(QSize(81, 0));
        distanceSpinBox->setMinimum(1);
        distanceSpinBox->setMaximum(100);
        distanceSpinBox->setSingleStep(1);

        horizontalLayout_11->addWidget(distanceSpinBox);


        verticalLayout_13->addLayout(horizontalLayout_11);

        slotControlsStackedWidget->addWidget(distancePage);
        resetCyclePage = new QWidget();
        resetCyclePage->setObjectName(QStringLiteral("resetCyclePage"));
        verticalLayout_14 = new QVBoxLayout(resetCyclePage);
        verticalLayout_14->setObjectName(QStringLiteral("verticalLayout_14"));
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(10);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        autoResetCycleCheckBox = new QCheckBox(resetCyclePage);
        autoResetCycleCheckBox->setObjectName(QStringLiteral("autoResetCycleCheckBox"));
        autoResetCycleCheckBox->setEnabled(true);
        autoResetCycleCheckBox->setFont(font);

        horizontalLayout_7->addWidget(autoResetCycleCheckBox);

        resetCycleDoubleSpinBox = new QDoubleSpinBox(resetCyclePage);
        resetCycleDoubleSpinBox->setObjectName(QStringLiteral("resetCycleDoubleSpinBox"));
        resetCycleDoubleSpinBox->setEnabled(false);
        resetCycleDoubleSpinBox->setMaximum(60);
        resetCycleDoubleSpinBox->setSingleStep(0.5);
        resetCycleDoubleSpinBox->setValue(1);

        horizontalLayout_7->addWidget(resetCycleDoubleSpinBox);

        resetCycleSecondsLabel = new QLabel(resetCyclePage);
        resetCycleSecondsLabel->setObjectName(QStringLiteral("resetCycleSecondsLabel"));
        resetCycleSecondsLabel->setEnabled(true);
        resetCycleSecondsLabel->setFont(font);

        horizontalLayout_7->addWidget(resetCycleSecondsLabel);


        verticalLayout_14->addLayout(horizontalLayout_7);

        slotControlsStackedWidget->addWidget(resetCyclePage);
        loadPage = new QWidget();
        loadPage->setObjectName(QStringLiteral("loadPage"));
        verticalLayout_16 = new QVBoxLayout(loadPage);
        verticalLayout_16->setObjectName(QStringLiteral("verticalLayout_16"));
        loadProfilePushButton = new QPushButton(loadPage);
        loadProfilePushButton->setObjectName(QStringLiteral("loadProfilePushButton"));

        verticalLayout_16->addWidget(loadProfilePushButton);

        slotControlsStackedWidget->addWidget(loadPage);
        slotSetChangePage = new QWidget();
        slotSetChangePage->setObjectName(QStringLiteral("slotSetChangePage"));
        verticalLayout_15 = new QVBoxLayout(slotSetChangePage);
        verticalLayout_15->setObjectName(QStringLiteral("verticalLayout_15"));
        slotSetChangeComboBox = new QComboBox(slotSetChangePage);
        slotSetChangeComboBox->setObjectName(QStringLiteral("slotSetChangeComboBox"));

        verticalLayout_15->addWidget(slotSetChangeComboBox);

        slotControlsStackedWidget->addWidget(slotSetChangePage);
        textEntryPage = new QWidget();
        textEntryPage->setObjectName(QStringLiteral("textEntryPage"));
        verticalLayout_17 = new QVBoxLayout(textEntryPage);
        verticalLayout_17->setObjectName(QStringLiteral("verticalLayout_17"));
        textEntryLineEdit = new QLineEdit(textEntryPage);
        textEntryLineEdit->setObjectName(QStringLiteral("textEntryLineEdit"));

        verticalLayout_17->addWidget(textEntryLineEdit);

        slotControlsStackedWidget->addWidget(textEntryPage);
        execPage = new QWidget();
        execPage->setObjectName(QStringLiteral("execPage"));
        verticalLayout_19 = new QVBoxLayout(execPage);
        verticalLayout_19->setObjectName(QStringLiteral("verticalLayout_19"));
        verticalLayout_18 = new QVBoxLayout();
        verticalLayout_18->setObjectName(QStringLiteral("verticalLayout_18"));
        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setObjectName(QStringLiteral("horizontalLayout_13"));
        label_4 = new QLabel(execPage);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_13->addWidget(label_4);

        execLineEdit = new QLineEdit(execPage);
        execLineEdit->setObjectName(QStringLiteral("execLineEdit"));

        horizontalLayout_13->addWidget(execLineEdit);

        execToolButton = new QToolButton(execPage);
        execToolButton->setObjectName(QStringLiteral("execToolButton"));

        horizontalLayout_13->addWidget(execToolButton);


        verticalLayout_18->addLayout(horizontalLayout_13);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName(QStringLiteral("horizontalLayout_12"));
        label_2 = new QLabel(execPage);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_12->addWidget(label_2);

        execArgumentsLineEdit = new QLineEdit(execPage);
        execArgumentsLineEdit->setObjectName(QStringLiteral("execArgumentsLineEdit"));

        horizontalLayout_12->addWidget(execArgumentsLineEdit);


        verticalLayout_18->addLayout(horizontalLayout_12);


        verticalLayout_19->addLayout(verticalLayout_18);

        slotControlsStackedWidget->addWidget(execPage);

        verticalLayout_9->addWidget(slotControlsStackedWidget);

        verticalSpacer_6 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_9->addItem(verticalSpacer_6);

        stackedWidget->addWidget(page);
        slotListWidget->raise();
        slotControlsStackedWidget->raise();
        slotTypeHelpLabel->raise();
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        verticalLayout_7 = new QVBoxLayout(page_2);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setSpacing(20);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        toggleLabel = new QLabel(page_2);
        toggleLabel->setObjectName(QStringLiteral("toggleLabel"));

        verticalLayout_6->addWidget(toggleLabel);

        toggleCheckbox = new QCheckBox(page_2);
        toggleCheckbox->setObjectName(QStringLiteral("toggleCheckbox"));

        verticalLayout_6->addWidget(toggleCheckbox);


        verticalLayout_7->addLayout(verticalLayout_6);

        verticalSpacer_3 = new QSpacerItem(20, 302, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_7->addItem(verticalSpacer_3);

        stackedWidget->addWidget(page_2);
        page_3 = new QWidget();
        page_3->setObjectName(QStringLiteral("page_3"));
        verticalLayout_10 = new QVBoxLayout(page_3);
        verticalLayout_10->setObjectName(QStringLiteral("verticalLayout_10"));
        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        label = new QLabel(page_3);
        label->setObjectName(QStringLiteral("label"));
        QSizePolicy sizePolicy6(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy6);

        verticalLayout_4->addWidget(label);

        turboCheckbox = new QCheckBox(page_3);
        turboCheckbox->setObjectName(QStringLiteral("turboCheckbox"));

        verticalLayout_4->addWidget(turboCheckbox);


        horizontalLayout_8->addLayout(verticalLayout_4);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        turboModeLabel = new QLabel(page_3);
        turboModeLabel->setObjectName(QStringLiteral("turboModeLabel"));
        sizePolicy6.setHeightForWidth(turboModeLabel->sizePolicy().hasHeightForWidth());
        turboModeLabel->setSizePolicy(sizePolicy6);

        verticalLayout_3->addWidget(turboModeLabel);

        turboModeComboBox = new QComboBox(page_3);
        turboModeComboBox->setObjectName(QStringLiteral("turboModeComboBox"));
        turboModeComboBox->setEnabled(false);

        verticalLayout_3->addWidget(turboModeComboBox);


        horizontalLayout_8->addLayout(verticalLayout_3);


        verticalLayout_10->addLayout(horizontalLayout_8);

        verticalSpacer = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_10->addItem(verticalSpacer);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(-1, 0, -1, -1);
        delayHelpLabel = new QLabel(page_3);
        delayHelpLabel->setObjectName(QStringLiteral("delayHelpLabel"));
        sizePolicy.setHeightForWidth(delayHelpLabel->sizePolicy().hasHeightForWidth());
        delayHelpLabel->setSizePolicy(sizePolicy);
        delayHelpLabel->setMinimumSize(QSize(0, 0));
        delayHelpLabel->setMaximumSize(QSize(16777215, 20));

        horizontalLayout_3->addWidget(delayHelpLabel);

        delayValueLabel = new QLabel(page_3);
        delayValueLabel->setObjectName(QStringLiteral("delayValueLabel"));
        sizePolicy.setHeightForWidth(delayValueLabel->sizePolicy().hasHeightForWidth());
        delayValueLabel->setSizePolicy(sizePolicy);
        delayValueLabel->setMinimumSize(QSize(0, 0));
        delayValueLabel->setMaximumSize(QSize(16777215, 20));

        horizontalLayout_3->addWidget(delayValueLabel);


        verticalLayout_10->addLayout(horizontalLayout_3);

        turboSlider = new QSlider(page_3);
        turboSlider->setObjectName(QStringLiteral("turboSlider"));
        turboSlider->setEnabled(false);
        sizePolicy3.setHeightForWidth(turboSlider->sizePolicy().hasHeightForWidth());
        turboSlider->setSizePolicy(sizePolicy3);
        turboSlider->setMinimum(0);
        turboSlider->setMaximum(400);
        turboSlider->setPageStep(10);
        turboSlider->setValue(10);
        turboSlider->setTracking(true);
        turboSlider->setOrientation(Qt::Horizontal);
        turboSlider->setInvertedAppearance(false);
        turboSlider->setInvertedControls(false);
        turboSlider->setTickPosition(QSlider::TicksBelow);
        turboSlider->setTickInterval(10);

        verticalLayout_10->addWidget(turboSlider);

        verticalSpacer_4 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_10->addItem(verticalSpacer_4);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        rateHelpLabel = new QLabel(page_3);
        rateHelpLabel->setObjectName(QStringLiteral("rateHelpLabel"));

        horizontalLayout_4->addWidget(rateHelpLabel, 0, Qt::AlignTop);

        rateValueLabel = new QLabel(page_3);
        rateValueLabel->setObjectName(QStringLiteral("rateValueLabel"));

        horizontalLayout_4->addWidget(rateValueLabel, 0, Qt::AlignTop);


        verticalLayout_10->addLayout(horizontalLayout_4);

        stackedWidget->addWidget(page_3);
        turboSlider->raise();
        page_4 = new QWidget();
        page_4->setObjectName(QStringLiteral("page_4"));
        verticalLayout_8 = new QVBoxLayout(page_4);
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(30);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        label_3 = new QLabel(page_4);
        label_3->setObjectName(QStringLiteral("label_3"));

        verticalLayout_5->addWidget(label_3);

        setSelectionComboBox = new QComboBox(page_4);
        setSelectionComboBox->setObjectName(QStringLiteral("setSelectionComboBox"));
        setSelectionComboBox->setMaxVisibleItems(30);

        verticalLayout_5->addWidget(setSelectionComboBox);


        verticalLayout_8->addLayout(verticalLayout_5);

        verticalSpacer_8 = new QSpacerItem(20, 289, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_8->addItem(verticalSpacer_8);

        stackedWidget->addWidget(page_4);

        horizontalLayout->addWidget(stackedWidget);


        verticalLayout->addLayout(horizontalLayout);

        line = new QFrame(AdvanceButtonDialog);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line);

        buttonBox = new QDialogButtonBox(AdvanceButtonDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Close);

        verticalLayout->addWidget(buttonBox);

        buttonBox->raise();
        line->raise();
#ifndef QT_NO_SHORTCUT
        label_8->setBuddy(mouseSpeedModSpinBox);
        label_6->setBuddy(distanceSpinBox);
#endif // QT_NO_SHORTCUT

        retranslateUi(AdvanceButtonDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), AdvanceButtonDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), AdvanceButtonDialog, SLOT(reject()));
        QObject::connect(listWidget, SIGNAL(currentRowChanged(int)), stackedWidget, SLOT(setCurrentIndex(int)));

        listWidget->setCurrentRow(0);
        stackedWidget->setCurrentIndex(0);
        slotControlsStackedWidget->setCurrentIndex(0);
        actionTenthsComboBox->setCurrentIndex(0);
        setSelectionComboBox->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(AdvanceButtonDialog);
    } // setupUi

    void retranslateUi(QDialog *AdvanceButtonDialog)
    {
        AdvanceButtonDialog->setWindowTitle(QApplication::translate("AdvanceButtonDialog", "Advanced", 0));

        const bool __sortingEnabled = listWidget->isSortingEnabled();
        listWidget->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = listWidget->item(0);
        ___qlistwidgetitem->setText(QApplication::translate("AdvanceButtonDialog", "Assignments", 0));
        QListWidgetItem *___qlistwidgetitem1 = listWidget->item(1);
        ___qlistwidgetitem1->setText(QApplication::translate("AdvanceButtonDialog", "Toggle", 0));
        QListWidgetItem *___qlistwidgetitem2 = listWidget->item(2);
        ___qlistwidgetitem2->setText(QApplication::translate("AdvanceButtonDialog", "Turbo", 0));
        QListWidgetItem *___qlistwidgetitem3 = listWidget->item(3);
        ___qlistwidgetitem3->setText(QApplication::translate("AdvanceButtonDialog", "Set Selector", 0));
        listWidget->setSortingEnabled(__sortingEnabled);

        slotTypeComboBox->clear();
        slotTypeComboBox->insertItems(0, QStringList()
         << QApplication::translate("AdvanceButtonDialog", "Blank or KB/M", 0)
         << QApplication::translate("AdvanceButtonDialog", "Cycle", 0)
         << QApplication::translate("AdvanceButtonDialog", "Delay", 0)
         << QApplication::translate("AdvanceButtonDialog", "Distance", 0)
         << QApplication::translate("AdvanceButtonDialog", "Execute", 0)
         << QApplication::translate("AdvanceButtonDialog", "Hold", 0)
         << QApplication::translate("AdvanceButtonDialog", "Load", 0)
         << QApplication::translate("AdvanceButtonDialog", "Mouse Mod", 0)
         << QApplication::translate("AdvanceButtonDialog", "Pause", 0)
         << QApplication::translate("AdvanceButtonDialog", "Press Time", 0)
         << QApplication::translate("AdvanceButtonDialog", "Release", 0)
         << QApplication::translate("AdvanceButtonDialog", "Set Change", 0)
         << QApplication::translate("AdvanceButtonDialog", "Text Entry", 0)
        );
#ifndef QT_NO_TOOLTIP
        insertSlotButton->setToolTip(QApplication::translate("AdvanceButtonDialog", "Insert a new blank slot.", 0));
#endif // QT_NO_TOOLTIP
        insertSlotButton->setText(QApplication::translate("AdvanceButtonDialog", "Insert", 0));
#ifndef QT_NO_TOOLTIP
        deleteSlotButton->setToolTip(QApplication::translate("AdvanceButtonDialog", "Delete a slot.", 0));
#endif // QT_NO_TOOLTIP
        deleteSlotButton->setText(QApplication::translate("AdvanceButtonDialog", "Delete", 0));
#ifndef QT_NO_TOOLTIP
        clearAllPushButton->setToolTip(QApplication::translate("AdvanceButtonDialog", "Clear all currently assigned slots.", 0));
#endif // QT_NO_TOOLTIP
        clearAllPushButton->setText(QApplication::translate("AdvanceButtonDialog", "Clear All", 0));
        slotTypeHelpLabel->setText(QApplication::translate("AdvanceButtonDialog", "Placeholder", 0));
#ifndef QT_NO_TOOLTIP
        label_5->setToolTip(QApplication::translate("AdvanceButtonDialog", "Specify the duration of an inserted Pause or Hold slot.", 0));
#endif // QT_NO_TOOLTIP
        label_5->setText(QApplication::translate("AdvanceButtonDialog", "Time:", 0));
        actionTimeLabel->setText(QApplication::translate("AdvanceButtonDialog", "0.01s", 0));
        actionMinutesComboBox->clear();
        actionMinutesComboBox->insertItems(0, QStringList()
         << QApplication::translate("AdvanceButtonDialog", "0m", 0)
        );
        actionSecondsComboBox->clear();
        actionSecondsComboBox->insertItems(0, QStringList()
         << QApplication::translate("AdvanceButtonDialog", "0", 0)
        );
        actionTenthsComboBox->clear();
        actionTenthsComboBox->insertItems(0, QStringList()
         << QApplication::translate("AdvanceButtonDialog", "0", 0)
        );
        actionHundredthsComboBox->clear();
        actionHundredthsComboBox->insertItems(0, QStringList()
         << QApplication::translate("AdvanceButtonDialog", "0s", 0)
        );
#ifndef QT_NO_TOOLTIP
        label_8->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        label_8->setText(QApplication::translate("AdvanceButtonDialog", "&Mouse Speed Mod:", 0));
#ifndef QT_NO_TOOLTIP
        mouseSpeedModSpinBox->setToolTip(QApplication::translate("AdvanceButtonDialog", "Set the percentage that mouse speeds will be modified by.", 0));
#endif // QT_NO_TOOLTIP
        mouseSpeedModSpinBox->setSuffix(QApplication::translate("AdvanceButtonDialog", "%", 0));
#ifndef QT_NO_TOOLTIP
        label_6->setToolTip(QApplication::translate("AdvanceButtonDialog", "Specify the range past an axis dead zone in which a sequence of actions will execute.", 0));
#endif // QT_NO_TOOLTIP
        label_6->setText(QApplication::translate("AdvanceButtonDialog", "Distance: ", 0));
#ifndef QT_NO_TOOLTIP
        distanceSpinBox->setToolTip(QApplication::translate("AdvanceButtonDialog", "Specify the range past an axis dead zone in which a sequence of actions will execute.", 0));
#endif // QT_NO_TOOLTIP
        distanceSpinBox->setSuffix(QApplication::translate("AdvanceButtonDialog", "%", 0));
        autoResetCycleCheckBox->setText(QApplication::translate("AdvanceButtonDialog", "Auto Reset Cycle After", 0));
        resetCycleSecondsLabel->setText(QApplication::translate("AdvanceButtonDialog", "seconds", 0));
        loadProfilePushButton->setText(QApplication::translate("AdvanceButtonDialog", "Choose Profile", 0));
        label_4->setText(QApplication::translate("AdvanceButtonDialog", "Executable:", 0));
        execToolButton->setText(QApplication::translate("AdvanceButtonDialog", "...", 0));
        label_2->setText(QApplication::translate("AdvanceButtonDialog", "Arguments:", 0));
        toggleLabel->setText(QApplication::translate("AdvanceButtonDialog", "Enabled", 0));
        toggleCheckbox->setText(QString());
        label->setText(QApplication::translate("AdvanceButtonDialog", "Enabled", 0));
        turboCheckbox->setText(QString());
        turboModeLabel->setText(QApplication::translate("AdvanceButtonDialog", "Mode:", 0));
        turboModeComboBox->clear();
        turboModeComboBox->insertItems(0, QStringList()
         << QApplication::translate("AdvanceButtonDialog", "Normal", 0)
         << QApplication::translate("AdvanceButtonDialog", "Gradient", 0)
         << QApplication::translate("AdvanceButtonDialog", "Pulse", 0)
        );
#ifndef QT_NO_TOOLTIP
        turboModeComboBox->setToolTip(QApplication::translate("AdvanceButtonDialog", "<html><head/><body><p>Normal: Repeatedly press and release a button by the chosen rate.</p><p>Gradient: Modify the button press and button release delay based on how far an axis has been moved. The rate will remain the same.</p><p>Pulse: Modify how many times a button is pressed and released per second. The button delay will remain the same.</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        delayHelpLabel->setText(QApplication::translate("AdvanceButtonDialog", "Delay:", 0));
        delayValueLabel->setText(QApplication::translate("AdvanceButtonDialog", "0.10s", 0));
        rateHelpLabel->setText(QApplication::translate("AdvanceButtonDialog", "Rate:", 0));
        rateValueLabel->setText(QApplication::translate("AdvanceButtonDialog", "10.0/s", 0));
        label_3->setText(QApplication::translate("AdvanceButtonDialog", "Enabled", 0));
        setSelectionComboBox->clear();
        setSelectionComboBox->insertItems(0, QStringList()
         << QApplication::translate("AdvanceButtonDialog", "Disabled", 0)
         << QApplication::translate("AdvanceButtonDialog", "Select Set 1 One Way", 0)
         << QApplication::translate("AdvanceButtonDialog", "Select Set 1 Two Way", 0)
         << QApplication::translate("AdvanceButtonDialog", "Select Set 1 While Held", 0)
         << QApplication::translate("AdvanceButtonDialog", "Select Set 2 One Way", 0)
         << QApplication::translate("AdvanceButtonDialog", "Select Set 2 Two Way", 0)
         << QApplication::translate("AdvanceButtonDialog", "Select Set 2 While Held", 0)
         << QApplication::translate("AdvanceButtonDialog", "Select Set 3 One Way", 0)
         << QApplication::translate("AdvanceButtonDialog", "Select Set 3 Two Way", 0)
         << QApplication::translate("AdvanceButtonDialog", "Select Set 3 While Held", 0)
         << QApplication::translate("AdvanceButtonDialog", "Select Set 4 One Way", 0)
         << QApplication::translate("AdvanceButtonDialog", "Select Set 4 Two Way", 0)
         << QApplication::translate("AdvanceButtonDialog", "Select Set 4 While Held", 0)
         << QApplication::translate("AdvanceButtonDialog", "Select Set 5 One Way", 0)
         << QApplication::translate("AdvanceButtonDialog", "Select Set 5 Two Way", 0)
         << QApplication::translate("AdvanceButtonDialog", "Select Set 5 While Held", 0)
         << QApplication::translate("AdvanceButtonDialog", "Select Set 6 One Way", 0)
         << QApplication::translate("AdvanceButtonDialog", "Select Set 6 Two Way", 0)
         << QApplication::translate("AdvanceButtonDialog", "Select Set 6 While Held", 0)
         << QApplication::translate("AdvanceButtonDialog", "Select Set 7 One Way", 0)
         << QApplication::translate("AdvanceButtonDialog", "Select Set 7 Two Way", 0)
         << QApplication::translate("AdvanceButtonDialog", "Select Set 7 While Held", 0)
         << QApplication::translate("AdvanceButtonDialog", "Select Set 8 One Way", 0)
         << QApplication::translate("AdvanceButtonDialog", "Select Set 8 Two Way", 0)
         << QApplication::translate("AdvanceButtonDialog", "Select Set 8 While Held", 0)
        );
    } // retranslateUi

};

namespace Ui {
    class AdvanceButtonDialog: public Ui_AdvanceButtonDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADVANCEBUTTONDIALOG_H
