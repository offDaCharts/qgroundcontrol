/****************************************************************************
** Meta object code from reading C++ file 'accessmode.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../libs/opmapcontrol/src/core/accessmode.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'accessmode.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_core__AccessMode[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       1,   14, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // enums: name, flags, count, data
      17, 0x0,    3,   18,

 // enum data: key, value
      23, uint(core::AccessMode::ServerOnly),
      34, uint(core::AccessMode::ServerAndCache),
      49, uint(core::AccessMode::CacheOnly),

       0        // eod
};

static const char qt_meta_stringdata_core__AccessMode[] = {
    "core::AccessMode\0Types\0ServerOnly\0"
    "ServerAndCache\0CacheOnly\0"
};

void core::AccessMode::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData core::AccessMode::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject core::AccessMode::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_core__AccessMode,
      qt_meta_data_core__AccessMode, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &core::AccessMode::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *core::AccessMode::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *core::AccessMode::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_core__AccessMode))
        return static_cast<void*>(const_cast< AccessMode*>(this));
    return QObject::qt_metacast(_clname);
}

int core::AccessMode::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE