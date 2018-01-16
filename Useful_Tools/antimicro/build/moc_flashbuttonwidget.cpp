/****************************************************************************
** Meta object code from reading C++ file 'flashbuttonwidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/flashbuttonwidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'flashbuttonwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_FlashButtonWidget_t {
    QByteArrayData data[11];
    char stringdata[122];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_FlashButtonWidget_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_FlashButtonWidget_t qt_meta_stringdata_FlashButtonWidget = {
    {
QT_MOC_LITERAL(0, 0, 17),
QT_MOC_LITERAL(1, 18, 7),
QT_MOC_LITERAL(2, 26, 0),
QT_MOC_LITERAL(3, 27, 8),
QT_MOC_LITERAL(4, 36, 12),
QT_MOC_LITERAL(5, 49, 17),
QT_MOC_LITERAL(6, 67, 14),
QT_MOC_LITERAL(7, 82, 13),
QT_MOC_LITERAL(8, 96, 5),
QT_MOC_LITERAL(9, 102, 7),
QT_MOC_LITERAL(10, 110, 10)
    },
    "FlashButtonWidget\0flashed\0\0flashing\0"
    "refreshLabel\0toggleNameDisplay\0"
    "disableFlashes\0enableFlashes\0flash\0"
    "unflash\0isflashing\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FlashButtonWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       1,   58, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   49,    2, 0x06,

 // slots: name, argc, parameters, tag, flags
       4,    0,   52,    2, 0x0a,
       5,    0,   53,    2, 0x0a,
       6,    0,   54,    2, 0x0a,
       7,    0,   55,    2, 0x0a,
       8,    0,   56,    2, 0x09,
       9,    0,   57,    2, 0x09,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
      10, QMetaType::Bool, 0x00095001,

       0        // eod
};

void FlashButtonWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        FlashButtonWidget *_t = static_cast<FlashButtonWidget *>(_o);
        switch (_id) {
        case 0: _t->flashed((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->refreshLabel(); break;
        case 2: _t->toggleNameDisplay(); break;
        case 3: _t->disableFlashes(); break;
        case 4: _t->enableFlashes(); break;
        case 5: _t->flash(); break;
        case 6: _t->unflash(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (FlashButtonWidget::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&FlashButtonWidget::flashed)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject FlashButtonWidget::staticMetaObject = {
    { &QPushButton::staticMetaObject, qt_meta_stringdata_FlashButtonWidget.data,
      qt_meta_data_FlashButtonWidget,  qt_static_metacall, 0, 0}
};


const QMetaObject *FlashButtonWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FlashButtonWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_FlashButtonWidget.stringdata))
        return static_cast<void*>(const_cast< FlashButtonWidget*>(this));
    return QPushButton::qt_metacast(_clname);
}

int FlashButtonWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QPushButton::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = isButtonFlashing(); break;
        }
        _id -= 1;
    } else if (_c == QMetaObject::WriteProperty) {
        _id -= 1;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 1;
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void FlashButtonWidget::flashed(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
