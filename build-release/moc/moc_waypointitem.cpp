/****************************************************************************
** Meta object code from reading C++ file 'waypointitem.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../libs/opmapcontrol/src/mapwidget/waypointitem.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'waypointitem.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_mapcontrol__WayPointItem[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      55,   26,   25,   25, 0x05,
     103,   94,   25,   25, 0x05,

 // slots: signature, parameters, type, tag, flags
     141,  134,   25,   25, 0x0a,
     156,   26,   25,   25, 0x0a,
     208,  192,   25,   25, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_mapcontrol__WayPointItem[] = {
    "mapcontrol::WayPointItem\0\0"
    "oldnumber,newnumber,waypoint\0"
    "WPNumberChanged(int,int,WayPointItem*)\0"
    "waypoint\0WPValuesChanged(WayPointItem*)\0"
    "number\0WPDeleted(int)\0"
    "WPRenumbered(int,int,WayPointItem*)\0"
    "number,waypoint\0WPInserted(int,WayPointItem*)\0"
};

void mapcontrol::WayPointItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        WayPointItem *_t = static_cast<WayPointItem *>(_o);
        switch (_id) {
        case 0: _t->WPNumberChanged((*reinterpret_cast< const int(*)>(_a[1])),(*reinterpret_cast< const int(*)>(_a[2])),(*reinterpret_cast< WayPointItem*(*)>(_a[3]))); break;
        case 1: _t->WPValuesChanged((*reinterpret_cast< WayPointItem*(*)>(_a[1]))); break;
        case 2: _t->WPDeleted((*reinterpret_cast< const int(*)>(_a[1]))); break;
        case 3: _t->WPRenumbered((*reinterpret_cast< const int(*)>(_a[1])),(*reinterpret_cast< const int(*)>(_a[2])),(*reinterpret_cast< WayPointItem*(*)>(_a[3]))); break;
        case 4: _t->WPInserted((*reinterpret_cast< const int(*)>(_a[1])),(*reinterpret_cast< WayPointItem*(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData mapcontrol::WayPointItem::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject mapcontrol::WayPointItem::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_mapcontrol__WayPointItem,
      qt_meta_data_mapcontrol__WayPointItem, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &mapcontrol::WayPointItem::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *mapcontrol::WayPointItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *mapcontrol::WayPointItem::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_mapcontrol__WayPointItem))
        return static_cast<void*>(const_cast< WayPointItem*>(this));
    if (!strcmp(_clname, "QGraphicsItem"))
        return static_cast< QGraphicsItem*>(const_cast< WayPointItem*>(this));
    if (!strcmp(_clname, "com.trolltech.Qt.QGraphicsItem"))
        return static_cast< QGraphicsItem*>(const_cast< WayPointItem*>(this));
    return QObject::qt_metacast(_clname);
}

int mapcontrol::WayPointItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void mapcontrol::WayPointItem::WPNumberChanged(int const & _t1, int const & _t2, WayPointItem * _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void mapcontrol::WayPointItem::WPValuesChanged(WayPointItem * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
