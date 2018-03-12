/****************************************************************************
** Meta object code from reading C++ file 'joydpad.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/joydpad.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'joydpad.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_JoyDPad_t {
    QByteArrayData data[17];
    char stringdata[282];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_JoyDPad_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_JoyDPad_t qt_meta_stringdata_JoyDPad = {
    {
QT_MOC_LITERAL(0, 0, 7),
QT_MOC_LITERAL(1, 8, 6),
QT_MOC_LITERAL(2, 15, 0),
QT_MOC_LITERAL(3, 16, 5),
QT_MOC_LITERAL(4, 22, 8),
QT_MOC_LITERAL(5, 31, 15),
QT_MOC_LITERAL(6, 47, 16),
QT_MOC_LITERAL(7, 64, 14),
QT_MOC_LITERAL(8, 79, 15),
QT_MOC_LITERAL(9, 95, 11),
QT_MOC_LITERAL(10, 107, 8),
QT_MOC_LITERAL(11, 116, 30),
QT_MOC_LITERAL(12, 147, 12),
QT_MOC_LITERAL(13, 160, 24),
QT_MOC_LITERAL(14, 185, 34),
QT_MOC_LITERAL(15, 220, 35),
QT_MOC_LITERAL(16, 256, 24)
    },
    "JoyDPad\0active\0\0value\0released\0"
    "dpadNameChanged\0dpadDelayChanged\0"
    "joyModeChanged\0propertyUpdated\0"
    "setDPadName\0tempName\0"
    "setButtonsSpringRelativeStatus\0"
    "setDPadDelay\0setButtonsEasingDuration\0"
    "establishPropertyUpdatedConnection\0"
    "disconnectPropertyUpdatedConnection\0"
    "dpadDirectionChangeEvent\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_JoyDPad[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   79,    2, 0x06,
       4,    1,   82,    2, 0x06,
       5,    0,   85,    2, 0x06,
       6,    1,   86,    2, 0x06,
       7,    0,   89,    2, 0x06,
       8,    0,   90,    2, 0x06,

 // slots: name, argc, parameters, tag, flags
       9,    1,   91,    2, 0x0a,
      11,    1,   94,    2, 0x0a,
      12,    1,   97,    2, 0x0a,
      13,    1,  100,    2, 0x0a,
      14,    0,  103,    2, 0x0a,
      15,    0,  104,    2, 0x0a,
      16,    0,  105,    2, 0x08,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,   10,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Double,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void JoyDPad::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        JoyDPad *_t = static_cast<JoyDPad *>(_o);
        switch (_id) {
        case 0: _t->active((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->released((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->dpadNameChanged(); break;
        case 3: _t->dpadDelayChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->joyModeChanged(); break;
        case 5: _t->propertyUpdated(); break;
        case 6: _t->setDPadName((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 7: _t->setButtonsSpringRelativeStatus((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->setDPadDelay((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->setButtonsEasingDuration((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 10: _t->establishPropertyUpdatedConnection(); break;
        case 11: _t->disconnectPropertyUpdatedConnection(); break;
        case 12: _t->dpadDirectionChangeEvent(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (JoyDPad::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&JoyDPad::active)) {
                *result = 0;
            }
        }
        {
            typedef void (JoyDPad::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&JoyDPad::released)) {
                *result = 1;
            }
        }
        {
            typedef void (JoyDPad::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&JoyDPad::dpadNameChanged)) {
                *result = 2;
            }
        }
        {
            typedef void (JoyDPad::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&JoyDPad::dpadDelayChanged)) {
                *result = 3;
            }
        }
        {
            typedef void (JoyDPad::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&JoyDPad::joyModeChanged)) {
                *result = 4;
            }
        }
        {
            typedef void (JoyDPad::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&JoyDPad::propertyUpdated)) {
                *result = 5;
            }
        }
    }
}

const QMetaObject JoyDPad::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_JoyDPad.data,
      qt_meta_data_JoyDPad,  qt_static_metacall, 0, 0}
};


const QMetaObject *JoyDPad::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *JoyDPad::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_JoyDPad.stringdata))
        return static_cast<void*>(const_cast< JoyDPad*>(this));
    return QObject::qt_metacast(_clname);
}

int JoyDPad::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 13;
    }
    return _id;
}

// SIGNAL 0
void JoyDPad::active(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void JoyDPad::released(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void JoyDPad::dpadNameChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}

// SIGNAL 3
void JoyDPad::dpadDelayChanged(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void JoyDPad::joyModeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, 0);
}

// SIGNAL 5
void JoyDPad::propertyUpdated()
{
    QMetaObject::activate(this, &staticMetaObject, 5, 0);
}
QT_END_MOC_NAMESPACE
