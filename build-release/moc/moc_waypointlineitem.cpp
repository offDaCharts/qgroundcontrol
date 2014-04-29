/****************************************************************************
** Meta object code from reading C++ file 'waypointlineitem.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../libs/opmapcontrol/src/mapwidget/waypointlineitem.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'waypointlineitem.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_mapcontrol__WaypointLineItem[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      39,   30,   29,   29, 0x0a,
      69,   29,   29,   29, 0x0a,
      86,   29,   29,   29, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_mapcontrol__WaypointLineItem[] = {
    "mapcontrol::WaypointLineItem\0\0waypoint\0"
    "updateWPValues(WayPointItem*)\0"
    "updateWPValues()\0RefreshPos()\0"
};

void mapcontrol::WaypointLineItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        WaypointLineItem *_t = static_cast<WaypointLineItem *>(_o);
        switch (_id) {
        case 0: _t->updateWPValues((*reinterpret_cast< WayPointItem*(*)>(_a[1]))); break;
        case 1: _t->updateWPValues(); break;
        case 2: _t->RefreshPos(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData mapcontrol::WaypointLineItem::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject mapcontrol::WaypointLineItem::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_mapcontrol__WaypointLineItem,
      qt_meta_data_mapcontrol__WaypointLineItem, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &mapcontrol::WaypointLineItem::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *mapcontrol::WaypointLineItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *mapcontrol::WaypointLineItem::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_mapcontrol__WaypointLineItem))
        return static_cast<void*>(const_cast< WaypointLineItem*>(this));
    if (!strcmp(_clname, "QGraphicsLineItem"))
        return static_cast< QGraphicsLineItem*>(const_cast< WaypointLineItem*>(this));
    if (!strcmp(_clname, "com.trolltech.Qt.QGraphicsItem"))
        return static_cast< QGraphicsItem*>(const_cast< WaypointLineItem*>(this));
    return QObject::qt_metacast(_clname);
}

int mapcontrol::WaypointLineItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
