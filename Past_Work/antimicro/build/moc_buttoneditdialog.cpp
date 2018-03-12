/****************************************************************************
** Meta object code from reading C++ file 'buttoneditdialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/buttoneditdialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'buttoneditdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ButtonEditDialog_t {
    QByteArrayData data[28];
    char stringdata[445];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_ButtonEditDialog_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_ButtonEditDialog_t qt_meta_stringdata_ButtonEditDialog = {
    {
QT_MOC_LITERAL(0, 0, 16),
QT_MOC_LITERAL(1, 17, 20),
QT_MOC_LITERAL(2, 38, 0),
QT_MOC_LITERAL(3, 39, 22),
QT_MOC_LITERAL(4, 62, 14),
QT_MOC_LITERAL(5, 77, 8),
QT_MOC_LITERAL(6, 86, 10),
QT_MOC_LITERAL(7, 97, 16),
QT_MOC_LITERAL(8, 114, 17),
QT_MOC_LITERAL(9, 132, 23),
QT_MOC_LITERAL(10, 156, 19),
QT_MOC_LITERAL(11, 176, 18),
QT_MOC_LITERAL(12, 195, 18),
QT_MOC_LITERAL(13, 214, 20),
QT_MOC_LITERAL(14, 235, 14),
QT_MOC_LITERAL(15, 250, 7),
QT_MOC_LITERAL(16, 258, 5),
QT_MOC_LITERAL(17, 264, 17),
QT_MOC_LITERAL(18, 282, 5),
QT_MOC_LITERAL(19, 288, 21),
QT_MOC_LITERAL(20, 310, 21),
QT_MOC_LITERAL(21, 332, 16),
QT_MOC_LITERAL(22, 349, 21),
QT_MOC_LITERAL(23, 371, 27),
QT_MOC_LITERAL(24, 399, 27),
QT_MOC_LITERAL(25, 427, 8),
QT_MOC_LITERAL(26, 436, 3),
QT_MOC_LITERAL(27, 440, 3)
    },
    "ButtonEditDialog\0advancedDialogOpened\0"
    "\0sendTempSlotToAdvanced\0JoyButtonSlot*\0"
    "tempslot\0keyGrabbed\0selectionCleared\0"
    "selectionFinished\0refreshSlotSummaryLabel\0"
    "changeToggleSetting\0changeTurboSetting\0"
    "openAdvancedDialog\0closedAdvancedDialog\0"
    "createTempSlot\0keycode\0alias\0"
    "checkTurboSetting\0state\0setTurboButtonEnabled\0"
    "processSlotAssignment\0clearButtonSlots\0"
    "sendSelectionFinished\0updateWindowTitleButtonName\0"
    "checkForKeyboardWidgetFocus\0QWidget*\0"
    "old\0now\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ButtonEditDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      18,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  104,    2, 0x06,
       3,    1,  105,    2, 0x06,
       6,    1,  108,    2, 0x06,
       7,    0,  111,    2, 0x06,
       8,    0,  112,    2, 0x06,

 // slots: name, argc, parameters, tag, flags
       9,    0,  113,    2, 0x08,
      10,    0,  114,    2, 0x08,
      11,    0,  115,    2, 0x08,
      12,    0,  116,    2, 0x08,
      13,    0,  117,    2, 0x08,
      14,    2,  118,    2, 0x08,
      17,    1,  123,    2, 0x08,
      19,    1,  126,    2, 0x08,
      20,    1,  129,    2, 0x08,
      21,    0,  132,    2, 0x08,
      22,    0,  133,    2, 0x08,
      23,    0,  134,    2, 0x08,
      24,    2,  135,    2, 0x08,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::UInt,   15,   16,
    QMetaType::Void, QMetaType::Bool,   18,
    QMetaType::Void, QMetaType::Bool,   18,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 25, 0x80000000 | 25,   26,   27,

       0        // eod
};

void ButtonEditDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ButtonEditDialog *_t = static_cast<ButtonEditDialog *>(_o);
        switch (_id) {
        case 0: _t->advancedDialogOpened(); break;
        case 1: _t->sendTempSlotToAdvanced((*reinterpret_cast< JoyButtonSlot*(*)>(_a[1]))); break;
        case 2: _t->keyGrabbed((*reinterpret_cast< JoyButtonSlot*(*)>(_a[1]))); break;
        case 3: _t->selectionCleared(); break;
        case 4: _t->selectionFinished(); break;
        case 5: _t->refreshSlotSummaryLabel(); break;
        case 6: _t->changeToggleSetting(); break;
        case 7: _t->changeTurboSetting(); break;
        case 8: _t->openAdvancedDialog(); break;
        case 9: _t->closedAdvancedDialog(); break;
        case 10: _t->createTempSlot((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2]))); break;
        case 11: _t->checkTurboSetting((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 12: _t->setTurboButtonEnabled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 13: _t->processSlotAssignment((*reinterpret_cast< JoyButtonSlot*(*)>(_a[1]))); break;
        case 14: _t->clearButtonSlots(); break;
        case 15: _t->sendSelectionFinished(); break;
        case 16: _t->updateWindowTitleButtonName(); break;
        case 17: _t->checkForKeyboardWidgetFocus((*reinterpret_cast< QWidget*(*)>(_a[1])),(*reinterpret_cast< QWidget*(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< JoyButtonSlot* >(); break;
            }
            break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< JoyButtonSlot* >(); break;
            }
            break;
        case 13:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< JoyButtonSlot* >(); break;
            }
            break;
        case 17:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QWidget* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (ButtonEditDialog::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ButtonEditDialog::advancedDialogOpened)) {
                *result = 0;
            }
        }
        {
            typedef void (ButtonEditDialog::*_t)(JoyButtonSlot * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ButtonEditDialog::sendTempSlotToAdvanced)) {
                *result = 1;
            }
        }
        {
            typedef void (ButtonEditDialog::*_t)(JoyButtonSlot * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ButtonEditDialog::keyGrabbed)) {
                *result = 2;
            }
        }
        {
            typedef void (ButtonEditDialog::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ButtonEditDialog::selectionCleared)) {
                *result = 3;
            }
        }
        {
            typedef void (ButtonEditDialog::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ButtonEditDialog::selectionFinished)) {
                *result = 4;
            }
        }
    }
}

const QMetaObject ButtonEditDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_ButtonEditDialog.data,
      qt_meta_data_ButtonEditDialog,  qt_static_metacall, 0, 0}
};


const QMetaObject *ButtonEditDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ButtonEditDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ButtonEditDialog.stringdata))
        return static_cast<void*>(const_cast< ButtonEditDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int ButtonEditDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 18)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 18;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 18)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 18;
    }
    return _id;
}

// SIGNAL 0
void ButtonEditDialog::advancedDialogOpened()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void ButtonEditDialog::sendTempSlotToAdvanced(JoyButtonSlot * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void ButtonEditDialog::keyGrabbed(JoyButtonSlot * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void ButtonEditDialog::selectionCleared()
{
    QMetaObject::activate(this, &staticMetaObject, 3, 0);
}

// SIGNAL 4
void ButtonEditDialog::selectionFinished()
{
    QMetaObject::activate(this, &staticMetaObject, 4, 0);
}
QT_END_MOC_NAMESPACE
