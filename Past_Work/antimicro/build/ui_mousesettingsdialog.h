/********************************************************************************
** Form generated from reading UI file 'mousesettingsdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MOUSESETTINGSDIALOG_H
#define UI_MOUSESETTINGSDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_MouseSettingsDialog
{
public:
    QVBoxLayout *verticalLayout_9;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QComboBox *mouseModeComboBox;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QComboBox *accelerationComboBox;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_8;
    QVBoxLayout *verticalLayout_8;
    QGroupBox *mouseSpeedGroupBox;
    QVBoxLayout *mouseSpeedVerticalLayout;
    QCheckBox *changeMouseSpeedsTogetherCheckBox;
    QHBoxLayout *horizontalLayout_10;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_5;
    QSpinBox *horizontalSpinBox;
    QLabel *horizontalSpeedLabel;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_7;
    QSpinBox *verticalSpinBox;
    QLabel *verticalSpeedLabel;
    QHBoxLayout *horizontalLayout_14;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_7;
    QLabel *wheelHoriSpeedLabel;
    QSpinBox *wheelHoriSpeedSpinBox;
    QLabel *wheelHoriSpeedUnitsLabel;
    QVBoxLayout *verticalLayout_6;
    QHBoxLayout *horizontalLayout_13;
    QLabel *wheelVertSpeedLabel;
    QSpinBox *wheelVertSpeedSpinBox;
    QLabel *wheelVertSpeedUnitsLabel;
    QHBoxLayout *senHorizontalLayout;
    QLabel *sensLabel;
    QDoubleSpinBox *sensitivityDoubleSpinBox;
    QHBoxLayout *easingHorizontalLayout;
    QLabel *easingDurationLabel;
    QDoubleSpinBox *easingDoubleSpinBox;
    QSpacerItem *verticalSpacer_4;
    QGroupBox *extraAccelerationGroupBox;
    QVBoxLayout *verticalLayout_12;
    QHBoxLayout *horizontalLayout_20;
    QHBoxLayout *horizontalLayout_19;
    QLabel *extraAccelMultiLabel;
    QDoubleSpinBox *extraAccelDoubleSpinBox;
    QHBoxLayout *horizontalLayout_18;
    QLabel *minMultiLabel;
    QDoubleSpinBox *minMultiDoubleSpinBox;
    QHBoxLayout *horizontalLayout_21;
    QHBoxLayout *horizontalLayout_17;
    QLabel *minThresholdLabel;
    QDoubleSpinBox *minThresholdDoubleSpinBox;
    QHBoxLayout *horizontalLayout_11;
    QLabel *maxThresholdLabel;
    QDoubleSpinBox *maxThresholdDoubleSpinBox;
    QHBoxLayout *horizontalLayout_22;
    QLabel *label_11;
    QDoubleSpinBox *accelExtraDurationDoubleSpinBox;
    QHBoxLayout *horizontalLayout_16;
    QLabel *label_6;
    QComboBox *extraAccelCurveComboBox;
    QVBoxLayout *verticalLayout_7;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_11;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_3;
    QSpinBox *springWidthSpinBox;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_4;
    QSpinBox *springHeightSpinBox;
    QHBoxLayout *horizontalLayout_3;
    QLabel *releaseSpringRadiusLabel;
    QSpinBox *releaseSpringRadiusspinBox;
    QCheckBox *relativeSpringCheckBox;
    QSpacerItem *verticalSpacer_3;
    QGroupBox *groupBox_3;
    QVBoxLayout *verticalLayout_10;
    QHBoxLayout *horizontalLayout_12;
    QLabel *label_8;
    QLabel *mouseStatusXLabel;
    QHBoxLayout *horizontalLayout_15;
    QLabel *label_9;
    QLabel *mouseStatusYLabel;
    QSpacerItem *verticalSpacer_2;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *MouseSettingsDialog)
    {
        if (MouseSettingsDialog->objectName().isEmpty())
            MouseSettingsDialog->setObjectName(QStringLiteral("MouseSettingsDialog"));
        MouseSettingsDialog->setWindowModality(Qt::WindowModal);
        MouseSettingsDialog->resize(587, 612);
        verticalLayout_9 = new QVBoxLayout(MouseSettingsDialog);
        verticalLayout_9->setObjectName(QStringLiteral("verticalLayout_9"));
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(MouseSettingsDialog);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        mouseModeComboBox = new QComboBox(MouseSettingsDialog);
        mouseModeComboBox->setObjectName(QStringLiteral("mouseModeComboBox"));

        horizontalLayout->addWidget(mouseModeComboBox);


        verticalLayout_5->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_2 = new QLabel(MouseSettingsDialog);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setMinimumSize(QSize(160, 0));

        horizontalLayout_2->addWidget(label_2);

        accelerationComboBox = new QComboBox(MouseSettingsDialog);
        accelerationComboBox->setObjectName(QStringLiteral("accelerationComboBox"));

        horizontalLayout_2->addWidget(accelerationComboBox);


        verticalLayout_5->addLayout(horizontalLayout_2);


        verticalLayout_9->addLayout(verticalLayout_5);

        verticalSpacer = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_9->addItem(verticalSpacer);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        mouseSpeedGroupBox = new QGroupBox(MouseSettingsDialog);
        mouseSpeedGroupBox->setObjectName(QStringLiteral("mouseSpeedGroupBox"));
        mouseSpeedGroupBox->setFlat(false);
        mouseSpeedGroupBox->setCheckable(false);
        mouseSpeedVerticalLayout = new QVBoxLayout(mouseSpeedGroupBox);
        mouseSpeedVerticalLayout->setObjectName(QStringLiteral("mouseSpeedVerticalLayout"));
        changeMouseSpeedsTogetherCheckBox = new QCheckBox(mouseSpeedGroupBox);
        changeMouseSpeedsTogetherCheckBox->setObjectName(QStringLiteral("changeMouseSpeedsTogetherCheckBox"));
        changeMouseSpeedsTogetherCheckBox->setEnabled(true);

        mouseSpeedVerticalLayout->addWidget(changeMouseSpeedsTogetherCheckBox, 0, Qt::AlignHCenter);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setSpacing(16);
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        horizontalLayout_10->setContentsMargins(-1, 10, -1, -1);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(10);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(10);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_5 = new QLabel(mouseSpeedGroupBox);
        label_5->setObjectName(QStringLiteral("label_5"));

        horizontalLayout_4->addWidget(label_5);

        horizontalSpinBox = new QSpinBox(mouseSpeedGroupBox);
        horizontalSpinBox->setObjectName(QStringLiteral("horizontalSpinBox"));
        horizontalSpinBox->setEnabled(true);
        horizontalSpinBox->setMinimum(1);
        horizontalSpinBox->setMaximum(300);
        horizontalSpinBox->setValue(1);

        horizontalLayout_4->addWidget(horizontalSpinBox);


        verticalLayout_2->addLayout(horizontalLayout_4);

        horizontalSpeedLabel = new QLabel(mouseSpeedGroupBox);
        horizontalSpeedLabel->setObjectName(QStringLiteral("horizontalSpeedLabel"));

        verticalLayout_2->addWidget(horizontalSpeedLabel, 0, Qt::AlignRight);


        horizontalLayout_10->addLayout(verticalLayout_2);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(10);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setSpacing(10);
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        label_7 = new QLabel(mouseSpeedGroupBox);
        label_7->setObjectName(QStringLiteral("label_7"));

        horizontalLayout_9->addWidget(label_7);

        verticalSpinBox = new QSpinBox(mouseSpeedGroupBox);
        verticalSpinBox->setObjectName(QStringLiteral("verticalSpinBox"));
        verticalSpinBox->setEnabled(true);
        verticalSpinBox->setMinimum(1);
        verticalSpinBox->setMaximum(300);
        verticalSpinBox->setValue(1);

        horizontalLayout_9->addWidget(verticalSpinBox);


        verticalLayout_4->addLayout(horizontalLayout_9);

        verticalSpeedLabel = new QLabel(mouseSpeedGroupBox);
        verticalSpeedLabel->setObjectName(QStringLiteral("verticalSpeedLabel"));

        verticalLayout_4->addWidget(verticalSpeedLabel, 0, Qt::AlignRight);


        horizontalLayout_10->addLayout(verticalLayout_4);


        mouseSpeedVerticalLayout->addLayout(horizontalLayout_10);

        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setSpacing(16);
        horizontalLayout_14->setObjectName(QStringLiteral("horizontalLayout_14"));
        horizontalLayout_14->setContentsMargins(-1, 10, -1, -1);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(10);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        wheelHoriSpeedLabel = new QLabel(mouseSpeedGroupBox);
        wheelHoriSpeedLabel->setObjectName(QStringLiteral("wheelHoriSpeedLabel"));

        horizontalLayout_7->addWidget(wheelHoriSpeedLabel);

        wheelHoriSpeedSpinBox = new QSpinBox(mouseSpeedGroupBox);
        wheelHoriSpeedSpinBox->setObjectName(QStringLiteral("wheelHoriSpeedSpinBox"));
        wheelHoriSpeedSpinBox->setMinimum(1);
        wheelHoriSpeedSpinBox->setMaximum(100);
        wheelHoriSpeedSpinBox->setSingleStep(1);
        wheelHoriSpeedSpinBox->setValue(1);

        horizontalLayout_7->addWidget(wheelHoriSpeedSpinBox);


        verticalLayout->addLayout(horizontalLayout_7);

        wheelHoriSpeedUnitsLabel = new QLabel(mouseSpeedGroupBox);
        wheelHoriSpeedUnitsLabel->setObjectName(QStringLiteral("wheelHoriSpeedUnitsLabel"));

        verticalLayout->addWidget(wheelHoriSpeedUnitsLabel, 0, Qt::AlignRight);


        horizontalLayout_14->addLayout(verticalLayout);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setSpacing(10);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setObjectName(QStringLiteral("horizontalLayout_13"));
        wheelVertSpeedLabel = new QLabel(mouseSpeedGroupBox);
        wheelVertSpeedLabel->setObjectName(QStringLiteral("wheelVertSpeedLabel"));

        horizontalLayout_13->addWidget(wheelVertSpeedLabel);

        wheelVertSpeedSpinBox = new QSpinBox(mouseSpeedGroupBox);
        wheelVertSpeedSpinBox->setObjectName(QStringLiteral("wheelVertSpeedSpinBox"));
        wheelVertSpeedSpinBox->setMinimum(1);
        wheelVertSpeedSpinBox->setMaximum(100);

        horizontalLayout_13->addWidget(wheelVertSpeedSpinBox);


        verticalLayout_6->addLayout(horizontalLayout_13);

        wheelVertSpeedUnitsLabel = new QLabel(mouseSpeedGroupBox);
        wheelVertSpeedUnitsLabel->setObjectName(QStringLiteral("wheelVertSpeedUnitsLabel"));

        verticalLayout_6->addWidget(wheelVertSpeedUnitsLabel, 0, Qt::AlignRight);


        horizontalLayout_14->addLayout(verticalLayout_6);


        mouseSpeedVerticalLayout->addLayout(horizontalLayout_14);

        senHorizontalLayout = new QHBoxLayout();
        senHorizontalLayout->setObjectName(QStringLiteral("senHorizontalLayout"));
        sensLabel = new QLabel(mouseSpeedGroupBox);
        sensLabel->setObjectName(QStringLiteral("sensLabel"));

        senHorizontalLayout->addWidget(sensLabel);

        sensitivityDoubleSpinBox = new QDoubleSpinBox(mouseSpeedGroupBox);
        sensitivityDoubleSpinBox->setObjectName(QStringLiteral("sensitivityDoubleSpinBox"));
        sensitivityDoubleSpinBox->setEnabled(false);
        sensitivityDoubleSpinBox->setDecimals(3);
        sensitivityDoubleSpinBox->setMinimum(0.001);
        sensitivityDoubleSpinBox->setMaximum(1000);
        sensitivityDoubleSpinBox->setSingleStep(0.1);
        sensitivityDoubleSpinBox->setValue(1);

        senHorizontalLayout->addWidget(sensitivityDoubleSpinBox);


        mouseSpeedVerticalLayout->addLayout(senHorizontalLayout);

        easingHorizontalLayout = new QHBoxLayout();
        easingHorizontalLayout->setObjectName(QStringLiteral("easingHorizontalLayout"));
        easingDurationLabel = new QLabel(mouseSpeedGroupBox);
        easingDurationLabel->setObjectName(QStringLiteral("easingDurationLabel"));

        easingHorizontalLayout->addWidget(easingDurationLabel);

        easingDoubleSpinBox = new QDoubleSpinBox(mouseSpeedGroupBox);
        easingDoubleSpinBox->setObjectName(QStringLiteral("easingDoubleSpinBox"));
        easingDoubleSpinBox->setEnabled(false);
        easingDoubleSpinBox->setDecimals(2);
        easingDoubleSpinBox->setMinimum(0);
        easingDoubleSpinBox->setMaximum(5);
        easingDoubleSpinBox->setSingleStep(0.1);
        easingDoubleSpinBox->setValue(0.5);

        easingHorizontalLayout->addWidget(easingDoubleSpinBox);


        mouseSpeedVerticalLayout->addLayout(easingHorizontalLayout);

        verticalSpacer_4 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        mouseSpeedVerticalLayout->addItem(verticalSpacer_4);


        verticalLayout_8->addWidget(mouseSpeedGroupBox);

        extraAccelerationGroupBox = new QGroupBox(MouseSettingsDialog);
        extraAccelerationGroupBox->setObjectName(QStringLiteral("extraAccelerationGroupBox"));
        extraAccelerationGroupBox->setEnabled(true);
        extraAccelerationGroupBox->setFlat(false);
        extraAccelerationGroupBox->setCheckable(true);
        extraAccelerationGroupBox->setChecked(false);
        verticalLayout_12 = new QVBoxLayout(extraAccelerationGroupBox);
        verticalLayout_12->setObjectName(QStringLiteral("verticalLayout_12"));
        horizontalLayout_20 = new QHBoxLayout();
        horizontalLayout_20->setObjectName(QStringLiteral("horizontalLayout_20"));
        horizontalLayout_19 = new QHBoxLayout();
        horizontalLayout_19->setObjectName(QStringLiteral("horizontalLayout_19"));
        extraAccelMultiLabel = new QLabel(extraAccelerationGroupBox);
        extraAccelMultiLabel->setObjectName(QStringLiteral("extraAccelMultiLabel"));

        horizontalLayout_19->addWidget(extraAccelMultiLabel);

        extraAccelDoubleSpinBox = new QDoubleSpinBox(extraAccelerationGroupBox);
        extraAccelDoubleSpinBox->setObjectName(QStringLiteral("extraAccelDoubleSpinBox"));
        extraAccelDoubleSpinBox->setMinimum(1);
        extraAccelDoubleSpinBox->setMaximum(200);
        extraAccelDoubleSpinBox->setValue(2);

        horizontalLayout_19->addWidget(extraAccelDoubleSpinBox);


        horizontalLayout_20->addLayout(horizontalLayout_19);

        horizontalLayout_18 = new QHBoxLayout();
        horizontalLayout_18->setObjectName(QStringLiteral("horizontalLayout_18"));
        minMultiLabel = new QLabel(extraAccelerationGroupBox);
        minMultiLabel->setObjectName(QStringLiteral("minMultiLabel"));

        horizontalLayout_18->addWidget(minMultiLabel);

        minMultiDoubleSpinBox = new QDoubleSpinBox(extraAccelerationGroupBox);
        minMultiDoubleSpinBox->setObjectName(QStringLiteral("minMultiDoubleSpinBox"));
        minMultiDoubleSpinBox->setMinimum(0);
        minMultiDoubleSpinBox->setMaximum(100);
        minMultiDoubleSpinBox->setSingleStep(1);
        minMultiDoubleSpinBox->setValue(0);

        horizontalLayout_18->addWidget(minMultiDoubleSpinBox);


        horizontalLayout_20->addLayout(horizontalLayout_18);


        verticalLayout_12->addLayout(horizontalLayout_20);

        horizontalLayout_21 = new QHBoxLayout();
        horizontalLayout_21->setObjectName(QStringLiteral("horizontalLayout_21"));
        horizontalLayout_17 = new QHBoxLayout();
        horizontalLayout_17->setObjectName(QStringLiteral("horizontalLayout_17"));
        minThresholdLabel = new QLabel(extraAccelerationGroupBox);
        minThresholdLabel->setObjectName(QStringLiteral("minThresholdLabel"));

        horizontalLayout_17->addWidget(minThresholdLabel);

        minThresholdDoubleSpinBox = new QDoubleSpinBox(extraAccelerationGroupBox);
        minThresholdDoubleSpinBox->setObjectName(QStringLiteral("minThresholdDoubleSpinBox"));
        minThresholdDoubleSpinBox->setMaximum(100);
        minThresholdDoubleSpinBox->setValue(10);

        horizontalLayout_17->addWidget(minThresholdDoubleSpinBox);


        horizontalLayout_21->addLayout(horizontalLayout_17);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName(QStringLiteral("horizontalLayout_11"));
        maxThresholdLabel = new QLabel(extraAccelerationGroupBox);
        maxThresholdLabel->setObjectName(QStringLiteral("maxThresholdLabel"));

        horizontalLayout_11->addWidget(maxThresholdLabel);

        maxThresholdDoubleSpinBox = new QDoubleSpinBox(extraAccelerationGroupBox);
        maxThresholdDoubleSpinBox->setObjectName(QStringLiteral("maxThresholdDoubleSpinBox"));
        maxThresholdDoubleSpinBox->setMaximum(100);
        maxThresholdDoubleSpinBox->setValue(100);

        horizontalLayout_11->addWidget(maxThresholdDoubleSpinBox);


        horizontalLayout_21->addLayout(horizontalLayout_11);


        verticalLayout_12->addLayout(horizontalLayout_21);

        horizontalLayout_22 = new QHBoxLayout();
        horizontalLayout_22->setObjectName(QStringLiteral("horizontalLayout_22"));
        label_11 = new QLabel(extraAccelerationGroupBox);
        label_11->setObjectName(QStringLiteral("label_11"));

        horizontalLayout_22->addWidget(label_11);

        accelExtraDurationDoubleSpinBox = new QDoubleSpinBox(extraAccelerationGroupBox);
        accelExtraDurationDoubleSpinBox->setObjectName(QStringLiteral("accelExtraDurationDoubleSpinBox"));
        accelExtraDurationDoubleSpinBox->setMinimum(0);
        accelExtraDurationDoubleSpinBox->setMaximum(5);
        accelExtraDurationDoubleSpinBox->setSingleStep(0.05);

        horizontalLayout_22->addWidget(accelExtraDurationDoubleSpinBox);


        verticalLayout_12->addLayout(horizontalLayout_22);

        horizontalLayout_16 = new QHBoxLayout();
        horizontalLayout_16->setObjectName(QStringLiteral("horizontalLayout_16"));
        label_6 = new QLabel(extraAccelerationGroupBox);
        label_6->setObjectName(QStringLiteral("label_6"));

        horizontalLayout_16->addWidget(label_6);

        extraAccelCurveComboBox = new QComboBox(extraAccelerationGroupBox);
        extraAccelCurveComboBox->setObjectName(QStringLiteral("extraAccelCurveComboBox"));

        horizontalLayout_16->addWidget(extraAccelCurveComboBox);


        verticalLayout_12->addLayout(horizontalLayout_16);


        verticalLayout_8->addWidget(extraAccelerationGroupBox);


        horizontalLayout_8->addLayout(verticalLayout_8);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setSpacing(10);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        groupBox_2 = new QGroupBox(MouseSettingsDialog);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        verticalLayout_11 = new QVBoxLayout(groupBox_2);
        verticalLayout_11->setObjectName(QStringLiteral("verticalLayout_11"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_3 = new QLabel(groupBox_2);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_5->addWidget(label_3);

        springWidthSpinBox = new QSpinBox(groupBox_2);
        springWidthSpinBox->setObjectName(QStringLiteral("springWidthSpinBox"));
        springWidthSpinBox->setEnabled(false);
        springWidthSpinBox->setMaximum(16777215);

        horizontalLayout_5->addWidget(springWidthSpinBox);


        verticalLayout_3->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        label_4 = new QLabel(groupBox_2);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_6->addWidget(label_4);

        springHeightSpinBox = new QSpinBox(groupBox_2);
        springHeightSpinBox->setObjectName(QStringLiteral("springHeightSpinBox"));
        springHeightSpinBox->setEnabled(false);
        springHeightSpinBox->setMaximum(16777215);

        horizontalLayout_6->addWidget(springHeightSpinBox);


        verticalLayout_3->addLayout(horizontalLayout_6);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        releaseSpringRadiusLabel = new QLabel(groupBox_2);
        releaseSpringRadiusLabel->setObjectName(QStringLiteral("releaseSpringRadiusLabel"));

        horizontalLayout_3->addWidget(releaseSpringRadiusLabel);

        releaseSpringRadiusspinBox = new QSpinBox(groupBox_2);
        releaseSpringRadiusspinBox->setObjectName(QStringLiteral("releaseSpringRadiusspinBox"));
        releaseSpringRadiusspinBox->setEnabled(false);
        releaseSpringRadiusspinBox->setMaximum(100);

        horizontalLayout_3->addWidget(releaseSpringRadiusspinBox);


        verticalLayout_3->addLayout(horizontalLayout_3);


        verticalLayout_11->addLayout(verticalLayout_3);

        relativeSpringCheckBox = new QCheckBox(groupBox_2);
        relativeSpringCheckBox->setObjectName(QStringLiteral("relativeSpringCheckBox"));
        relativeSpringCheckBox->setEnabled(false);

        verticalLayout_11->addWidget(relativeSpringCheckBox);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_11->addItem(verticalSpacer_3);


        verticalLayout_7->addWidget(groupBox_2);

        groupBox_3 = new QGroupBox(MouseSettingsDialog);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        verticalLayout_10 = new QVBoxLayout(groupBox_3);
        verticalLayout_10->setObjectName(QStringLiteral("verticalLayout_10"));
        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName(QStringLiteral("horizontalLayout_12"));
        label_8 = new QLabel(groupBox_3);
        label_8->setObjectName(QStringLiteral("label_8"));

        horizontalLayout_12->addWidget(label_8);

        mouseStatusXLabel = new QLabel(groupBox_3);
        mouseStatusXLabel->setObjectName(QStringLiteral("mouseStatusXLabel"));

        horizontalLayout_12->addWidget(mouseStatusXLabel);


        verticalLayout_10->addLayout(horizontalLayout_12);

        horizontalLayout_15 = new QHBoxLayout();
        horizontalLayout_15->setObjectName(QStringLiteral("horizontalLayout_15"));
        label_9 = new QLabel(groupBox_3);
        label_9->setObjectName(QStringLiteral("label_9"));

        horizontalLayout_15->addWidget(label_9);

        mouseStatusYLabel = new QLabel(groupBox_3);
        mouseStatusYLabel->setObjectName(QStringLiteral("mouseStatusYLabel"));

        horizontalLayout_15->addWidget(mouseStatusYLabel);


        verticalLayout_10->addLayout(horizontalLayout_15);


        verticalLayout_7->addWidget(groupBox_3);


        horizontalLayout_8->addLayout(verticalLayout_7);


        verticalLayout_9->addLayout(horizontalLayout_8);

        verticalSpacer_2 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_9->addItem(verticalSpacer_2);

        buttonBox = new QDialogButtonBox(MouseSettingsDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Close);

        verticalLayout_9->addWidget(buttonBox);

#ifndef QT_NO_SHORTCUT
        label_5->setBuddy(horizontalSpinBox);
        label_7->setBuddy(verticalSpinBox);
        wheelHoriSpeedLabel->setBuddy(wheelHoriSpeedSpinBox);
        wheelVertSpeedLabel->setBuddy(wheelVertSpeedSpinBox);
        sensLabel->setBuddy(sensitivityDoubleSpinBox);
        easingDurationLabel->setBuddy(sensitivityDoubleSpinBox);
        extraAccelMultiLabel->setBuddy(extraAccelDoubleSpinBox);
        minMultiLabel->setBuddy(minMultiDoubleSpinBox);
        minThresholdLabel->setBuddy(minThresholdDoubleSpinBox);
        maxThresholdLabel->setBuddy(maxThresholdDoubleSpinBox);
        label_11->setBuddy(accelExtraDurationDoubleSpinBox);
        label_3->setBuddy(springWidthSpinBox);
        label_4->setBuddy(springHeightSpinBox);
        releaseSpringRadiusLabel->setBuddy(releaseSpringRadiusspinBox);
#endif // QT_NO_SHORTCUT

        retranslateUi(MouseSettingsDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), MouseSettingsDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), MouseSettingsDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(MouseSettingsDialog);
    } // setupUi

    void retranslateUi(QDialog *MouseSettingsDialog)
    {
        MouseSettingsDialog->setWindowTitle(QApplication::translate("MouseSettingsDialog", "Mouse Settings", 0));
        label->setText(QApplication::translate("MouseSettingsDialog", "Mouse Mode:", 0));
        mouseModeComboBox->clear();
        mouseModeComboBox->insertItems(0, QStringList()
         << QString()
         << QApplication::translate("MouseSettingsDialog", "Cursor", 0)
         << QApplication::translate("MouseSettingsDialog", "Spring", 0)
        );
#ifndef QT_NO_TOOLTIP
        mouseModeComboBox->setToolTip(QApplication::translate("MouseSettingsDialog", "Cursor mode is used to move the mouse cursor\n"
"around the screen relative to its current position\n"
"depending on how much you move an axis\n"
"or if a button is pressed.\n"
"\n"
"Spring mode is used to move the mouse cursor\n"
"from the center of the screen depending on how\n"
"much you move an axis. The mouse cursor will\n"
"be returned to the center of the screen when the\n"
"axis is moved back to the dead zone.", 0));
#endif // QT_NO_TOOLTIP
        label_2->setText(QApplication::translate("MouseSettingsDialog", "Acceleration:", 0));
        accelerationComboBox->clear();
        accelerationComboBox->insertItems(0, QStringList()
         << QString()
         << QApplication::translate("MouseSettingsDialog", "Enhanced Precision", 0)
         << QApplication::translate("MouseSettingsDialog", "Linear", 0)
         << QApplication::translate("MouseSettingsDialog", "Quadratic", 0)
         << QApplication::translate("MouseSettingsDialog", "Cubic", 0)
         << QApplication::translate("MouseSettingsDialog", "Quadratic Extreme", 0)
         << QApplication::translate("MouseSettingsDialog", "Power Function", 0)
         << QApplication::translate("MouseSettingsDialog", "Easing Quadratic", 0)
         << QApplication::translate("MouseSettingsDialog", "Easing Cubic", 0)
        );
#ifndef QT_NO_TOOLTIP
        accelerationComboBox->setToolTip(QApplication::translate("MouseSettingsDialog", "Enhanced: Three tier curve that makes the mouse move\n"
"slow on the low end of an axis and fast on the high end.\n"
"\n"
"Linear: Mouse moves proportionally to axis.\n"
"\n"
"Quadratic: Mouse accelerates slowly on low end.\n"
"\n"
"Cubic: Mouse accelerates slower than Quadratic.\n"
"\n"
"Quadratic Extreme: Raises mouse speed 1.5 times once\n"
"95% axis travel has been reached.\n"
"\n"
"Power Function: Allows for a more custom curve option.\n"
"\n"
"Easing Quadratic: Axis high end is gradually accelerated over a period of time using a Quadratic curve.\n"
"\n"
"Easing Cubic: Axis high end is gradually accelerated over\n"
"a period of time using a Cubic curve.", 0));
#endif // QT_NO_TOOLTIP
        mouseSpeedGroupBox->setTitle(QApplication::translate("MouseSettingsDialog", "Mouse Speed Settings", 0));
#ifndef QT_NO_TOOLTIP
        changeMouseSpeedsTogetherCheckBox->setToolTip(QApplication::translate("MouseSettingsDialog", "Enable to change the horizontal and vertical speed\n"
"boxes at the same time.", 0));
#endif // QT_NO_TOOLTIP
        changeMouseSpeedsTogetherCheckBox->setText(QApplication::translate("MouseSettingsDialog", "Change Together", 0));
        label_5->setText(QApplication::translate("MouseSettingsDialog", "Hori&zontal\n"
"Speed:", 0));
        horizontalSpeedLabel->setText(QApplication::translate("MouseSettingsDialog", "1 = 20 pps", 0));
        label_7->setText(QApplication::translate("MouseSettingsDialog", "&Vertical\n"
"Speed:", 0));
        verticalSpeedLabel->setText(QApplication::translate("MouseSettingsDialog", "1 = 20 pps", 0));
        wheelHoriSpeedLabel->setText(QApplication::translate("MouseSettingsDialog", "Wheel Hori.\n"
"Speed:", 0));
#ifndef QT_NO_TOOLTIP
        wheelHoriSpeedSpinBox->setToolTip(QApplication::translate("MouseSettingsDialog", "Set the speed used for horizontal mouse wheel movement\n"
"according to number of simulated notches per second.", 0));
#endif // QT_NO_TOOLTIP
        wheelHoriSpeedSpinBox->setSpecialValueText(QString());
        wheelHoriSpeedUnitsLabel->setText(QApplication::translate("MouseSettingsDialog", "1 = 1 notch(es)/s", 0));
        wheelVertSpeedLabel->setText(QApplication::translate("MouseSettingsDialog", "Wheel Vert.\n"
"Speed:", 0));
#ifndef QT_NO_TOOLTIP
        wheelVertSpeedSpinBox->setToolTip(QApplication::translate("MouseSettingsDialog", "Set the speed used for vertical mouse wheel movement\n"
"according to number of simulated notches per second.", 0));
#endif // QT_NO_TOOLTIP
        wheelVertSpeedUnitsLabel->setText(QApplication::translate("MouseSettingsDialog", "1 = 1 notch(es)/s", 0));
        sensLabel->setText(QApplication::translate("MouseSettingsDialog", "Sensitivit&y:", 0));
#ifndef QT_NO_TOOLTIP
        sensitivityDoubleSpinBox->setToolTip(QApplication::translate("MouseSettingsDialog", "For Power Function acceleration curve. Specifies\n"
"the factor to use for curve sensitivity. When the value\n"
"is above 1.0, the mouse movement will be accelerated\n"
"faster at the low end of an axis.", 0));
#endif // QT_NO_TOOLTIP
        easingDurationLabel->setText(QApplication::translate("MouseSettingsDialog", "Easing Duration:", 0));
#ifndef QT_NO_TOOLTIP
        easingDoubleSpinBox->setToolTip(QApplication::translate("MouseSettingsDialog", "Specifies the amount of time (in seconds) that will\n"
"be required before the mouse is fully accelerated\n"
"after reaching the high end of an axis.", 0));
#endif // QT_NO_TOOLTIP
        easingDoubleSpinBox->setSuffix(QApplication::translate("MouseSettingsDialog", " s", 0));
#ifndef QT_NO_TOOLTIP
        extraAccelerationGroupBox->setToolTip(QApplication::translate("MouseSettingsDialog", "Options for adding more acceleration to the mouse\n"
"movement beyond what the acceleration curve would\n"
"produce. Acceleration is added based on how quickly an axis is\n"
"moved in one gamepad poll. This is meant to help work around\n"
"some of the issues of the very limited input range available\n"
"using typical gamepad analog sticks.", 0));
#endif // QT_NO_TOOLTIP
        extraAccelerationGroupBox->setTitle(QApplication::translate("MouseSettingsDialog", "Delta Acceleration", 0));
        extraAccelMultiLabel->setText(QApplication::translate("MouseSettingsDialog", "&Multiplier:", 0));
#ifndef QT_NO_TOOLTIP
        extraAccelDoubleSpinBox->setToolTip(QApplication::translate("MouseSettingsDialog", "Highest value to accelerate mouse movement by", 0));
#endif // QT_NO_TOOLTIP
        extraAccelDoubleSpinBox->setSuffix(QApplication::translate("MouseSettingsDialog", "x", 0));
        minMultiLabel->setText(QApplication::translate("MouseSettingsDialog", "Start %:", 0));
#ifndef QT_NO_TOOLTIP
        minMultiDoubleSpinBox->setToolTip(QApplication::translate("MouseSettingsDialog", "Acceleration begins at this percentage of the base multiplier", 0));
#endif // QT_NO_TOOLTIP
        minMultiDoubleSpinBox->setSuffix(QApplication::translate("MouseSettingsDialog", "%", 0));
        minThresholdLabel->setText(QApplication::translate("MouseSettingsDialog", "Mi&n\n"
"Threshold:", 0));
#ifndef QT_NO_TOOLTIP
        minThresholdDoubleSpinBox->setToolTip(QApplication::translate("MouseSettingsDialog", "Minimum amount of axis travel required for acceleration to begin", 0));
#endif // QT_NO_TOOLTIP
        minThresholdDoubleSpinBox->setSuffix(QApplication::translate("MouseSettingsDialog", "%", 0));
        maxThresholdLabel->setText(QApplication::translate("MouseSettingsDialog", "Max\n"
"Threshold:", 0));
#ifndef QT_NO_TOOLTIP
        maxThresholdDoubleSpinBox->setToolTip(QApplication::translate("MouseSettingsDialog", "Maximum axis travel before acceleration has reached the multiplier value", 0));
#endif // QT_NO_TOOLTIP
        maxThresholdDoubleSpinBox->setSuffix(QApplication::translate("MouseSettingsDialog", "%", 0));
        label_11->setText(QApplication::translate("MouseSettingsDialog", "E&xtra Duration:", 0));
#ifndef QT_NO_TOOLTIP
        accelExtraDurationDoubleSpinBox->setToolTip(QApplication::translate("MouseSettingsDialog", "Extend the time that extra acceleration is applied. Axis travel\n"
"will be taken into account. A slower flick will decrease the\n"
"actual time that extra acceleration will be applied.", 0));
#endif // QT_NO_TOOLTIP
        accelExtraDurationDoubleSpinBox->setSuffix(QApplication::translate("MouseSettingsDialog", " s", 0));
        label_6->setText(QApplication::translate("MouseSettingsDialog", "Curve:", 0));
        extraAccelCurveComboBox->clear();
        extraAccelCurveComboBox->insertItems(0, QStringList()
         << QString()
         << QApplication::translate("MouseSettingsDialog", "Linear", 0)
         << QApplication::translate("MouseSettingsDialog", "Ease Out Sine", 0)
         << QApplication::translate("MouseSettingsDialog", "Ease Out Quad", 0)
         << QApplication::translate("MouseSettingsDialog", "Ease Out Cubic", 0)
        );
        groupBox_2->setTitle(QApplication::translate("MouseSettingsDialog", "Spring Settings", 0));
        label_3->setText(QApplication::translate("MouseSettingsDialog", "Spring Width:", 0));
#ifndef QT_NO_TOOLTIP
        springWidthSpinBox->setToolTip(QApplication::translate("MouseSettingsDialog", "Changes the width of the region that the cursor\n"
"can move in spring mode. 0 will use the entire width\n"
"of your screen.", 0));
#endif // QT_NO_TOOLTIP
        label_4->setText(QApplication::translate("MouseSettingsDialog", "Spring Height:", 0));
#ifndef QT_NO_TOOLTIP
        springHeightSpinBox->setToolTip(QApplication::translate("MouseSettingsDialog", "Changes the height of the region that the cursor\n"
"can move in spring mode. 0 will use the entire height\n"
"of your screen.", 0));
#endif // QT_NO_TOOLTIP
        releaseSpringRadiusLabel->setText(QApplication::translate("MouseSettingsDialog", "Release Radius:", 0));
#ifndef QT_NO_TOOLTIP
        releaseSpringRadiusspinBox->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        releaseSpringRadiusspinBox->setSuffix(QApplication::translate("MouseSettingsDialog", "%", 0));
#ifndef QT_NO_TOOLTIP
        relativeSpringCheckBox->setToolTip(QApplication::translate("MouseSettingsDialog", "Specifies that the spring area will be relative to the\n"
"mouse position set by a non-relative spring.", 0));
#endif // QT_NO_TOOLTIP
        relativeSpringCheckBox->setText(QApplication::translate("MouseSettingsDialog", "Relative", 0));
        groupBox_3->setTitle(QApplication::translate("MouseSettingsDialog", "Mouse Status", 0));
        label_8->setText(QApplication::translate("MouseSettingsDialog", "X:", 0));
        mouseStatusXLabel->setText(QApplication::translate("MouseSettingsDialog", "0 (0 pps)", 0));
        label_9->setText(QApplication::translate("MouseSettingsDialog", "Y:", 0));
        mouseStatusYLabel->setText(QApplication::translate("MouseSettingsDialog", "0 (0 pps)", 0));
    } // retranslateUi

};

namespace Ui {
    class MouseSettingsDialog: public Ui_MouseSettingsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MOUSESETTINGSDIALOG_H
