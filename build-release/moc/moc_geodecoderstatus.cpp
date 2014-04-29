/****************************************************************************
** Meta object code from reading C++ file 'geodecoderstatus.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../libs/opmapcontrol/src/core/geodecoderstatus.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'geodecoderstatus.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_core__GeoCoderStatusCode[] = {

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
      25, 0x0,   11,   18,

 // enum data: key, value
      31, uint(core::GeoCoderStatusCode::Unknow),
      38, uint(core::GeoCoderStatusCode::G_GEO_SUCCESS),
      52, uint(core::GeoCoderStatusCode::G_GEO_BAD_REQUEST),
      70, uint(core::GeoCoderStatusCode::G_GEO_SERVER_ERROR),
      89, uint(core::GeoCoderStatusCode::G_GEO_MISSING_QUERY),
     109, uint(core::GeoCoderStatusCode::G_GEO_MISSING_ADDRESS),
     131, uint(core::GeoCoderStatusCode::G_GEO_UNKNOWN_ADDRESS),
     153, uint(core::GeoCoderStatusCode::G_GEO_UNAVAILABLE_ADDRESS),
     179, uint(core::GeoCoderStatusCode::G_GEO_UNKNOWN_DIRECTIONS),
     204, uint(core::GeoCoderStatusCode::G_GEO_BAD_KEY),
     218, uint(core::GeoCoderStatusCode::G_GEO_TOO_MANY_QUERIES),

       0        // eod
};

static const char qt_meta_stringdata_core__GeoCoderStatusCode[] = {
    "core::GeoCoderStatusCode\0Types\0Unknow\0"
    "G_GEO_SUCCESS\0G_GEO_BAD_REQUEST\0"
    "G_GEO_SERVER_ERROR\0G_GEO_MISSING_QUERY\0"
    "G_GEO_MISSING_ADDRESS\0G_GEO_UNKNOWN_ADDRESS\0"
    "G_GEO_UNAVAILABLE_ADDRESS\0"
    "G_GEO_UNKNOWN_DIRECTIONS\0G_GEO_BAD_KEY\0"
    "G_GEO_TOO_MANY_QUERIES\0"
};

void core::GeoCoderStatusCode::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData core::GeoCoderStatusCode::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject core::GeoCoderStatusCode::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_core__GeoCoderStatusCode,
      qt_meta_data_core__GeoCoderStatusCode, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &core::GeoCoderStatusCode::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *core::GeoCoderStatusCode::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *core::GeoCoderStatusCode::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_core__GeoCoderStatusCode))
        return static_cast<void*>(const_cast< GeoCoderStatusCode*>(this));
    return QObject::qt_metacast(_clname);
}

int core::GeoCoderStatusCode::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE
