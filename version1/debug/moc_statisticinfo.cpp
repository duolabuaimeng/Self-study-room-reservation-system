/****************************************************************************
** Meta object code from reading C++ file 'statisticinfo.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.9)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../statisticinfo.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'statisticinfo.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.9. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_StatisticInfo_t {
    QByteArrayData data[8];
    char stringdata0[147];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_StatisticInfo_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_StatisticInfo_t qt_meta_stringdata_StatisticInfo = {
    {
QT_MOC_LITERAL(0, 0, 13), // "StatisticInfo"
QT_MOC_LITERAL(1, 14, 17), // "StatisticInfoBack"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 23), // "on_pushButton_4_clicked"
QT_MOC_LITERAL(4, 57, 25), // "on_department_Btn_clicked"
QT_MOC_LITERAL(5, 83, 20), // "on_class_Btn_clicked"
QT_MOC_LITERAL(6, 104, 18), // "on_sex_Btn_clicked"
QT_MOC_LITERAL(7, 123, 23) // "on_favorite_Btn_clicked"

    },
    "StatisticInfo\0StatisticInfoBack\0\0"
    "on_pushButton_4_clicked\0"
    "on_department_Btn_clicked\0"
    "on_class_Btn_clicked\0on_sex_Btn_clicked\0"
    "on_favorite_Btn_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_StatisticInfo[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   45,    2, 0x08 /* Private */,
       4,    0,   46,    2, 0x08 /* Private */,
       5,    0,   47,    2, 0x08 /* Private */,
       6,    0,   48,    2, 0x08 /* Private */,
       7,    0,   49,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void StatisticInfo::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<StatisticInfo *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->StatisticInfoBack(); break;
        case 1: _t->on_pushButton_4_clicked(); break;
        case 2: _t->on_department_Btn_clicked(); break;
        case 3: _t->on_class_Btn_clicked(); break;
        case 4: _t->on_sex_Btn_clicked(); break;
        case 5: _t->on_favorite_Btn_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (StatisticInfo::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StatisticInfo::StatisticInfoBack)) {
                *result = 0;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject StatisticInfo::staticMetaObject = { {
    &QMainWindow::staticMetaObject,
    qt_meta_stringdata_StatisticInfo.data,
    qt_meta_data_StatisticInfo,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *StatisticInfo::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *StatisticInfo::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_StatisticInfo.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int StatisticInfo::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
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
void StatisticInfo::StatisticInfoBack()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
