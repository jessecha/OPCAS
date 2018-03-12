/****************************************************************************
** Meta object code from reading C++ file 'mousedpadsettingsdialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/mousedialog/mousedpadsettingsdialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mousedpadsettingsdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_MouseDPadSettingsDialog_t {
    QByteArrayData data[17];
    char stringdata[362];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_MouseDPadSettingsDialog_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_MouseDPadSettingsDialog_t qt_meta_stringdata_MouseDPadSettingsDialog = {
    {
QT_MOC_LITERAL(0, 0, 23),
QT_MOC_LITERAL(1, 24, 15),
QT_MOC_LITERAL(2, 40, 0),
QT_MOC_LITERAL(3, 41, 5),
QT_MOC_LITERAL(4, 47, 16),
QT_MOC_LITERAL(5, 64, 27),
QT_MOC_LITERAL(6, 92, 5),
QT_MOC_LITERAL(7, 98, 25),
QT_MOC_LITERAL(8, 124, 17),
QT_MOC_LITERAL(9, 142, 18),
QT_MOC_LITERAL(10, 161, 17),
QT_MOC_LITERAL(11, 179, 37),
QT_MOC_LITERAL(12, 217, 31),
QT_MOC_LITERAL(13, 249, 29),
QT_MOC_LITERAL(14, 279, 26),
QT_MOC_LITERAL(15, 306, 25),
QT_MOC_LITERAL(16, 332, 28)
    },
    "MouseDPadSettingsDialog\0changeMouseMode\0"
    "\0index\0changeMouseCurve\0"
    "updateConfigHorizontalSpeed\0value\0"
    "updateConfigVerticalSpeed\0updateSpringWidth\0"
    "updateSpringHeight\0updateSensitivity\0"
    "updateAccelerationCurvePresetComboBox\0"
    "updateWheelSpeedHorizontalSpeed\0"
    "updateWheelSpeedVerticalSpeed\0"
    "updateSpringRelativeStatus\0"
    "updateReleaseSpringRadius\0"
    "updateExtraAccelerationCurve\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MouseDPadSettingsDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   79,    2, 0x0a,
       4,    1,   82,    2, 0x0a,
       5,    1,   85,    2, 0x0a,
       7,    1,   88,    2, 0x0a,
       8,    1,   91,    2, 0x0a,
       9,    1,   94,    2, 0x0a,
      10,    1,   97,    2, 0x0a,
      11,    0,  100,    2, 0x0a,
      12,    1,  101,    2, 0x0a,
      13,    1,  104,    2, 0x0a,
      14,    1,  107,    2, 0x0a,
      15,    1,  110,    2, 0x08,
      16,    1,  113,    2, 0x08,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::Double,    6,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::Bool,    6,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::Int,    3,

       0        // eod
};

void MouseDPadSettingsDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MouseDPadSettingsDialog *_t = static_cast<MouseDPadSettingsDialog *>(_o);
        switch (_id) {
        case 0: _t->changeMouseMode((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->changeMouseCurve((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->updateConfigHorizontalSpeed((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->updateConfigVerticalSpeed((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->updateSpringWidth((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->updateSpringHeight((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->updateSensitivity((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 7: _t->updateAccelerationCurvePresetComboBox(); break;
        case 8: _t->updateWheelSpeedHorizontalSpeed((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->updateWheelSpeedVerticalSpeed((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->updateSpringRelativeStatus((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 11: _t->updateReleaseSpringRadius((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 12: _t->updateExtraAccelerationCurve((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject MouseDPadSettingsDialog::staticMetaObject = {
    { &MouseSettingsDialog::staticMetaObject, qt_meta_stringdata_MouseDPadSettingsDialog.data,
      qt_meta_data_MouseDPadSettingsDialog,  qt_static_metacall, 0, 0}
};


const QMetaObject *MouseDPadSettingsDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MouseDPadSettingsDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MouseDPadSettingsDialog.stringdata))
        return static_cast<void*>(const_cast< MouseDPadSettingsDialog*>(this));
    return MouseSettingsDialog::qt_metacast(_clname);
}

int MouseDPadSettingsDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = MouseSettingsDialog::qt_metacall(_c, _id, _a);
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
QT_END_MOC_NAMESPACE
