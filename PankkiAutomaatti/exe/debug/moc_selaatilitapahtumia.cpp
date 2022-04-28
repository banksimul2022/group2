/****************************************************************************
** Meta object code from reading C++ file 'selaatilitapahtumia.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../selaatilitapahtumia.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'selaatilitapahtumia.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_selaatilitapahtumia_t {
    QByteArrayData data[6];
    char stringdata0[116];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_selaatilitapahtumia_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_selaatilitapahtumia_t qt_meta_stringdata_selaatilitapahtumia = {
    {
QT_MOC_LITERAL(0, 0, 19), // "selaatilitapahtumia"
QT_MOC_LITERAL(1, 20, 15), // "tilitapahtumaid"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 36), // "on_palaamenuuntilitapahtumat_..."
QT_MOC_LITERAL(4, 74, 21), // "on_aikaisempi_clicked"
QT_MOC_LITERAL(5, 96, 19) // "on_seuraava_clicked"

    },
    "selaatilitapahtumia\0tilitapahtumaid\0"
    "\0on_palaamenuuntilitapahtumat_clicked\0"
    "on_aikaisempi_clicked\0on_seuraava_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_selaatilitapahtumia[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   37,    2, 0x08 /* Private */,
       4,    0,   38,    2, 0x08 /* Private */,
       5,    0,   39,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void selaatilitapahtumia::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<selaatilitapahtumia *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->tilitapahtumaid((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->on_palaamenuuntilitapahtumat_clicked(); break;
        case 2: _t->on_aikaisempi_clicked(); break;
        case 3: _t->on_seuraava_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (selaatilitapahtumia::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&selaatilitapahtumia::tilitapahtumaid)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject selaatilitapahtumia::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_selaatilitapahtumia.data,
    qt_meta_data_selaatilitapahtumia,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *selaatilitapahtumia::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *selaatilitapahtumia::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_selaatilitapahtumia.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int selaatilitapahtumia::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void selaatilitapahtumia::tilitapahtumaid(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
