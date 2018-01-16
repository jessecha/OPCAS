/****************************************************************************
** Meta object code from reading C++ file 'mousebuttonsettingsdialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/mousedialog/mousebuttonsettingsdialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mousebuttonsettingsdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_MouseButtonSettingsDialog_t {
    QByteArrayData data[13];
    char stringdata[249];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_MouseButtonSettingsDialog_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_MouseButtonSettingsDialog_t qt_meta_stringdata_MouseButtonSettingsDialog = {
    {
QT_MOC_LITERAL(0, 0, 25),
QT_MOC_LITERAL(1, 26, 15),
QT_MOC_LITERAL(2, 42, 0),
QT_MOC_LITERAL(3, 43, 5),
QT_MOC_LITERAL(4, 49, 16),
QT_MOC_LITERAL(5, 66, 27),
QT_MOC_LITERAL(6, 94, 5),
QT_MOC_LITERAL(7, 100, 25),
QT_MOC_LITERAL(8, 126, 17),
QT_MOC_LITERAL(9, 144, 18),
QT_MOC_LITERAL(10, 163, 17),
QT_MOC_LITERAL(11, 181, 37),
QT_MOC_LITERAL(12, 219, 28)
    },
    "MouseButtonSettingsDialog\0changeMouseMode\0"
    "\0index\0changeMouseCurve\0"
    "updateConfigHorizontalSpeed\0value\0"
    "updateConfigVerticalSpeed\0updateSpringWidth\0"
    "updateSpringHeight\0updateSensitivity\0"
    "updateAccelerationCurvePresetComboBox\0"
    "updateExtraAccelerationCurve\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MouseButtonSettingsDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   59,    2, 0x0a,
       4,    1,   62,    2, 0x0a,
       5,    1,   65,    2, 0x0a,
       7,    1,   68,    2, 0x0a,
       8,    1,   71,    2, 0x0a,
       9,    1,   74,    2, 0x0a,
      10,    1,   77,    2, 0x0a,
      11,    0,   80,    2, 0x0a,
      12,    1,   81,    2, 0x08,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::Double,    6,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    3,

       0        // eod
};

void MouseButtonSettingsDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MouseButtonSettingsDialog *_t = static_cast<MouseButtonSettingsDialog *>(_o);
        switch (_id) {
        case 0: _t->changeMouseMode((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->changeMouseCurve((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->updateConfigHorizontalSpeed((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->updateConfigVerticalSpeed((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->updateSpringWidth((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->updateSpringHeight((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->updateSensitivity((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 7: _t->updateAccelerationCurvePresetComboBox(); break;
        case 8: _t->updateExtraAccelerationCurve((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject MouseButtonSettingsDialog::staticMetaObject = {
    { &MouseSettingsDialog::staticMetaObject, qt_meta_stringdata_MouseButtonSettingsDialog.data,
      qt_meta_data_MouseButtonSettingsDialog,  qt_static_metacall, 0, 0}
};


const QMetaObject *MouseButtonSettingsDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MouseButtonSettingsDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MouseButtonSettingsDialog.stringdata))
        return static_cast<void*>(const_cast< MouseButtonSettingsDialog*>(this));
    return MouseSettingsDialog::qt_metacast(_clname);
}

int MouseButtonSettingsDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = MouseSettingsDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
