/****************************************************************************
** Meta object code from reading C++ file 'selecttest.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../operations/query/selecttest.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'selecttest.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SelectTest_t {
    QByteArrayData data[18];
    char stringdata0[392];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SelectTest_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SelectTest_t qt_meta_stringdata_SelectTest = {
    {
QT_MOC_LITERAL(0, 0, 10), // "SelectTest"
QT_MOC_LITERAL(1, 11, 9), // "selectAll"
QT_MOC_LITERAL(2, 21, 0), // ""
QT_MOC_LITERAL(3, 22, 14), // "selectOneField"
QT_MOC_LITERAL(4, 37, 20), // "selectMultipleFields"
QT_MOC_LITERAL(5, 58, 18), // "selectAllWithJoins"
QT_MOC_LITERAL(6, 77, 23), // "selectAllWithConditions"
QT_MOC_LITERAL(7, 101, 20), // "selectAllWithGroupBy"
QT_MOC_LITERAL(8, 122, 43), // "selectAllWithoutGroupByWithHa..."
QT_MOC_LITERAL(9, 166, 29), // "selectAllWithGroupByAndHaving"
QT_MOC_LITERAL(10, 196, 19), // "selectAllWithOrders"
QT_MOC_LITERAL(11, 216, 29), // "selectFieldWithOrdersSelected"
QT_MOC_LITERAL(12, 246, 32), // "selectFieldWithOrdersNotSelected"
QT_MOC_LITERAL(13, 279, 18), // "selectAllWithLimit"
QT_MOC_LITERAL(14, 298, 19), // "selectAllWithOffset"
QT_MOC_LITERAL(15, 318, 38), // "selectWithIncompatibleUnionsS..."
QT_MOC_LITERAL(16, 357, 19), // "selectAllWithUnions"
QT_MOC_LITERAL(17, 377, 14) // "lastInsertedId"

    },
    "SelectTest\0selectAll\0\0selectOneField\0"
    "selectMultipleFields\0selectAllWithJoins\0"
    "selectAllWithConditions\0selectAllWithGroupBy\0"
    "selectAllWithoutGroupByWithHavingShouldFail\0"
    "selectAllWithGroupByAndHaving\0"
    "selectAllWithOrders\0selectFieldWithOrdersSelected\0"
    "selectFieldWithOrdersNotSelected\0"
    "selectAllWithLimit\0selectAllWithOffset\0"
    "selectWithIncompatibleUnionsShouldFail\0"
    "selectAllWithUnions\0lastInsertedId"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SelectTest[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   94,    2, 0x08 /* Private */,
       3,    0,   95,    2, 0x08 /* Private */,
       4,    0,   96,    2, 0x08 /* Private */,
       5,    0,   97,    2, 0x08 /* Private */,
       6,    0,   98,    2, 0x08 /* Private */,
       7,    0,   99,    2, 0x08 /* Private */,
       8,    0,  100,    2, 0x08 /* Private */,
       9,    0,  101,    2, 0x08 /* Private */,
      10,    0,  102,    2, 0x08 /* Private */,
      11,    0,  103,    2, 0x08 /* Private */,
      12,    0,  104,    2, 0x08 /* Private */,
      13,    0,  105,    2, 0x08 /* Private */,
      14,    0,  106,    2, 0x08 /* Private */,
      15,    0,  107,    2, 0x08 /* Private */,
      16,    0,  108,    2, 0x08 /* Private */,
      17,    0,  109,    2, 0x08 /* Private */,

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
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void SelectTest::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SelectTest *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->selectAll(); break;
        case 1: _t->selectOneField(); break;
        case 2: _t->selectMultipleFields(); break;
        case 3: _t->selectAllWithJoins(); break;
        case 4: _t->selectAllWithConditions(); break;
        case 5: _t->selectAllWithGroupBy(); break;
        case 6: _t->selectAllWithoutGroupByWithHavingShouldFail(); break;
        case 7: _t->selectAllWithGroupByAndHaving(); break;
        case 8: _t->selectAllWithOrders(); break;
        case 9: _t->selectFieldWithOrdersSelected(); break;
        case 10: _t->selectFieldWithOrdersNotSelected(); break;
        case 11: _t->selectAllWithLimit(); break;
        case 12: _t->selectAllWithOffset(); break;
        case 13: _t->selectWithIncompatibleUnionsShouldFail(); break;
        case 14: _t->selectAllWithUnions(); break;
        case 15: _t->lastInsertedId(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject SelectTest::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_SelectTest.data,
    qt_meta_data_SelectTest,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *SelectTest::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SelectTest::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SelectTest.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int SelectTest::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 16)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 16;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
