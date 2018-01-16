/********************************************************************************
** Form generated from reading UI file 'extraprofilesettingsdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EXTRAPROFILESETTINGSDIALOG_H
#define UI_EXTRAPROFILESETTINGSDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ExtraProfileSettingsDialog
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *sliderLabel;
    QSlider *keyPressHorizontalSlider;
    QLabel *pressValueLabel;
    QHBoxLayout *horizontalLayout_2;
    QLabel *profileNameLabel;
    QLineEdit *profileNameLineEdit;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *ExtraProfileSettingsDialog)
    {
        if (ExtraProfileSettingsDialog->objectName().isEmpty())
            ExtraProfileSettingsDialog->setObjectName(QStringLiteral("ExtraProfileSettingsDialog"));
        ExtraProfileSettingsDialog->resize(439, 144);
        ExtraProfileSettingsDialog->setMinimumSize(QSize(396, 136));
        ExtraProfileSettingsDialog->setModal(true);
        verticalLayout_2 = new QVBoxLayout(ExtraProfileSettingsDialog);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(-1, 10, 10, -1);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(20);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(-1, -1, 0, -1);
        sliderLabel = new QLabel(ExtraProfileSettingsDialog);
        sliderLabel->setObjectName(QStringLiteral("sliderLabel"));

        horizontalLayout->addWidget(sliderLabel);

        keyPressHorizontalSlider = new QSlider(ExtraProfileSettingsDialog);
        keyPressHorizontalSlider->setObjectName(QStringLiteral("keyPressHorizontalSlider"));
        keyPressHorizontalSlider->setMinimum(1);
        keyPressHorizontalSlider->setMaximum(100);
        keyPressHorizontalSlider->setValue(10);
        keyPressHorizontalSlider->setOrientation(Qt::Horizontal);

        horizontalLayout->addWidget(keyPressHorizontalSlider);


        verticalLayout->addLayout(horizontalLayout);

        pressValueLabel = new QLabel(ExtraProfileSettingsDialog);
        pressValueLabel->setObjectName(QStringLiteral("pressValueLabel"));

        verticalLayout->addWidget(pressValueLabel, 0, Qt::AlignRight);


        verticalLayout_2->addLayout(verticalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(36);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        profileNameLabel = new QLabel(ExtraProfileSettingsDialog);
        profileNameLabel->setObjectName(QStringLiteral("profileNameLabel"));

        horizontalLayout_2->addWidget(profileNameLabel);

        profileNameLineEdit = new QLineEdit(ExtraProfileSettingsDialog);
        profileNameLineEdit->setObjectName(QStringLiteral("profileNameLineEdit"));
        profileNameLineEdit->setMaxLength(50);

        horizontalLayout_2->addWidget(profileNameLineEdit);


        verticalLayout_2->addLayout(horizontalLayout_2);

        verticalSpacer = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_2->addItem(verticalSpacer);

        buttonBox = new QDialogButtonBox(ExtraProfileSettingsDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Close);

        verticalLayout_2->addWidget(buttonBox);


        retranslateUi(ExtraProfileSettingsDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), ExtraProfileSettingsDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), ExtraProfileSettingsDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(ExtraProfileSettingsDialog);
    } // setupUi

    void retranslateUi(QDialog *ExtraProfileSettingsDialog)
    {
        ExtraProfileSettingsDialog->setWindowTitle(QApplication::translate("ExtraProfileSettingsDialog", "Extra Profile Settings", 0));
        sliderLabel->setText(QApplication::translate("ExtraProfileSettingsDialog", "Key Press Time:", 0));
        pressValueLabel->setText(QApplication::translate("ExtraProfileSettingsDialog", "0.00 ms", 0));
        profileNameLabel->setText(QApplication::translate("ExtraProfileSettingsDialog", "Profile Name:", 0));
    } // retranslateUi

};

namespace Ui {
    class ExtraProfileSettingsDialog: public Ui_ExtraProfileSettingsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EXTRAPROFILESETTINGSDIALOG_H
