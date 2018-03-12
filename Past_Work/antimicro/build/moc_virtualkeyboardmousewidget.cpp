/****************************************************************************
** Meta object code from reading C++ file 'virtualkeyboardmousewidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/keyboard/virtualkeyboardmousewidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'virtualkeyboardmousewidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_VirtualKeyboardMouseWidget_t {
    QByteArrayData data[26];
    char stringdata[591];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_VirtualKeyboardMouseWidget_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_VirtualKeyboardMouseWidget_t qt_meta_stringdata_VirtualKeyboardMouseWidget = {
    {
QT_MOC_LITERAL(0, 0, 26),
QT_MOC_LITERAL(1, 27, 17),
QT_MOC_LITERAL(2, 45, 0),
QT_MOC_LITERAL(3, 46, 16),
QT_MOC_LITERAL(4, 63, 13),
QT_MOC_LITERAL(5, 77, 7),
QT_MOC_LITERAL(6, 85, 5),
QT_MOC_LITERAL(7, 91, 14),
QT_MOC_LITERAL(8, 106, 4),
QT_MOC_LITERAL(9, 111, 47),
QT_MOC_LITERAL(10, 159, 38),
QT_MOC_LITERAL(11, 198, 49),
QT_MOC_LITERAL(12, 248, 46),
QT_MOC_LITERAL(13, 295, 30),
QT_MOC_LITERAL(14, 326, 32),
QT_MOC_LITERAL(15, 359, 27),
QT_MOC_LITERAL(16, 387, 8),
QT_MOC_LITERAL(17, 396, 29),
QT_MOC_LITERAL(18, 426, 16),
QT_MOC_LITERAL(19, 443, 22),
QT_MOC_LITERAL(20, 466, 23),
QT_MOC_LITERAL(21, 490, 24),
QT_MOC_LITERAL(22, 515, 18),
QT_MOC_LITERAL(23, 534, 21),
QT_MOC_LITERAL(24, 556, 9),
QT_MOC_LITERAL(25, 566, 23)
    },
    "VirtualKeyboardMouseWidget\0selectionFinished\0"
    "\0selectionCleared\0selectionMade\0keycode\0"
    "alias\0JoyButtonSlot*\0slot\0"
    "establishVirtualKeyboardSingleSignalConnections\0"
    "establishVirtualMouseSignalConnections\0"
    "establishVirtualKeyboardAdvancedSignalConnections\0"
    "establishVirtualMouseAdvancedSignalConnections\0"
    "processSingleKeyboardSelection\0"
    "processAdvancedKeyboardSelection\0"
    "processSingleMouseSelection\0tempslot\0"
    "processAdvancedMouseSelection\0"
    "clearButtonSlots\0clearButtonSlotsFinish\0"
    "openMouseSettingsDialog\0"
    "enableMouseSettingButton\0setButtonFontSizes\0"
    "otherKeysActionSingle\0triggered\0"
    "otherKeysActionAdvanced\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_VirtualKeyboardMouseWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      19,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  109,    2, 0x06,
       3,    0,  110,    2, 0x06,
       4,    2,  111,    2, 0x06,
       4,    1,  116,    2, 0x06,

 // slots: name, argc, parameters, tag, flags
       9,    0,  119,    2, 0x0a,
      10,    0,  120,    2, 0x0a,
      11,    0,  121,    2, 0x0a,
      12,    0,  122,    2, 0x0a,
      13,    2,  123,    2, 0x08,
      14,    2,  128,    2, 0x08,
      15,    1,  133,    2, 0x08,
      17,    1,  136,    2, 0x08,
      18,    0,  139,    2, 0x08,
      19,    0,  140,    2, 0x08,
      20,    0,  141,    2, 0x08,
      21,    0,  142,    2, 0x08,
      22,    0,  143,    2, 0x08,
      23,    1,  144,    2, 0x08,
      25,    1,  147,    2, 0x08,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::UInt,    5,    6,
    QMetaType::Void, 0x80000000 | 7,    8,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::UInt,    5,    6,
    QMetaType::Void, QMetaType::Int, QMetaType::UInt,    5,    6,
    QMetaType::Void, 0x80000000 | 7,   16,
    QMetaType::Void, 0x80000000 | 7,   16,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   24,
    QMetaType::Void, QMetaType::Bool,   24,

       0        // eod
};

void VirtualKeyboardMouseWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        VirtualKeyboardMouseWidget *_t = static_cast<VirtualKeyboardMouseWidget *>(_o);
        switch (_id) {
        case 0: _t->selectionFinished(); break;
        case 1: _t->selectionCleared(); break;
        case 2: _t->selectionMade((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2]))); break;
        case 3: _t->selectionMade((*reinterpret_cast< JoyButtonSlot*(*)>(_a[1]))); break;
        case 4: _t->establishVirtualKeyboardSingleSignalConnections(); break;
        case 5: _t->establishVirtualMouseSignalConnections(); break;
        case 6: _t->establishVirtualKeyboardAdvancedSignalConnections(); break;
        case 7: _t->establishVirtualMouseAdvancedSignalConnections(); break;
        case 8: _t->processSingleKeyboardSelection((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2]))); break;
        case 9: _t->processAdvancedKeyboardSelection((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2]))); break;
        case 10: _t->processSingleMouseSelection((*reinterpret_cast< JoyButtonSlot*(*)>(_a[1]))); break;
        case 11: _t->processAdvancedMouseSelection((*reinterpret_cast< JoyButtonSlot*(*)>(_a[1]))); break;
        case 12: _t->clearButtonSlots(); break;
        case 13: _t->clearButtonSlotsFinish(); break;
        case 14: _t->openMouseSettingsDialog(); break;
        case 15: _t->enableMouseSettingButton(); break;
        case 16: _t->setButtonFontSizes(); break;
        case 17: _t->otherKeysActionSingle((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 18: _t->otherKeysActionAdvanced((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< JoyButtonSlot* >(); break;
            }
            break;
        case 10:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< JoyButtonSlot* >(); break;
            }
            break;
        case 11:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< JoyButtonSlot* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (VirtualKeyboardMouseWidget::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&VirtualKeyboardMouseWidget::selectionFinished)) {
                *result = 0;
            }
        }
        {
            typedef void (VirtualKeyboardMouseWidget::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&VirtualKeyboardMouseWidget::selectionCleared)) {
                *result = 1;
            }
        }
        {
            typedef void (VirtualKeyboardMouseWidget::*_t)(int , unsigned int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&VirtualKeyboardMouseWidget::selectionMade)) {
                *result = 2;
            }
        }
        {
            typedef void (VirtualKeyboardMouseWidget::*_t)(JoyButtonSlot * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&VirtualKeyboardMouseWidget::selectionMade)) {
                *result = 3;
            }
        }
    }
}

const QMetaObject VirtualKeyboardMouseWidget::staticMetaObject = {
    { &QTabWidget::staticMetaObject, qt_meta_stringdata_VirtualKeyboardMouseWidget.data,
      qt_meta_data_VirtualKeyboardMouseWidget,  qt_static_metacall, 0, 0}
};


const QMetaObject *VirtualKeyboardMouseWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *VirtualKeyboardMouseWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_VirtualKeyboardMouseWidget.stringdata))
        return static_cast<void*>(const_cast< VirtualKeyboardMouseWidget*>(this));
    return QTabWidget::qt_metacast(_clname);
}

int VirtualKeyboardMouseWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTabWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 19)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 19;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 19)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 19;
    }
    return _id;
}

// SIGNAL 0
void VirtualKeyboardMouseWidget::selectionFinished()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void VirtualKeyboardMouseWidget::selectionCleared()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void VirtualKeyboardMouseWidget::selectionMade(int _t1, unsigned int _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void VirtualKeyboardMouseWidget::selectionMade(JoyButtonSlot * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_END_MOC_NAMESPACE
