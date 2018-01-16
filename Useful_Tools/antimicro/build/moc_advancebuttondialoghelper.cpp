/****************************************************************************
** Meta object code from reading C++ file 'advancebuttondialoghelper.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/uihelpers/advancebuttondialoghelper.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'advancebuttondialoghelper.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_AdvanceButtonDialogHelper_t {
    QByteArrayData data[12];
    char stringdata[163];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_AdvanceButtonDialogHelper_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_AdvanceButtonDialogHelper_t qt_meta_stringdata_AdvanceButtonDialogHelper = {
    {
QT_MOC_LITERAL(0, 0, 25),
QT_MOC_LITERAL(1, 26, 15),
QT_MOC_LITERAL(2, 42, 0),
QT_MOC_LITERAL(3, 43, 14),
QT_MOC_LITERAL(4, 58, 9),
QT_MOC_LITERAL(5, 68, 5),
QT_MOC_LITERAL(6, 74, 4),
QT_MOC_LITERAL(7, 79, 5),
QT_MOC_LITERAL(8, 85, 33),
QT_MOC_LITERAL(9, 119, 4),
QT_MOC_LITERAL(10, 124, 18),
QT_MOC_LITERAL(11, 143, 18)
    },
    "AdvanceButtonDialogHelper\0setAssignedSlot\0"
    "\0JoyButtonSlot*\0otherSlot\0index\0code\0"
    "alias\0JoyButtonSlot::JoySlotInputAction\0"
    "mode\0insertAssignedSlot\0removeAssignedSlot\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AdvanceButtonDialogHelper[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    2,   44,    2, 0x0a,
       1,    4,   49,    2, 0x0a,
       1,    3,   58,    2, 0x2a,
      10,    4,   65,    2, 0x0a,
      10,    3,   74,    2, 0x2a,
      11,    1,   81,    2, 0x0a,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::Int,    4,    5,
    QMetaType::Void, QMetaType::Int, QMetaType::UInt, QMetaType::Int, 0x80000000 | 8,    6,    7,    5,    9,
    QMetaType::Void, QMetaType::Int, QMetaType::UInt, QMetaType::Int,    6,    7,    5,
    QMetaType::Void, QMetaType::Int, QMetaType::UInt, QMetaType::Int, 0x80000000 | 8,    6,    7,    5,    9,
    QMetaType::Void, QMetaType::Int, QMetaType::UInt, QMetaType::Int,    6,    7,    5,
    QMetaType::Void, QMetaType::Int,    5,

       0        // eod
};

void AdvanceButtonDialogHelper::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        AdvanceButtonDialogHelper *_t = static_cast<AdvanceButtonDialogHelper *>(_o);
        switch (_id) {
        case 0: _t->setAssignedSlot((*reinterpret_cast< JoyButtonSlot*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 1: _t->setAssignedSlot((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< JoyButtonSlot::JoySlotInputAction(*)>(_a[4]))); break;
        case 2: _t->setAssignedSlot((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 3: _t->insertAssignedSlot((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< JoyButtonSlot::JoySlotInputAction(*)>(_a[4]))); break;
        case 4: _t->insertAssignedSlot((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 5: _t->removeAssignedSlot((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< JoyButtonSlot* >(); break;
            }
            break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 3:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< JoyButtonSlot::JoySlotInputAction >(); break;
            }
            break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 3:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< JoyButtonSlot::JoySlotInputAction >(); break;
            }
            break;
        }
    }
}

const QMetaObject AdvanceButtonDialogHelper::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_AdvanceButtonDialogHelper.data,
      qt_meta_data_AdvanceButtonDialogHelper,  qt_static_metacall, 0, 0}
};


const QMetaObject *AdvanceButtonDialogHelper::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AdvanceButtonDialogHelper::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_AdvanceButtonDialogHelper.stringdata))
        return static_cast<void*>(const_cast< AdvanceButtonDialogHelper*>(this));
    return QObject::qt_metacast(_clname);
}

int AdvanceButtonDialogHelper::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
