/****************************************************************************
** Meta object code from reading C++ file 'nostarahaa.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../nostarahaa.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'nostarahaa.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_nostarahaa_t {
    QByteArrayData data[15];
    char stringdata0[235];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_nostarahaa_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_nostarahaa_t qt_meta_stringdata_nostarahaa = {
    {
QT_MOC_LITERAL(0, 0, 10), // "nostarahaa"
QT_MOC_LITERAL(1, 11, 14), // "sendLoppuSaldo"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 11), // "sendIDtoDLL"
QT_MOC_LITERAL(4, 39, 9), // "sendSumma"
QT_MOC_LITERAL(5, 49, 16), // "laskurinostaslot"
QT_MOC_LITERAL(6, 66, 23), // "on_pushButton_7_clicked"
QT_MOC_LITERAL(7, 90, 14), // "on_oma_clicked"
QT_MOC_LITERAL(8, 105, 24), // "on_kaksikymmenta_clicked"
QT_MOC_LITERAL(9, 130, 24), // "on_neljakymmenta_clicked"
QT_MOC_LITERAL(10, 155, 24), // "on_kuusikymmenta_clicked"
QT_MOC_LITERAL(11, 180, 15), // "on_sata_clicked"
QT_MOC_LITERAL(12, 196, 21), // "on_viisisataa_clicked"
QT_MOC_LITERAL(13, 218, 9), // "saldoSlot"
QT_MOC_LITERAL(14, 228, 6) // "slotID"

    },
    "nostarahaa\0sendLoppuSaldo\0\0sendIDtoDLL\0"
    "sendSumma\0laskurinostaslot\0"
    "on_pushButton_7_clicked\0on_oma_clicked\0"
    "on_kaksikymmenta_clicked\0"
    "on_neljakymmenta_clicked\0"
    "on_kuusikymmenta_clicked\0on_sata_clicked\0"
    "on_viisisataa_clicked\0saldoSlot\0slotID"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_nostarahaa[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   79,    2, 0x06 /* Public */,
       3,    2,   82,    2, 0x06 /* Public */,
       4,    1,   87,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   90,    2, 0x0a /* Public */,
       6,    0,   91,    2, 0x08 /* Private */,
       7,    0,   92,    2, 0x08 /* Private */,
       8,    0,   93,    2, 0x08 /* Private */,
       9,    0,   94,    2, 0x08 /* Private */,
      10,    0,   95,    2, 0x08 /* Private */,
      11,    0,   96,    2, 0x08 /* Private */,
      12,    0,   97,    2, 0x08 /* Private */,
      13,    1,   98,    2, 0x08 /* Private */,
      14,    2,  101,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Double,    2,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    2,    2,
    QMetaType::Void, QMetaType::Double,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    2,    2,

       0        // eod
};

void nostarahaa::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<nostarahaa *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sendLoppuSaldo((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 1: _t->sendIDtoDLL((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 2: _t->sendSumma((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 3: _t->laskurinostaslot(); break;
        case 4: _t->on_pushButton_7_clicked(); break;
        case 5: _t->on_oma_clicked(); break;
        case 6: _t->on_kaksikymmenta_clicked(); break;
        case 7: _t->on_neljakymmenta_clicked(); break;
        case 8: _t->on_kuusikymmenta_clicked(); break;
        case 9: _t->on_sata_clicked(); break;
        case 10: _t->on_viisisataa_clicked(); break;
        case 11: _t->saldoSlot((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 12: _t->slotID((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (nostarahaa::*)(double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&nostarahaa::sendLoppuSaldo)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (nostarahaa::*)(QString , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&nostarahaa::sendIDtoDLL)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (nostarahaa::*)(double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&nostarahaa::sendSumma)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject nostarahaa::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_nostarahaa.data,
    qt_meta_data_nostarahaa,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *nostarahaa::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *nostarahaa::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_nostarahaa.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int nostarahaa::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 13;
    }
    return _id;
}

// SIGNAL 0
void nostarahaa::sendLoppuSaldo(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void nostarahaa::sendIDtoDLL(QString _t1, QString _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void nostarahaa::sendSumma(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
