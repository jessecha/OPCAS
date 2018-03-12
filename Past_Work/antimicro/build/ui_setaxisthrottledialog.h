/********************************************************************************
** Form generated from reading UI file 'setaxisthrottledialog.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETAXISTHROTTLEDIALOG_H
#define UI_SETAXISTHROTTLEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_SetAxisThrottleDialog
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *SetAxisThrottleDialog)
    {
        if (SetAxisThrottleDialog->objectName().isEmpty())
            SetAxisThrottleDialog->setObjectName(QStringLiteral("SetAxisThrottleDialog"));
        SetAxisThrottleDialog->resize(400, 207);
        verticalLayout = new QVBoxLayout(SetAxisThrottleDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(SetAxisThrottleDialog);
        label->setObjectName(QStringLiteral("label"));
        label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label);

        buttonBox = new QDialogButtonBox(SetAxisThrottleDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::No|QDialogButtonBox::Yes);
        buttonBox->setCenterButtons(false);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(SetAxisThrottleDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), SetAxisThrottleDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), SetAxisThrottleDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(SetAxisThrottleDialog);
    } // setupUi

    void retranslateUi(QDialog *SetAxisThrottleDialog)
    {
        SetAxisThrottleDialog->setWindowTitle(QApplication::translate("SetAxisThrottleDialog", "Throttle Change", 0));
        label->setText(QApplication::translate("SetAxisThrottleDialog", "The throttle setting for Axis %1 has been changed.\n"
"\n"
"Would you like to distribute this throttle change to all sets?", 0));
    } // retranslateUi

};

namespace Ui {
    class SetAxisThrottleDialog: public Ui_SetAxisThrottleDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETAXISTHROTTLEDIALOG_H
