/********************************************************************************
** Form generated from reading UI file 'buttoneditdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BUTTONEDITDIALOG_H
#define UI_BUTTONEDITDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "keyboard/virtualkeyboardmousewidget.h"

QT_BEGIN_NAMESPACE

class Ui_ButtonEditDialog
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *helpAssignLabel;
    VirtualKeyboardMouseWidget *virtualKeyMouseTabWidget;
    QWidget *tab;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_18;
    QCheckBox *toggleCheckBox;
    QSpacerItem *horizontalSpacer_10;
    QHBoxLayout *horizontalLayout_16;
    QCheckBox *turboCheckBox;
    QSpacerItem *horizontalSpacer_9;
    QHBoxLayout *horizontalLayout_17;
    QLabel *label_5;
    QLabel *slotSummaryLabel;
    QHBoxLayout *horizontalLayout_4;
    QHBoxLayout *horizontalLayout_3;
    QLabel *buttonNameLabel;
    QLineEdit *buttonNameLineEdit;
    QHBoxLayout *horizontalLayout_2;
    QLabel *actionNameLabel;
    QLineEdit *actionNameLineEdit;
    QFrame *line;
    QHBoxLayout *horizontalLayout;
    QPushButton *advancedPushButton;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *ButtonEditDialog)
    {
        if (ButtonEditDialog->objectName().isEmpty())
            ButtonEditDialog->setObjectName(QStringLiteral("ButtonEditDialog"));
        ButtonEditDialog->setWindowModality(Qt::WindowModal);
        ButtonEditDialog->resize(800, 430);
        ButtonEditDialog->setMinimumSize(QSize(800, 430));
        ButtonEditDialog->setSizeGripEnabled(false);
        ButtonEditDialog->setModal(false);
        verticalLayout = new QVBoxLayout(ButtonEditDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        helpAssignLabel = new QLabel(ButtonEditDialog);
        helpAssignLabel->setObjectName(QStringLiteral("helpAssignLabel"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(helpAssignLabel->sizePolicy().hasHeightForWidth());
        helpAssignLabel->setSizePolicy(sizePolicy);
        helpAssignLabel->setLineWidth(1);
        helpAssignLabel->setScaledContents(false);
        helpAssignLabel->setAlignment(Qt::AlignCenter);
        helpAssignLabel->setWordWrap(true);

        verticalLayout->addWidget(helpAssignLabel);

        virtualKeyMouseTabWidget = new VirtualKeyboardMouseWidget(ButtonEditDialog);
        virtualKeyMouseTabWidget->setObjectName(QStringLiteral("virtualKeyMouseTabWidget"));
        virtualKeyMouseTabWidget->setTabPosition(QTabWidget::South);
        virtualKeyMouseTabWidget->setUsesScrollButtons(false);
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        virtualKeyMouseTabWidget->addTab(tab, QString());

        verticalLayout->addWidget(virtualKeyMouseTabWidget);

        verticalSpacer = new QSpacerItem(20, 4, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout_18 = new QHBoxLayout();
        horizontalLayout_18->setObjectName(QStringLiteral("horizontalLayout_18"));
        toggleCheckBox = new QCheckBox(ButtonEditDialog);
        toggleCheckBox->setObjectName(QStringLiteral("toggleCheckBox"));

        horizontalLayout_18->addWidget(toggleCheckBox);

        horizontalSpacer_10 = new QSpacerItem(20, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_18->addItem(horizontalSpacer_10);

        horizontalLayout_16 = new QHBoxLayout();
        horizontalLayout_16->setObjectName(QStringLiteral("horizontalLayout_16"));
        turboCheckBox = new QCheckBox(ButtonEditDialog);
        turboCheckBox->setObjectName(QStringLiteral("turboCheckBox"));

        horizontalLayout_16->addWidget(turboCheckBox);

        horizontalSpacer_9 = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_16->addItem(horizontalSpacer_9);


        horizontalLayout_18->addLayout(horizontalLayout_16);

        horizontalLayout_17 = new QHBoxLayout();
        horizontalLayout_17->setObjectName(QStringLiteral("horizontalLayout_17"));
        label_5 = new QLabel(ButtonEditDialog);
        label_5->setObjectName(QStringLiteral("label_5"));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        label_5->setFont(font);

        horizontalLayout_17->addWidget(label_5);

        slotSummaryLabel = new QLabel(ButtonEditDialog);
        slotSummaryLabel->setObjectName(QStringLiteral("slotSummaryLabel"));
        slotSummaryLabel->setWordWrap(false);

        horizontalLayout_17->addWidget(slotSummaryLabel);


        horizontalLayout_18->addLayout(horizontalLayout_17);


        verticalLayout->addLayout(horizontalLayout_18);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(30);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(-1, 6, -1, 6);
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(4);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        buttonNameLabel = new QLabel(ButtonEditDialog);
        buttonNameLabel->setObjectName(QStringLiteral("buttonNameLabel"));

        horizontalLayout_3->addWidget(buttonNameLabel);

        buttonNameLineEdit = new QLineEdit(ButtonEditDialog);
        buttonNameLineEdit->setObjectName(QStringLiteral("buttonNameLineEdit"));
        buttonNameLineEdit->setMaxLength(20);

        horizontalLayout_3->addWidget(buttonNameLineEdit);


        horizontalLayout_4->addLayout(horizontalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(4);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        actionNameLabel = new QLabel(ButtonEditDialog);
        actionNameLabel->setObjectName(QStringLiteral("actionNameLabel"));

        horizontalLayout_2->addWidget(actionNameLabel);

        actionNameLineEdit = new QLineEdit(ButtonEditDialog);
        actionNameLineEdit->setObjectName(QStringLiteral("actionNameLineEdit"));
        actionNameLineEdit->setMaxLength(50);

        horizontalLayout_2->addWidget(actionNameLineEdit);


        horizontalLayout_4->addLayout(horizontalLayout_2);


        verticalLayout->addLayout(horizontalLayout_4);

        line = new QFrame(ButtonEditDialog);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(-1, 4, -1, -1);
        advancedPushButton = new QPushButton(ButtonEditDialog);
        advancedPushButton->setObjectName(QStringLiteral("advancedPushButton"));
        QIcon icon;
        QString iconThemeName = QStringLiteral("games-config-options");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon = QIcon::fromTheme(iconThemeName);
        } else {
            icon.addFile(QStringLiteral(""), QSize(), QIcon::Normal, QIcon::Off);
        }
        advancedPushButton->setIcon(icon);

        horizontalLayout->addWidget(advancedPushButton);

        buttonBox = new QDialogButtonBox(ButtonEditDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Close);

        horizontalLayout->addWidget(buttonBox);


        verticalLayout->addLayout(horizontalLayout);

#ifndef QT_NO_SHORTCUT
        buttonNameLabel->setBuddy(buttonNameLineEdit);
        actionNameLabel->setBuddy(actionNameLineEdit);
#endif // QT_NO_SHORTCUT

        retranslateUi(ButtonEditDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), ButtonEditDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), ButtonEditDialog, SLOT(reject()));

        virtualKeyMouseTabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(ButtonEditDialog);
    } // setupUi

    void retranslateUi(QDialog *ButtonEditDialog)
    {
        ButtonEditDialog->setWindowTitle(QApplication::translate("ButtonEditDialog", "Dialog", 0));
        helpAssignLabel->setText(QApplication::translate("ButtonEditDialog", "To make a new assignment, press any keyboard key or click a button in the Keyboard or Mouse tab", 0));
        virtualKeyMouseTabWidget->setTabText(virtualKeyMouseTabWidget->indexOf(tab), QApplication::translate("ButtonEditDialog", "Placeholder", 0));
#ifndef QT_NO_TOOLTIP
        toggleCheckBox->setToolTip(QApplication::translate("ButtonEditDialog", "Enables a key press or release to only occur when a controller button is pressed.", 0));
#endif // QT_NO_TOOLTIP
        toggleCheckBox->setText(QApplication::translate("ButtonEditDialog", "Toggle", 0));
#ifndef QT_NO_TOOLTIP
        turboCheckBox->setToolTip(QApplication::translate("ButtonEditDialog", "Enables rapid key presses and releases. Turbo controller.", 0));
#endif // QT_NO_TOOLTIP
        turboCheckBox->setText(QApplication::translate("ButtonEditDialog", "Turbo", 0));
        label_5->setText(QApplication::translate("ButtonEditDialog", "Current:", 0));
        slotSummaryLabel->setText(QApplication::translate("ButtonEditDialog", "Slots", 0));
        buttonNameLabel->setText(QApplication::translate("ButtonEditDialog", "Na&me:", 0));
#ifndef QT_NO_TOOLTIP
        buttonNameLineEdit->setToolTip(QApplication::translate("ButtonEditDialog", "Specify the name of a button.", 0));
#endif // QT_NO_TOOLTIP
        actionNameLabel->setText(QApplication::translate("ButtonEditDialog", "Action:", 0));
#ifndef QT_NO_TOOLTIP
        actionNameLineEdit->setToolTip(QApplication::translate("ButtonEditDialog", "Specify the action that will be performed in game while\n"
"this button is being used.", 0));
#endif // QT_NO_TOOLTIP
        advancedPushButton->setText(QApplication::translate("ButtonEditDialog", "Advanced", 0));
    } // retranslateUi

};

namespace Ui {
    class ButtonEditDialog: public Ui_ButtonEditDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BUTTONEDITDIALOG_H
