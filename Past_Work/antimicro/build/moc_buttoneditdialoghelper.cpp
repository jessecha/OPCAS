/****************************************************************************
** Meta object code from reading C++ file 'buttoneditdialoghelper.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/uihelpers/buttoneditdialoghelper.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'buttoneditdialoghelper.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ButtonEditDialogHelper_t {
    QByteArrayData data[9];
    char stringdata[112];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_ButtonEditDialogHelper_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_ButtonEditDialogHelper_t qt_meta_stringdata_ButtonEditDialogHelper = {
    {
QT_MOC_LITERAL(0, 0, 22),
QT_MOC_LITERAL(1, 23, 15),
QT_MOC_LITERAL(2, 39, 0),
QT_MOC_LITERAL(3, 40, 4),
QT_MOC_LITERAL(4, 45, 5),
QT_MOC_LITERAL(5, 51, 33),
QT_MOC_LITERAL(6, 85, 4),
QT_MOC_LITERAL(7, 90, 11),
QT_MOC_LITERAL(8, 102, 8)
    },
    "ButtonEditDialogHelper\0setAssignedSlot\0"
    "\0code\0alias\0JoyButtonSlot::JoySlotInputAction\0"
    "mode\0setUseTurbo\0useTurbo\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ButtonEditDialogHelper[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    3,   29,    2, 0x0a,
       1,    2,   36,    2, 0x2a,
       7,    1,   41,    2, 0x0a,

 // slots: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::UInt, 0x80000000 | 5,    3,    4,    6,
    QMetaType::Void, QMetaType::Int, QMetaType::UInt,    3,    4,
    QMetaType::Void, QMetaType::Bool,    8,

       0        // eod
};

void ButtonEditDialogHelper::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ButtonEditDialogHelper *_t = static_cast<ButtonEditDialogHelper *>(_o);
        switch (_id) {
        case 0: _t->setAssignedSlot((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2])),(*reinterpret_cast< JoyButtonSlot::JoySlotInputAction(*)>(_a[3]))); break;
        case 1: _t->setAssignedSlot((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2]))); break;
        case 2: _t->setUseTurbo((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 2:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< JoyButtonSlot::JoySlotInputAction >(); break;
            }
            break;
        }
    }
}

const QMetaObject ButtonEditDialogHelper::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_ButtonEditDialogHelper.data,
      qt_meta_data_ButtonEditDialogHelper,  qt_static_metacall, 0, 0}
};


const QMetaObject *ButtonEditDialogHelper::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ButtonEditDialogHelper::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ButtonEditDialogHelper.stringdata))
        return static_cast<void*>(const_cast< ButtonEditDialogHelper*>(this));
    return QObject::qt_metacast(_clname);
}

int ButtonEditDialogHelper::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
