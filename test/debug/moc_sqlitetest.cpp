/****************************************************************************
** Meta object code from reading C++ file 'sqlitetest.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../connectors/sqlitetest.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'sqlitetest.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SQLiteTest_t {
    QByteArrayData data[14];
    char stringdata0[440];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SQLiteTest_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SQLiteTest_t qt_meta_stringdata_SQLiteTest = {
    {
QT_MOC_LITERAL(0, 0, 10), // "SQLiteTest"
QT_MOC_LITERAL(1, 11, 27), // "initShouldFailIfNameIsEmpty"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 32), // "initShouldAddFileExtensionToName"
QT_MOC_LITERAL(4, 73, 45), // "initShouldAddTestPrefixAndFil..."
QT_MOC_LITERAL(5, 119, 28), // "initShouldDeleteDatabaseFile"
QT_MOC_LITERAL(6, 148, 27), // "driverNameShouldBeCompliant"
QT_MOC_LITERAL(7, 176, 40), // "connectShouldFailWithInvalidD..."
QT_MOC_LITERAL(8, 217, 42), // "connectShouldEnableRegexpButN..."
QT_MOC_LITERAL(9, 260, 39), // "connectShouldEnableRegexpAndF..."
QT_MOC_LITERAL(10, 300, 37), // "disconnectShouldNotDeleteData..."
QT_MOC_LITERAL(11, 338, 34), // "disconnectShouldDeleteDatabas..."
QT_MOC_LITERAL(12, 373, 33), // "tablesShouldReturnWithoutSequ..."
QT_MOC_LITERAL(13, 407, 32) // "backupShouldSuccessAndCreateFile"

    },
    "SQLiteTest\0initShouldFailIfNameIsEmpty\0"
    "\0initShouldAddFileExtensionToName\0"
    "initShouldAddTestPrefixAndFileExtensionToName\0"
    "initShouldDeleteDatabaseFile\0"
    "driverNameShouldBeCompliant\0"
    "connectShouldFailWithInvalidDatabaseName\0"
    "connectShouldEnableRegexpButNotForeignKeys\0"
    "connectShouldEnableRegexpAndForeignKeys\0"
    "disconnectShouldNotDeleteDatabaseFile\0"
    "disconnectShouldDeleteDatabaseFile\0"
    "tablesShouldReturnWithoutSequence\0"
    "backupShouldSuccessAndCreateFile"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SQLiteTest[] = {

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

void SQLiteTest::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SQLiteTest *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->initShouldFailIfNameIsEmpty(); break;
        case 1: _t->initShouldAddFileExtensionToName(); break;
        case 2: _t->initShouldAddTestPrefixAndFileExtensionToName(); break;
        case 3: _t->initShouldDeleteDatabaseFile(); break;
        case 4: _t->driverNameShouldBeCompliant(); break;
        case 5: _t->connectShouldFailWithInvalidDatabaseName(); break;
        case 6: _t->connectShouldEnableRegexpButNotForeignKeys(); break;
        case 7: _t->connectShouldEnableRegexpAndForeignKeys(); break;
        case 8: _t->disconnectShouldNotDeleteDatabaseFile(); break;
        case 9: _t->disconnectShouldDeleteDatabaseFile(); break;
        case 10: _t->tablesShouldReturnWithoutSequence(); break;
        case 11: _t->backupShouldSuccessAndCreateFile(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject SQLiteTest::staticMetaObject = { {
    QMetaObject::SuperData::link<MainDatabaseTest::staticMetaObject>(),
    qt_meta_stringdata_SQLiteTest.data,
    qt_meta_data_SQLiteTest,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *SQLiteTest::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SQLiteTest::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SQLiteTest.stringdata0))
        return static_cast<void*>(this);
    return MainDatabaseTest::qt_metacast(_clname);
}

int SQLiteTest::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = MainDatabaseTest::qt_metacall(_c, _id, _a);
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
