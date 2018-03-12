/********************************************************************************
** Form generated from reading UI file 'qkeydisplaydialog.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QKEYDISPLAYDIALOG_H
#define UI_QKEYDISPLAYDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_QKeyDisplayDialog
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QSpacerItem *verticalSpacer;
    QFormLayout *formLayout;
    QLabel *eventHandlerTitleLabel;
    QLabel *nativeTitleLabel;
    QLabel *nativeKeyLabel;
    QLabel *qtKeyTitleLabel;
    QLabel *qtKeyLabel;
    QLabel *antiTitleLabel;
    QLabel *antimicroKeyLabel;
    QLabel *eventHandlerLabel;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *QKeyDisplayDialog)
    {
        if (QKeyDisplayDialog->objectName().isEmpty())
            QKeyDisplayDialog->setObjectName(QStringLiteral("QKeyDisplayDialog"));
        QKeyDisplayDialog->setWindowModality(Qt::ApplicationModal);
        QKeyDisplayDialog->resize(550, 360);
        QKeyDisplayDialog->setMinimumSize(QSize(0, 0));
        QKeyDisplayDialog->setFocusPolicy(Qt::StrongFocus);
        QKeyDisplayDialog->setModal(true);
        verticalLayout = new QVBoxLayout(QKeyDisplayDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(8, -1, 8, -1);
        label = new QLabel(QKeyDisplayDialog);
        label->setObjectName(QStringLiteral("label"));
        label->setTextFormat(Qt::AutoText);
        label->setWordWrap(true);
        label->setOpenExternalLinks(true);
        label->setTextInteractionFlags(Qt::LinksAccessibleByMouse);

        verticalLayout->addWidget(label);

        verticalSpacer = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer);

        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::ExpandingFieldsGrow);
        formLayout->setHorizontalSpacing(20);
        formLayout->setVerticalSpacing(10);
        formLayout->setContentsMargins(6, 10, -1, -1);
        eventHandlerTitleLabel = new QLabel(QKeyDisplayDialog);
        eventHandlerTitleLabel->setObjectName(QStringLiteral("eventHandlerTitleLabel"));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        eventHandlerTitleLabel->setFont(font);

        formLayout->setWidget(0, QFormLayout::LabelRole, eventHandlerTitleLabel);

        nativeTitleLabel = new QLabel(QKeyDisplayDialog);
        nativeTitleLabel->setObjectName(QStringLiteral("nativeTitleLabel"));
        nativeTitleLabel->setFont(font);

        formLayout->setWidget(1, QFormLayout::LabelRole, nativeTitleLabel);

        nativeKeyLabel = new QLabel(QKeyDisplayDialog);
        nativeKeyLabel->setObjectName(QStringLiteral("nativeKeyLabel"));
        nativeKeyLabel->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        formLayout->setWidget(1, QFormLayout::FieldRole, nativeKeyLabel);

        qtKeyTitleLabel = new QLabel(QKeyDisplayDialog);
        qtKeyTitleLabel->setObjectName(QStringLiteral("qtKeyTitleLabel"));
        qtKeyTitleLabel->setFont(font);

        formLayout->setWidget(2, QFormLayout::LabelRole, qtKeyTitleLabel);

        qtKeyLabel = new QLabel(QKeyDisplayDialog);
        qtKeyLabel->setObjectName(QStringLiteral("qtKeyLabel"));
        qtKeyLabel->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        formLayout->setWidget(2, QFormLayout::FieldRole, qtKeyLabel);

        antiTitleLabel = new QLabel(QKeyDisplayDialog);
        antiTitleLabel->setObjectName(QStringLiteral("antiTitleLabel"));
        antiTitleLabel->setFont(font);

        formLayout->setWidget(3, QFormLayout::LabelRole, antiTitleLabel);

        antimicroKeyLabel = new QLabel(QKeyDisplayDialog);
        antimicroKeyLabel->setObjectName(QStringLiteral("antimicroKeyLabel"));
        antimicroKeyLabel->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        formLayout->setWidget(3, QFormLayout::FieldRole, antimicroKeyLabel);

        eventHandlerLabel = new QLabel(QKeyDisplayDialog);
        eventHandlerLabel->setObjectName(QStringLiteral("eventHandlerLabel"));

        formLayout->setWidget(0, QFormLayout::FieldRole, eventHandlerLabel);


        verticalLayout->addLayout(formLayout);

        buttonBox = new QDialogButtonBox(QKeyDisplayDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setFocusPolicy(Qt::NoFocus);
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Close);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(QKeyDisplayDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), QKeyDisplayDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), QKeyDisplayDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(QKeyDisplayDialog);
    } // setupUi

    void retranslateUi(QDialog *QKeyDisplayDialog)
    {
        QKeyDisplayDialog->setWindowTitle(QApplication::translate("QKeyDisplayDialog", "Key Checker", 0));
        label->setText(QApplication::translate("QKeyDisplayDialog", "<html><head/><body><p>Press a key on your keyboard to see how the key is detected by this application. The window will show the system native key value, the original value given by Qt (if applicable), and the custom value used by antimicro.</p><p>The antimicro key value and the Qt key value will usually be the same. antimicro tries to use the key values defined in Qt when possible. Check the page <a href=\"http://qt-project.org/doc/qt-4.8/qt.html#Key-enum\"><span style=\" text-decoration: underline; color:#0057ae;\">http://qt-project.org/doc/qt-4.8/qt.html#Key-enum</span></a> for a list of values defined by Qt. If you discover that a key is not natively supported by this program, please report the problem to antimicro's <a href=\"https://github.com/Ryochan7/antimicro\"><span style=\" text-decoration: underline; color:#0057ae;\">GitHub page</span></a> so that the program can be edited to support it directly. As it is, a custom prefix is added to unknown values so they can still be used; the main problem is that"
                        " the profile will no longer be portable.</p></body></html>", 0));
        eventHandlerTitleLabel->setText(QApplication::translate("QKeyDisplayDialog", "Event Handler:", 0));
        nativeTitleLabel->setText(QApplication::translate("QKeyDisplayDialog", "Native Key Value:", 0));
        nativeKeyLabel->setText(QApplication::translate("QKeyDisplayDialog", "0x00000000", 0));
        qtKeyTitleLabel->setText(QApplication::translate("QKeyDisplayDialog", "Qt Key Value:", 0));
        qtKeyLabel->setText(QApplication::translate("QKeyDisplayDialog", "0x00000000", 0));
        antiTitleLabel->setText(QApplication::translate("QKeyDisplayDialog", "antimicro Key Value:", 0));
        antimicroKeyLabel->setText(QApplication::translate("QKeyDisplayDialog", "0x00000000", 0));
        eventHandlerLabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class QKeyDisplayDialog: public Ui_QKeyDisplayDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QKEYDISPLAYDIALOG_H
