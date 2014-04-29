/****************************************************************************
** Meta object code from reading C++ file 'opmapwidget.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../libs/opmapcontrol/src/mapwidget/opmapwidget.h"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'opmapwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_mapcontrol__OPMapWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      22,   14, // methods
       4,  124, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      17,       // signalCount

 // signals: signature, parameters, type, tag, flags
      42,   25,   24,   24, 0x05,
      84,   76,   24,   24, 0x05,
     130,  101,   24,   24, 0x05,
     178,  169,   24,   24, 0x05,
     209,  169,   24,   24, 0x05,
     250,  234,   24,   24, 0x05,
     287,  280,   24,   24, 0x05,
     326,  302,   24,   24, 0x05,
     373,  364,   24,   24, 0x05,
     423,  417,   24,   24, 0x05,
     472,   24,   24,   24, 0x05,
     493,   24,   24,   24, 0x05,
     511,   24,   24,   24, 0x05,
     523,   24,   24,   24, 0x05,
     547,  542,   24,   24, 0x05,
     589,  580,   24,   24, 0x05,
     623,  280,   24,   24, 0x05,

 // slots: signature, parameters, type, tag, flags
     647,   24,   24,   24, 0x08,
     661,   24,   24,   24, 0x0a,
     676,  670,   24,   24, 0x0a,
     692,  670,   24,   24, 0x0a,
     705,   24,   24,   24, 0x0a,

 // properties: name, type, flags
     730,  726, 0x02095003,
     743,  738, 0x01095003,
     768,  761, 0x06095003,
     779,  773, ((uint)QMetaType::QReal << 24) | 0x00095003,

 // enums: name, flags, count, data

 // enum data: key, value

       0        // eod
};

static const char qt_meta_stringdata_mapcontrol__OPMapWidget[] = {
    "mapcontrol::OPMapWidget\0\0zoomt,zoom,zoomd\0"
    "zoomChanged(double,double,double)\0"
    "newZoom\0zoomChanged(int)\0"
    "oldnumber,newnumber,waypoint\0"
    "WPNumberChanged(int,int,WayPointItem*)\0"
    "waypoint\0WPValuesChanged(WayPointItem*)\0"
    "WPReached(WayPointItem*)\0number,waypoint\0"
    "WPInserted(int,WayPointItem*)\0number\0"
    "WPDeleted(int)\0waypointnumber,waypoint\0"
    "UAVReachedWayPoint(int,WayPointItem*)\0"
    "position\0UAVLeftSafetyBouble(internals::PointLatLng)\0"
    "point\0OnCurrentPositionChanged(internals::PointLatLng)\0"
    "OnTileLoadComplete()\0OnTileLoadStart()\0"
    "OnMapDrag()\0OnMapZoomChanged()\0type\0"
    "OnMapTypeChanged(MapType::Types)\0"
    "zoom,pos\0OnEmptyTileError(int,core::Point)\0"
    "OnTilesStillToLoad(int)\0diagRefresh()\0"
    "RipMap()\0value\0SetZoom(double)\0"
    "SetZoom(int)\0emitMapZoomChanged()\0int\0"
    "MinZoom\0bool\0ShowTileGridLines\0double\0"
    "Zoom\0qreal\0Rotate\0"
};

void mapcontrol::OPMapWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        OPMapWidget *_t = static_cast<OPMapWidget *>(_o);
        switch (_id) {
        case 0: _t->zoomChanged((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3]))); break;
        case 1: _t->zoomChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->WPNumberChanged((*reinterpret_cast< const int(*)>(_a[1])),(*reinterpret_cast< const int(*)>(_a[2])),(*reinterpret_cast< WayPointItem*(*)>(_a[3]))); break;
        case 3: _t->WPValuesChanged((*reinterpret_cast< WayPointItem*(*)>(_a[1]))); break;
        case 4: _t->WPReached((*reinterpret_cast< WayPointItem*(*)>(_a[1]))); break;
        case 5: _t->WPInserted((*reinterpret_cast< const int(*)>(_a[1])),(*reinterpret_cast< WayPointItem*(*)>(_a[2]))); break;
        case 6: _t->WPDeleted((*reinterpret_cast< const int(*)>(_a[1]))); break;
        case 7: _t->UAVReachedWayPoint((*reinterpret_cast< const int(*)>(_a[1])),(*reinterpret_cast< WayPointItem*(*)>(_a[2]))); break;
        case 8: _t->UAVLeftSafetyBouble((*reinterpret_cast< const internals::PointLatLng(*)>(_a[1]))); break;
        case 9: _t->OnCurrentPositionChanged((*reinterpret_cast< internals::PointLatLng(*)>(_a[1]))); break;
        case 10: _t->OnTileLoadComplete(); break;
        case 11: _t->OnTileLoadStart(); break;
        case 12: _t->OnMapDrag(); break;
        case 13: _t->OnMapZoomChanged(); break;
        case 14: _t->OnMapTypeChanged((*reinterpret_cast< MapType::Types(*)>(_a[1]))); break;
        case 15: _t->OnEmptyTileError((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< core::Point(*)>(_a[2]))); break;
        case 16: _t->OnTilesStillToLoad((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 17: _t->diagRefresh(); break;
        case 18: _t->RipMap(); break;
        case 19: _t->SetZoom((*reinterpret_cast< const double(*)>(_a[1]))); break;
        case 20: _t->SetZoom((*reinterpret_cast< const int(*)>(_a[1]))); break;
        case 21: _t->emitMapZoomChanged(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData mapcontrol::OPMapWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject mapcontrol::OPMapWidget::staticMetaObject = {
    { &QGraphicsView::staticMetaObject, qt_meta_stringdata_mapcontrol__OPMapWidget,
      qt_meta_data_mapcontrol__OPMapWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &mapcontrol::OPMapWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *mapcontrol::OPMapWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *mapcontrol::OPMapWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_mapcontrol__OPMapWidget))
        return static_cast<void*>(const_cast< OPMapWidget*>(this));
    return QGraphicsView::qt_metacast(_clname);
}

int mapcontrol::OPMapWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGraphicsView::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 22)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 22;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = MinZoom(); break;
        case 1: *reinterpret_cast< bool*>(_v) = ShowTileGridLines(); break;
        case 2: *reinterpret_cast< double*>(_v) = ZoomTotal(); break;
        case 3: *reinterpret_cast< qreal*>(_v) = Rotate(); break;
        }
        _id -= 4;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: SetMinZoom(*reinterpret_cast< int*>(_v)); break;
        case 1: SetShowTileGridLines(*reinterpret_cast< bool*>(_v)); break;
        case 2: SetZoom(*reinterpret_cast< double*>(_v)); break;
        case 3: SetRotate(*reinterpret_cast< qreal*>(_v)); break;
        }
        _id -= 4;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 4;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void mapcontrol::OPMapWidget::zoomChanged(double _t1, double _t2, double _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void mapcontrol::OPMapWidget::zoomChanged(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void mapcontrol::OPMapWidget::WPNumberChanged(int const & _t1, int const & _t2, WayPointItem * _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void mapcontrol::OPMapWidget::WPValuesChanged(WayPointItem * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void mapcontrol::OPMapWidget::WPReached(WayPointItem * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void mapcontrol::OPMapWidget::WPInserted(int const & _t1, WayPointItem * _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void mapcontrol::OPMapWidget::WPDeleted(int const & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void mapcontrol::OPMapWidget::UAVReachedWayPoint(int const & _t1, WayPointItem * _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void mapcontrol::OPMapWidget::UAVLeftSafetyBouble(internals::PointLatLng const & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void mapcontrol::OPMapWidget::OnCurrentPositionChanged(internals::PointLatLng _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void mapcontrol::OPMapWidget::OnTileLoadComplete()
{
    QMetaObject::activate(this, &staticMetaObject, 10, 0);
}

// SIGNAL 11
void mapcontrol::OPMapWidget::OnTileLoadStart()
{
    QMetaObject::activate(this, &staticMetaObject, 11, 0);
}

// SIGNAL 12
void mapcontrol::OPMapWidget::OnMapDrag()
{
    QMetaObject::activate(this, &staticMetaObject, 12, 0);
}

// SIGNAL 13
void mapcontrol::OPMapWidget::OnMapZoomChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 13, 0);
}

// SIGNAL 14
void mapcontrol::OPMapWidget::OnMapTypeChanged(MapType::Types _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 14, _a);
}

// SIGNAL 15
void mapcontrol::OPMapWidget::OnEmptyTileError(int _t1, core::Point _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 15, _a);
}

// SIGNAL 16
void mapcontrol::OPMapWidget::OnTilesStillToLoad(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 16, _a);
}
QT_END_MOC_NAMESPACE
