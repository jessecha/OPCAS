/********************************************************************************
** Form generated from reading UI file 'editalldefaultautoprofiledialog.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITALLDEFAULTAUTOPROFILEDIALOG_H
#define UI_EDITALLDEFAULTAUTOPROFILEDIALOG_H

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
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_EditAllDefaultAutoProfileDialog
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QHBoxLayout *horizontalLayout;
    QLineEdit *profileLineEdit;
    QPushButton *profileBrowsePushButton;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *EditAllDefaultAutoProfileDialog)
    {
        if (EditAllDefaultAutoProfileDialog->objectName().isEmpty())
            EditAllDefaultAutoProfileDialog->setObjectName(QStringLiteral("EditAllDefaultAutoProfileDialog"));
        EditAllDefaultAutoProfileDialog->resize(384, 114);
        EditAllDefaultAutoProfileDialog->setModal(true);
        verticalLayout = new QVBoxLayout(EditAllDefaultAutoProfileDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(EditAllDefaultAutoProfileDialog);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout->addWidget(label);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        profileLineEdit = new QLineEdit(EditAllDefaultAutoProfileDialog);
        profileLineEdit->setObjectName(QStringLiteral("profileLineEdit"));

        horizontalLayout->addWidget(profileLineEdit);

        profileBrowsePushButton = new QPushButton(EditAllDefaultAutoProfileDialog);
        profileBrowsePushButton->setObjectName(QStringLiteral("profileBrowsePushButton"));

        horizontalLayout->addWidget(profileBrowsePushButton);


        verticalLayout->addLayout(horizontalLayout);

        verticalSpacer = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer);

        buttonBox = new QDialogButtonBox(EditAllDefaultAutoProfileDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);

#ifndef QT_NO_SHORTCUT
        label->setBuddy(profileLineEdit);
#endif // QT_NO_SHORTCUT

        retranslateUi(EditAllDefaultAutoProfileDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), EditAllDefaultAutoProfileDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), EditAllDefaultAutoProfileDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(EditAllDefaultAutoProfileDialog);
    } // setupUi

    void retranslateUi(QDialog *EditAllDefaultAutoProfileDialog)
    {
        EditAllDefaultAutoProfileDialog->setWindowTitle(QApplication::translate("EditAllDefaultAutoProfileDialog", "Default Profile", 0));
        label->setText(QApplication::translate("EditAllDefaultAutoProfileDialog", "Profile:", 0));
        profileBrowsePushButton->setText(QApplication::translate("EditAllDefaultAutoProfileDialog", "Browse", 0));
    } // retranslateUi

};

namespace Ui {
    class EditAllDefaultAutoProfileDialog: public Ui_EditAllDefaultAutoProfileDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITALLDEFAULTAUTOPROFILEDIALOG_H
