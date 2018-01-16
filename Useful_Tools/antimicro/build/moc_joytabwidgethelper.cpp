/****************************************************************************
** Meta object code from reading C++ file 'joytabwidgethelper.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/uihelpers/joytabwidgethelper.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'joytabwidgethelper.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_JoyTabWidgetHelper_t {
    QByteArrayData data[8];
    char stringdata[122];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_JoyTabWidgetHelper_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_JoyTabWidgetHelper_t qt_meta_stringdata_JoyTabWidgetHelper = {
    {
QT_MOC_LITERAL(0, 0, 18),
QT_MOC_LITERAL(1, 19, 14),
QT_MOC_LITERAL(2, 34, 0),
QT_MOC_LITERAL(3, 35, 8),
QT_MOC_LITERAL(4, 44, 24),
QT_MOC_LITERAL(5, 69, 15),
QT_MOC_LITERAL(6, 85, 12),
QT_MOC_LITERAL(7, 98, 22)
    },
    "JoyTabWidgetHelper\0readConfigFile\0\0"
    "filepath\0readConfigFileWithRevert\0"
    "writeConfigFile\0reInitDevice\0"
    "reInitDeviceWithRevert\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_JoyTabWidgetHelper[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x0a,
       4,    1,   42,    2, 0x0a,
       5,    1,   45,    2, 0x0a,
       6,    0,   48,    2, 0x0a,
       7,    0,   49,    2, 0x0a,

 // slots: parameters
    QMetaType::Bool, QMetaType::QString,    3,
    QMetaType::Bool, QMetaType::QString,    3,
    QMetaType::Bool, QMetaType::QString,    3,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void JoyTabWidgetHelper::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        JoyTabWidgetHelper *_t = static_cast<JoyTabWidgetHelper *>(_o);
        switch (_id) {
        case 0: { bool _r = _t->readConfigFile((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 1: { bool _r = _t->readConfigFileWithRevert((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 2: { bool _r = _t->writeConfigFile((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 3: _t->reInitDevice(); break;
        case 4: _t->reInitDeviceWithRevert(); break;
        default: ;
        }
    }
}

const QMetaObject JoyTabWidgetHelper::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_JoyTabWidgetHelper.data,
      qt_meta_data_JoyTabWidgetHelper,  qt_static_metacall, 0, 0}
};


const QMetaObject *JoyTabWidgetHelper::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *JoyTabWidgetHelper::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_JoyTabWidgetHelper.stringdata))
        return static_cast<void*>(const_cast< JoyTabWidgetHelper*>(this));
    return QObject::qt_metacast(_clname);
}

int JoyTabWidgetHelper::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
