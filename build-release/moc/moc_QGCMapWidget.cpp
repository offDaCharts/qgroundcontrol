/****************************************************************************
** Meta object code from reading C++ file 'QGCMapWidget.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/ui/map/QGCMapWidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QGCMapWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QGCMapWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      29,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: signature, parameters, type, tag, flags
      42,   14,   13,   13, 0x05,
      87,   84,   13,   13, 0x05,
     114,   84,   13,   13, 0x05,

 // slots: signature, parameters, type, tag, flags
     141,   13,   13,   13, 0x0a,
     165,   13,   13,   13, 0x0a,
     194,   13,  189,   13, 0x0a,
     221,   13,  189,   13, 0x0a,
     250,  246,   13,   13, 0x0a,
     293,  272,   13,   13, 0x0a,
     358,   13,   13,   13, 0x0a,
     381,   13,   13,   13, 0x0a,
     403,   13,   13,   13, 0x0a,
     434,  246,   13,   13, 0x0a,
     457,  246,   13,   13, 0x0a,
     485,   13,   13,   13, 0x0a,
     502,   13,   13,   13, 0x0a,
     518,  511,   13,   13, 0x0a,
     548,  246,   13,   13, 0x0a,
     572,   14,   13,   13, 0x0a,
     621,  613,   13,   13, 0x0a,
     647,   13,   13,   13, 0x0a,
     676,  668,   13,   13, 0x0a,
     702,  613,   13,   13, 0x0a,
     732,  725,   13,   13, 0x0a,
     758,   13,   13,   13, 0x0a,
     788,  773,   13,   13, 0x0a,
     807,   13,   13,   13, 0x2a,
     822,   13,   13,   13, 0x0a,
     847,  838,   13,   13, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_QGCMapWidget[] = {
    "QGCMapWidget\0\0latitude,longitude,altitude\0"
    "homePositionChanged(double,double,double)\0"
    "wp\0waypointCreated(Waypoint*)\0"
    "waypointChanged(Waypoint*)\0"
    "cameraActionTriggered()\0guidedActionTriggered()\0"
    "bool\0guidedAltActionTriggered()\0"
    "setHomeActionTriggered()\0uas\0"
    "addUAS(UASInterface*)\0uas,lat,lon,alt,usec\0"
    "updateGlobalPosition(UASInterface*,double,double,double,quint64)\0"
    "updateGlobalPosition()\0updateLocalPosition()\0"
    "updateLocalPositionEstimates()\0"
    "updateSystemSpecs(int)\0"
    "activeUASSet(UASInterface*)\0"
    "showGoToDialog()\0goHome()\0uas,wp\0"
    "updateWaypoint(int,Waypoint*)\0"
    "updateWaypointList(int)\0"
    "updateHomePosition(double,double,double)\0"
    "seconds\0setUpdateRateLimit(float)\0"
    "cacheVisibleRegion()\0enabled\0"
    "setFollowUAVEnabled(bool)\0"
    "setTrailModeTimed(int)\0meters\0"
    "setTrailModeDistance(int)\0deleteTrails()\0"
    "changePosition\0loadSettings(bool)\0"
    "loadSettings()\0storeSettings()\0waypoint\0"
    "handleMapWaypointEdit(WayPointItem*)\0"
};

void QGCMapWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QGCMapWidget *_t = static_cast<QGCMapWidget *>(_o);
        switch (_id) {
        case 0: _t->homePositionChanged((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3]))); break;
        case 1: _t->waypointCreated((*reinterpret_cast< Waypoint*(*)>(_a[1]))); break;
        case 2: _t->waypointChanged((*reinterpret_cast< Waypoint*(*)>(_a[1]))); break;
        case 3: _t->cameraActionTriggered(); break;
        case 4: _t->guidedActionTriggered(); break;
        case 5: { bool _r = _t->guidedAltActionTriggered();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 6: { bool _r = _t->setHomeActionTriggered();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 7: _t->addUAS((*reinterpret_cast< UASInterface*(*)>(_a[1]))); break;
        case 8: _t->updateGlobalPosition((*reinterpret_cast< UASInterface*(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4])),(*reinterpret_cast< quint64(*)>(_a[5]))); break;
        case 9: _t->updateGlobalPosition(); break;
        case 10: _t->updateLocalPosition(); break;
        case 11: _t->updateLocalPositionEstimates(); break;
        case 12: _t->updateSystemSpecs((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 13: _t->activeUASSet((*reinterpret_cast< UASInterface*(*)>(_a[1]))); break;
        case 14: _t->showGoToDialog(); break;
        case 15: _t->goHome(); break;
        case 16: _t->updateWaypoint((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< Waypoint*(*)>(_a[2]))); break;
        case 17: _t->updateWaypointList((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 18: _t->updateHomePosition((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3]))); break;
        case 19: _t->setUpdateRateLimit((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 20: _t->cacheVisibleRegion(); break;
        case 21: _t->setFollowUAVEnabled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 22: _t->setTrailModeTimed((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 23: _t->setTrailModeDistance((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 24: _t->deleteTrails(); break;
        case 25: _t->loadSettings((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 26: _t->loadSettings(); break;
        case 27: _t->storeSettings(); break;
        case 28: _t->handleMapWaypointEdit((*reinterpret_cast< WayPointItem*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QGCMapWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QGCMapWidget::staticMetaObject = {
    { &mapcontrol::OPMapWidget::staticMetaObject, qt_meta_stringdata_QGCMapWidget,
      qt_meta_data_QGCMapWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QGCMapWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QGCMapWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QGCMapWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QGCMapWidget))
        return static_cast<void*>(const_cast< QGCMapWidget*>(this));
    typedef mapcontrol::OPMapWidget QMocSuperClass;
    return QMocSuperClass::qt_metacast(_clname);
}

int QGCMapWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    typedef mapcontrol::OPMapWidget QMocSuperClass;
    _id = QMocSuperClass::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 29)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 29;
    }
    return _id;
}

// SIGNAL 0
void QGCMapWidget::homePositionChanged(double _t1, double _t2, double _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QGCMapWidget::waypointCreated(Waypoint * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QGCMapWidget::waypointChanged(Waypoint * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE
