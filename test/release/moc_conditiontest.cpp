/****************************************************************************
** Meta object code from reading C++ file 'conditiontest.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../operations/query/conditiontest.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'conditiontest.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ConditionTest_t {
    QByteArrayData data[48];
    char stringdata0[920];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ConditionTest_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ConditionTest_t qt_meta_stringdata_ConditionTest = {
    {
QT_MOC_LITERAL(0, 0, 13), // "ConditionTest"
QT_MOC_LITERAL(1, 14, 25), // "withoutOperatorShouldFail"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 46), // "withoutLeftOperandAndNestedCo..."
QT_MOC_LITERAL(4, 88, 31), // "parameterShouldReturnRightField"
QT_MOC_LITERAL(5, 120, 6), // "isNull"
QT_MOC_LITERAL(6, 127, 9), // "isNotNull"
QT_MOC_LITERAL(7, 137, 4), // "like"
QT_MOC_LITERAL(8, 142, 11), // "equalsField"
QT_MOC_LITERAL(9, 154, 12), // "equalsFields"
QT_MOC_LITERAL(10, 167, 15), // "equalsSelection"
QT_MOC_LITERAL(11, 183, 16), // "equalsSelections"
QT_MOC_LITERAL(12, 200, 14), // "notEqualsField"
QT_MOC_LITERAL(13, 215, 15), // "notEqualsFields"
QT_MOC_LITERAL(14, 231, 18), // "notEqualsSelection"
QT_MOC_LITERAL(15, 250, 19), // "notEqualsSelections"
QT_MOC_LITERAL(16, 270, 12), // "greaterField"
QT_MOC_LITERAL(17, 283, 13), // "greaterFields"
QT_MOC_LITERAL(18, 297, 16), // "greaterSelection"
QT_MOC_LITERAL(19, 314, 17), // "greaterSelections"
QT_MOC_LITERAL(20, 332, 20), // "greaterOrEqualsField"
QT_MOC_LITERAL(21, 353, 21), // "greaterOrEqualsFields"
QT_MOC_LITERAL(22, 375, 24), // "greaterOrEqualsSelection"
QT_MOC_LITERAL(23, 400, 25), // "greaterOrEqualsSelections"
QT_MOC_LITERAL(24, 426, 12), // "smallerField"
QT_MOC_LITERAL(25, 439, 13), // "smallerFields"
QT_MOC_LITERAL(26, 453, 16), // "smallerSelection"
QT_MOC_LITERAL(27, 470, 17), // "smallerSelections"
QT_MOC_LITERAL(28, 488, 20), // "smallerOrEqualsField"
QT_MOC_LITERAL(29, 509, 21), // "smallerOrEqualsFields"
QT_MOC_LITERAL(30, 531, 24), // "smallerOrEqualsSelection"
QT_MOC_LITERAL(31, 556, 25), // "smallerOrEqualsSelections"
QT_MOC_LITERAL(32, 582, 12), // "inWithSelect"
QT_MOC_LITERAL(33, 595, 15), // "notInWithSelect"
QT_MOC_LITERAL(34, 611, 29), // "inWithEmptyIntegersShouldFail"
QT_MOC_LITERAL(35, 641, 28), // "inWithEmptyStringsShouldFail"
QT_MOC_LITERAL(36, 670, 14), // "inWithIntegers"
QT_MOC_LITERAL(37, 685, 17), // "notInWithIntegers"
QT_MOC_LITERAL(38, 703, 13), // "inWithStrings"
QT_MOC_LITERAL(39, 717, 16), // "notInWithStrings"
QT_MOC_LITERAL(40, 734, 28), // "andSingleConditionShouldFail"
QT_MOC_LITERAL(41, 763, 21), // "andMultipleConditions"
QT_MOC_LITERAL(42, 785, 27), // "orSingleConditionShouldFail"
QT_MOC_LITERAL(43, 813, 19), // "orMultipleCondition"
QT_MOC_LITERAL(44, 833, 18), // "notSingleCondition"
QT_MOC_LITERAL(45, 852, 20), // "notMultipleCondition"
QT_MOC_LITERAL(46, 873, 21), // "recursiveParametrized"
QT_MOC_LITERAL(47, 895, 24) // "recursiveNotParametrized"

    },
    "ConditionTest\0withoutOperatorShouldFail\0"
    "\0withoutLeftOperandAndNestedConditionShouldFail\0"
    "parameterShouldReturnRightField\0isNull\0"
    "isNotNull\0like\0equalsField\0equalsFields\0"
    "equalsSelection\0equalsSelections\0"
    "notEqualsField\0notEqualsFields\0"
    "notEqualsSelection\0notEqualsSelections\0"
    "greaterField\0greaterFields\0greaterSelection\0"
    "greaterSelections\0greaterOrEqualsField\0"
    "greaterOrEqualsFields\0greaterOrEqualsSelection\0"
    "greaterOrEqualsSelections\0smallerField\0"
    "smallerFields\0smallerSelection\0"
    "smallerSelections\0smallerOrEqualsField\0"
    "smallerOrEqualsFields\0smallerOrEqualsSelection\0"
    "smallerOrEqualsSelections\0inWithSelect\0"
    "notInWithSelect\0inWithEmptyIntegersShouldFail\0"
    "inWithEmptyStringsShouldFail\0"
    "inWithIntegers\0notInWithIntegers\0"
    "inWithStrings\0notInWithStrings\0"
    "andSingleConditionShouldFail\0"
    "andMultipleConditions\0orSingleConditionShouldFail\0"
    "orMultipleCondition\0notSingleCondition\0"
    "notMultipleCondition\0recursiveParametrized\0"
    "recursiveNotParametrized"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ConditionTest[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      46,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,  244,    2, 0x08 /* Private */,
       3,    0,  245,    2, 0x08 /* Private */,
       4,    0,  246,    2, 0x08 /* Private */,
       5,    0,  247,    2, 0x08 /* Private */,
       6,    0,  248,    2, 0x08 /* Private */,
       7,    0,  249,    2, 0x08 /* Private */,
       8,    0,  250,    2, 0x08 /* Private */,
       9,    0,  251,    2, 0x08 /* Private */,
      10,    0,  252,    2, 0x08 /* Private */,
      11,    0,  253,    2, 0x08 /* Private */,
      12,    0,  254,    2, 0x08 /* Private */,
      13,    0,  255,    2, 0x08 /* Private */,
      14,    0,  256,    2, 0x08 /* Private */,
      15,    0,  257,    2, 0x08 /* Private */,
      16,    0,  258,    2, 0x08 /* Private */,
      17,    0,  259,    2, 0x08 /* Private */,
      18,    0,  260,    2, 0x08 /* Private */,
      19,    0,  261,    2, 0x08 /* Private */,
      20,    0,  262,    2, 0x08 /* Private */,
      21,    0,  263,    2, 0x08 /* Private */,
      22,    0,  264,    2, 0x08 /* Private */,
      23,    0,  265,    2, 0x08 /* Private */,
      24,    0,  266,    2, 0x08 /* Private */,
      25,    0,  267,    2, 0x08 /* Private */,
      26,    0,  268,    2, 0x08 /* Private */,
      27,    0,  269,    2, 0x08 /* Private */,
      28,    0,  270,    2, 0x08 /* Private */,
      29,    0,  271,    2, 0x08 /* Private */,
      30,    0,  272,    2, 0x08 /* Private */,
      31,    0,  273,    2, 0x08 /* Private */,
      32,    0,  274,    2, 0x08 /* Private */,
      33,    0,  275,    2, 0x08 /* Private */,
      34,    0,  276,    2, 0x08 /* Private */,
      35,    0,  277,    2, 0x08 /* Private */,
      36,    0,  278,    2, 0x08 /* Private */,
      37,    0,  279,    2, 0x08 /* Private */,
      38,    0,  280,    2, 0x08 /* Private */,
      39,    0,  281,    2, 0x08 /* Private */,
      40,    0,  282,    2, 0x08 /* Private */,
      41,    0,  283,    2, 0x08 /* Private */,
      42,    0,  284,    2, 0x08 /* Private */,
      43,    0,  285,    2, 0x08 /* Private */,
      44,    0,  286,    2, 0x08 /* Private */,
      45,    0,  287,    2, 0x08 /* Private */,
      46,    0,  288,    2, 0x08 /* Private */,
      47,    0,  289,    2, 0x08 /* Private */,

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

