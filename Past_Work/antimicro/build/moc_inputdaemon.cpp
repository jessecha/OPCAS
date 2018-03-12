/****************************************************************************
** Meta object code from reading C++ file 'inputdaemon.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/inputdaemon.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'inputdaemon.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_InputDaemon_t {
    QByteArrayData data[32];
    char stringdata[418];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_InputDaemon_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_InputDaemon_t qt_meta_stringdata_InputDaemon = {
    {
QT_MOC_LITERAL(0, 0, 11),
QT_MOC_LITERAL(1, 12, 17),
QT_MOC_LITERAL(2, 30, 0),
QT_MOC_LITERAL(3, 31, 12),
QT_MOC_LITERAL(4, 44, 8),
QT_MOC_LITERAL(5, 53, 18),
QT_MOC_LITERAL(6, 72, 34),
QT_MOC_LITERAL(7, 107, 9),
QT_MOC_LITERAL(8, 117, 8),
QT_MOC_LITERAL(9, 126, 13),
QT_MOC_LITERAL(10, 140, 5),
QT_MOC_LITERAL(11, 146, 6),
QT_MOC_LITERAL(12, 153, 13),
QT_MOC_LITERAL(13, 167, 14),
QT_MOC_LITERAL(14, 182, 8),
QT_MOC_LITERAL(15, 191, 11),
QT_MOC_LITERAL(16, 203, 3),
QT_MOC_LITERAL(17, 207, 4),
QT_MOC_LITERAL(18, 212, 7),
QT_MOC_LITERAL(19, 220, 15),
QT_MOC_LITERAL(20, 236, 16),
QT_MOC_LITERAL(21, 253, 15),
QT_MOC_LITERAL(22, 269, 11),
QT_MOC_LITERAL(23, 281, 14),
QT_MOC_LITERAL(24, 296, 7),
QT_MOC_LITERAL(25, 304, 12),
QT_MOC_LITERAL(26, 317, 14),
QT_MOC_LITERAL(27, 332, 14),
QT_MOC_LITERAL(28, 347, 4),
QT_MOC_LITERAL(29, 352, 31),
QT_MOC_LITERAL(30, 384, 19),
QT_MOC_LITERAL(31, 404, 12)
    },
    "InputDaemon\0joystickRefreshed\0\0"
    "InputDevice*\0joystick\0joysticksRefreshed\0"
    "QMap<SDL_JoystickID,InputDevice*>*\0"
    "joysticks\0complete\0deviceUpdated\0index\0"
    "device\0deviceRemoved\0SDL_JoystickID\0"
    "deviceID\0deviceAdded\0run\0quit\0refresh\0"
    "refreshJoystick\0refreshJoysticks\0"
    "deleteJoysticks\0startWorker\0refreshMapping\0"
    "mapping\0removeDevice\0addInputDevice\0"
    "refreshIndexes\0stop\0resetActiveButtonMouseDistances\0"
    "updatePollResetRate\0tempPollRate\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_InputDaemon[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      21,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  119,    2, 0x06,
       5,    1,  122,    2, 0x06,
       8,    1,  125,    2, 0x06,
       8,    0,  128,    2, 0x06,
       9,    2,  129,    2, 0x06,
      12,    1,  134,    2, 0x06,
      15,    1,  137,    2, 0x06,

 // slots: name, argc, parameters, tag, flags
      16,    0,  140,    2, 0x0a,
      17,    0,  141,    2, 0x0a,
      18,    0,  142,    2, 0x0a,
      19,    1,  143,    2, 0x0a,
      20,    0,  146,    2, 0x0a,
      21,    0,  147,    2, 0x0a,
      22,    0,  148,    2, 0x0a,
      23,    2,  149,    2, 0x0a,
      25,    1,  154,    2, 0x0a,
      26,    1,  157,    2, 0x0a,
      27,    0,  160,    2, 0x0a,
      28,    0,  161,    2, 0x08,
      29,    0,  162,    2, 0x08,
      30,    1,  163,    2, 0x08,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 3,   10,   11,
    QMetaType::Void, 0x80000000 | 13,   14,
    QMetaType::Void, 0x80000000 | 3,   11,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 3,   24,   11,
    QMetaType::Void, 0x80000000 | 3,   11,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::UInt,   31,

       0        // eod
};

void InputDaemon::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        InputDaemon *_t = static_cast<InputDaemon *>(_o);
        switch (_id) {
        case 0: _t->joystickRefreshed((*reinterpret_cast< InputDevice*(*)>(_a[1]))); break;
        case 1: _t->joysticksRefreshed((*reinterpret_cast< QMap<SDL_JoystickID,InputDevice*>*(*)>(_a[1]))); break;
        case 2: _t->complete((*reinterpret_cast< InputDevice*(*)>(_a[1]))); break;
        case 3: _t->complete(); break;
        case 4: _t->deviceUpdated((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< InputDevice*(*)>(_a[2]))); break;
        case 5: _t->deviceRemoved((*reinterpret_cast< SDL_JoystickID(*)>(_a[1]))); break;
        case 6: _t->deviceAdded((*reinterpret_cast< InputDevice*(*)>(_a[1]))); break;
        case 7: _t->run(); break;
        case 8: _t->quit(); break;
        case 9: _t->refresh(); break;
        case 10: _t->refreshJoystick((*reinterpret_cast< InputDevice*(*)>(_a[1]))); break;
        case 11: _t->refreshJoysticks(); break;
        case 12: _t->deleteJoysticks(); break;
        case 13: _t->startWorker(); break;
        case 14: _t->refreshMapping((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< InputDevice*(*)>(_a[2]))); break;
        case 15: _t->removeDevice((*reinterpret_cast< InputDevice*(*)>(_a[1]))); break;
        case 16: _t->addInputDevice((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 17: _t->refreshIndexes(); break;
        case 18: _t->stop(); break;
        case 19: _t->resetActiveButtonMouseDistances(); break;
        case 20: _t->updatePollResetRate((*reinterpret_cast< uint(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< InputDevice* >(); break;
            }
            break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< InputDevice* >(); break;
            }
            break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< InputDevice* >(); break;
            }
            break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< SDL_JoystickID >(); break;
            }
            break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< InputDevice* >(); break;
            }
            break;
        case 10:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< InputDevice* >(); break;
            }
            break;
        case 14:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< InputDevice* >(); break;
            }
            break;
        case 15:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< InputDevice* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (InputDaemon::*_t)(InputDevice * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&InputDaemon::joystickRefreshed)) {
                *result = 0;
            }
        }
        {
            typedef void (InputDaemon::*_t)(QMap<SDL_JoystickID,InputDevice*> * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&InputDaemon::joysticksRefreshed)) {
                *result = 1;
            }
        }
        {
            typedef void (InputDaemon::*_t)(InputDevice * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&InputDaemon::complete)) {
                *result = 2;
            }
        }
        {
            typedef void (InputDaemon::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&InputDaemon::complete)) {
                *result = 3;
            }
        }
        {
            typedef void (InputDaemon::*_t)(int , InputDevice * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&InputDaemon::deviceUpdated)) {
                *result = 4;
            }
        }
        {
            typedef void (InputDaemon::*_t)(SDL_JoystickID );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&InputDaemon::deviceRemoved)) {
                *result = 5;
            }
        }
        {
            typedef void (InputDaemon::*_t)(InputDevice * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&InputDaemon::deviceAdded)) {
                *result = 6;
            }
        }
    }
}

const QMetaObject InputDaemon::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_InputDaemon.data,
      qt_meta_data_InputDaemon,  qt_static_metacall, 0, 0}
};


const QMetaObject *InputDaemon::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *InputDaemon::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_InputDaemon.stringdata))
        return static_cast<void*>(const_cast< InputDaemon*>(this));
    return QObject::qt_metacast(_clname);
}

int InputDaemon::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 21)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 21;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 21)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 21;
    }
    return _id;
}

// SIGNAL 0
void InputDaemon::joystickRefreshed(InputDevice * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void InputDaemon::joysticksRefreshed(QMap<SDL_JoystickID,InputDevice*> * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void InputDaemon::complete(InputDevice * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void InputDaemon::complete()
{
    QMetaObject::activate(this, &staticMetaObject, 3, 0);
}

// SIGNAL 4
void InputDaemon::deviceUpdated(int _t1, InputDevice * _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void InputDaemon::deviceRemoved(SDL_JoystickID _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void InputDaemon::deviceAdded(InputDevice * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}
QT_END_MOC_NAMESPACE
