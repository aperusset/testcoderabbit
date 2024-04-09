/****************************************************************************
** Meta object code from reading C++ file 'utilstest.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../utilstest.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'utilstest.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_UtilsTest_t {
    QByteArrayData data[39];
    char stringdata0[1058];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_UtilsTest_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_UtilsTest_t qt_meta_stringdata_UtilsTest = {
    {
QT_MOC_LITERAL(0, 0, 9), // "UtilsTest"
QT_MOC_LITERAL(1, 10, 16), // "formatSQLiteDate"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 14), // "backupFileName"
QT_MOC_LITERAL(4, 43, 11), // "parametrize"
QT_MOC_LITERAL(5, 55, 9), // "dateToDay"
QT_MOC_LITERAL(6, 65, 11), // "dateToMonth"
QT_MOC_LITERAL(7, 77, 10), // "dateToYear"
QT_MOC_LITERAL(8, 88, 4), // "null"
QT_MOC_LITERAL(9, 93, 16), // "qualifyFieldName"
QT_MOC_LITERAL(10, 110, 24), // "containsShouldReturnTrue"
QT_MOC_LITERAL(11, 135, 25), // "containsShouldReturnFalse"
QT_MOC_LITERAL(12, 161, 35), // "joinToStringShouldJoinWithSep..."
QT_MOC_LITERAL(13, 197, 29), // "getOrDefaultShouldReturnValue"
QT_MOC_LITERAL(14, 227, 31), // "getOrDefaultShouldReturnDefault"
QT_MOC_LITERAL(15, 259, 42), // "getOrDefaultShouldReturnDefau..."
QT_MOC_LITERAL(16, 302, 28), // "getOrNullShouldReturnPointer"
QT_MOC_LITERAL(17, 331, 28), // "getOrNullShouldReturnNullptr"
QT_MOC_LITERAL(18, 360, 33), // "getBoolOrDefaultShouldReturnV..."
QT_MOC_LITERAL(19, 394, 35), // "getStringOrDefaultShouldRetur..."
QT_MOC_LITERAL(20, 430, 33), // "getDateOrDefaultShouldReturnV..."
QT_MOC_LITERAL(21, 464, 37), // "getDateTimeOrDefaultShouldRet..."
QT_MOC_LITERAL(22, 502, 33), // "getUIntOrDefaultShouldReturnV..."
QT_MOC_LITERAL(23, 536, 32), // "getIntOrDefaultShouldReturnValue"
QT_MOC_LITERAL(24, 569, 35), // "getDoubleOrDefaultShouldRetur..."
QT_MOC_LITERAL(25, 605, 28), // "validOrNullShouldReturnValue"
QT_MOC_LITERAL(26, 634, 27), // "validOrNullShouldReturnNull"
QT_MOC_LITERAL(27, 662, 29), // "validOrThrowShouldReturnValue"
QT_MOC_LITERAL(28, 692, 23), // "validOrThrowShouldThrow"
QT_MOC_LITERAL(29, 716, 30), // "notBlankOrNullShouldReturnNull"
QT_MOC_LITERAL(30, 747, 38), // "notBlankOrNullShouldReturnTri..."
QT_MOC_LITERAL(31, 786, 26), // "notBlankOrThrowShouldThrow"
QT_MOC_LITERAL(32, 813, 39), // "notBlankOrThrowShouldReturnTr..."
QT_MOC_LITERAL(33, 853, 35), // "validOrNullDateTimeShouldRetu..."
QT_MOC_LITERAL(34, 889, 36), // "validOrNullDateTimeShouldRetu..."
QT_MOC_LITERAL(35, 926, 27), // "validOrThrowDateShouldThrow"
QT_MOC_LITERAL(36, 954, 33), // "validOrThrowDateShouldReturnV..."
QT_MOC_LITERAL(37, 988, 31), // "validOrThrowDateTimeShouldThrow"
QT_MOC_LITERAL(38, 1020, 37) // "validOrThrowDateTimeShouldRet..."

    },
    "UtilsTest\0formatSQLiteDate\0\0backupFileName\0"
    "parametrize\0dateToDay\0dateToMonth\0"
    "dateToYear\0null\0qualifyFieldName\0"
    "containsShouldReturnTrue\0"
    "containsShouldReturnFalse\0"
    "joinToStringShouldJoinWithSeparator\0"
    "getOrDefaultShouldReturnValue\0"
    "getOrDefaultShouldReturnDefault\0"
    "getOrDefaultShouldReturnDefaultIfNotExists\0"
    "getOrNullShouldReturnPointer\0"
    "getOrNullShouldReturnNullptr\0"
    "getBoolOrDefaultShouldReturnValue\0"
    "getStringOrDefaultShouldReturnValue\0"
    "getDateOrDefaultShouldReturnValue\0"
    "getDateTimeOrDefaultShouldReturnValue\0"
    "getUIntOrDefaultShouldReturnValue\0"
    "getIntOrDefaultShouldReturnValue\0"
    "getDoubleOrDefaultShouldReturnValue\0"
    "validOrNullShouldReturnValue\0"
    "validOrNullShouldReturnNull\0"
    "validOrThrowShouldReturnValue\0"
    "validOrThrowShouldThrow\0"
    "notBlankOrNullShouldReturnNull\0"
    "notBlankOrNullShouldReturnTrimmedValue\0"
    "notBlankOrThrowShouldThrow\0"
    "notBlankOrThrowShouldReturnTrimmedValue\0"
    "validOrNullDateTimeShouldReturnNull\0"
    "validOrNullDateTimeShouldReturnValue\0"
    "validOrThrowDateShouldThrow\0"
    "validOrThrowDateShouldReturnValue\0"
    "validOrThrowDateTimeShouldThrow\0"
    "validOrThrowDateTimeShouldReturnValue"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_UtilsTest[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      37,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,  199,    2, 0x08 /* Private */,
       3,    0,  200,    2, 0x08 /* Private */,
       4,    0,  201,    2, 0x08 /* Private */,
       5,    0,  202,    2, 0x08 /* Private */,
       6,    0,  203,    2, 0x08 /* Private */,
       7,    0,  204,    2, 0x08 /* Private */,
       8,    0,  205,    2, 0x08 /* Private */,
       9,    0,  206,    2, 0x08 /* Private */,
      10,    0,  207,    2, 0x08 /* Private */,
      11,    0,  208,    2, 0x08 /* Private */,
      12,    0,  209,    2, 0x08 /* Private */,
      13,    0,  210,    2, 0x08 /* Private */,
      14,    0,  211,    2, 0x08 /* Private */,
      15,    0,  212,    2, 0x08 /* Private */,
      16,    0,  213,    2, 0x08 /* Private */,
      17,    0,  214,    2, 0x08 /* Private */,
      18,    0,  215,    2, 0x08 /* Private */,
      19,    0,  216,    2, 0x08 /* Private */,
      20,    0,  217,    2, 0x08 /* Private */,
      21,    0,  218,    2, 0x08 /* Private */,
      22,    0,  219,    2, 0x08 /* Private */,
      23,    0,  220,    2, 0x08 /* Private */,
      24,    0,  221,    2, 0x08 /* Private */,
      25,    0,  222,    2, 0x08 /* Private */,
      26,    0,  223,    2, 0x08 /* Private */,
      27,    0,  224,    2, 0x08 /* Private */,
      28,    0,  225,    2, 0x08 /* Private */,
      29,    0,  226,    2, 0x08 /* Private */,
      30,    0,  227,    2, 0x08 /* Private */,
      31,    0,  228,    2, 0x08 /* Private */,
      32,    0,  229,    2, 0x08 /* Private */,
      33,    0,  230,    2, 0x08 /* Private */,
      34,    0,  231,    2, 0x08 /* Private */,
      35,    0,  232,    2, 0x08 /* Private */,
      36,    0,  233,    2, 0x08 /* Private */,
      37,    0,  234,    2, 0x08 /* Private */,
      38,    0,  235,    2, 0x08 /* Private */,

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
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void UtilsTest::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<UtilsTest *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->formatSQLiteDate(); break;
        case 1: _t->backupFileName(); break;
        case 2: _t->parametrize(); break;
        case 3: _t->dateToDay(); break;
        case 4: _t->dateToMonth(); break;
        case 5: _t->dateToYear(); break;
        case 6: _t->null(); break;
        case 7: _t->qualifyFieldName(); break;
        case 8: _t->containsShouldReturnTrue(); break;
        case 9: _t->containsShouldReturnFalse(); break;
        case 10: _t->joinToStringShouldJoinWithSeparator(); break;
        case 11: _t->getOrDefaultShouldReturnValue(); break;
        case 12: _t->getOrDefaultShouldReturnDefault(); break;
        case 13: _t->getOrDefaultShouldReturnDefaultIfNotExists(); break;
        case 14: _t->getOrNullShouldReturnPointer(); break;
        case 15: _t->getOrNullShouldReturnNullptr(); break;
        case 16: _t->getBoolOrDefaultShouldReturnValue(); break;
        case 17: _t->getStringOrDefaultShouldReturnValue(); break;
        case 18: _t->getDateOrDefaultShouldReturnValue(); break;
        case 19: _t->getDateTimeOrDefaultShouldReturnValue(); break;
        case 20: _t->getUIntOrDefaultShouldReturnValue(); break;
        case 21: _t->getIntOrDefaultShouldReturnValue(); break;
        case 22: _t->getDoubleOrDefaultShouldReturnValue(); break;
        case 23: _t->validOrNullShouldReturnValue(); break;
        case 24: _t->validOrNullShouldReturnNull(); break;
        case 25: _t->validOrThrowShouldReturnValue(); break;
        case 26: _t->validOrThrowShouldThrow(); break;
        case 27: _t->notBlankOrNullShouldReturnNull(); break;
        case 28: _t->notBlankOrNullShouldReturnTrimmedValue(); break;
        case 29: _t->notBlankOrThrowShouldThrow(); break;
        case 30: _t->notBlankOrThrowShouldReturnTrimmedValue(); break;
        case 31: _t->validOrNullDateTimeShouldReturnNull(); break;
        case 32: _t->validOrNullDateTimeShouldReturnValue(); break;
        case 33: _t->validOrThrowDateShouldThrow(); break;
        case 34: _t->validOrThrowDateShouldReturnValue(); break;
        case 35: _t->validOrThrowDateTimeShouldThrow(); break;
        case 36: _t->validOrThrowDateTimeShouldReturnValue(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject UtilsTest::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_UtilsTest.data,
    qt_meta_data_UtilsTest,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *UtilsTest::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *UtilsTest::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_UtilsTest.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int UtilsTest::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 37)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 37;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 37)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 37;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
