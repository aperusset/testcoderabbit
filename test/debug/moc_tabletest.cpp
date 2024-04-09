/****************************************************************************
** Meta object code from reading C++ file 'tabletest.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../operations/model/tabletest.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tabletest.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_TableTest_t {
    QByteArrayData data[12];
    char stringdata0[294];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TableTest_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TableTest_t qt_meta_stringdata_TableTest = {
    {
QT_MOC_LITERAL(0, 0, 9), // "TableTest"
QT_MOC_LITERAL(1, 10, 38), // "autoIncrementedPrimaryKeyWith..."
QT_MOC_LITERAL(2, 49, 0), // ""
QT_MOC_LITERAL(3, 50, 35), // "autoIncrementedPrimaryKeyWith..."
QT_MOC_LITERAL(4, 86, 45), // "autoIncrementedPrimaryKeyWith..."
QT_MOC_LITERAL(5, 132, 33), // "primaryKeyWithoutAdditionalFi..."
QT_MOC_LITERAL(6, 166, 30), // "primaryKeyWithAdditionalFields"
QT_MOC_LITERAL(7, 197, 30), // "primaryKeyWithDuplicatedFields"
QT_MOC_LITERAL(8, 228, 16), // "singleForeignKey"
QT_MOC_LITERAL(9, 245, 19), // "multipleForeignKeys"
QT_MOC_LITERAL(10, 265, 12), // "singleUnique"
QT_MOC_LITERAL(11, 278, 15) // "multipleUniques"

    },
    "TableTest\0autoIncrementedPrimaryKeyWithoutFields\0"
    "\0autoIncrementedPrimaryKeyWithFields\0"
    "autoIncrementedPrimaryKeyWithDuplicatedFields\0"
    "primaryKeyWithoutAdditionalFields\0"
    "primaryKeyWithAdditionalFields\0"
    "primaryKeyWithDuplicatedFields\0"
    "singleForeignKey\0multipleForeignKeys\0"
    "singleUnique\0multipleUniques"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TableTest[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   64,    2, 0x08 /* Private */,
       3,    0,   65,    2, 0x08 /* Private */,
       4,    0,   66,    2, 0x08 /* Private */,
       5,    0,   67,    2, 0x08 /* Private */,
       6,    0,   68,    2, 0x08 /* Private */,
       7,    0,   69,    2, 0x08 /* Private */,
       8,    0,   70,    2, 0x08 /* Private */,
       9,    0,   71,    2, 0x08 /* Private */,
      10,    0,   72,    2, 0x08 /* Private */,
      11,    0,   73,    2, 0x08 /* Private */,

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

       0        // eod
};

void TableTest::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TableTest *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->autoIncrementedPrimaryKeyWithoutFields(); break;
        case 1: _t->autoIncrementedPrimaryKeyWithFields(); break;
        case 2: _t->autoIncrementedPrimaryKeyWithDuplicatedFields(); break;
        case 3: _t->primaryKeyWithoutAdditionalFields(); break;
        case 4: _t->primaryKeyWithAdditionalFields(); break;
        case 5: _t->primaryKeyWithDuplicatedFields(); break;
        case 6: _t->singleForeignKey(); break;
        case 7: _t->multipleForeignKeys(); break;
        case 8: _t->singleUnique(); break;
        case 9: _t->multipleUniques(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject TableTest::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_TableTest.data,
    qt_meta_data_TableTest,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *TableTest::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TableTest::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TableTest.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int TableTest::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
