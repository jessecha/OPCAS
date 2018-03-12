/****************************************************************************
** Meta object code from reading C++ file 'joyaxis.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/joyaxis.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'joyaxis.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_JoyAxis_t {
    QByteArrayData data[21];
    char stringdata[323];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_JoyAxis_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_JoyAxis_t qt_meta_stringdata_JoyAxis = {
    {
QT_MOC_LITERAL(0, 0, 7),
QT_MOC_LITERAL(1, 8, 6),
QT_MOC_LITERAL(2, 15, 0),
QT_MOC_LITERAL(3, 16, 5),
QT_MOC_LITERAL(4, 22, 8),
QT_MOC_LITERAL(5, 31, 5),
QT_MOC_LITERAL(6, 37, 24),
QT_MOC_LITERAL(7, 62, 5),
QT_MOC_LITERAL(8, 68, 15),
QT_MOC_LITERAL(9, 84, 15),
QT_MOC_LITERAL(10, 100, 15),
QT_MOC_LITERAL(11, 116, 5),
QT_MOC_LITERAL(12, 122, 23),
QT_MOC_LITERAL(13, 146, 11),
QT_MOC_LITERAL(14, 158, 15),
QT_MOC_LITERAL(15, 174, 11),
QT_MOC_LITERAL(16, 186, 8),
QT_MOC_LITERAL(17, 195, 30),
QT_MOC_LITERAL(18, 226, 24),
QT_MOC_LITERAL(19, 251, 34),
QT_MOC_LITERAL(20, 286, 35)
    },
    "JoyAxis\0active\0\0value\0released\0moved\0"
    "throttleChangePropogated\0index\0"
    "throttleChanged\0axisNameChanged\0"
    "propertyUpdated\0reset\0propogateThrottleChange\0"
    "setDeadZone\0setMaxZoneValue\0setAxisName\0"
    "tempName\0setButtonsSpringRelativeStatus\0"
    "setButtonsEasingDuration\0"
    "establishPropertyUpdatedConnection\0"
    "disconnectPropertyUpdatedConnection\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_JoyAxis[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      17,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   99,    2, 0x06,
       4,    1,  102,    2, 0x06,
       5,    1,  105,    2, 0x06,
       6,    1,  108,    2, 0x06,
       8,    0,  111,    2, 0x06,
       9,    0,  112,    2, 0x06,
      10,    0,  113,    2, 0x06,

 // slots: name, argc, parameters, tag, flags
      11,    0,  114,    2, 0x0a,
      11,    1,  115,    2, 0x0a,
      12,    0,  118,    2, 0x0a,
      13,    1,  119,    2, 0x0a,
      14,    1,  122,    2, 0x0a,
      15,    1,  125,    2, 0x0a,
      17,    1,  128,    2, 0x0a,
      18,    1,  131,    2, 0x0a,
      19,    0,  134,    2, 0x0a,
      20,    0,  135,    2, 0x0a,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::QString,   16,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Double,    3,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void JoyAxis::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        JoyAxis *_t = static_cast<JoyAxis *>(_o);
        switch (_id) {
        case 0: _t->active((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->released((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->moved((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->throttleChangePropogated((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->throttleChanged(); break;
        case 5: _t->axisNameChanged(); break;
        case 6: _t->propertyUpdated(); break;
        case 7: _t->reset(); break;
        case 8: _t->reset((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->propogateThrottleChange(); break;
        case 10: _t->setDeadZone((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: _t->setMaxZoneValue((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 12: _t->setAxisName((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 13: _t->setButtonsSpringRelativeStatus((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 14: _t->setButtonsEasingDuration((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 15: _t->establishPropertyUpdatedConnection(); break;
        case 16: _t->disconnectPropertyUpdatedConnection(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (JoyAxis::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&JoyAxis::active)) {
                *result = 0;
            }
        }
        {
            typedef void (JoyAxis::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&JoyAxis::released)) {
                *result = 1;
            }
        }
        {
            typedef void (JoyAxis::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&JoyAxis::moved)) {
                *result = 2;
            }
        }
        {
            typedef void (JoyAxis::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&JoyAxis::throttleChangePropogated)) {
                *result = 3;
            }
        }
        {
            typedef void (JoyAxis::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&JoyAxis::throttleChanged)) {
                *result = 4;
            }
        }
        {
            typedef void (JoyAxis::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&JoyAxis::axisNameChanged)) {
                *result = 5;
            }
        }
        {
            typedef void (JoyAxis::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&JoyAxis::propertyUpdated)) {
                *result = 6;
            }
        }
    }
}

const QMetaObject JoyAxis::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_JoyAxis.data,
      qt_meta_data_JoyAxis,  qt_static_metacall, 0, 0}
};


const QMetaObject *JoyAxis::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *JoyAxis::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_JoyAxis.stringdata))
        return static_cast<void*>(const_cast< JoyAxis*>(this));
    return QObject::qt_metacast(_clname);
}

int JoyAxis::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 17)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 17;
    }
    return _id;
}

// SIGNAL 0
void JoyAxis::active(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void JoyAxis::released(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void JoyAxis::moved(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void JoyAxis::throttleChangePropogated(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void JoyAxis::throttleChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, 0);
}

// SIGNAL 5
void JoyAxis::axisNameChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, 0);
}

// SIGNAL 6
void JoyAxis::propertyUpdated()
{
    QMetaObject::activate(this, &staticMetaObject, 6, 0);
}
QT_END_MOC_NAMESPACE
