/****************************************************************************
** Meta object code from reading C++ file 'drawwidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../VisualizerSort/drawwidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'drawwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_DrawWidget_t {
    QByteArrayData data[10];
    char stringdata0[79];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DrawWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DrawWidget_t qt_meta_stringdata_DrawWidget = {
    {
QT_MOC_LITERAL(0, 0, 10), // "DrawWidget"
QT_MOC_LITERAL(1, 11, 10), // "sortIsDone"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 7), // "ms_time"
QT_MOC_LITERAL(4, 31, 10), // "updateSort"
QT_MOC_LITERAL(5, 42, 4), // "init"
QT_MOC_LITERAL(6, 47, 5), // "_mode"
QT_MOC_LITERAL(7, 53, 12), // "stop_process"
QT_MOC_LITERAL(8, 66, 4), // "draw"
QT_MOC_LITERAL(9, 71, 7) // "shuffle"

    },
    "DrawWidget\0sortIsDone\0\0ms_time\0"
    "updateSort\0init\0_mode\0stop_process\0"
    "draw\0shuffle"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DrawWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x06 /* Public */,
       4,    0,   47,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    1,   48,    2, 0x09 /* Protected */,
       7,    0,   51,    2, 0x09 /* Protected */,
       8,    0,   52,    2, 0x0a /* Public */,
       9,    0,   53,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void DrawWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DrawWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sortIsDone((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->updateSort(); break;
        case 2: _t->init((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->stop_process(); break;
        case 4: _t->draw(); break;
        case 5: _t->shuffle(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (DrawWidget::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DrawWidget::sortIsDone)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (DrawWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DrawWidget::updateSort)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject DrawWidget::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_DrawWidget.data,
    qt_meta_data_DrawWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *DrawWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DrawWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DrawWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int DrawWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void DrawWidget::sortIsDone(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void DrawWidget::updateSort()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
