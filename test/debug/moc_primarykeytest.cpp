/****************************************************************************
** Meta object code from reading C++ file 'primarykeytest.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../operations/model/constraint/primarykeytest.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'primarykeytest.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_PrimaryKeyTest_t {
    QByteArrayData data[10];
    char stringdata0[179];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PrimaryKeyTest_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PrimaryKeyTest_t qt_meta_stringdata_PrimaryKeyTest = {
    {
QT_MOC_LITERAL(0, 0, 14), // "PrimaryKeyTest"
QT_MOC_LITERAL(1, 15, 14), // "getSingleField"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 17), // "getMultipleFields"
QT_MOC_LITERAL(4, 49, 15), // "isAutoIncrement"
QT_MOC_LITERAL(5, 65, 18), // "isNotAutoIncrement"
QT_MOC_LITERAL(6, 84, 19), // "generateSingleField"
QT_MOC_LITERAL(7, 104, 32), // "generateSingleFieldAutoIncrement"
QT_MOC_LITERAL(8, 137, 22), // "generateMultipleFields"
QT_MOC_LITERAL(9, 160, 18) // "noFieldsShouldFail"

    },
    "PrimaryKeyTest\0getSingleField\0\0"
    "getMultipleFields\0isAutoIncrement\0"
    "isNotAutoIncrement\0generateSingleField\0"
    "generateSingleFieldAutoIncrement\0"
    "generateMultipleFields\0noFieldsShouldFail"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PrimaryKeyTest[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x08 /* Private */,
       3,    0,   55,    2, 0x08 /* Private */,
       4,    0,   56,    2, 0x08 /* Private */,
       5,    0,   57,    2, 0x08 /* Private */,
       6,    0,   58,    2, 0x08 /* Private */,
       7,    0,   59,    2, 0x08 /* Private */,
       8,    0,   60,    2, 0x08 /* Private */,
       9,    0,   61,    2, 0x08 /* Private */,

 // slots: parameters
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

void PrimaryKeyTest::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PrimaryKeyTest *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->getSingleField(); break;
        case 1: _t->getMultipleFields(); break;
        case 2: _t->isAutoIncrement(); break;
        case 3: _t->isNotAutoIncrement(); break;
        case 4: _t->generateSingleField(); break;
        case 5: _t->generateSingleFieldAutoIncrement(); break;
        case 6: _t->generateMultipleFields(); break;
        case 7: _t->noFieldsShouldFail(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject PrimaryKeyTest::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_PrimaryKeyTest.data,
    qt_meta_data_PrimaryKeyTest,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PrimaryKeyTest::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PrimaryKeyTest::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PrimaryKeyTest.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int PrimaryKeyTest::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
