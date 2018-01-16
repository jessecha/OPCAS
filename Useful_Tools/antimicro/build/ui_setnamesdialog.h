/********************************************************************************
** Form generated from reading UI file 'setnamesdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETNAMESDIALOG_H
#define UI_SETNAMESDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_SetNamesDialog
{
public:
    QVBoxLayout *verticalLayout;
    QTableWidget *setNamesTableWidget;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *SetNamesDialog)
    {
        if (SetNamesDialog->objectName().isEmpty())
            SetNamesDialog->setObjectName(QStringLiteral("SetNamesDialog"));
        SetNamesDialog->resize(535, 399);
        SetNamesDialog->setModal(true);
        verticalLayout = new QVBoxLayout(SetNamesDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        setNamesTableWidget = new QTableWidget(SetNamesDialog);
        if (setNamesTableWidget->columnCount() < 1)
            setNamesTableWidget->setColumnCount(1);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        setNamesTableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        if (setNamesTableWidget->rowCount() < 8)
            setNamesTableWidget->setRowCount(8);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        setNamesTableWidget->setVerticalHeaderItem(0, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        setNamesTableWidget->setVerticalHeaderItem(1, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        setNamesTableWidget->setVerticalHeaderItem(2, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        setNamesTableWidget->setVerticalHeaderItem(3, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        setNamesTableWidget->setVerticalHeaderItem(4, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        setNamesTableWidget->setVerticalHeaderItem(5, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        setNamesTableWidget->setVerticalHeaderItem(6, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        setNamesTableWidget->setVerticalHeaderItem(7, __qtablewidgetitem8);
        setNamesTableWidget->setObjectName(QStringLiteral("setNamesTableWidget"));
        setNamesTableWidget->setLineWidth(1);
        setNamesTableWidget->setSelectionMode(QAbstractItemView::SingleSelection);
        setNamesTableWidget->setShowGrid(true);
        setNamesTableWidget->setGridStyle(Qt::SolidLine);
        setNamesTableWidget->setSortingEnabled(false);
        setNamesTableWidget->setWordWrap(true);
        setNamesTableWidget->horizontalHeader()->setCascadingSectionResizes(false);
        setNamesTableWidget->horizontalHeader()->setHighlightSections(true);
        setNamesTableWidget->horizontalHeader()->setStretchLastSection(true);
        setNamesTableWidget->verticalHeader()->setVisible(true);
        setNamesTableWidget->verticalHeader()->setDefaultSectionSize(30);
        setNamesTableWidget->verticalHeader()->setMinimumSectionSize(18);

        verticalLayout->addWidget(setNamesTableWidget);

        verticalSpacer = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer);

        buttonBox = new QDialogButtonBox(SetNamesDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(SetNamesDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), SetNamesDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), SetNamesDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(SetNamesDialog);
    } // setupUi

    void retranslateUi(QDialog *SetNamesDialog)
    {
        SetNamesDialog->setWindowTitle(QApplication::translate("SetNamesDialog", "Set Name Settings", 0));
        QTableWidgetItem *___qtablewidgetitem = setNamesTableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("SetNamesDialog", "Name", 0));
        QTableWidgetItem *___qtablewidgetitem1 = setNamesTableWidget->verticalHeaderItem(0);
        ___qtablewidgetitem1->setText(QApplication::translate("SetNamesDialog", "Set 1", 0));
        QTableWidgetItem *___qtablewidgetitem2 = setNamesTableWidget->verticalHeaderItem(1);
        ___qtablewidgetitem2->setText(QApplication::translate("SetNamesDialog", "Set 2", 0));
        QTableWidgetItem *___qtablewidgetitem3 = setNamesTableWidget->verticalHeaderItem(2);
        ___qtablewidgetitem3->setText(QApplication::translate("SetNamesDialog", "Set 3", 0));
        QTableWidgetItem *___qtablewidgetitem4 = setNamesTableWidget->verticalHeaderItem(3);
        ___qtablewidgetitem4->setText(QApplication::translate("SetNamesDialog", "Set 4", 0));
        QTableWidgetItem *___qtablewidgetitem5 = setNamesTableWidget->verticalHeaderItem(4);
        ___qtablewidgetitem5->setText(QApplication::translate("SetNamesDialog", "Set 5", 0));
        QTableWidgetItem *___qtablewidgetitem6 = setNamesTableWidget->verticalHeaderItem(5);
        ___qtablewidgetitem6->setText(QApplication::translate("SetNamesDialog", "Set 6", 0));
        QTableWidgetItem *___qtablewidgetitem7 = setNamesTableWidget->verticalHeaderItem(6);
        ___qtablewidgetitem7->setText(QApplication::translate("SetNamesDialog", "Set 7", 0));
        QTableWidgetItem *___qtablewidgetitem8 = setNamesTableWidget->verticalHeaderItem(7);
        ___qtablewidgetitem8->setText(QApplication::translate("SetNamesDialog", "Set 8", 0));
    } // retranslateUi

};

namespace Ui {
    class SetNamesDialog: public Ui_SetNamesDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETNAMESDIALOG_H
