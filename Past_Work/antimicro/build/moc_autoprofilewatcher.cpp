/****************************************************************************
** Meta object code from reading C++ file 'autoprofilewatcher.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/autoprofilewatcher.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'autoprofilewatcher.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_AutoProfileWatcher_t {
    QByteArrayData data[7];
    char stringdata[100];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_AutoProfileWatcher_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_AutoProfileWatcher_t qt_meta_stringdata_AutoProfileWatcher = {
    {
QT_MOC_LITERAL(0, 0, 18),
QT_MOC_LITERAL(1, 19, 22),
QT_MOC_LITERAL(2, 42, 0),
QT_MOC_LITERAL(3, 43, 16),
QT_MOC_LITERAL(4, 60, 4),
QT_MOC_LITERAL(5, 65, 21),
QT_MOC_LITERAL(6, 87, 11)
    },
    "AutoProfileWatcher\0foundApplicableProfile\0"
    "\0AutoProfileInfo*\0info\0syncProfileAssignment\0"
    "runAppCheck\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AutoProfileWatcher[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x06,

 // slots: name, argc, parameters, tag, flags
       5,    0,   32,    2, 0x0a,
       6,    0,   33,    2, 0x08,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void AutoProfileWatcher::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        AutoProfileWatcher *_t = static_cast<AutoProfileWatcher *>(_o);
        switch (_id) {
        case 0: _t->foundApplicableProfile((*reinterpret_cast< AutoProfileInfo*(*)>(_a[1]))); break;
        case 1: _t->syncProfileAssignment(); break;
        case 2: _t->runAppCheck(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< AutoProfileInfo* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (AutoProfileWatcher::*_t)(AutoProfileInfo * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&AutoProfileWatcher::foundApplicableProfile)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject AutoProfileWatcher::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_AutoProfileWatcher.data,
      qt_meta_data_AutoProfileWatcher,  qt_static_metacall, 0, 0}
};


const QMetaObject *AutoProfileWatcher::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AutoProfileWatcher::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_AutoProfileWatcher.stringdata))
        return static_cast<void*>(const_cast< AutoProfileWatcher*>(this));
    return QObject::qt_metacast(_clname);
}

int AutoProfileWatcher::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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

// SIGNAL 0
void AutoProfileWatcher::foundApplicableProfile(AutoProfileInfo * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
