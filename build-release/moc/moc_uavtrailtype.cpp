/****************************************************************************
** Meta object code from reading C++ file 'uavtrailtype.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../libs/opmapcontrol/src/mapwidget/uavtrailtype.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'uavtrailtype.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_mapcontrol__UAVTrailType[] = {

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
      25, 0x0,    3,   18,

 // enum data: key, value
      31, uint(mapcontrol::UAVTrailType::NoTrail),
      39, uint(mapcontrol::UAVTrailType::ByTimeElapsed),
      53, uint(mapcontrol::UAVTrailType::ByDistance),

       0        // eod
};

static const char qt_meta_stringdata_mapcontrol__UAVTrailType[] = {
    "mapcontrol::UAVTrailType\0Types\0NoTrail\0"
    "ByTimeElapsed\0ByDistance\0"
};

void mapcontrol::UAVTrailType::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData mapcontrol::UAVTrailType::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject mapcontrol::UAVTrailType::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_mapcontrol__UAVTrailType,
      qt_meta_data_mapcontrol__UAVTrailType, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &mapcontrol::UAVTrailType::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *mapcontrol::UAVTrailType::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *mapcontrol::UAVTrailType::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_mapcontrol__UAVTrailType))
        return static_cast<void*>(const_cast< UAVTrailType*>(this));
    return QObject::qt_metacast(_clname);
}

int mapcontrol::UAVTrailType::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE
