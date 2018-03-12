/********************************************************************************
** Form generated from reading UI file 'quicksetdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QUICKSETDIALOG_H
#define UI_QUICKSETDIALOG_H

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

class Ui_QuickSetDialog
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *joystickDialogLabel;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *QuickSetDialog)
    {
        if (QuickSetDialog->objectName().isEmpty())
            QuickSetDialog->setObjectName(QStringLiteral("QuickSetDialog"));
        QuickSetDialog->resize(400, 300);
        QuickSetDialog->setModal(true);
        verticalLayout = new QVBoxLayout(QuickSetDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        joystickDialogLabel = new QLabel(QuickSetDialog);
        joystickDialogLabel->setObjectName(QStringLiteral("joystickDialogLabel"));
        joystickDialogLabel->setAlignment(Qt::AlignCenter);
        joystickDialogLabel->setWordWrap(false);

        verticalLayout->addWidget(joystickDialogLabel, 0, Qt::AlignHCenter);

        buttonBox = new QDialogButtonBox(QuickSetDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Close);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(QuickSetDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), QuickSetDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), QuickSetDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(QuickSetDialog);
    } // setupUi

    void retranslateUi(QDialog *QuickSetDialog)
    {
        QuickSetDialog->setWindowTitle(QApplication::translate("QuickSetDialog", "Quick Set", 0));
        joystickDialogLabel->setText(QApplication::translate("QuickSetDialog", "<html><head/><body><p>Please press a button or move an axis on %1 (<span style=\" font-weight:600;\">%2</span>).<br/>A dialog window will then appear which will<br/>allow you to make an assignment.</p></body></html>", 0));
    } // retranslateUi

};

namespace Ui {
    class QuickSetDialog: public Ui_QuickSetDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QUICKSETDIALOG_H
