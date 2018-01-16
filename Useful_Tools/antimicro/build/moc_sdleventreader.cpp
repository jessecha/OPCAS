/****************************************************************************
** Meta object code from reading C++ file 'sdleventreader.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/sdleventreader.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'sdleventreader.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_SDLEventReader_t {
    QByteArrayData data[16];
    char stringdata[177];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_SDLEventReader_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_SDLEventReader_t qt_meta_stringdata_SDLEventReader = {
    {
QT_MOC_LITERAL(0, 0, 14),
QT_MOC_LITERAL(1, 15, 11),
QT_MOC_LITERAL(2, 27, 0),
QT_MOC_LITERAL(3, 28, 8),
QT_MOC_LITERAL(4, 37, 10),
QT_MOC_LITERAL(5, 48, 9),
QT_MOC_LITERAL(6, 58, 11),
QT_MOC_LITERAL(7, 70, 4),
QT_MOC_LITERAL(8, 75, 7),
QT_MOC_LITERAL(9, 83, 14),
QT_MOC_LITERAL(10, 98, 12),
QT_MOC_LITERAL(11, 111, 16),
QT_MOC_LITERAL(12, 128, 4),
QT_MOC_LITERAL(13, 133, 12),
QT_MOC_LITERAL(14, 146, 12),
QT_MOC_LITERAL(15, 159, 16)
    },
    "SDLEventReader\0eventRaised\0\0finished\0"
    "sdlStarted\0sdlClosed\0performWork\0stop\0"
    "refresh\0updatePollRate\0tempPollRate\0"
    "resetJoystickMap\0quit\0closeDevices\0"
    "haltServices\0secondaryRefresh\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SDLEventReader[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   79,    2, 0x06,
       3,    0,   80,    2, 0x06,
       4,    0,   81,    2, 0x06,
       5,    0,   82,    2, 0x06,

 // slots: name, argc, parameters, tag, flags
       6,    0,   83,    2, 0x0a,
       7,    0,   84,    2, 0x0a,
       8,    0,   85,    2, 0x0a,
       9,    1,   86,    2, 0x0a,
      11,    0,   89,    2, 0x0a,
      12,    0,   90,    2, 0x0a,
      13,    0,   91,    2, 0x0a,
      14,    0,   92,    2, 0x0a,
      15,    0,   93,    2, 0x08,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::UInt,   10,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void SDLEventReader::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SDLEventReader *_t = static_cast<SDLEventReader *>(_o);
        switch (_id) {
        case 0: _t->eventRaised(); break;
        case 1: _t->finished(); break;
        case 2: _t->sdlStarted(); break;
        case 3: _t->sdlClosed(); break;
        case 4: _t->performWork(); break;
        case 5: _t->stop(); break;
        case 6: _t->refresh(); break;
        case 7: _t->updatePollRate((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 8: _t->resetJoystickMap(); break;
        case 9: _t->quit(); break;
        case 10: _t->closeDevices(); break;
        case 11: _t->haltServices(); break;
        case 12: _t->secondaryRefresh(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (SDLEventReader::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SDLEventReader::eventRaised)) {
                *result = 0;
            }
        }
        {
            typedef void (SDLEventReader::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SDLEventReader::finished)) {
                *result = 1;
            }
        }
        {
            typedef void (SDLEventReader::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SDLEventReader::sdlStarted)) {
                *result = 2;
            }
        }
        {
            typedef void (SDLEventReader::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SDLEventReader::sdlClosed)) {
                *result = 3;
            }
        }
    }
}

const QMetaObject SDLEventReader::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_SDLEventReader.data,
      qt_meta_data_SDLEventReader,  qt_static_metacall, 0, 0}
};


const QMetaObject *SDLEventReader::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SDLEventReader::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SDLEventReader.stringdata))
        return static_cast<void*>(const_cast< SDLEventReader*>(this));
    return QObject::qt_metacast(_clname);
}

int SDLEventReader::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void SDLEventReader::eventRaised()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void SDLEventReader::finished()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void SDLEventReader::sdlStarted()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}

// SIGNAL 3
void SDLEventReader::sdlClosed()
{
    QMetaObject::activate(this, &staticMetaObject, 3, 0);
}
QT_END_MOC_NAMESPACE
