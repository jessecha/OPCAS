/****************************************************************************
** Meta object code from reading C++ file 'gamecontrollermappingdialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/gamecontrollermappingdialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'gamecontrollermappingdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_GameControllerMappingDialog_t {
    QByteArrayData data[28];
    char stringdata[353];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_GameControllerMappingDialog_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_GameControllerMappingDialog_t qt_meta_stringdata_GameControllerMappingDialog = {
    {
QT_MOC_LITERAL(0, 0, 27),
QT_MOC_LITERAL(1, 28, 13),
QT_MOC_LITERAL(2, 42, 0),
QT_MOC_LITERAL(3, 43, 7),
QT_MOC_LITERAL(4, 51, 12),
QT_MOC_LITERAL(5, 64, 6),
QT_MOC_LITERAL(6, 71, 12),
QT_MOC_LITERAL(7, 84, 11),
QT_MOC_LITERAL(8, 96, 10),
QT_MOC_LITERAL(9, 107, 4),
QT_MOC_LITERAL(10, 112, 5),
QT_MOC_LITERAL(11, 118, 10),
QT_MOC_LITERAL(12, 129, 4),
QT_MOC_LITERAL(13, 134, 13),
QT_MOC_LITERAL(14, 148, 11),
QT_MOC_LITERAL(15, 160, 11),
QT_MOC_LITERAL(16, 172, 11),
QT_MOC_LITERAL(17, 184, 14),
QT_MOC_LITERAL(18, 199, 16),
QT_MOC_LITERAL(19, 216, 6),
QT_MOC_LITERAL(20, 223, 18),
QT_MOC_LITERAL(21, 242, 4),
QT_MOC_LITERAL(22, 247, 10),
QT_MOC_LITERAL(23, 258, 19),
QT_MOC_LITERAL(24, 278, 18),
QT_MOC_LITERAL(25, 297, 5),
QT_MOC_LITERAL(26, 303, 22),
QT_MOC_LITERAL(27, 326, 25)
    },
    "GameControllerMappingDialog\0mappingUpdate\0"
    "\0mapping\0InputDevice*\0device\0buttonAssign\0"
    "buttonindex\0axisAssign\0axis\0value\0"
    "dpadAssign\0dpad\0buttonRelease\0axisRelease\0"
    "dpadRelease\0saveChanges\0discardMapping\0"
    "QAbstractButton*\0button\0enableButtonEvents\0"
    "code\0obliterate\0changeButtonDisplay\0"
    "changeAxisDeadZone\0index\0"
    "updateLastAxisLineEdit\0updateLastAxisLineEditRaw\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GameControllerMappingDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   89,    2, 0x06,

 // slots: name, argc, parameters, tag, flags
       6,    1,   94,    2, 0x08,
       8,    2,   97,    2, 0x08,
      11,    2,  102,    2, 0x08,
      13,    1,  107,    2, 0x08,
      14,    2,  110,    2, 0x08,
      15,    2,  115,    2, 0x08,
      16,    0,  120,    2, 0x08,
      17,    1,  121,    2, 0x08,
      20,    1,  124,    2, 0x08,
      22,    0,  127,    2, 0x08,
      23,    0,  128,    2, 0x08,
      24,    1,  129,    2, 0x08,
      26,    1,  132,    2, 0x08,
      27,    2,  135,    2, 0x08,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, 0x80000000 | 4,    3,    5,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    9,   10,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   12,    7,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    9,   10,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   12,    7,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 18,   19,
    QMetaType::Void, QMetaType::Int,   21,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   25,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   25,   10,

       0        // eod
};

void GameControllerMappingDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        GameControllerMappingDialog *_t = static_cast<GameControllerMappingDialog *>(_o);
        switch (_id) {
        case 0: _t->mappingUpdate((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< InputDevice*(*)>(_a[2]))); break;
        case 1: _t->buttonAssign((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->axisAssign((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 3: _t->dpadAssign((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 4: _t->buttonRelease((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->axisRelease((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 6: _t->dpadRelease((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 7: _t->saveChanges(); break;
        case 8: _t->discardMapping((*reinterpret_cast< QAbstractButton*(*)>(_a[1]))); break;
        case 9: _t->enableButtonEvents((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->obliterate(); break;
        case 11: _t->changeButtonDisplay(); break;
        case 12: _t->changeAxisDeadZone((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 13: _t->updateLastAxisLineEdit((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 14: _t->updateLastAxisLineEditRaw((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< InputDevice* >(); break;
            }
            break;
        case 8:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAbstractButton* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (GameControllerMappingDialog::*_t)(QString , InputDevice * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&GameControllerMappingDialog::mappingUpdate)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject GameControllerMappingDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_GameControllerMappingDialog.data,
      qt_meta_data_GameControllerMappingDialog,  qt_static_metacall, 0, 0}
};


const QMetaObject *GameControllerMappingDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GameControllerMappingDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_GameControllerMappingDialog.stringdata))
        return static_cast<void*>(const_cast< GameControllerMappingDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int GameControllerMappingDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    }
    return _id;
}

// SIGNAL 0
void GameControllerMappingDialog::mappingUpdate(QString _t1, InputDevice * _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
