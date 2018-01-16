/****************************************************************************
** Meta object code from reading C++ file 'axisvaluebox.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/axisvaluebox.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'axisvaluebox.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_AxisValueBox_t {
    QByteArrayData data[10];
    char stringdata[91];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_AxisValueBox_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_AxisValueBox_t qt_meta_stringdata_AxisValueBox = {
    {
QT_MOC_LITERAL(0, 0, 12),
QT_MOC_LITERAL(1, 13, 11),
QT_MOC_LITERAL(2, 25, 0),
QT_MOC_LITERAL(3, 26, 8),
QT_MOC_LITERAL(4, 35, 8),
QT_MOC_LITERAL(5, 44, 5),
QT_MOC_LITERAL(6, 50, 11),
QT_MOC_LITERAL(7, 62, 8),
QT_MOC_LITERAL(8, 71, 10),
QT_MOC_LITERAL(9, 82, 7)
    },
    "AxisValueBox\0setThrottle\0\0throttle\0"
    "setValue\0value\0setDeadZone\0deadZone\0"
    "setMaxZone\0maxZone\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AxisValueBox[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x0a,
       4,    1,   37,    2, 0x0a,
       6,    1,   40,    2, 0x0a,
       8,    1,   43,    2, 0x0a,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, QMetaType::Int,    9,

       0        // eod
};

void AxisValueBox::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        AxisValueBox *_t = static_cast<AxisValueBox *>(_o);
        switch (_id) {
        case 0: _t->setThrottle((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->setValue((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->setDeadZone((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->setMaxZone((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject AxisValueBox::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_AxisValueBox.data,
      qt_meta_data_AxisValueBox,  qt_static_metacall, 0, 0}
};


const QMetaObject *AxisValueBox::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AxisValueBox::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_AxisValueBox.stringdata))
        return static_cast<void*>(const_cast< AxisValueBox*>(this));
    return QWidget::qt_metacast(_clname);
}

int AxisValueBox::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
