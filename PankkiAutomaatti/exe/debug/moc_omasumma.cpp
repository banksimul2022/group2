/****************************************************************************
** Meta object code from reading C++ file 'omasumma.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../omasumma.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'omasumma.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_omasumma_t {
    QByteArrayData data[10];
    char stringdata0[125];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_omasumma_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_omasumma_t qt_meta_stringdata_omasumma = {
    {
QT_MOC_LITERAL(0, 0, 8), // "omasumma"
QT_MOC_LITERAL(1, 9, 14), // "sendLoppuSaldo"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 11), // "sendIDtoDLL"
QT_MOC_LITERAL(4, 37, 9), // "sendSumma"
QT_MOC_LITERAL(5, 47, 14), // "laskuriomaslot"
QT_MOC_LITERAL(6, 62, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(7, 84, 23), // "on_pushButton_2_clicked"
QT_MOC_LITERAL(8, 108, 6), // "slotID"
QT_MOC_LITERAL(9, 115, 9) // "saldoSlot"

    },
    "omasumma\0sendLoppuSaldo\0\0sendIDtoDLL\0"
    "sendSumma\0laskuriomaslot\0on_pushButton_clicked\0"
    "on_pushButton_2_clicked\0slotID\0saldoSlot"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_omasumma[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   54,    2, 0x06 /* Public */,
       3,    2,   57,    2, 0x06 /* Public */,
       4,    1,   62,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   65,    2, 0x0a /* Public */,
       6,    0,   66,    2, 0x08 /* Private */,
       7,    0,   67,    2, 0x08 /* Private */,
       8,    2,   68,    2, 0x08 /* Private */,
       9,    1,   73,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Double,    2,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    2,    2,
    QMetaType::Void, QMetaType::Double,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    2,    2,
    QMetaType::Void, QMetaType::QString,    2,

       0        // eod
};

void omasumma::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<omasumma *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sendLoppuSaldo((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 1: _t->sendIDtoDLL((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 2: _t->sendSumma((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 3: _t->laskuriomaslot(); break;
        case 4: _t->on_pushButton_clicked(); break;
        case 5: _t->on_pushButton_2_clicked(); break;
        case 6: _t->slotID((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 7: _t->saldoSlot((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (omasumma::*)(double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&omasumma::sendLoppuSaldo)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (omasumma::*)(QString , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&omasumma::sendIDtoDLL)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (omasumma::*)(double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&omasumma::sendSumma)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject omasumma::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_omasumma.data,
    qt_meta_data_omasumma,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *omasumma::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *omasumma::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_omasumma.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int omasumma::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void omasumma::sendLoppuSaldo(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void omasumma::sendIDtoDLL(QString _t1, QString _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void omasumma::sendSumma(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
