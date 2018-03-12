/********************************************************************************
** Form generated from reading UI file 'joycontrolstickeditdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_JOYCONTROLSTICKEDITDIALOG_H
#define UI_JOYCONTROLSTICKEDITDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include "joycontrolstickstatusbox.h"

QT_BEGIN_NAMESPACE

class Ui_JoyControlStickEditDialog
{
public:
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_10;
    QVBoxLayout *verticalLayout_3;
    JoyControlStickStatusBox *stickStatusBoxWidget;
    QSpacerItem *verticalSpacer_3;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_4;
    QLabel *xCoordinateLabel;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_6;
    QLabel *yCoordinateLabel;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_8;
    QLabel *distanceLabel;
    QHBoxLayout *horizontalLayout_8;
    QLabel *bearingHeaderLabel;
    QLabel *diagonalLabel;
    QHBoxLayout *horizontalLayout_9;
    QLabel *fromSafeZoneLabel;
    QLabel *fromSafeZoneValueLabel;
    QSpacerItem *verticalSpacer_4;
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout_7;
    QHBoxLayout *horizontalLayout;
    QLabel *label_3;
    QComboBox *presetsComboBox;
    QHBoxLayout *horizontalLayout_13;
    QLabel *label_11;
    QComboBox *joyModeComboBox;
    QSpacerItem *verticalSpacer_2;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QSlider *deadZoneSlider;
    QSpinBox *deadZoneSpinBox;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_9;
    QSlider *maxZoneSlider;
    QSpinBox *maxZoneSpinBox;
    QHBoxLayout *horizontalLayout_12;
    QLabel *label_2;
    QSlider *diagonalRangeSlider;
    QSpinBox *diagonalRangeSpinBox;
    QHBoxLayout *horizontalLayout_14;
    QLabel *squareStickLabel;
    QSlider *squareStickSlider;
    QSpinBox *squareStickSpinBox;
    QHBoxLayout *horizontalLayout_15;
    QLabel *stickDelayTitleLabel;
    QSlider *stickDelaySlider;
    QDoubleSpinBox *stickDelayDoubleSpinBox;
    QHBoxLayout *modifierHorizontalLayout;
    QLabel *label_5;
    QPushButton *modifierPushButton;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_4;
    QLabel *stickNameLabel;
    QLineEdit *stickNameLineEdit;
    QPushButton *mouseSettingsPushButton;
    QFrame *line;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *JoyControlStickEditDialog)
    {
        if (JoyControlStickEditDialog->objectName().isEmpty())
            JoyControlStickEditDialog->setObjectName(QStringLiteral("JoyControlStickEditDialog"));
        JoyControlStickEditDialog->resize(702, 464);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(JoyControlStickEditDialog->sizePolicy().hasHeightForWidth());
        JoyControlStickEditDialog->setSizePolicy(sizePolicy);
        JoyControlStickEditDialog->setMinimumSize(QSize(0, 0));
        JoyControlStickEditDialog->setStyleSheet(QLatin1String("JoyControlStickButtonPushButton[isflashing=\"true\"] {\n"
"    background-color: rgb(0, 0, 255);\n"
"	color: rgb(205, 197, 191);\n"
"}\n"
""));
        JoyControlStickEditDialog->setModal(true);
        verticalLayout_5 = new QVBoxLayout(JoyControlStickEditDialog);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setSpacing(20);
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        stickStatusBoxWidget = new JoyControlStickStatusBox(JoyControlStickEditDialog);
        stickStatusBoxWidget->setObjectName(QStringLiteral("stickStatusBoxWidget"));
        sizePolicy.setHeightForWidth(stickStatusBoxWidget->sizePolicy().hasHeightForWidth());
        stickStatusBoxWidget->setSizePolicy(sizePolicy);
        stickStatusBoxWidget->setMinimumSize(QSize(200, 200));
        stickStatusBoxWidget->setMaximumSize(QSize(16777215, 16777215));
        stickStatusBoxWidget->setSizeIncrement(QSize(0, 0));
        stickStatusBoxWidget->setBaseSize(QSize(200, 200));

        verticalLayout_3->addWidget(stickStatusBoxWidget);

        verticalSpacer_3 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_3->addItem(verticalSpacer_3);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(10);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_4 = new QLabel(JoyControlStickEditDialog);
        label_4->setObjectName(QStringLiteral("label_4"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy1);

        horizontalLayout_5->addWidget(label_4);

        xCoordinateLabel = new QLabel(JoyControlStickEditDialog);
        xCoordinateLabel->setObjectName(QStringLiteral("xCoordinateLabel"));
        sizePolicy1.setHeightForWidth(xCoordinateLabel->sizePolicy().hasHeightForWidth());
        xCoordinateLabel->setSizePolicy(sizePolicy1);

        horizontalLayout_5->addWidget(xCoordinateLabel);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        label_6 = new QLabel(JoyControlStickEditDialog);
        label_6->setObjectName(QStringLiteral("label_6"));
        sizePolicy1.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
        label_6->setSizePolicy(sizePolicy1);

        horizontalLayout_6->addWidget(label_6);

        yCoordinateLabel = new QLabel(JoyControlStickEditDialog);
        yCoordinateLabel->setObjectName(QStringLiteral("yCoordinateLabel"));
        sizePolicy1.setHeightForWidth(yCoordinateLabel->sizePolicy().hasHeightForWidth());
        yCoordinateLabel->setSizePolicy(sizePolicy1);

        horizontalLayout_6->addWidget(yCoordinateLabel);


        verticalLayout->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        label_8 = new QLabel(JoyControlStickEditDialog);
        label_8->setObjectName(QStringLiteral("label_8"));
        sizePolicy1.setHeightForWidth(label_8->sizePolicy().hasHeightForWidth());
        label_8->setSizePolicy(sizePolicy1);

        horizontalLayout_7->addWidget(label_8);

        distanceLabel = new QLabel(JoyControlStickEditDialog);
        distanceLabel->setObjectName(QStringLiteral("distanceLabel"));
        sizePolicy1.setHeightForWidth(distanceLabel->sizePolicy().hasHeightForWidth());
        distanceLabel->setSizePolicy(sizePolicy1);

        horizontalLayout_7->addWidget(distanceLabel);


        verticalLayout->addLayout(horizontalLayout_7);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        bearingHeaderLabel = new QLabel(JoyControlStickEditDialog);
        bearingHeaderLabel->setObjectName(QStringLiteral("bearingHeaderLabel"));
        sizePolicy1.setHeightForWidth(bearingHeaderLabel->sizePolicy().hasHeightForWidth());
        bearingHeaderLabel->setSizePolicy(sizePolicy1);

        horizontalLayout_8->addWidget(bearingHeaderLabel);

        diagonalLabel = new QLabel(JoyControlStickEditDialog);
        diagonalLabel->setObjectName(QStringLiteral("diagonalLabel"));
        sizePolicy1.setHeightForWidth(diagonalLabel->sizePolicy().hasHeightForWidth());
        diagonalLabel->setSizePolicy(sizePolicy1);

        horizontalLayout_8->addWidget(diagonalLabel);


        verticalLayout->addLayout(horizontalLayout_8);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        fromSafeZoneLabel = new QLabel(JoyControlStickEditDialog);
        fromSafeZoneLabel->setObjectName(QStringLiteral("fromSafeZoneLabel"));
        sizePolicy1.setHeightForWidth(fromSafeZoneLabel->sizePolicy().hasHeightForWidth());
        fromSafeZoneLabel->setSizePolicy(sizePolicy1);

        horizontalLayout_9->addWidget(fromSafeZoneLabel);

        fromSafeZoneValueLabel = new QLabel(JoyControlStickEditDialog);
        fromSafeZoneValueLabel->setObjectName(QStringLiteral("fromSafeZoneValueLabel"));
        sizePolicy1.setHeightForWidth(fromSafeZoneValueLabel->sizePolicy().hasHeightForWidth());
        fromSafeZoneValueLabel->setSizePolicy(sizePolicy1);

        horizontalLayout_9->addWidget(fromSafeZoneValueLabel);


        verticalLayout->addLayout(horizontalLayout_9);


        verticalLayout_3->addLayout(verticalLayout);

        verticalSpacer_4 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_3->addItem(verticalSpacer_4);


        horizontalLayout_10->addLayout(verticalLayout_3);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setSpacing(10);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_3 = new QLabel(JoyControlStickEditDialog);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout->addWidget(label_3);

        presetsComboBox = new QComboBox(JoyControlStickEditDialog);
        presetsComboBox->setObjectName(QStringLiteral("presetsComboBox"));
        presetsComboBox->setMinimumSize(QSize(282, 0));

        horizontalLayout->addWidget(presetsComboBox);


        verticalLayout_7->addLayout(horizontalLayout);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setObjectName(QStringLiteral("horizontalLayout_13"));
        label_11 = new QLabel(JoyControlStickEditDialog);
        label_11->setObjectName(QStringLiteral("label_11"));

        horizontalLayout_13->addWidget(label_11);

        joyModeComboBox = new QComboBox(JoyControlStickEditDialog);
        joyModeComboBox->setObjectName(QStringLiteral("joyModeComboBox"));
        joyModeComboBox->setMinimumSize(QSize(282, 0));

        horizontalLayout_13->addWidget(joyModeComboBox);


        verticalLayout_7->addLayout(horizontalLayout_13);


        verticalLayout_4->addLayout(verticalLayout_7);

        verticalSpacer_2 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);

        verticalLayout_4->addItem(verticalSpacer_2);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label = new QLabel(JoyControlStickEditDialog);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout_2->addWidget(label);

        deadZoneSlider = new QSlider(JoyControlStickEditDialog);
        deadZoneSlider->setObjectName(QStringLiteral("deadZoneSlider"));
        deadZoneSlider->setMinimum(1);
        deadZoneSlider->setMaximum(32737);
        deadZoneSlider->setSingleStep(100);
        deadZoneSlider->setPageStep(1000);
        deadZoneSlider->setValue(6000);
        deadZoneSlider->setOrientation(Qt::Horizontal);

        horizontalLayout_2->addWidget(deadZoneSlider);

        deadZoneSpinBox = new QSpinBox(JoyControlStickEditDialog);
        deadZoneSpinBox->setObjectName(QStringLiteral("deadZoneSpinBox"));
        deadZoneSpinBox->setMinimum(1);
        deadZoneSpinBox->setMaximum(32737);
        deadZoneSpinBox->setValue(8000);

        horizontalLayout_2->addWidget(deadZoneSpinBox);


        verticalLayout_2->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_9 = new QLabel(JoyControlStickEditDialog);
        label_9->setObjectName(QStringLiteral("label_9"));

        horizontalLayout_3->addWidget(label_9);

        maxZoneSlider = new QSlider(JoyControlStickEditDialog);
        maxZoneSlider->setObjectName(QStringLiteral("maxZoneSlider"));
        maxZoneSlider->setMinimum(1);
        maxZoneSlider->setMaximum(32737);
        maxZoneSlider->setSingleStep(100);
        maxZoneSlider->setPageStep(1000);
        maxZoneSlider->setValue(32000);
        maxZoneSlider->setOrientation(Qt::Horizontal);

        horizontalLayout_3->addWidget(maxZoneSlider);

        maxZoneSpinBox = new QSpinBox(JoyControlStickEditDialog);
        maxZoneSpinBox->setObjectName(QStringLiteral("maxZoneSpinBox"));
        maxZoneSpinBox->setMinimum(1);
        maxZoneSpinBox->setMaximum(32737);
        maxZoneSpinBox->setValue(32000);

        horizontalLayout_3->addWidget(maxZoneSpinBox);


        verticalLayout_2->addLayout(horizontalLayout_3);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName(QStringLiteral("horizontalLayout_12"));
        label_2 = new QLabel(JoyControlStickEditDialog);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_12->addWidget(label_2);

        diagonalRangeSlider = new QSlider(JoyControlStickEditDialog);
        diagonalRangeSlider->setObjectName(QStringLiteral("diagonalRangeSlider"));
        diagonalRangeSlider->setMinimum(1);
        diagonalRangeSlider->setMaximum(90);
        diagonalRangeSlider->setOrientation(Qt::Horizontal);

        horizontalLayout_12->addWidget(diagonalRangeSlider);

        diagonalRangeSpinBox = new QSpinBox(JoyControlStickEditDialog);
        diagonalRangeSpinBox->setObjectName(QStringLiteral("diagonalRangeSpinBox"));
        diagonalRangeSpinBox->setMinimum(1);
        diagonalRangeSpinBox->setMaximum(90);
        diagonalRangeSpinBox->setValue(45);

        horizontalLayout_12->addWidget(diagonalRangeSpinBox);


        verticalLayout_2->addLayout(horizontalLayout_12);

        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setObjectName(QStringLiteral("horizontalLayout_14"));
        squareStickLabel = new QLabel(JoyControlStickEditDialog);
        squareStickLabel->setObjectName(QStringLiteral("squareStickLabel"));

        horizontalLayout_14->addWidget(squareStickLabel);

        squareStickSlider = new QSlider(JoyControlStickEditDialog);
        squareStickSlider->setObjectName(QStringLiteral("squareStickSlider"));
        squareStickSlider->setMinimum(0);
        squareStickSlider->setMaximum(100);
        squareStickSlider->setSingleStep(1);
        squareStickSlider->setPageStep(10);
        squareStickSlider->setValue(0);
        squareStickSlider->setSliderPosition(0);
        squareStickSlider->setOrientation(Qt::Horizontal);

        horizontalLayout_14->addWidget(squareStickSlider);

        squareStickSpinBox = new QSpinBox(JoyControlStickEditDialog);
        squareStickSpinBox->setObjectName(QStringLiteral("squareStickSpinBox"));
        squareStickSpinBox->setMinimum(0);
        squareStickSpinBox->setMaximum(100);
        squareStickSpinBox->setSingleStep(1);
        squareStickSpinBox->setValue(0);

        horizontalLayout_14->addWidget(squareStickSpinBox);


        verticalLayout_2->addLayout(horizontalLayout_14);

        horizontalLayout_15 = new QHBoxLayout();
        horizontalLayout_15->setObjectName(QStringLiteral("horizontalLayout_15"));
        stickDelayTitleLabel = new QLabel(JoyControlStickEditDialog);
        stickDelayTitleLabel->setObjectName(QStringLiteral("stickDelayTitleLabel"));

        horizontalLayout_15->addWidget(stickDelayTitleLabel);

        stickDelaySlider = new QSlider(JoyControlStickEditDialog);
        stickDelaySlider->setObjectName(QStringLiteral("stickDelaySlider"));
        stickDelaySlider->setMinimum(0);
        stickDelaySlider->setMaximum(100);
        stickDelaySlider->setSingleStep(1);
        stickDelaySlider->setPageStep(10);
        stickDelaySlider->setValue(0);
        stickDelaySlider->setSliderPosition(0);
        stickDelaySlider->setOrientation(Qt::Horizontal);
        stickDelaySlider->setTickPosition(QSlider::TicksBelow);
        stickDelaySlider->setTickInterval(0);

        horizontalLayout_15->addWidget(stickDelaySlider);

        stickDelayDoubleSpinBox = new QDoubleSpinBox(JoyControlStickEditDialog);
        stickDelayDoubleSpinBox->setObjectName(QStringLiteral("stickDelayDoubleSpinBox"));
        stickDelayDoubleSpinBox->setReadOnly(false);
        stickDelayDoubleSpinBox->setDecimals(2);
        stickDelayDoubleSpinBox->setMaximum(1);
        stickDelayDoubleSpinBox->setSingleStep(0.01);

        horizontalLayout_15->addWidget(stickDelayDoubleSpinBox);


        verticalLayout_2->addLayout(horizontalLayout_15);

        modifierHorizontalLayout = new QHBoxLayout();
        modifierHorizontalLayout->setObjectName(QStringLiteral("modifierHorizontalLayout"));
        modifierHorizontalLayout->setContentsMargins(-1, 0, -1, -1);
        label_5 = new QLabel(JoyControlStickEditDialog);
        label_5->setObjectName(QStringLiteral("label_5"));

        modifierHorizontalLayout->addWidget(label_5);

        modifierPushButton = new QPushButton(JoyControlStickEditDialog);
        modifierPushButton->setObjectName(QStringLiteral("modifierPushButton"));

        modifierHorizontalLayout->addWidget(modifierPushButton, 0, Qt::AlignVCenter);


        verticalLayout_2->addLayout(modifierHorizontalLayout);


        verticalLayout_4->addLayout(verticalLayout_2);

        verticalSpacer = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_4->addItem(verticalSpacer);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(10);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(-1, -1, -1, 6);
        stickNameLabel = new QLabel(JoyControlStickEditDialog);
        stickNameLabel->setObjectName(QStringLiteral("stickNameLabel"));

        horizontalLayout_4->addWidget(stickNameLabel);

        stickNameLineEdit = new QLineEdit(JoyControlStickEditDialog);
        stickNameLineEdit->setObjectName(QStringLiteral("stickNameLineEdit"));

        horizontalLayout_4->addWidget(stickNameLineEdit);


        verticalLayout_4->addLayout(horizontalLayout_4);

        mouseSettingsPushButton = new QPushButton(JoyControlStickEditDialog);
        mouseSettingsPushButton->setObjectName(QStringLiteral("mouseSettingsPushButton"));
        QIcon icon;
        QString iconThemeName = QStringLiteral("edit-select");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon = QIcon::fromTheme(iconThemeName);
        } else {
            icon.addFile(QStringLiteral(""), QSize(), QIcon::Normal, QIcon::Off);
        }
        mouseSettingsPushButton->setIcon(icon);

        verticalLayout_4->addWidget(mouseSettingsPushButton);


        horizontalLayout_10->addLayout(verticalLayout_4);


        verticalLayout_5->addLayout(horizontalLayout_10);

        line = new QFrame(JoyControlStickEditDialog);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout_5->addWidget(line);

        buttonBox = new QDialogButtonBox(JoyControlStickEditDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Close);

        verticalLayout_5->addWidget(buttonBox);

#ifndef QT_NO_SHORTCUT
        stickNameLabel->setBuddy(stickNameLineEdit);
#endif // QT_NO_SHORTCUT

        retranslateUi(JoyControlStickEditDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), JoyControlStickEditDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), JoyControlStickEditDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(JoyControlStickEditDialog);
    } // setupUi

    void retranslateUi(QDialog *JoyControlStickEditDialog)
    {
        JoyControlStickEditDialog->setWindowTitle(QApplication::translate("JoyControlStickEditDialog", "Dialog", 0));
        label_4->setText(QApplication::translate("JoyControlStickEditDialog", "X:", 0));
        xCoordinateLabel->setText(QApplication::translate("JoyControlStickEditDialog", "0", 0));
        label_6->setText(QApplication::translate("JoyControlStickEditDialog", "Y:", 0));
        yCoordinateLabel->setText(QApplication::translate("JoyControlStickEditDialog", "0", 0));
        label_8->setText(QApplication::translate("JoyControlStickEditDialog", "Distance:", 0));
        distanceLabel->setText(QApplication::translate("JoyControlStickEditDialog", "0", 0));
        bearingHeaderLabel->setText(QApplication::translate("JoyControlStickEditDialog", "Bearing:", 0));
        diagonalLabel->setText(QApplication::translate("JoyControlStickEditDialog", "0", 0));
        fromSafeZoneLabel->setText(QApplication::translate("JoyControlStickEditDialog", "% Safe Zone:", 0));
        fromSafeZoneValueLabel->setText(QApplication::translate("JoyControlStickEditDialog", "0", 0));
        label_3->setText(QApplication::translate("JoyControlStickEditDialog", "Presets:", 0));
        presetsComboBox->clear();
        presetsComboBox->insertItems(0, QStringList()
         << QString()
         << QApplication::translate("JoyControlStickEditDialog", "Mouse (Normal)", 0)
         << QApplication::translate("JoyControlStickEditDialog", "Mouse (Inverted Horizontal)", 0)
         << QApplication::translate("JoyControlStickEditDialog", "Mouse (Inverted Vertical)", 0)
         << QApplication::translate("JoyControlStickEditDialog", "Mouse (Inverted Horizontal + Vertical)", 0)
         << QApplication::translate("JoyControlStickEditDialog", "Arrows", 0)
         << QApplication::translate("JoyControlStickEditDialog", "Keys: W | A | S | D", 0)
         << QApplication::translate("JoyControlStickEditDialog", "NumPad", 0)
         << QApplication::translate("JoyControlStickEditDialog", "None", 0)
        );
        label_11->setText(QApplication::translate("JoyControlStickEditDialog", "Stick Mode:", 0));
        joyModeComboBox->clear();
        joyModeComboBox->insertItems(0, QStringList()
         << QApplication::translate("JoyControlStickEditDialog", "Standard", 0)
         << QApplication::translate("JoyControlStickEditDialog", "Eight Way", 0)
         << QApplication::translate("JoyControlStickEditDialog", "4 Way Cardinal", 0)
         << QApplication::translate("JoyControlStickEditDialog", "4 Way Diagonal", 0)
        );
#ifndef QT_NO_TOOLTIP
        joyModeComboBox->setToolTip(QApplication::translate("JoyControlStickEditDialog", "Standard: 8 region stick with two direction buttons active\n"
"when the stick is in a diagonal region.\n"
"\n"
"Eight Way: 8 region stick with each direction having its\n"
"own dedicated button. Only one button is ever active at\n"
"at time. Useful for rougelike games.\n"
"\n"
"4 Way Cardinal: 4 region stick with regions corresponding to\n"
"the cardinal directions of the stick. Useful for menus.\n"
"\n"
"4 Way Diagonal: 4 region stick with each region corresponding\n"
"to a diagonal zone of the stick.", 0));
#endif // QT_NO_TOOLTIP
        label->setText(QApplication::translate("JoyControlStickEditDialog", "Dead Zone:", 0));
#ifndef QT_NO_TOOLTIP
        deadZoneSlider->setToolTip(QApplication::translate("JoyControlStickEditDialog", "Dead zone value to use for an analog stick.", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        deadZoneSpinBox->setToolTip(QApplication::translate("JoyControlStickEditDialog", "Dead zone value to use for an analog stick.", 0));
#endif // QT_NO_TOOLTIP
        label_9->setText(QApplication::translate("JoyControlStickEditDialog", "Max Zone:", 0));
#ifndef QT_NO_TOOLTIP
        maxZoneSlider->setToolTip(QApplication::translate("JoyControlStickEditDialog", "Value when an analog stick is considered moved 100%.", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        maxZoneSpinBox->setToolTip(QApplication::translate("JoyControlStickEditDialog", "Value when an analog stick is considered moved 100%.", 0));
#endif // QT_NO_TOOLTIP
        label_2->setText(QApplication::translate("JoyControlStickEditDialog", "Diagonal Range:", 0));
#ifndef QT_NO_TOOLTIP
        diagonalRangeSlider->setToolTip(QApplication::translate("JoyControlStickEditDialog", "The area (in degrees) that each diagonal region occupies.", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        diagonalRangeSpinBox->setToolTip(QApplication::translate("JoyControlStickEditDialog", "The area (in degrees) that each diagonal region occupies.", 0));
#endif // QT_NO_TOOLTIP
        squareStickLabel->setText(QApplication::translate("JoyControlStickEditDialog", "Square Stick:", 0));
#ifndef QT_NO_TOOLTIP
        squareStickSlider->setToolTip(QApplication::translate("JoyControlStickEditDialog", "Percentage to modify a square stick coordinates to confine values to a circle", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        squareStickSpinBox->setToolTip(QApplication::translate("JoyControlStickEditDialog", "Percentage to modify a square stick coordinates to confine values to a circle", 0));
#endif // QT_NO_TOOLTIP
        squareStickSpinBox->setSuffix(QApplication::translate("JoyControlStickEditDialog", "%", 0));
        stickDelayTitleLabel->setText(QApplication::translate("JoyControlStickEditDialog", "Stick Delay:", 0));
#ifndef QT_NO_TOOLTIP
        stickDelaySlider->setToolTip(QApplication::translate("JoyControlStickEditDialog", "Time lapsed before a direction change is taken into effect.", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        stickDelayDoubleSpinBox->setToolTip(QApplication::translate("JoyControlStickEditDialog", "Time lapsed before a direction change is taken into effect.", 0));
#endif // QT_NO_TOOLTIP
        stickDelayDoubleSpinBox->setSuffix(QApplication::translate("JoyControlStickEditDialog", " s", 0));
        label_5->setText(QApplication::translate("JoyControlStickEditDialog", "Modifier:", 0));
#ifndef QT_NO_TOOLTIP
        modifierPushButton->setToolTip(QApplication::translate("JoyControlStickEditDialog", "Edit button that is active while the stick is active.\n"
"\n"
"This button is useful for assigning zones with\n"
"modifier keys that can be used to assign walk/run\n"
"functionality to an analog stick.", 0));
#endif // QT_NO_TOOLTIP
        modifierPushButton->setText(QApplication::translate("JoyControlStickEditDialog", "PushButton", 0));
        stickNameLabel->setText(QApplication::translate("JoyControlStickEditDialog", "Name:", 0));
#ifndef QT_NO_TOOLTIP
        stickNameLineEdit->setToolTip(QApplication::translate("JoyControlStickEditDialog", "Specify the name of an analog stick.", 0));
#endif // QT_NO_TOOLTIP
        mouseSettingsPushButton->setText(QApplication::translate("JoyControlStickEditDialog", "Mouse Settings", 0));
    } // retranslateUi

};

namespace Ui {
    class JoyControlStickEditDialog: public Ui_JoyControlStickEditDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_JOYCONTROLSTICKEDITDIALOG_H
