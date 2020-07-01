/****************************************************************************
** Meta object code from reading C++ file 'bookseat.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.9)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../bookseat.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'bookseat.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.9. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_BookSeat_t {
    QByteArrayData data[10];
    char stringdata0[195];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_BookSeat_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_BookSeat_t qt_meta_stringdata_BookSeat = {
    {
QT_MOC_LITERAL(0, 0, 8), // "BookSeat"
QT_MOC_LITERAL(1, 9, 15), // "BorrowBooksBack"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 23), // "on_pushButton_4_clicked"
QT_MOC_LITERAL(4, 50, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(5, 72, 23), // "on_pushButton_5_clicked"
QT_MOC_LITERAL(6, 96, 23), // "on_pushButton_3_clicked"
QT_MOC_LITERAL(7, 120, 33), // "on_dateTimeEdit_2_dateTimeCha..."
QT_MOC_LITERAL(8, 154, 8), // "dateTime"
QT_MOC_LITERAL(9, 163, 31) // "on_dateTimeEdit_dateTimeChanged"

    },
    "BookSeat\0BorrowBooksBack\0\0"
    "on_pushButton_4_clicked\0on_pushButton_clicked\0"
    "on_pushButton_5_clicked\0on_pushButton_3_clicked\0"
    "on_dateTimeEdit_2_dateTimeChanged\0"
    "dateTime\0on_dateTimeEdit_dateTimeChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_BookSeat[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   50,    2, 0x08 /* Private */,
       4,    0,   51,    2, 0x08 /* Private */,
       5,    0,   52,    2, 0x08 /* Private */,
       6,    0,   53,    2, 0x08 /* Private */,
       7,    1,   54,    2, 0x08 /* Private */,
       9,    1,   57,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QDateTime,    8,
    QMetaType::Void, QMetaType::QDateTime,    8,

       0        // eod
};

void BookSeat::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<BookSeat *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->BorrowBooksBack(); break;
        case 1: _t->on_pushButton_4_clicked(); break;
        case 2: _t->on_pushButton_clicked(); break;
        case 3: _t->on_pushButton_5_clicked(); break;
        case 4: _t->on_pushButton_3_clicked(); break;
        case 5: _t->on_dateTimeEdit_2_dateTimeChanged((*reinterpret_cast< const QDateTime(*)>(_a[1]))); break;
        case 6: _t->on_dateTimeEdit_dateTimeChanged((*reinterpret_cast< const QDateTime(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (BookSeat::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BookSeat::BorrowBooksBack)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject BookSeat::staticMetaObject = { {
    &QMainWindow::staticMetaObject,
    qt_meta_stringdata_BookSeat.data,
    qt_meta_data_BookSeat,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *BookSeat::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *BookSeat::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_BookSeat.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int BookSeat::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void BookSeat::BorrowBooksBack()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
