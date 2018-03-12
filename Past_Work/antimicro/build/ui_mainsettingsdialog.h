/********************************************************************************
** Form generated from reading UI file 'mainsettingsdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINSETTINGSDIALOG_H
#define UI_MAINSETTINGSDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainSettingsDialog
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QListWidget *categoriesListWidget;
    QStackedWidget *stackedWidget;
    QWidget *General;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_2;
    QLineEdit *profileDefaultDirLineEdit;
    QPushButton *profileOpenDirPushButton;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_3;
    QSpinBox *numberRecentProfileSpinBox;
    QSpacerItem *verticalSpacer_4;
    QHBoxLayout *horizontalLayout_12;
    QLabel *gamepadPollRateLabel;
    QComboBox *gamepadPollRateComboBox;
    QCheckBox *closeToTrayCheckBox;
    QCheckBox *launchAtWinStartupCheckBox;
    QCheckBox *traySingleProfileListCheckBox;
    QCheckBox *minimizeTaskbarCheckBox;
    QCheckBox *hideEmptyCheckBox;
    QCheckBox *autoLoadPreviousCheckBox;
    QCheckBox *launchInTrayCheckBox;
    QCheckBox *associateProfilesCheckBox;
    QSpacerItem *verticalSpacer_7;
    QGroupBox *keyRepeatGroupBox;
    QVBoxLayout *verticalLayout_6;
    QCheckBox *keyRepeatEnableCheckBox;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_4;
    QSlider *keyDelayHorizontalSlider;
    QSpinBox *keyDelaySpinBox;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_5;
    QSlider *keyRateHorizontalSlider;
    QSpinBox *keyRateSpinBox;
    QSpacerItem *verticalSpacer;
    QWidget *controllerMappingsPage;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QTableWidget *controllerMappingsTableWidget;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *mappingDeletePushButton;
    QPushButton *mappngInsertPushButton;
    QWidget *page;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_8;
    QSpacerItem *verticalSpacer_6;
    QListWidget *localeListWidget;
    QWidget *page_2;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_6;
    QCheckBox *activeCheckBox;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer_2;
    QLabel *deivcesLabel;
    QComboBox *devicesComboBox;
    QSpacerItem *verticalSpacer_2;
    QTableWidget *autoProfileTableWidget;
    QSpacerItem *verticalSpacer_3;
    QHBoxLayout *horizontalLayout_7;
    QPushButton *autoProfileAddPushButton;
    QPushButton *autoProfileEditPushButton;
    QPushButton *autoProfileDeletePushButton;
    QWidget *mouseSettingsPage;
    QVBoxLayout *verticalLayout_9;
    QCheckBox *disableWindowsEnhancedPointCheckBox;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_7;
    QCheckBox *smoothingEnableCheckBox;
    QFormLayout *formLayout;
    QLabel *label_6;
    QSpinBox *historySizeSpinBox;
    QLabel *label_7;
    QDoubleSpinBox *weightModifierDoubleSpinBox;
    QHBoxLayout *horizontalLayout_10;
    QLabel *mouseRefreshRateLabel;
    QComboBox *mouseRefreshRateComboBox;
    QGroupBox *springGroupBox;
    QVBoxLayout *verticalLayout_8;
    QHBoxLayout *horizontalLayout_11;
    QLabel *springScreenLabel;
    QComboBox *springScreenComboBox;
    QFrame *extraInfoFrame;
    QVBoxLayout *verticalLayout_10;
    QHBoxLayout *horizontalLayout_13;
    QLabel *accelNumTitleLabel;
    QLabel *accelNumLabel;
    QSpacerItem *horizontalSpacer_3;
    QHBoxLayout *horizontalLayout_15;
    QLabel *accelDenomTitleLabel;
    QLabel *accelDenomLabel;
    QSpacerItem *horizontalSpacer_4;
    QHBoxLayout *horizontalLayout_14;
    QLabel *accelThresTitleLabel;
    QLabel *accelThresLabel;
    QSpacerItem *horizontalSpacer_5;
    QHBoxLayout *horizontalLayout_16;
    QSpacerItem *horizontalSpacer;
    QPushButton *resetAccelPushButton;
    QSpacerItem *verticalSpacer_5;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *MainSettingsDialog)
    {
        if (MainSettingsDialog->objectName().isEmpty())
            MainSettingsDialog->setObjectName(QStringLiteral("MainSettingsDialog"));
        MainSettingsDialog->setWindowModality(Qt::WindowModal);
        MainSettingsDialog->resize(706, 578);
        MainSettingsDialog->setMinimumSize(QSize(0, 0));
        MainSettingsDialog->setModal(true);
        verticalLayout = new QVBoxLayout(MainSettingsDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        categoriesListWidget = new QListWidget(MainSettingsDialog);
        new QListWidgetItem(categoriesListWidget);
        new QListWidgetItem(categoriesListWidget);
        new QListWidgetItem(categoriesListWidget);
        new QListWidgetItem(categoriesListWidget);
        new QListWidgetItem(categoriesListWidget);
        categoriesListWidget->setObjectName(QStringLiteral("categoriesListWidget"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(categoriesListWidget->sizePolicy().hasHeightForWidth());
        categoriesListWidget->setSizePolicy(sizePolicy);
        categoriesListWidget->setMaximumSize(QSize(180, 16777215));
        categoriesListWidget->setFlow(QListView::TopToBottom);
        categoriesListWidget->setProperty("isWrapping", QVariant(false));
        categoriesListWidget->setResizeMode(QListView::Fixed);
        categoriesListWidget->setWordWrap(false);

        horizontalLayout->addWidget(categoriesListWidget);

        stackedWidget = new QStackedWidget(MainSettingsDialog);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        General = new QWidget();
        General->setObjectName(QStringLiteral("General"));
        verticalLayout_3 = new QVBoxLayout(General);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(-1, 4, -1, 9);
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(20);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_2 = new QLabel(General);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_3->addWidget(label_2);

        profileDefaultDirLineEdit = new QLineEdit(General);
        profileDefaultDirLineEdit->setObjectName(QStringLiteral("profileDefaultDirLineEdit"));
        profileDefaultDirLineEdit->setMaxLength(512);
        profileDefaultDirLineEdit->setFrame(true);
        profileDefaultDirLineEdit->setReadOnly(false);

        horizontalLayout_3->addWidget(profileDefaultDirLineEdit);

        profileOpenDirPushButton = new QPushButton(General);
        profileOpenDirPushButton->setObjectName(QStringLiteral("profileOpenDirPushButton"));

        horizontalLayout_3->addWidget(profileOpenDirPushButton);


        verticalLayout_3->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_3 = new QLabel(General);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_4->addWidget(label_3);

        numberRecentProfileSpinBox = new QSpinBox(General);
        numberRecentProfileSpinBox->setObjectName(QStringLiteral("numberRecentProfileSpinBox"));
        numberRecentProfileSpinBox->setMaximum(100);
        numberRecentProfileSpinBox->setValue(5);

        horizontalLayout_4->addWidget(numberRecentProfileSpinBox);


        verticalLayout_3->addLayout(horizontalLayout_4);

        verticalSpacer_4 = new QSpacerItem(20, 8, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_3->addItem(verticalSpacer_4);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName(QStringLiteral("horizontalLayout_12"));
        horizontalLayout_12->setContentsMargins(-1, -1, -1, 8);
        gamepadPollRateLabel = new QLabel(General);
        gamepadPollRateLabel->setObjectName(QStringLiteral("gamepadPollRateLabel"));

        horizontalLayout_12->addWidget(gamepadPollRateLabel);

        gamepadPollRateComboBox = new QComboBox(General);
        gamepadPollRateComboBox->setObjectName(QStringLiteral("gamepadPollRateComboBox"));

        horizontalLayout_12->addWidget(gamepadPollRateComboBox);


        verticalLayout_3->addLayout(horizontalLayout_12);

        closeToTrayCheckBox = new QCheckBox(General);
        closeToTrayCheckBox->setObjectName(QStringLiteral("closeToTrayCheckBox"));

        verticalLayout_3->addWidget(closeToTrayCheckBox);

        launchAtWinStartupCheckBox = new QCheckBox(General);
        launchAtWinStartupCheckBox->setObjectName(QStringLiteral("launchAtWinStartupCheckBox"));

        verticalLayout_3->addWidget(launchAtWinStartupCheckBox);

        traySingleProfileListCheckBox = new QCheckBox(General);
        traySingleProfileListCheckBox->setObjectName(QStringLiteral("traySingleProfileListCheckBox"));

        verticalLayout_3->addWidget(traySingleProfileListCheckBox);

        minimizeTaskbarCheckBox = new QCheckBox(General);
        minimizeTaskbarCheckBox->setObjectName(QStringLiteral("minimizeTaskbarCheckBox"));

        verticalLayout_3->addWidget(minimizeTaskbarCheckBox);

        hideEmptyCheckBox = new QCheckBox(General);
        hideEmptyCheckBox->setObjectName(QStringLiteral("hideEmptyCheckBox"));

        verticalLayout_3->addWidget(hideEmptyCheckBox);

        autoLoadPreviousCheckBox = new QCheckBox(General);
        autoLoadPreviousCheckBox->setObjectName(QStringLiteral("autoLoadPreviousCheckBox"));
        autoLoadPreviousCheckBox->setChecked(true);

        verticalLayout_3->addWidget(autoLoadPreviousCheckBox);

        launchInTrayCheckBox = new QCheckBox(General);
        launchInTrayCheckBox->setObjectName(QStringLiteral("launchInTrayCheckBox"));

        verticalLayout_3->addWidget(launchInTrayCheckBox);

        associateProfilesCheckBox = new QCheckBox(General);
        associateProfilesCheckBox->setObjectName(QStringLiteral("associateProfilesCheckBox"));
        associateProfilesCheckBox->setChecked(true);

        verticalLayout_3->addWidget(associateProfilesCheckBox);

        verticalSpacer_7 = new QSpacerItem(20, 8, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_3->addItem(verticalSpacer_7);

        keyRepeatGroupBox = new QGroupBox(General);
        keyRepeatGroupBox->setObjectName(QStringLiteral("keyRepeatGroupBox"));
        verticalLayout_6 = new QVBoxLayout(keyRepeatGroupBox);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        keyRepeatEnableCheckBox = new QCheckBox(keyRepeatGroupBox);
        keyRepeatEnableCheckBox->setObjectName(QStringLiteral("keyRepeatEnableCheckBox"));

        verticalLayout_6->addWidget(keyRepeatEnableCheckBox);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        label_4 = new QLabel(keyRepeatGroupBox);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_8->addWidget(label_4);

        keyDelayHorizontalSlider = new QSlider(keyRepeatGroupBox);
        keyDelayHorizontalSlider->setObjectName(QStringLiteral("keyDelayHorizontalSlider"));
        keyDelayHorizontalSlider->setEnabled(false);
        keyDelayHorizontalSlider->setMinimum(250);
        keyDelayHorizontalSlider->setMaximum(1000);
        keyDelayHorizontalSlider->setSingleStep(10);
        keyDelayHorizontalSlider->setPageStep(100);
        keyDelayHorizontalSlider->setValue(660);
        keyDelayHorizontalSlider->setOrientation(Qt::Horizontal);
        keyDelayHorizontalSlider->setTickPosition(QSlider::NoTicks);

        horizontalLayout_8->addWidget(keyDelayHorizontalSlider);

        keyDelaySpinBox = new QSpinBox(keyRepeatGroupBox);
        keyDelaySpinBox->setObjectName(QStringLiteral("keyDelaySpinBox"));
        keyDelaySpinBox->setEnabled(false);
        keyDelaySpinBox->setMinimum(250);
        keyDelaySpinBox->setMaximum(1000);
        keyDelaySpinBox->setSingleStep(100);
        keyDelaySpinBox->setValue(660);

        horizontalLayout_8->addWidget(keyDelaySpinBox);


        verticalLayout_6->addLayout(horizontalLayout_8);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        label_5 = new QLabel(keyRepeatGroupBox);
        label_5->setObjectName(QStringLiteral("label_5"));

        horizontalLayout_9->addWidget(label_5);

        keyRateHorizontalSlider = new QSlider(keyRepeatGroupBox);
        keyRateHorizontalSlider->setObjectName(QStringLiteral("keyRateHorizontalSlider"));
        keyRateHorizontalSlider->setEnabled(false);
        keyRateHorizontalSlider->setMinimum(5);
        keyRateHorizontalSlider->setMaximum(50);
        keyRateHorizontalSlider->setValue(25);
        keyRateHorizontalSlider->setOrientation(Qt::Horizontal);
        keyRateHorizontalSlider->setTickPosition(QSlider::NoTicks);

        horizontalLayout_9->addWidget(keyRateHorizontalSlider);

        keyRateSpinBox = new QSpinBox(keyRepeatGroupBox);
        keyRateSpinBox->setObjectName(QStringLiteral("keyRateSpinBox"));
        keyRateSpinBox->setEnabled(false);
        keyRateSpinBox->setMinimum(5);
        keyRateSpinBox->setMaximum(50);
        keyRateSpinBox->setValue(25);

        horizontalLayout_9->addWidget(keyRateSpinBox);


        verticalLayout_6->addLayout(horizontalLayout_9);


        verticalLayout_3->addWidget(keyRepeatGroupBox);

        verticalSpacer = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);

        verticalLayout_3->addItem(verticalSpacer);

        stackedWidget->addWidget(General);
        controllerMappingsPage = new QWidget();
        controllerMappingsPage->setObjectName(QStringLiteral("controllerMappingsPage"));
        verticalLayout_2 = new QVBoxLayout(controllerMappingsPage);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(-1, 4, -1, 9);
        label = new QLabel(controllerMappingsPage);
        label->setObjectName(QStringLiteral("label"));
        label->setScaledContents(false);
        label->setWordWrap(true);

        verticalLayout_2->addWidget(label);

        controllerMappingsTableWidget = new QTableWidget(controllerMappingsPage);
        if (controllerMappingsTableWidget->columnCount() < 3)
            controllerMappingsTableWidget->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        controllerMappingsTableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        controllerMappingsTableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        controllerMappingsTableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        controllerMappingsTableWidget->setObjectName(QStringLiteral("controllerMappingsTableWidget"));
        controllerMappingsTableWidget->setSelectionMode(QAbstractItemView::SingleSelection);
        controllerMappingsTableWidget->setWordWrap(true);
        controllerMappingsTableWidget->horizontalHeader()->setCascadingSectionResizes(false);

        verticalLayout_2->addWidget(controllerMappingsTableWidget);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        mappingDeletePushButton = new QPushButton(controllerMappingsPage);
        mappingDeletePushButton->setObjectName(QStringLiteral("mappingDeletePushButton"));
        QIcon icon;
        QString iconThemeName = QStringLiteral("edit-table-delete-row");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon = QIcon::fromTheme(iconThemeName);
        } else {
            icon.addFile(QStringLiteral(""), QSize(), QIcon::Normal, QIcon::Off);
        }
        mappingDeletePushButton->setIcon(icon);

        horizontalLayout_2->addWidget(mappingDeletePushButton);

        mappngInsertPushButton = new QPushButton(controllerMappingsPage);
        mappngInsertPushButton->setObjectName(QStringLiteral("mappngInsertPushButton"));
        QIcon icon1;
        iconThemeName = QStringLiteral("edit-table-insert-row-below");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon1 = QIcon::fromTheme(iconThemeName);
        } else {
            icon1.addFile(QStringLiteral(""), QSize(), QIcon::Normal, QIcon::Off);
        }
        mappngInsertPushButton->setIcon(icon1);

        horizontalLayout_2->addWidget(mappngInsertPushButton);


        verticalLayout_2->addLayout(horizontalLayout_2);

        stackedWidget->addWidget(controllerMappingsPage);
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        verticalLayout_4 = new QVBoxLayout(page);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(-1, 4, -1, -1);
        label_8 = new QLabel(page);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setWordWrap(true);

        verticalLayout_4->addWidget(label_8);

        verticalSpacer_6 = new QSpacerItem(10, 10, QSizePolicy::Minimum, QSizePolicy::Minimum);

        verticalLayout_4->addItem(verticalSpacer_6);

        localeListWidget = new QListWidget(page);
        new QListWidgetItem(localeListWidget);
        new QListWidgetItem(localeListWidget);
        new QListWidgetItem(localeListWidget);
        new QListWidgetItem(localeListWidget);
        new QListWidgetItem(localeListWidget);
        new QListWidgetItem(localeListWidget);
        new QListWidgetItem(localeListWidget);
        new QListWidgetItem(localeListWidget);
        new QListWidgetItem(localeListWidget);
        new QListWidgetItem(localeListWidget);
        localeListWidget->setObjectName(QStringLiteral("localeListWidget"));

        verticalLayout_4->addWidget(localeListWidget);

        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        verticalLayout_5 = new QVBoxLayout(page_2);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(-1, 4, -1, -1);
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        activeCheckBox = new QCheckBox(page_2);
        activeCheckBox->setObjectName(QStringLiteral("activeCheckBox"));

        horizontalLayout_6->addWidget(activeCheckBox);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(20);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_2);

        deivcesLabel = new QLabel(page_2);
        deivcesLabel->setObjectName(QStringLiteral("deivcesLabel"));

        horizontalLayout_5->addWidget(deivcesLabel);

        devicesComboBox = new QComboBox(page_2);
        devicesComboBox->setObjectName(QStringLiteral("devicesComboBox"));

        horizontalLayout_5->addWidget(devicesComboBox);


        horizontalLayout_6->addLayout(horizontalLayout_5);


        verticalLayout_5->addLayout(horizontalLayout_6);

        verticalSpacer_2 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_5->addItem(verticalSpacer_2);

        autoProfileTableWidget = new QTableWidget(page_2);
        if (autoProfileTableWidget->columnCount() < 8)
            autoProfileTableWidget->setColumnCount(8);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        autoProfileTableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        autoProfileTableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        autoProfileTableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        autoProfileTableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        autoProfileTableWidget->setHorizontalHeaderItem(4, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        autoProfileTableWidget->setHorizontalHeaderItem(5, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        autoProfileTableWidget->setHorizontalHeaderItem(6, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        autoProfileTableWidget->setHorizontalHeaderItem(7, __qtablewidgetitem10);
        autoProfileTableWidget->setObjectName(QStringLiteral("autoProfileTableWidget"));
        autoProfileTableWidget->setEnabled(false);
        autoProfileTableWidget->setSelectionMode(QAbstractItemView::SingleSelection);
        autoProfileTableWidget->setSelectionBehavior(QAbstractItemView::SelectRows);
        autoProfileTableWidget->setColumnCount(8);
        autoProfileTableWidget->horizontalHeader()->setVisible(false);
        autoProfileTableWidget->horizontalHeader()->setCascadingSectionResizes(true);
        autoProfileTableWidget->horizontalHeader()->setDefaultSectionSize(100);
        autoProfileTableWidget->horizontalHeader()->setProperty("showSortIndicator", QVariant(false));
        autoProfileTableWidget->horizontalHeader()->setStretchLastSection(true);
        autoProfileTableWidget->verticalHeader()->setVisible(false);

        verticalLayout_5->addWidget(autoProfileTableWidget);

        verticalSpacer_3 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_5->addItem(verticalSpacer_3);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        autoProfileAddPushButton = new QPushButton(page_2);
        autoProfileAddPushButton->setObjectName(QStringLiteral("autoProfileAddPushButton"));
        autoProfileAddPushButton->setEnabled(false);
        autoProfileAddPushButton->setIcon(icon1);

        horizontalLayout_7->addWidget(autoProfileAddPushButton);

        autoProfileEditPushButton = new QPushButton(page_2);
        autoProfileEditPushButton->setObjectName(QStringLiteral("autoProfileEditPushButton"));
        autoProfileEditPushButton->setEnabled(false);
        QIcon icon2;
        iconThemeName = QStringLiteral("document-edit");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon2 = QIcon::fromTheme(iconThemeName);
        } else {
            icon2.addFile(QStringLiteral(""), QSize(), QIcon::Normal, QIcon::Off);
        }
        autoProfileEditPushButton->setIcon(icon2);

        horizontalLayout_7->addWidget(autoProfileEditPushButton);

        autoProfileDeletePushButton = new QPushButton(page_2);
        autoProfileDeletePushButton->setObjectName(QStringLiteral("autoProfileDeletePushButton"));
        autoProfileDeletePushButton->setEnabled(false);
        autoProfileDeletePushButton->setIcon(icon);

        horizontalLayout_7->addWidget(autoProfileDeletePushButton);


        verticalLayout_5->addLayout(horizontalLayout_7);

        stackedWidget->addWidget(page_2);
        mouseSettingsPage = new QWidget();
        mouseSettingsPage->setObjectName(QStringLiteral("mouseSettingsPage"));
        verticalLayout_9 = new QVBoxLayout(mouseSettingsPage);
        verticalLayout_9->setSpacing(10);
        verticalLayout_9->setObjectName(QStringLiteral("verticalLayout_9"));
        verticalLayout_9->setContentsMargins(-1, 4, -1, -1);
        disableWindowsEnhancedPointCheckBox = new QCheckBox(mouseSettingsPage);
        disableWindowsEnhancedPointCheckBox->setObjectName(QStringLiteral("disableWindowsEnhancedPointCheckBox"));

        verticalLayout_9->addWidget(disableWindowsEnhancedPointCheckBox);

        groupBox = new QGroupBox(mouseSettingsPage);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setEnabled(true);
        verticalLayout_7 = new QVBoxLayout(groupBox);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        verticalLayout_7->setContentsMargins(-1, 10, -1, 20);
        smoothingEnableCheckBox = new QCheckBox(groupBox);
        smoothingEnableCheckBox->setObjectName(QStringLiteral("smoothingEnableCheckBox"));

        verticalLayout_7->addWidget(smoothingEnableCheckBox);

        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QStringLiteral("label_6"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_6);

        historySizeSpinBox = new QSpinBox(groupBox);
        historySizeSpinBox->setObjectName(QStringLiteral("historySizeSpinBox"));
        historySizeSpinBox->setEnabled(false);
        historySizeSpinBox->setMinimum(1);
        historySizeSpinBox->setMaximum(100);
        historySizeSpinBox->setValue(10);

        formLayout->setWidget(0, QFormLayout::FieldRole, historySizeSpinBox);

        label_7 = new QLabel(groupBox);
        label_7->setObjectName(QStringLiteral("label_7"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_7);

        weightModifierDoubleSpinBox = new QDoubleSpinBox(groupBox);
        weightModifierDoubleSpinBox->setObjectName(QStringLiteral("weightModifierDoubleSpinBox"));
        weightModifierDoubleSpinBox->setEnabled(false);
        weightModifierDoubleSpinBox->setMaximum(1);
        weightModifierDoubleSpinBox->setSingleStep(0.1);
        weightModifierDoubleSpinBox->setValue(0.2);

        formLayout->setWidget(1, QFormLayout::FieldRole, weightModifierDoubleSpinBox);


        verticalLayout_7->addLayout(formLayout);


        verticalLayout_9->addWidget(groupBox);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        mouseRefreshRateLabel = new QLabel(mouseSettingsPage);
        mouseRefreshRateLabel->setObjectName(QStringLiteral("mouseRefreshRateLabel"));

        horizontalLayout_10->addWidget(mouseRefreshRateLabel);

        mouseRefreshRateComboBox = new QComboBox(mouseSettingsPage);
        mouseRefreshRateComboBox->setObjectName(QStringLiteral("mouseRefreshRateComboBox"));

        horizontalLayout_10->addWidget(mouseRefreshRateComboBox);


        verticalLayout_9->addLayout(horizontalLayout_10);

        springGroupBox = new QGroupBox(mouseSettingsPage);
        springGroupBox->setObjectName(QStringLiteral("springGroupBox"));
        verticalLayout_8 = new QVBoxLayout(springGroupBox);
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        verticalLayout_8->setContentsMargins(-1, 10, -1, 20);
        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName(QStringLiteral("horizontalLayout_11"));
        springScreenLabel = new QLabel(springGroupBox);
        springScreenLabel->setObjectName(QStringLiteral("springScreenLabel"));

        horizontalLayout_11->addWidget(springScreenLabel);

        springScreenComboBox = new QComboBox(springGroupBox);
        springScreenComboBox->setObjectName(QStringLiteral("springScreenComboBox"));

        horizontalLayout_11->addWidget(springScreenComboBox);


        verticalLayout_8->addLayout(horizontalLayout_11);


        verticalLayout_9->addWidget(springGroupBox);

        extraInfoFrame = new QFrame(mouseSettingsPage);
        extraInfoFrame->setObjectName(QStringLiteral("extraInfoFrame"));
        extraInfoFrame->setFrameShape(QFrame::StyledPanel);
        extraInfoFrame->setFrameShadow(QFrame::Raised);
        verticalLayout_10 = new QVBoxLayout(extraInfoFrame);
        verticalLayout_10->setObjectName(QStringLiteral("verticalLayout_10"));
        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setSpacing(6);
        horizontalLayout_13->setObjectName(QStringLiteral("horizontalLayout_13"));
        accelNumTitleLabel = new QLabel(extraInfoFrame);
        accelNumTitleLabel->setObjectName(QStringLiteral("accelNumTitleLabel"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(accelNumTitleLabel->sizePolicy().hasHeightForWidth());
        accelNumTitleLabel->setSizePolicy(sizePolicy1);

        horizontalLayout_13->addWidget(accelNumTitleLabel);

        accelNumLabel = new QLabel(extraInfoFrame);
        accelNumLabel->setObjectName(QStringLiteral("accelNumLabel"));
        sizePolicy1.setHeightForWidth(accelNumLabel->sizePolicy().hasHeightForWidth());
        accelNumLabel->setSizePolicy(sizePolicy1);

        horizontalLayout_13->addWidget(accelNumLabel);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_13->addItem(horizontalSpacer_3);


        verticalLayout_10->addLayout(horizontalLayout_13);

        horizontalLayout_15 = new QHBoxLayout();
        horizontalLayout_15->setObjectName(QStringLiteral("horizontalLayout_15"));
        accelDenomTitleLabel = new QLabel(extraInfoFrame);
        accelDenomTitleLabel->setObjectName(QStringLiteral("accelDenomTitleLabel"));

        horizontalLayout_15->addWidget(accelDenomTitleLabel);

        accelDenomLabel = new QLabel(extraInfoFrame);
        accelDenomLabel->setObjectName(QStringLiteral("accelDenomLabel"));

        horizontalLayout_15->addWidget(accelDenomLabel);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_15->addItem(horizontalSpacer_4);


        verticalLayout_10->addLayout(horizontalLayout_15);

        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setObjectName(QStringLiteral("horizontalLayout_14"));
        accelThresTitleLabel = new QLabel(extraInfoFrame);
        accelThresTitleLabel->setObjectName(QStringLiteral("accelThresTitleLabel"));

        horizontalLayout_14->addWidget(accelThresTitleLabel);

        accelThresLabel = new QLabel(extraInfoFrame);
        accelThresLabel->setObjectName(QStringLiteral("accelThresLabel"));

        horizontalLayout_14->addWidget(accelThresLabel);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_14->addItem(horizontalSpacer_5);


        verticalLayout_10->addLayout(horizontalLayout_14);

        horizontalLayout_16 = new QHBoxLayout();
        horizontalLayout_16->setObjectName(QStringLiteral("horizontalLayout_16"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_16->addItem(horizontalSpacer);

        resetAccelPushButton = new QPushButton(extraInfoFrame);
        resetAccelPushButton->setObjectName(QStringLiteral("resetAccelPushButton"));

        horizontalLayout_16->addWidget(resetAccelPushButton);


        verticalLayout_10->addLayout(horizontalLayout_16);


        verticalLayout_9->addWidget(extraInfoFrame);

        verticalSpacer_5 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_9->addItem(verticalSpacer_5);

        stackedWidget->addWidget(mouseSettingsPage);

        horizontalLayout->addWidget(stackedWidget);


        verticalLayout->addLayout(horizontalLayout);

        buttonBox = new QDialogButtonBox(MainSettingsDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);

#ifndef QT_NO_SHORTCUT
        label_2->setBuddy(profileDefaultDirLineEdit);
        label_6->setBuddy(historySizeSpinBox);
        label_7->setBuddy(weightModifierDoubleSpinBox);
        springScreenLabel->setBuddy(springScreenComboBox);
#endif // QT_NO_SHORTCUT

        retranslateUi(MainSettingsDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), MainSettingsDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), MainSettingsDialog, SLOT(reject()));

        categoriesListWidget->setCurrentRow(0);
        stackedWidget->setCurrentIndex(0);
        localeListWidget->setCurrentRow(-1);


        QMetaObject::connectSlotsByName(MainSettingsDialog);
    } // setupUi

    void retranslateUi(QDialog *MainSettingsDialog)
    {
        MainSettingsDialog->setWindowTitle(QApplication::translate("MainSettingsDialog", "Edit Settings", 0));

        const bool __sortingEnabled = categoriesListWidget->isSortingEnabled();
        categoriesListWidget->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = categoriesListWidget->item(0);
        ___qlistwidgetitem->setText(QApplication::translate("MainSettingsDialog", "General", 0));
        QListWidgetItem *___qlistwidgetitem1 = categoriesListWidget->item(1);
        ___qlistwidgetitem1->setText(QApplication::translate("MainSettingsDialog", "Controller Mappings", 0));
        QListWidgetItem *___qlistwidgetitem2 = categoriesListWidget->item(2);
        ___qlistwidgetitem2->setText(QApplication::translate("MainSettingsDialog", "Language", 0));
        QListWidgetItem *___qlistwidgetitem3 = categoriesListWidget->item(3);
        ___qlistwidgetitem3->setText(QApplication::translate("MainSettingsDialog", "Auto Profile", 0));
        QListWidgetItem *___qlistwidgetitem4 = categoriesListWidget->item(4);
        ___qlistwidgetitem4->setText(QApplication::translate("MainSettingsDialog", "Mouse", 0));
        categoriesListWidget->setSortingEnabled(__sortingEnabled);

        label_2->setText(QApplication::translate("MainSettingsDialog", "Profi&le Directory:", 0));
#ifndef QT_NO_TOOLTIP
        profileDefaultDirLineEdit->setToolTip(QApplication::translate("MainSettingsDialog", "<html><head/><body><p>Specify the default directory that the program should use in file dialogs when loading a profile or saving a new profile.</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        profileOpenDirPushButton->setText(QString());
        label_3->setText(QApplication::translate("MainSettingsDialog", "Recent Profile Count:", 0));
#ifndef QT_NO_TOOLTIP
        numberRecentProfileSpinBox->setToolTip(QApplication::translate("MainSettingsDialog", "<html><head/><body><p>Number of profiles that can be placed in recent profile list. 0 will result in the program not enforcing a limit on the number of profiles displayed.</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        gamepadPollRateLabel->setText(QApplication::translate("MainSettingsDialog", "Gamepad Poll Rate:", 0));
#ifndef QT_NO_TOOLTIP
        gamepadPollRateComboBox->setToolTip(QApplication::translate("MainSettingsDialog", "Change the poll rate that the program uses to discover new\n"
"events from gamepads. Defaults to 10 ms.\n"
"\n"
"Reducing the poll rate value could cause the application to\n"
"use more CPU power so please test the setting that you use\n"
"before using antimicro unattended.", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        closeToTrayCheckBox->setToolTip(QApplication::translate("MainSettingsDialog", "Hide main window when the main window close button is\n"
"clicked instead of quitting the program.", 0));
#endif // QT_NO_TOOLTIP
        closeToTrayCheckBox->setText(QApplication::translate("MainSettingsDialog", "Close To Tray", 0));
#ifndef QT_NO_TOOLTIP
        launchAtWinStartupCheckBox->setToolTip(QApplication::translate("MainSettingsDialog", "Have Windows start antimicro at system startup.", 0));
#endif // QT_NO_TOOLTIP
        launchAtWinStartupCheckBox->setText(QApplication::translate("MainSettingsDialog", "Launch At Windows Startup", 0));
#ifndef QT_NO_TOOLTIP
        traySingleProfileListCheckBox->setToolTip(QApplication::translate("MainSettingsDialog", "Display recent profiles for all controllers\n"
"as a single list in the tray menu. Defaults\n"
"to using sub-menus.", 0));
#endif // QT_NO_TOOLTIP
        traySingleProfileListCheckBox->setText(QApplication::translate("MainSettingsDialog", "Single Profile List in Tray", 0));
#ifndef QT_NO_TOOLTIP
        minimizeTaskbarCheckBox->setToolTip(QApplication::translate("MainSettingsDialog", "Have the program minimize to the taskbar.\n"
"By default, the program minimizes to the system\n"
"tray if available.", 0));
#endif // QT_NO_TOOLTIP
        minimizeTaskbarCheckBox->setText(QApplication::translate("MainSettingsDialog", "Minimize to Taskbar", 0));
#ifndef QT_NO_TOOLTIP
        hideEmptyCheckBox->setToolTip(QApplication::translate("MainSettingsDialog", "This option will cause the program to hide all\n"
"buttons that have no slots assigned to them.\n"
"The Quick Set dialog window will have to be used\n"
"to bring up the edit dialog for gamepad buttons.", 0));
#endif // QT_NO_TOOLTIP
        hideEmptyCheckBox->setText(QApplication::translate("MainSettingsDialog", "Hide Empty Buttons", 0));
#ifndef QT_NO_TOOLTIP
        autoLoadPreviousCheckBox->setToolTip(QApplication::translate("MainSettingsDialog", "When the program is launched, open the last\n"
"known profile that was opened during the\n"
"previous session.", 0));
#endif // QT_NO_TOOLTIP
        autoLoadPreviousCheckBox->setText(QApplication::translate("MainSettingsDialog", "Auto Load Last Opened Profile", 0));
#ifndef QT_NO_TOOLTIP
        launchInTrayCheckBox->setToolTip(QApplication::translate("MainSettingsDialog", "Only show the system tray icon when the program\n"
"first launches.", 0));
#endif // QT_NO_TOOLTIP
        launchInTrayCheckBox->setText(QApplication::translate("MainSettingsDialog", "Launch in Tray", 0));
#ifndef QT_NO_TOOLTIP
        associateProfilesCheckBox->setToolTip(QApplication::translate("MainSettingsDialog", "Associate .amgp files with antimicro in Windows Explorer.", 0));
#endif // QT_NO_TOOLTIP
        associateProfilesCheckBox->setText(QApplication::translate("MainSettingsDialog", "Associate Profiles", 0));
        keyRepeatGroupBox->setTitle(QApplication::translate("MainSettingsDialog", "Key Repeat", 0));
#ifndef QT_NO_TOOLTIP
        keyRepeatEnableCheckBox->setToolTip(QApplication::translate("MainSettingsDialog", "Active keys will be repeatedly pressed when this\n"
"option is enabled.", 0));
#endif // QT_NO_TOOLTIP
        keyRepeatEnableCheckBox->setText(QApplication::translate("MainSettingsDialog", "Enable", 0));
        label_4->setText(QApplication::translate("MainSettingsDialog", "Delay:", 0));
#ifndef QT_NO_TOOLTIP
        keyDelayHorizontalSlider->setToolTip(QApplication::translate("MainSettingsDialog", "Specifies how much time should elapse before key repeating\n"
"begins.", 0));
#endif // QT_NO_TOOLTIP
        keyDelaySpinBox->setSuffix(QApplication::translate("MainSettingsDialog", " ms", 0));
        label_5->setText(QApplication::translate("MainSettingsDialog", "Rate:", 0));
#ifndef QT_NO_TOOLTIP
        keyRateHorizontalSlider->setToolTip(QApplication::translate("MainSettingsDialog", "Specifies how many times key presses will be performed\n"
"per seconds.", 0));
#endif // QT_NO_TOOLTIP
        keyRateSpinBox->setSuffix(QApplication::translate("MainSettingsDialog", " times/s", 0));
        label->setText(QApplication::translate("MainSettingsDialog", "Below is a list of the custom mappings that have been saved. You can use the following table to delete mappings or have mappings temporarily disabled. You can also disable mappings that are included with SDL; just insert a new row with the appropriate joystick GUID and check disable.\n"
"\n"
"Settings will not take affect until you either refresh all joysticks or unplug that particular joystick.", 0));
        QTableWidgetItem *___qtablewidgetitem = controllerMappingsTableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("MainSettingsDialog", "GUID", 0));
        QTableWidgetItem *___qtablewidgetitem1 = controllerMappingsTableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("MainSettingsDialog", "Mapping String", 0));
        QTableWidgetItem *___qtablewidgetitem2 = controllerMappingsTableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("MainSettingsDialog", "Disable?", 0));
        mappingDeletePushButton->setText(QApplication::translate("MainSettingsDialog", "Delete", 0));
        mappngInsertPushButton->setText(QApplication::translate("MainSettingsDialog", "Insert", 0));
        label_8->setText(QApplication::translate("MainSettingsDialog", "<html><head/><body><p>antimicro has been translated into many different languages by contributors. By default, the program will choose an appropriate translation based on your system's locale setting. However, you can make antimicro load a different translation depending on the language that you choose from the list below.</p></body></html>", 0));

        const bool __sortingEnabled1 = localeListWidget->isSortingEnabled();
        localeListWidget->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem5 = localeListWidget->item(0);
        ___qlistwidgetitem5->setText(QApplication::translate("MainSettingsDialog", "Default", 0));
        QListWidgetItem *___qlistwidgetitem6 = localeListWidget->item(1);
        ___qlistwidgetitem6->setText(QApplication::translate("MainSettingsDialog", "Brazilian Portuguese", 0));
        QListWidgetItem *___qlistwidgetitem7 = localeListWidget->item(2);
        ___qlistwidgetitem7->setText(QApplication::translate("MainSettingsDialog", "English", 0));
        QListWidgetItem *___qlistwidgetitem8 = localeListWidget->item(3);
        ___qlistwidgetitem8->setText(QApplication::translate("MainSettingsDialog", "French", 0));
        QListWidgetItem *___qlistwidgetitem9 = localeListWidget->item(4);
        ___qlistwidgetitem9->setText(QApplication::translate("MainSettingsDialog", "German", 0));
        QListWidgetItem *___qlistwidgetitem10 = localeListWidget->item(5);
        ___qlistwidgetitem10->setText(QApplication::translate("MainSettingsDialog", "Japanese", 0));
        QListWidgetItem *___qlistwidgetitem11 = localeListWidget->item(6);
        ___qlistwidgetitem11->setText(QApplication::translate("MainSettingsDialog", "Russian", 0));
        QListWidgetItem *___qlistwidgetitem12 = localeListWidget->item(7);
        ___qlistwidgetitem12->setText(QApplication::translate("MainSettingsDialog", "Serbian", 0));
        QListWidgetItem *___qlistwidgetitem13 = localeListWidget->item(8);
        ___qlistwidgetitem13->setText(QApplication::translate("MainSettingsDialog", "Simplified Chinese", 0));
        QListWidgetItem *___qlistwidgetitem14 = localeListWidget->item(9);
        ___qlistwidgetitem14->setText(QApplication::translate("MainSettingsDialog", "Ukrainian", 0));
        localeListWidget->setSortingEnabled(__sortingEnabled1);

        activeCheckBox->setText(QApplication::translate("MainSettingsDialog", "Active", 0));
        deivcesLabel->setText(QApplication::translate("MainSettingsDialog", "Devices:", 0));
        devicesComboBox->clear();
        devicesComboBox->insertItems(0, QStringList()
         << QApplication::translate("MainSettingsDialog", "All", 0)
        );
        QTableWidgetItem *___qtablewidgetitem3 = autoProfileTableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem3->setText(QApplication::translate("MainSettingsDialog", "Active", 0));
        QTableWidgetItem *___qtablewidgetitem4 = autoProfileTableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem4->setText(QApplication::translate("MainSettingsDialog", "Device", 0));
        QTableWidgetItem *___qtablewidgetitem5 = autoProfileTableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem5->setText(QApplication::translate("MainSettingsDialog", "Profile", 0));
        QTableWidgetItem *___qtablewidgetitem6 = autoProfileTableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem6->setText(QApplication::translate("MainSettingsDialog", "Class", 0));
        QTableWidgetItem *___qtablewidgetitem7 = autoProfileTableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem7->setText(QApplication::translate("MainSettingsDialog", "Title", 0));
        QTableWidgetItem *___qtablewidgetitem8 = autoProfileTableWidget->horizontalHeaderItem(5);
        ___qtablewidgetitem8->setText(QApplication::translate("MainSettingsDialog", "Program", 0));
        QTableWidgetItem *___qtablewidgetitem9 = autoProfileTableWidget->horizontalHeaderItem(6);
        ___qtablewidgetitem9->setText(QApplication::translate("MainSettingsDialog", "Default?", 0));
        autoProfileAddPushButton->setText(QApplication::translate("MainSettingsDialog", "Add", 0));
        autoProfileEditPushButton->setText(QApplication::translate("MainSettingsDialog", "Edit", 0));
        autoProfileDeletePushButton->setText(QApplication::translate("MainSettingsDialog", "Delete", 0));
#ifndef QT_NO_TOOLTIP
        disableWindowsEnhancedPointCheckBox->setToolTip(QApplication::translate("MainSettingsDialog", "Disable the \"Enhanced Pointer Precision\" Windows setting\n"
"while antimicro is running. Disabling \"Enhanced Pointer Precision\"\n"
"will allow mouse movement within antimicro to be more\n"
"precise.", 0));
#endif // QT_NO_TOOLTIP
        disableWindowsEnhancedPointCheckBox->setText(QApplication::translate("MainSettingsDialog", "Disable Enhance Pointer Precision", 0));
        groupBox->setTitle(QApplication::translate("MainSettingsDialog", "Smoothing", 0));
        smoothingEnableCheckBox->setText(QApplication::translate("MainSettingsDialog", "Enable", 0));
        label_6->setText(QApplication::translate("MainSettingsDialog", "Histor&y Size:", 0));
        label_7->setText(QApplication::translate("MainSettingsDialog", "Weight &Modifier:", 0));
        mouseRefreshRateLabel->setText(QApplication::translate("MainSettingsDialog", "Refresh Rate:", 0));
#ifndef QT_NO_TOOLTIP
        mouseRefreshRateComboBox->setToolTip(QApplication::translate("MainSettingsDialog", "The refresh rate is the amount of time that will elapse\n"
"in between mouse events. Please be cautious when\n"
"editing this setting as it will cause the program to use\n"
"more CPU power. Setting this value too low can cause\n"
"system instability. Please test the setting before using\n"
"it unattended.", 0));
#endif // QT_NO_TOOLTIP
        springGroupBox->setTitle(QApplication::translate("MainSettingsDialog", "Spring", 0));
        springScreenLabel->setText(QApplication::translate("MainSettingsDialog", "Screen:", 0));
#ifndef QT_NO_TOOLTIP
        springScreenComboBox->setToolTip(QApplication::translate("MainSettingsDialog", "Utilize the specified screen for spring mode. On Linux, the\n"
"default is to use the primary screen. On Windows, the default\n"
"is to use all available screens.", 0));
#endif // QT_NO_TOOLTIP
        accelNumTitleLabel->setText(QApplication::translate("MainSettingsDialog", "Accel Numerator:", 0));
        accelNumLabel->setText(QApplication::translate("MainSettingsDialog", "0", 0));
        accelDenomTitleLabel->setText(QApplication::translate("MainSettingsDialog", "Accel Denominator:", 0));
        accelDenomLabel->setText(QApplication::translate("MainSettingsDialog", "0", 0));
        accelThresTitleLabel->setText(QApplication::translate("MainSettingsDialog", "Accel Threshold:", 0));
        accelThresLabel->setText(QApplication::translate("MainSettingsDialog", "0", 0));
#ifndef QT_NO_TOOLTIP
        resetAccelPushButton->setToolTip(QApplication::translate("MainSettingsDialog", "If the acceleration values for the virtual mouse have been\n"
"changed by a different process, particularly when quitting\n"
"an older game, then you might want to reset the acceleration\n"
"values used by the virtual mouse.", 0));
#endif // QT_NO_TOOLTIP
        resetAccelPushButton->setText(QApplication::translate("MainSettingsDialog", "Reset Acceleration", 0));
    } // retranslateUi

};

namespace Ui {
    class MainSettingsDialog: public Ui_MainSettingsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINSETTINGSDIALOG_H
