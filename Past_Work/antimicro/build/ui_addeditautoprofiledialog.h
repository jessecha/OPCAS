/********************************************************************************
** Form generated from reading UI file 'addeditautoprofiledialog.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDEDITAUTOPROFILEDIALOG_H
#define UI_ADDEDITAUTOPROFILEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_AddEditAutoProfileDialog
{
public:
    QVBoxLayout *verticalLayout_7;
    QVBoxLayout *verticalLayout_5;
    QLabel *label;
    QHBoxLayout *horizontalLayout;
    QLineEdit *profileLineEdit;
    QPushButton *profileBrowsePushButton;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_2;
    QPushButton *detectWinPropsSelectWindowPushButton;
    QHBoxLayout *horizontalLayout_3;
    QLabel *winClassLabel;
    QLineEdit *winClassLineEdit;
    QHBoxLayout *horizontalLayout_4;
    QLabel *winNameLabel;
    QLineEdit *winNameLineEdit;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *applicationLineEdit;
    QPushButton *applicationPushButton;
    QPushButton *selectWindowPushButton;
    QVBoxLayout *verticalLayout;
    QLabel *devicesLabel;
    QComboBox *devicesComboBox;
    QCheckBox *asDefaultCheckBox;
    QFrame *line;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *AddEditAutoProfileDialog)
    {
        if (AddEditAutoProfileDialog->objectName().isEmpty())
            AddEditAutoProfileDialog->setObjectName(QStringLiteral("AddEditAutoProfileDialog"));
        AddEditAutoProfileDialog->resize(478, 327);
        AddEditAutoProfileDialog->setModal(true);
        verticalLayout_7 = new QVBoxLayout(AddEditAutoProfileDialog);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        label = new QLabel(AddEditAutoProfileDialog);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout_5->addWidget(label);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        profileLineEdit = new QLineEdit(AddEditAutoProfileDialog);
        profileLineEdit->setObjectName(QStringLiteral("profileLineEdit"));

        horizontalLayout->addWidget(profileLineEdit);

        profileBrowsePushButton = new QPushButton(AddEditAutoProfileDialog);
        profileBrowsePushButton->setObjectName(QStringLiteral("profileBrowsePushButton"));

        horizontalLayout->addWidget(profileBrowsePushButton);


        verticalLayout_5->addLayout(horizontalLayout);


        verticalLayout_7->addLayout(verticalLayout_5);

        groupBox = new QGroupBox(AddEditAutoProfileDialog);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setFlat(false);
        groupBox->setCheckable(false);
        verticalLayout_2 = new QVBoxLayout(groupBox);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(-1, -1, -1, 4);
        detectWinPropsSelectWindowPushButton = new QPushButton(groupBox);
        detectWinPropsSelectWindowPushButton->setObjectName(QStringLiteral("detectWinPropsSelectWindowPushButton"));

        verticalLayout_2->addWidget(detectWinPropsSelectWindowPushButton);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        winClassLabel = new QLabel(groupBox);
        winClassLabel->setObjectName(QStringLiteral("winClassLabel"));

        horizontalLayout_3->addWidget(winClassLabel);

        winClassLineEdit = new QLineEdit(groupBox);
        winClassLineEdit->setObjectName(QStringLiteral("winClassLineEdit"));

        horizontalLayout_3->addWidget(winClassLineEdit);


        verticalLayout_2->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        winNameLabel = new QLabel(groupBox);
        winNameLabel->setObjectName(QStringLiteral("winNameLabel"));

        horizontalLayout_4->addWidget(winNameLabel);

        winNameLineEdit = new QLineEdit(groupBox);
        winNameLineEdit->setObjectName(QStringLiteral("winNameLineEdit"));

        horizontalLayout_4->addWidget(winNameLineEdit);


        verticalLayout_2->addLayout(horizontalLayout_4);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_2->addWidget(label_2);

        applicationLineEdit = new QLineEdit(groupBox);
        applicationLineEdit->setObjectName(QStringLiteral("applicationLineEdit"));

        horizontalLayout_2->addWidget(applicationLineEdit);

        applicationPushButton = new QPushButton(groupBox);
        applicationPushButton->setObjectName(QStringLiteral("applicationPushButton"));

        horizontalLayout_2->addWidget(applicationPushButton);

        selectWindowPushButton = new QPushButton(groupBox);
        selectWindowPushButton->setObjectName(QStringLiteral("selectWindowPushButton"));

        horizontalLayout_2->addWidget(selectWindowPushButton);


        verticalLayout_2->addLayout(horizontalLayout_2);


        verticalLayout_7->addWidget(groupBox);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        devicesLabel = new QLabel(AddEditAutoProfileDialog);
        devicesLabel->setObjectName(QStringLiteral("devicesLabel"));

        verticalLayout->addWidget(devicesLabel);

        devicesComboBox = new QComboBox(AddEditAutoProfileDialog);
        devicesComboBox->setObjectName(QStringLiteral("devicesComboBox"));

        verticalLayout->addWidget(devicesComboBox);

        asDefaultCheckBox = new QCheckBox(AddEditAutoProfileDialog);
        asDefaultCheckBox->setObjectName(QStringLiteral("asDefaultCheckBox"));
        asDefaultCheckBox->setEnabled(false);

        verticalLayout->addWidget(asDefaultCheckBox);


        verticalLayout_7->addLayout(verticalLayout);

        line = new QFrame(AddEditAutoProfileDialog);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout_7->addWidget(line);

        buttonBox = new QDialogButtonBox(AddEditAutoProfileDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout_7->addWidget(buttonBox);

#ifndef QT_NO_SHORTCUT
        label->setBuddy(profileLineEdit);
        winClassLabel->setBuddy(applicationLineEdit);
        winNameLabel->setBuddy(applicationLineEdit);
        label_2->setBuddy(applicationLineEdit);
        devicesLabel->setBuddy(devicesComboBox);
#endif // QT_NO_SHORTCUT

        retranslateUi(AddEditAutoProfileDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), AddEditAutoProfileDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), AddEditAutoProfileDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(AddEditAutoProfileDialog);
    } // setupUi

    void retranslateUi(QDialog *AddEditAutoProfileDialog)
    {
        AddEditAutoProfileDialog->setWindowTitle(QApplication::translate("AddEditAutoProfileDialog", "Auto Profile Dialog", 0));
        label->setText(QApplication::translate("AddEditAutoProfileDialog", "Profile:", 0));
        profileBrowsePushButton->setText(QApplication::translate("AddEditAutoProfileDialog", "Browse", 0));
        groupBox->setTitle(QApplication::translate("AddEditAutoProfileDialog", "Window:", 0));
#ifndef QT_NO_TOOLTIP
        detectWinPropsSelectWindowPushButton->setToolTip(QApplication::translate("AddEditAutoProfileDialog", "Select Window. Click on the appropriate application\n"
"window and the application file path will be populated\n"
"in the form.", 0));
#endif // QT_NO_TOOLTIP
        detectWinPropsSelectWindowPushButton->setText(QApplication::translate("AddEditAutoProfileDialog", "Detect Window Properties", 0));
        winClassLabel->setText(QApplication::translate("AddEditAutoProfileDialog", "Class:", 0));
        winNameLabel->setText(QApplication::translate("AddEditAutoProfileDialog", "Title:  ", 0));
        label_2->setText(QApplication::translate("AddEditAutoProfileDialog", "Application:    ", 0));
        applicationPushButton->setText(QApplication::translate("AddEditAutoProfileDialog", "Browse", 0));
#ifndef QT_NO_TOOLTIP
        selectWindowPushButton->setToolTip(QApplication::translate("AddEditAutoProfileDialog", "Select Window. Click on the appropriate application\n"
"window and the application file path will be populated\n"
"in the form.", 0));
#endif // QT_NO_TOOLTIP
        selectWindowPushButton->setText(QApplication::translate("AddEditAutoProfileDialog", "Select", 0));
        devicesLabel->setText(QApplication::translate("AddEditAutoProfileDialog", "Devices:", 0));
#ifndef QT_NO_TOOLTIP
        asDefaultCheckBox->setToolTip(QApplication::translate("AddEditAutoProfileDialog", "Select this profile to be the default loaded for\n"
"the specified device. The selection will be used instead\n"
"of the all default profile option.", 0));
#endif // QT_NO_TOOLTIP
        asDefaultCheckBox->setText(QApplication::translate("AddEditAutoProfileDialog", "Set as Default for Controller", 0));
    } // retranslateUi

};

namespace Ui {
    class AddEditAutoProfileDialog: public Ui_AddEditAutoProfileDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDEDITAUTOPROFILEDIALOG_H
