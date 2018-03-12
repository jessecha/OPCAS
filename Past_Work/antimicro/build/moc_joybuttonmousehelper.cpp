/****************************************************************************
** Meta object code from reading C++ file 'joybuttonmousehelper.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/joybuttonmousehelper.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'joybuttonmousehelper.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_JoyButtonMouseHelper_t {
    QByteArrayData data[17];
    char stringdata[222];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_JoyButtonMouseHelper_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_JoyButtonMouseHelper_t qt_meta_stringdata_JoyButtonMouseHelper = {
    {
QT_MOC_LITERAL(0, 0, 20),
QT_MOC_LITERAL(1, 21, 16),
QT_MOC_LITERAL(2, 38, 0),
QT_MOC_LITERAL(3, 39, 6),
QT_MOC_LITERAL(4, 46, 6),
QT_MOC_LITERAL(5, 53, 7),
QT_MOC_LITERAL(6, 61, 16),
QT_MOC_LITERAL(7, 78, 25),
QT_MOC_LITERAL(8, 104, 8),
QT_MOC_LITERAL(9, 113, 23),
QT_MOC_LITERAL(10, 137, 11),
QT_MOC_LITERAL(11, 149, 15),
QT_MOC_LITERAL(12, 165, 15),
QT_MOC_LITERAL(13, 181, 10),
QT_MOC_LITERAL(14, 192, 12),
QT_MOC_LITERAL(15, 205, 8),
QT_MOC_LITERAL(16, 214, 6)
    },
    "JoyButtonMouseHelper\0mouseCursorMoved\0"
    "\0mouseX\0mouseY\0elapsed\0mouseSpringMoved\0"
    "gamepadRefreshRateUpdated\0pollRate\0"
    "mouseRefreshRateUpdated\0refreshRate\0"
    "moveMouseCursor\0moveSpringMouse\0"
    "mouseEvent\0changeThread\0QThread*\0"
    "thread\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_JoyButtonMouseHelper[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    3,   54,    2, 0x06,
       6,    2,   61,    2, 0x06,
       7,    1,   66,    2, 0x06,
       9,    1,   69,    2, 0x06,

 // slots: name, argc, parameters, tag, flags
      11,    0,   72,    2, 0x0a,
      12,    0,   73,    2, 0x0a,
      13,    0,   74,    2, 0x0a,
      14,    1,   75,    2, 0x0a,

 // signals: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int,    3,    4,    5,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    3,    4,
    QMetaType::Void, QMetaType::UInt,    8,
    QMetaType::Void, QMetaType::UInt,   10,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 15,   16,

       0        // eod
};

void JoyButtonMouseHelper::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        JoyButtonMouseHelper *_t = static_cast<JoyButtonMouseHelper *>(_o);
        switch (_id) {
        case 0: _t->mouseCursorMoved((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 1: _t->mouseSpringMoved((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 2: _t->gamepadRefreshRateUpdated((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 3: _t->mouseRefreshRateUpdated((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 4: _t->moveMouseCursor(); break;
        case 5: _t->moveSpringMouse(); break;
        case 6: _t->mouseEvent(); break;
        case 7: _t->changeThread((*reinterpret_cast< QThread*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QThread* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (JoyButtonMouseHelper::*_t)(int , int , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&JoyButtonMouseHelper::mouseCursorMoved)) {
                *result = 0;
            }
        }
        {
            typedef void (JoyButtonMouseHelper::*_t)(int , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&JoyButtonMouseHelper::mouseSpringMoved)) {
                *result = 1;
            }
        }
        {
            typedef void (JoyButtonMouseHelper::*_t)(unsigned int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&JoyButtonMouseHelper::gamepadRefreshRateUpdated)) {
                *result = 2;
            }
        }
        {
            typedef void (JoyButtonMouseHelper::*_t)(unsigned int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&JoyButtonMouseHelper::mouseRefreshRateUpdated)) {
                *result = 3;
            }
        }
    }
}

const QMetaObject JoyButtonMouseHelper::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_JoyButtonMouseHelper.data,
      qt_meta_data_JoyButtonMouseHelper,  qt_static_metacall, 0, 0}
};


const QMetaObject *JoyButtonMouseHelper::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *JoyButtonMouseHelper::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_JoyButtonMouseHelper.stringdata))
        return static_cast<void*>(const_cast< JoyButtonMouseHelper*>(this));
    return QObject::qt_metacast(_clname);
}

int JoyButtonMouseHelper::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void JoyButtonMouseHelper::mouseCursorMoved(int _t1, int _t2, int _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void JoyButtonMouseHelper::mouseSpringMoved(int _t1, int _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void JoyButtonMouseHelper::gamepadRefreshRateUpdated(unsigned int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void JoyButtonMouseHelper::mouseRefreshRateUpdated(unsigned int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_END_MOC_NAMESPACE
