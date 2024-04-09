/****************************************************************************
** Meta object code from reading C++ file 'selectiontest.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../operations/query/selectiontest.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'selectiontest.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SelectionTest_t {
    QByteArrayData data[14];
    char stringdata0[105];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SelectionTest_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SelectionTest_t qt_meta_stringdata_SelectionTest = {
    {
QT_MOC_LITERAL(0, 0, 13), // "SelectionTest"
QT_MOC_LITERAL(1, 14, 8), // "generate"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 15), // "generateRenamed"
QT_MOC_LITERAL(4, 40, 6), // "equals"
QT_MOC_LITERAL(5, 47, 9), // "notEquals"
QT_MOC_LITERAL(6, 57, 3), // "sum"
QT_MOC_LITERAL(7, 61, 3), // "avg"
QT_MOC_LITERAL(8, 65, 5), // "count"
QT_MOC_LITERAL(9, 71, 3), // "min"
QT_MOC_LITERAL(10, 75, 3), // "max"
QT_MOC_LITERAL(11, 79, 13), // "dateFormatter"
QT_MOC_LITERAL(12, 93, 5), // "lower"
QT_MOC_LITERAL(13, 99, 5) // "upper"

    },
    "SelectionTest\0generate\0\0generateRenamed\0"
    "equals\0notEquals\0sum\0avg\0count\0min\0"
    "max\0dateFormatter\0lower\0upper"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SelectionTest[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   74,    2, 0x08 /* Private */,
       3,    0,   75,    2, 0x08 /* Private */,
       4,    0,   76,    2, 0x08 /* Private */,
       5,    0,   77,    2, 0x08 /* Private */,
       6,    0,   78,    2, 0x08 /* Private */,
       7,    0,   79,    2, 0x08 /* Private */,
       8,    0,   80,    2, 0x08 /* Private */,
       9,    0,   81,    2, 0x08 /* Private */,
      10,    0,   82,    2, 0x08 /* Private */,
      11,    0,   83,    2, 0x08 /* Private */,
      12,    0,   84,    2, 0x08 /* Private */,
      13,    0,   85,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void SelectionTest::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SelectionTest *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->generate(); break;
        case 1: _t->generateRenamed(); break;
        case 2: _t->equals(); break;
        case 3: _t->notEquals(); break;
        case 4: _t->sum(); break;
        case 5: _t->avg(); break;
        case 6: _t->count(); break;
        case 7: _t->min(); break;
        case 8: _t->max(); break;
        case 9: _t->dateFormatter(); break;
        case 10: _t->lower(); break;
        case 11: _t->upper(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject SelectionTest::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_SelectionTest.data,
    qt_meta_data_SelectionTest,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *SelectionTest::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SelectionTest::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SelectionTest.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int SelectionTest::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
