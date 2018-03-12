/********************************************************************************
** Form generated from reading UI file 'axiseditdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AXISEDITDIALOG_H
#define UI_AXISEDITDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include "axisvaluebox.h"

QT_BEGIN_NAMESPACE

class Ui_AxisEditDialog
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QComboBox *presetsComboBox;
    QSpacerItem *verticalSpacer;
    QGridLayout *gridLayout;
    QLineEdit *lineEdit_2;
    QLabel *label_3;
    QSlider *horizontalSlider;
    QLineEdit *lineEdit;
    QSlider *horizontalSlider_2;
    QLabel *label_4;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *nPushButton;
    QComboBox *comboBox_2;
    QPushButton *pPushButton;
    AxisValueBox *axisstatusBox;
    QHBoxLayout *horizontalLayout_7;
    QLabel *joyValueHeaderLabel;
    QLabel *joyValueLabel;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout;
    QLabel *axisNameLabel;
    QLineEdit *axisNameLineEdit;
    QPushButton *mouseSettingsPushButton;
    QFrame *line;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *AxisEditDialog)
    {
        if (AxisEditDialog->objectName().isEmpty())
            AxisEditDialog->setObjectName(QStringLiteral("AxisEditDialog"));
        AxisEditDialog->resize(511, 369);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(AxisEditDialog->sizePolicy().hasHeightForWidth());
        AxisEditDialog->setSizePolicy(sizePolicy);
        AxisEditDialog->setMinimumSize(QSize(0, 0));
        AxisEditDialog->setMaximumSize(QSize(16777215, 16777215));
        AxisEditDialog->setSizeGripEnabled(false);
        AxisEditDialog->setModal(true);
        verticalLayout = new QVBoxLayout(AxisEditDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(10);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label = new QLabel(AxisEditDialog);
        label->setObjectName(QStringLiteral("label"));
        label->setLineWidth(1);

        horizontalLayout_2->addWidget(label);

        presetsComboBox = new QComboBox(AxisEditDialog);
        presetsComboBox->setObjectName(QStringLiteral("presetsComboBox"));
        presetsComboBox->setMouseTracking(false);
        presetsComboBox->setEditable(false);
        presetsComboBox->setMaxVisibleItems(12);
        presetsComboBox->setMaxCount(12);

        horizontalLayout_2->addWidget(presetsComboBox);


        verticalLayout->addLayout(horizontalLayout_2);

        verticalSpacer = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setHorizontalSpacing(10);
        gridLayout->setContentsMargins(-1, 10, -1, 10);
        lineEdit_2 = new QLineEdit(AxisEditDialog);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(lineEdit_2->sizePolicy().hasHeightForWidth());
        lineEdit_2->setSizePolicy(sizePolicy1);
        lineEdit_2->setMaximumSize(QSize(100, 16777215));
        lineEdit_2->setMouseTracking(false);
        lineEdit_2->setAcceptDrops(false);
        lineEdit_2->setInputMask(QStringLiteral(""));
        lineEdit_2->setMaxLength(5);
        lineEdit_2->setReadOnly(false);

        gridLayout->addWidget(lineEdit_2, 1, 2, 1, 1);

        label_3 = new QLabel(AxisEditDialog);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 0, 0, 1, 1);

        horizontalSlider = new QSlider(AxisEditDialog);
        horizontalSlider->setObjectName(QStringLiteral("horizontalSlider"));
        horizontalSlider->setMinimum(0);
        horizontalSlider->setMaximum(32737);
        horizontalSlider->setSingleStep(100);
        horizontalSlider->setPageStep(1000);
        horizontalSlider->setValue(5000);
        horizontalSlider->setSliderPosition(5000);
        horizontalSlider->setTracking(true);
        horizontalSlider->setOrientation(Qt::Horizontal);
        horizontalSlider->setInvertedAppearance(false);
        horizontalSlider->setInvertedControls(false);
        horizontalSlider->setTickPosition(QSlider::NoTicks);
        horizontalSlider->setTickInterval(1000);

        gridLayout->addWidget(horizontalSlider, 0, 1, 1, 1);

        lineEdit = new QLineEdit(AxisEditDialog);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setEnabled(true);
        sizePolicy1.setHeightForWidth(lineEdit->sizePolicy().hasHeightForWidth());
        lineEdit->setSizePolicy(sizePolicy1);
        lineEdit->setMaximumSize(QSize(100, 16777215));
        lineEdit->setMouseTracking(false);
        lineEdit->setAcceptDrops(false);
        lineEdit->setInputMask(QStringLiteral(""));
        lineEdit->setMaxLength(5);
        lineEdit->setFrame(true);
        lineEdit->setReadOnly(false);

        gridLayout->addWidget(lineEdit, 0, 2, 1, 1);

        horizontalSlider_2 = new QSlider(AxisEditDialog);
        horizontalSlider_2->setObjectName(QStringLiteral("horizontalSlider_2"));
        horizontalSlider_2->setMinimum(0);
        horizontalSlider_2->setMaximum(32737);
        horizontalSlider_2->setSingleStep(100);
        horizontalSlider_2->setPageStep(1000);
        horizontalSlider_2->setValue(32000);
        horizontalSlider_2->setOrientation(Qt::Horizontal);
        horizontalSlider_2->setTickPosition(QSlider::NoTicks);
        horizontalSlider_2->setTickInterval(1000);

        gridLayout->addWidget(horizontalSlider_2, 1, 1, 1, 1);

        label_4 = new QLabel(AxisEditDialog);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout->addWidget(label_4, 1, 0, 1, 1);


        verticalLayout->addLayout(gridLayout);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        nPushButton = new QPushButton(AxisEditDialog);
        nPushButton->setObjectName(QStringLiteral("nPushButton"));

        horizontalLayout_3->addWidget(nPushButton);

        comboBox_2 = new QComboBox(AxisEditDialog);
        comboBox_2->setObjectName(QStringLiteral("comboBox_2"));
        comboBox_2->setMaxVisibleItems(5);
        comboBox_2->setMaxCount(5);

        horizontalLayout_3->addWidget(comboBox_2);

        pPushButton = new QPushButton(AxisEditDialog);
        pPushButton->setObjectName(QStringLiteral("pPushButton"));

        horizontalLayout_3->addWidget(pPushButton);


        verticalLayout->addLayout(horizontalLayout_3);

        axisstatusBox = new AxisValueBox(AxisEditDialog);
        axisstatusBox->setObjectName(QStringLiteral("axisstatusBox"));
        QSizePolicy sizePolicy2(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(axisstatusBox->sizePolicy().hasHeightForWidth());
        axisstatusBox->setSizePolicy(sizePolicy2);
        axisstatusBox->setMinimumSize(QSize(0, 25));
        axisstatusBox->setMaximumSize(QSize(16777215, 25));

        verticalLayout->addWidget(axisstatusBox);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(10);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        joyValueHeaderLabel = new QLabel(AxisEditDialog);
        joyValueHeaderLabel->setObjectName(QStringLiteral("joyValueHeaderLabel"));
        sizePolicy1.setHeightForWidth(joyValueHeaderLabel->sizePolicy().hasHeightForWidth());
        joyValueHeaderLabel->setSizePolicy(sizePolicy1);
        joyValueHeaderLabel->setMargin(0);
        joyValueHeaderLabel->setIndent(4);

        horizontalLayout_7->addWidget(joyValueHeaderLabel);

        joyValueLabel = new QLabel(AxisEditDialog);
        joyValueLabel->setObjectName(QStringLiteral("joyValueLabel"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(joyValueLabel->sizePolicy().hasHeightForWidth());
        joyValueLabel->setSizePolicy(sizePolicy3);

        horizontalLayout_7->addWidget(joyValueLabel);


        verticalLayout->addLayout(horizontalLayout_7);

        verticalSpacer_2 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        axisNameLabel = new QLabel(AxisEditDialog);
        axisNameLabel->setObjectName(QStringLiteral("axisNameLabel"));

        horizontalLayout->addWidget(axisNameLabel);

        axisNameLineEdit = new QLineEdit(AxisEditDialog);
        axisNameLineEdit->setObjectName(QStringLiteral("axisNameLineEdit"));

        horizontalLayout->addWidget(axisNameLineEdit);


        verticalLayout->addLayout(horizontalLayout);

        mouseSettingsPushButton = new QPushButton(AxisEditDialog);
        mouseSettingsPushButton->setObjectName(QStringLiteral("mouseSettingsPushButton"));
        QIcon icon;
        QString iconThemeName = QStringLiteral("edit-select");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon = QIcon::fromTheme(iconThemeName);
        } else {
            icon.addFile(QStringLiteral(""), QSize(), QIcon::Normal, QIcon::Off);
        }
        mouseSettingsPushButton->setIcon(icon);

        verticalLayout->addWidget(mouseSettingsPushButton);

        line = new QFrame(AxisEditDialog);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line);

        buttonBox = new QDialogButtonBox(AxisEditDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Close);
        buttonBox->setCenterButtons(false);

        verticalLayout->addWidget(buttonBox);

        buttonBox->raise();
        line->raise();
        axisstatusBox->raise();
        mouseSettingsPushButton->raise();
#ifndef QT_NO_SHORTCUT
        axisNameLabel->setBuddy(axisNameLineEdit);
#endif // QT_NO_SHORTCUT

        retranslateUi(AxisEditDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), AxisEditDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), AxisEditDialog, SLOT(reject()));

        comboBox_2->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(AxisEditDialog);
    } // setupUi

    void retranslateUi(QDialog *AxisEditDialog)
    {
        AxisEditDialog->setWindowTitle(QApplication::translate("AxisEditDialog", "Axis", 0));
        label->setText(QApplication::translate("AxisEditDialog", "Presets:", 0));
        presetsComboBox->clear();
        presetsComboBox->insertItems(0, QStringList()
         << QString()
         << QApplication::translate("AxisEditDialog", "Mouse (Horizontal)", 0)
         << QApplication::translate("AxisEditDialog", "Mouse (Inverted Horizontal)", 0)
         << QApplication::translate("AxisEditDialog", "Mouse (Vertical)", 0)
         << QApplication::translate("AxisEditDialog", "Mouse (Inverted Vertical)", 0)
         << QApplication::translate("AxisEditDialog", "Arrows: Up | Down", 0)
         << QApplication::translate("AxisEditDialog", "Arrows: Left | Right", 0)
         << QApplication::translate("AxisEditDialog", "Keys: W | S", 0)
         << QApplication::translate("AxisEditDialog", "Keys: A | D", 0)
         << QApplication::translate("AxisEditDialog", "NumPad: KP_8 | KP_2", 0)
         << QApplication::translate("AxisEditDialog", "NumPad: KP_4 | KP_6", 0)
         << QApplication::translate("AxisEditDialog", "None", 0)
        );
#ifndef QT_NO_TOOLTIP
        lineEdit_2->setToolTip(QApplication::translate("AxisEditDialog", "Set the value to use as the limit for an axis. Useful for a\n"
"worn out analog stick.", 0));
#endif // QT_NO_TOOLTIP
        lineEdit_2->setText(QString());
        label_3->setText(QApplication::translate("AxisEditDialog", "Dead Zone:", 0));
#ifndef QT_NO_TOOLTIP
        horizontalSlider->setToolTip(QApplication::translate("AxisEditDialog", "Set the value of the dead zone for an axis.", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        lineEdit->setToolTip(QApplication::translate("AxisEditDialog", "Set the value of the dead zone for an axis.", 0));
#endif // QT_NO_TOOLTIP
        lineEdit->setText(QString());
#ifndef QT_NO_TOOLTIP
        horizontalSlider_2->setToolTip(QApplication::translate("AxisEditDialog", "Set the value to use as the limit for an axis. Useful for a\n"
"worn out analog stick.", 0));
#endif // QT_NO_TOOLTIP
        label_4->setText(QApplication::translate("AxisEditDialog", "Max Zone:", 0));
        nPushButton->setText(QApplication::translate("AxisEditDialog", "[NO KEY]", 0));
        comboBox_2->clear();
        comboBox_2->insertItems(0, QStringList()
         << QApplication::translate("AxisEditDialog", "Negative Half Throttle", 0)
         << QApplication::translate("AxisEditDialog", "Negative Throttle", 0)
         << QApplication::translate("AxisEditDialog", "Normal", 0)
         << QApplication::translate("AxisEditDialog", "Positive Throttle", 0)
         << QApplication::translate("AxisEditDialog", "Positive Half Throttle", 0)
        );
#ifndef QT_NO_TOOLTIP
        comboBox_2->setToolTip(QApplication::translate("AxisEditDialog", "Throttle setting that determines the behavior of how to\n"
"interpret an axis hold or release.", 0));
#endif // QT_NO_TOOLTIP
        pPushButton->setText(QApplication::translate("AxisEditDialog", "[NO KEY]", 0));
        joyValueHeaderLabel->setText(QApplication::translate("AxisEditDialog", "Current Value:", 0));
        joyValueLabel->setText(QString());
        axisNameLabel->setText(QApplication::translate("AxisEditDialog", "Name:", 0));
#ifndef QT_NO_TOOLTIP
        axisNameLineEdit->setToolTip(QApplication::translate("AxisEditDialog", "Specify the name of an axis.", 0));
#endif // QT_NO_TOOLTIP
        mouseSettingsPushButton->setText(QApplication::translate("AxisEditDialog", "Mouse Settings", 0));
    } // retranslateUi

};

namespace Ui {
    class AxisEditDialog: public Ui_AxisEditDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AXISEDITDIALOG_H