void ConditionTest::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ConditionTest *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->withoutOperatorShouldFail(); break;
        case 1: _t->withoutLeftOperandAndNestedConditionShouldFail(); break;
        case 2: _t->parameterShouldReturnRightField(); break;
        case 3: _t->isNull(); break;
        case 4: _t->isNotNull(); break;
        case 5: _t->like(); break;
        case 6: _t->equalsField(); break;
        case 7: _t->equalsFields(); break;
        case 8: _t->equalsSelection(); break;
        case 9: _t->equalsSelections(); break;
        case 10: _t->notEqualsField(); break;
        case 11: _t->notEqualsFields(); break;
        case 12: _t->notEqualsSelection(); break;
        case 13: _t->notEqualsSelections(); break;
        case 14: _t->greaterField(); break;
        case 15: _t->greaterFields(); break;
        case 16: _t->greaterSelection(); break;
        case 17: _t->greaterSelections(); break;
        case 18: _t->greaterOrEqualsField(); break;
        case 19: _t->greaterOrEqualsFields(); break;
        case 20: _t->greaterOrEqualsSelection(); break;
        case 21: _t->greaterOrEqualsSelections(); break;
        case 22: _t->smallerField(); break;
        case 23: _t->smallerFields(); break;
        case 24: _t->smallerSelection(); break;
        case 25: _t->smallerSelections(); break;
        case 26: _t->smallerOrEqualsField(); break;
        case 27: _t->smallerOrEqualsFields(); break;
        case 28: _t->smallerOrEqualsSelection(); break;
        case 29: _t->smallerOrEqualsSelections(); break;
        case 30: _t->inWithSelect(); break;
        case 31: _t->notInWithSelect(); break;
        case 32: _t->inWithEmptyIntegersShouldFail(); break;
        case 33: _t->inWithEmptyStringsShouldFail(); break;
        case 34: _t->inWithIntegers(); break;
        case 35: _t->notInWithIntegers(); break;
        case 36: _t->inWithStrings(); break;
        case 37: _t->notInWithStrings(); break;
        case 38: _t->andSingleConditionShouldFail(); break;
        case 39: _t->andMultipleConditions(); break;
        case 40: _t->orSingleConditionShouldFail(); break;
        case 41: _t->orMultipleCondition(); break;
        case 42: _t->notSingleCondition(); break;
        case 43: _t->notMultipleCondition(); break;
        case 44: _t->recursiveParametrized(); break;
        case 45: _t->recursiveNotParametrized(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject ConditionTest::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_ConditionTest.data,
    qt_meta_data_ConditionTest,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ConditionTest::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ConditionTest::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ConditionTest.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int ConditionTest::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 46)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 46;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 46)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 46;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
