/********************************************************************************
** Form generated from reading UI file 'dpadeditdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DPADEDITDIALOG_H
#define UI_DPADEDITDIALOG_H

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
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_DPadEditDialog
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label_3;
    QComboBox *presetsComboBox;
    QHBoxLayout *horizontalLayout_13;
    QLabel *label_11;
    QComboBox *joyModeComboBox;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *dpadDelayLabel;
    QSlider *dpadDelaySlider;
    QDoubleSpinBox *dpadDelayDoubleSpinBox;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QLabel *dpadNameLabel;
    QLineEdit *dpadNameLineEdit;
    QPushButton *mouseSettingsPushButton;
    QFrame *line;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *DPadEditDialog)
    {
        if (DPadEditDialog->objectName().isEmpty())
            DPadEditDialog->setObjectName(QStringLiteral("DPadEditDialog"));
        DPadEditDialog->setWindowModality(Qt::WindowModal);
        DPadEditDialog->resize(528, 334);
        verticalLayout_2 = new QVBoxLayout(DPadEditDialog);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_3 = new QLabel(DPadEditDialog);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout->addWidget(label_3);

        presetsComboBox = new QComboBox(DPadEditDialog);
        presetsComboBox->setObjectName(QStringLiteral("presetsComboBox"));
        presetsComboBox->setMinimumSize(QSize(282, 0));

        horizontalLayout->addWidget(presetsComboBox);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setObjectName(QStringLiteral("horizontalLayout_13"));
        label_11 = new QLabel(DPadEditDialog);
        label_11->setObjectName(QStringLiteral("label_11"));

        horizontalLayout_13->addWidget(label_11);

        joyModeComboBox = new QComboBox(DPadEditDialog);
        joyModeComboBox->setObjectName(QStringLiteral("joyModeComboBox"));
        joyModeComboBox->setMinimumSize(QSize(282, 0));

        horizontalLayout_13->addWidget(joyModeComboBox);


        verticalLayout->addLayout(horizontalLayout_13);


        verticalLayout_2->addLayout(verticalLayout);

        verticalSpacer_2 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_2->addItem(verticalSpacer_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        dpadDelayLabel = new QLabel(DPadEditDialog);
        dpadDelayLabel->setObjectName(QStringLiteral("dpadDelayLabel"));

        horizontalLayout_3->addWidget(dpadDelayLabel);

        dpadDelaySlider = new QSlider(DPadEditDialog);
        dpadDelaySlider->setObjectName(QStringLiteral("dpadDelaySlider"));
        dpadDelaySlider->setMinimum(0);
        dpadDelaySlider->setMaximum(100);
        dpadDelaySlider->setSingleStep(1);
        dpadDelaySlider->setPageStep(10);
        dpadDelaySlider->setValue(0);
        dpadDelaySlider->setSliderPosition(0);
        dpadDelaySlider->setOrientation(Qt::Horizontal);
        dpadDelaySlider->setTickPosition(QSlider::TicksBelow);
        dpadDelaySlider->setTickInterval(0);

        horizontalLayout_3->addWidget(dpadDelaySlider);

        dpadDelayDoubleSpinBox = new QDoubleSpinBox(DPadEditDialog);
        dpadDelayDoubleSpinBox->setObjectName(QStringLiteral("dpadDelayDoubleSpinBox"));
        dpadDelayDoubleSpinBox->setReadOnly(false);
        dpadDelayDoubleSpinBox->setDecimals(2);
        dpadDelayDoubleSpinBox->setMaximum(1);
        dpadDelayDoubleSpinBox->setSingleStep(0.01);

        horizontalLayout_3->addWidget(dpadDelayDoubleSpinBox);


        verticalLayout_2->addLayout(horizontalLayout_3);

        verticalSpacer = new QSpacerItem(20, 36, QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);

        verticalLayout_2->addItem(verticalSpacer);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(10);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(-1, -1, -1, 6);
        dpadNameLabel = new QLabel(DPadEditDialog);
        dpadNameLabel->setObjectName(QStringLiteral("dpadNameLabel"));

        horizontalLayout_2->addWidget(dpadNameLabel);

        dpadNameLineEdit = new QLineEdit(DPadEditDialog);
        dpadNameLineEdit->setObjectName(QStringLiteral("dpadNameLineEdit"));

        horizontalLayout_2->addWidget(dpadNameLineEdit);


        verticalLayout_2->addLayout(horizontalLayout_2);

        mouseSettingsPushButton = new QPushButton(DPadEditDialog);
        mouseSettingsPushButton->setObjectName(QStringLiteral("mouseSettingsPushButton"));
        QIcon icon;
        QString iconThemeName = QStringLiteral("edit-select");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon = QIcon::fromTheme(iconThemeName);
        } else {
            icon.addFile(QStringLiteral(""), QSize(), QIcon::Normal, QIcon::Off);
        }
        mouseSettingsPushButton->setIcon(icon);

        verticalLayout_2->addWidget(mouseSettingsPushButton);

        line = new QFrame(DPadEditDialog);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout_2->addWidget(line);

        buttonBox = new QDialogButtonBox(DPadEditDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Close);

        verticalLayout_2->addWidget(buttonBox);

#ifndef QT_NO_SHORTCUT
        dpadNameLabel->setBuddy(dpadNameLineEdit);
#endif // QT_NO_SHORTCUT

        retranslateUi(DPadEditDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), DPadEditDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), DPadEditDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(DPadEditDialog);
    } // setupUi

    void retranslateUi(QDialog *DPadEditDialog)
    {
        DPadEditDialog->setWindowTitle(QApplication::translate("DPadEditDialog", "Dialog", 0));
        label_3->setText(QApplication::translate("DPadEditDialog", "Presets:", 0));
        presetsComboBox->clear();
        presetsComboBox->insertItems(0, QStringList()
         << QString()
         << QApplication::translate("DPadEditDialog", "Mouse (Normal)", 0)
         << QApplication::translate("DPadEditDialog", "Mouse (Inverted Horizontal)", 0)
         << QApplication::translate("DPadEditDialog", "Mouse (Inverted Vertical)", 0)
         << QApplication::translate("DPadEditDialog", "Mouse (Inverted Horizontal + Vertical)", 0)
         << QApplication::translate("DPadEditDialog", "Arrows", 0)
         << QApplication::translate("DPadEditDialog", "Keys: W | A | S | D", 0)
         << QApplication::translate("DPadEditDialog", "NumPad", 0)
         << QApplication::translate("DPadEditDialog", "None", 0)
        );
        label_11->setText(QApplication::translate("DPadEditDialog", "Dpad Mode:", 0));
        joyModeComboBox->clear();
        joyModeComboBox->insertItems(0, QStringList()
         << QApplication::translate("DPadEditDialog", "Standard", 0)
         << QApplication::translate("DPadEditDialog", "Eight Way", 0)
         << QApplication::translate("DPadEditDialog", "4 Way Cardinal", 0)
         << QApplication::translate("DPadEditDialog", "4 Way Diagonal", 0)
        );
#ifndef QT_NO_TOOLTIP
        joyModeComboBox->setToolTip(QApplication::translate("DPadEditDialog", "Standard: 8 region dpad with two direction buttons active\n"
"when the dpad is in a diagonal region.\n"
"\n"
"Eight Way: 8 region dpad with each direction having its\n"
"own dedicated button. Only one button is ever active at\n"
"at time. Useful for rougelike games.\n"
"\n"
"4 Way Cardinal: 4 region dpad with regions corresponding to\n"
"the cardinal directions of the dpad. Useful for menus.\n"
"\n"
"4 Way Diagonal: 4 region dpad with each region corresponding\n"
"to a diagonal zone.", 0));
#endif // QT_NO_TOOLTIP
        dpadDelayLabel->setText(QApplication::translate("DPadEditDialog", "DPad Delay:", 0));
#ifndef QT_NO_TOOLTIP
        dpadDelaySlider->setToolTip(QApplication::translate("DPadEditDialog", "Time lapsed before a direction change is taken into effect.", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        dpadDelayDoubleSpinBox->setToolTip(QApplication::translate("DPadEditDialog", "Time lapsed before a direction change is taken into effect.", 0));
#endif // QT_NO_TOOLTIP
        dpadDelayDoubleSpinBox->setSuffix(QApplication::translate("DPadEditDialog", " s", 0));
        dpadNameLabel->setText(QApplication::translate("DPadEditDialog", "&Name:", 0));
#ifndef QT_NO_TOOLTIP
        dpadNameLineEdit->setToolTip(QApplication::translate("DPadEditDialog", "Specify the name of a dpad.", 0));
#endif // QT_NO_TOOLTIP
        mouseSettingsPushButton->setText(QApplication::translate("DPadEditDialog", "Mouse Settings", 0));
    } // retranslateUi

};

namespace Ui {
    class DPadEditDialog: public Ui_DPadEditDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DPADEDITDIALOG_H
