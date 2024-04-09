/****************************************************************************
** Meta object code from reading C++ file 'qormlitetest.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../qormlitetest.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qormlitetest.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QORMLiteTest_t {
    QByteArrayData data[12];
    char stringdata0[277];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QORMLiteTest_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QORMLiteTest_t qt_meta_stringdata_QORMLiteTest = {
    {
QT_MOC_LITERAL(0, 0, 12), // "QORMLiteTest"
QT_MOC_LITERAL(1, 13, 30), // "isInitializedShouldReturnFalse"
QT_MOC_LITERAL(2, 44, 0), // ""
QT_MOC_LITERAL(3, 45, 55), // "initializeShouldSuccessAndIsI..."
QT_MOC_LITERAL(4, 101, 43), // "initializeShouldFailIfDatabas..."
QT_MOC_LITERAL(5, 145, 32), // "getShouldFailIfDatabaseNotExists"
QT_MOC_LITERAL(6, 178, 16), // "getShouldSuccess"
QT_MOC_LITERAL(7, 195, 20), // "destroyShouldSuccess"
QT_MOC_LITERAL(8, 216, 23), // "destroyAllShouldSuccess"
QT_MOC_LITERAL(9, 240, 12), // "initTestCase"
QT_MOC_LITERAL(10, 253, 15), // "cleanupTestCase"
QT_MOC_LITERAL(11, 269, 7) // "cleanup"

    },
    "QORMLiteTest\0isInitializedShouldReturnFalse\0"
    "\0initializeShouldSuccessAndIsInitializedShouldReturnTrue\0"
    "initializeShouldFailIfDatabaseAlreadyExists\0"
    "getShouldFailIfDatabaseNotExists\0"
    "getShouldSuccess\0destroyShouldSuccess\0"
    "destroyAllShouldSuccess\0initTestCase\0"
    "cleanupTestCase\0cleanup"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QORMLiteTest[] = {

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

void QORMLiteTest::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QORMLiteTest *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->isInitializedShouldReturnFalse(); break;
        case 1: _t->initializeShouldSuccessAndIsInitializedShouldReturnTrue(); break;
        case 2: _t->initializeShouldFailIfDatabaseAlreadyExists(); break;
        case 3: _t->getShouldFailIfDatabaseNotExists(); break;
        case 4: _t->getShouldSuccess(); break;
        case 5: _t->destroyShouldSuccess(); break;
        case 6: _t->destroyAllShouldSuccess(); break;
        case 7: _t->initTestCase(); break;
        case 8: _t->cleanupTestCase(); break;
        case 9: _t->cleanup(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject QORMLiteTest::staticMetaObject = { {
    QMetaObject::SuperData::link<MainDatabaseTest::staticMetaObject>(),
    qt_meta_stringdata_QORMLiteTest.data,
    qt_meta_data_QORMLiteTest,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *QORMLiteTest::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QORMLiteTest::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QORMLiteTest.stringdata0))
        return static_cast<void*>(this);
    return MainDatabaseTest::qt_metacast(_clname);
}

int QORMLiteTest::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = MainDatabaseTest::qt_metacall(_c, _id, _a);
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
