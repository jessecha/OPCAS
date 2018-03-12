/********************************************************************************
** Form generated from reading UI file 'capturedwindowinfodialog.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CAPTUREDWINDOWINFODIALOG_H
#define UI_CAPTUREDWINDOWINFODIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_CapturedWindowInfoDialog
{
public:
    QVBoxLayout *verticalLayout_3;
    QGroupBox *infoGroupBox;
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout;
    QLabel *winClassHeadLabel;
    QLabel *winClassLabel;
    QLabel *label_3;
    QLabel *winTitleLabel;
    QLabel *label_4;
    QLabel *winPathLabel;
    QGroupBox *choiceGroupBox;
    QVBoxLayout *verticalLayout_2;
    QCheckBox *winClassCheckBox;
    QCheckBox *winTitleCheckBox;
    QHBoxLayout *horizontalLayout;
    QCheckBox *winPathCheckBox;
    QComboBox *winPathChoiceComboBox;
    QSpacerItem *verticalSpacer;
    QFrame *line;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *CapturedWindowInfoDialog)
    {
        if (CapturedWindowInfoDialog->objectName().isEmpty())
            CapturedWindowInfoDialog->setObjectName(QStringLiteral("CapturedWindowInfoDialog"));
        CapturedWindowInfoDialog->resize(533, 363);
        verticalLayout_3 = new QVBoxLayout(CapturedWindowInfoDialog);
        verticalLayout_3->setSpacing(20);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        infoGroupBox = new QGroupBox(CapturedWindowInfoDialog);
        infoGroupBox->setObjectName(QStringLiteral("infoGroupBox"));
        QFont font;
        font.setBold(false);
        font.setWeight(50);
        infoGroupBox->setFont(font);
        infoGroupBox->setFlat(true);
        verticalLayout = new QVBoxLayout(infoGroupBox);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setHorizontalSpacing(20);
        winClassHeadLabel = new QLabel(infoGroupBox);
        winClassHeadLabel->setObjectName(QStringLiteral("winClassHeadLabel"));

        formLayout->setWidget(0, QFormLayout::LabelRole, winClassHeadLabel);

        winClassLabel = new QLabel(infoGroupBox);
        winClassLabel->setObjectName(QStringLiteral("winClassLabel"));
        QFont font1;
        font1.setItalic(true);
        winClassLabel->setFont(font1);

        formLayout->setWidget(0, QFormLayout::FieldRole, winClassLabel);

        label_3 = new QLabel(infoGroupBox);
        label_3->setObjectName(QStringLiteral("label_3"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_3);

        winTitleLabel = new QLabel(infoGroupBox);
        winTitleLabel->setObjectName(QStringLiteral("winTitleLabel"));
        winTitleLabel->setFont(font1);

        formLayout->setWidget(1, QFormLayout::FieldRole, winTitleLabel);

        label_4 = new QLabel(infoGroupBox);
        label_4->setObjectName(QStringLiteral("label_4"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_4);

        winPathLabel = new QLabel(infoGroupBox);
        winPathLabel->setObjectName(QStringLiteral("winPathLabel"));
        winPathLabel->setFont(font1);

        formLayout->setWidget(2, QFormLayout::FieldRole, winPathLabel);


        verticalLayout->addLayout(formLayout);


        verticalLayout_3->addWidget(infoGroupBox);

        choiceGroupBox = new QGroupBox(CapturedWindowInfoDialog);
        choiceGroupBox->setObjectName(QStringLiteral("choiceGroupBox"));
        choiceGroupBox->setFlat(true);
        choiceGroupBox->setCheckable(false);
        choiceGroupBox->setChecked(false);
        verticalLayout_2 = new QVBoxLayout(choiceGroupBox);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        winClassCheckBox = new QCheckBox(choiceGroupBox);
        winClassCheckBox->setObjectName(QStringLiteral("winClassCheckBox"));

        verticalLayout_2->addWidget(winClassCheckBox);

        winTitleCheckBox = new QCheckBox(choiceGroupBox);
        winTitleCheckBox->setObjectName(QStringLiteral("winTitleCheckBox"));

        verticalLayout_2->addWidget(winTitleCheckBox);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        winPathCheckBox = new QCheckBox(choiceGroupBox);
        winPathCheckBox->setObjectName(QStringLiteral("winPathCheckBox"));

        horizontalLayout->addWidget(winPathCheckBox);

        winPathChoiceComboBox = new QComboBox(choiceGroupBox);
        winPathChoiceComboBox->setObjectName(QStringLiteral("winPathChoiceComboBox"));
        winPathChoiceComboBox->setEnabled(true);

        horizontalLayout->addWidget(winPathChoiceComboBox);


        verticalLayout_2->addLayout(horizontalLayout);


        verticalLayout_3->addWidget(choiceGroupBox);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer);

        line = new QFrame(CapturedWindowInfoDialog);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout_3->addWidget(line);

        buttonBox = new QDialogButtonBox(CapturedWindowInfoDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout_3->addWidget(buttonBox);


        retranslateUi(CapturedWindowInfoDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), CapturedWindowInfoDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), CapturedWindowInfoDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(CapturedWindowInfoDialog);
    } // setupUi

    void retranslateUi(QDialog *CapturedWindowInfoDialog)
    {
        CapturedWindowInfoDialog->setWindowTitle(QApplication::translate("CapturedWindowInfoDialog", "Captured Window Properties", 0));
        infoGroupBox->setTitle(QApplication::translate("CapturedWindowInfoDialog", "Information About Window", 0));
        winClassHeadLabel->setText(QApplication::translate("CapturedWindowInfoDialog", "Class:", 0));
        winClassLabel->setText(QApplication::translate("CapturedWindowInfoDialog", "TextLabel", 0));
        label_3->setText(QApplication::translate("CapturedWindowInfoDialog", "Title:", 0));
        winTitleLabel->setText(QApplication::translate("CapturedWindowInfoDialog", "TextLabel", 0));
        label_4->setText(QApplication::translate("CapturedWindowInfoDialog", "Path:", 0));
        winPathLabel->setText(QApplication::translate("CapturedWindowInfoDialog", "TextLabel", 0));
        choiceGroupBox->setTitle(QApplication::translate("CapturedWindowInfoDialog", "Match By Properties", 0));
        winClassCheckBox->setText(QApplication::translate("CapturedWindowInfoDialog", "Class", 0));
        winTitleCheckBox->setText(QApplication::translate("CapturedWindowInfoDialog", "Title", 0));
        winPathCheckBox->setText(QApplication::translate("CapturedWindowInfoDialog", "Path", 0));
        winPathChoiceComboBox->clear();
        winPathChoiceComboBox->insertItems(0, QStringList()
         << QApplication::translate("CapturedWindowInfoDialog", "Full Path", 0)
         << QApplication::translate("CapturedWindowInfoDialog", "File Name", 0)
        );
    } // retranslateUi

};

namespace Ui {
    class CapturedWindowInfoDialog: public Ui_CapturedWindowInfoDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CAPTUREDWINDOWINFODIALOG_H
