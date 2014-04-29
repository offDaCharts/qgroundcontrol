/****************************************************************************
** Meta object code from reading C++ file 'QGCGoogleEarthView.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/ui/map3D/QGCGoogleEarthView.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QGCGoogleEarthView.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QGCGoogleEarthView[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      26,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      28,   20,   19,   19, 0x05,

 // slots: signature, parameters, type, tag, flags
      52,   19,   19,   19, 0x0a,
      70,   66,   19,   19, 0x0a,
      92,   66,   19,   19, 0x0a,
     141,  120,   19,   19, 0x0a,
     213,  206,   19,   19, 0x0a,
     243,   66,   19,   19, 0x0a,
     273,  267,   19,   19, 0x0a,
     289,   19,   19,   19, 0x0a,
     303,  267,   19,   19, 0x0a,
     330,  323,   19,   19, 0x0a,
     343,   19,   19,   19, 0x0a,
     364,  352,   19,   19, 0x0a,
     394,   19,   19,   19, 0x0a,
     404,   19,   19,   19, 0x0a,
     426,  421,   19,   19, 0x0a,
     454,  447,   19,   19, 0x0a,
     475,  447,   19,   19, 0x0a,
     504,  498,   19,   19, 0x0a,
     524,  421,   19,   19, 0x0a,
     545,  421,   19,   19, 0x0a,
     568,   19,   19,   19, 0x0a,
     585,  498,   19,   19, 0x0a,
     612,   19,   19,   19, 0x0a,
     625,   19,   19,   19, 0x0a,
     667,  649,   19,   19, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_QGCGoogleEarthView[] = {
    "QGCGoogleEarthView\0\0visible\0"
    "visibilityChanged(bool)\0updateState()\0"
    "uas\0addUAS(UASInterface*)\0"
    "setActiveUAS(UASInterface*)\0"
    "uas,lat,lon,alt,usec\0"
    "updateGlobalPosition(UASInterface*,double,double,double,quint64)\0"
    "uas,wp\0updateWaypoint(int,Waypoint*)\0"
    "updateWaypointList(int)\0state\0"
    "showTrail(bool)\0clearTrails()\0"
    "showWaypoints(bool)\0follow\0follow(bool)\0"
    "goHome()\0lat,lon,alt\0setHome(double,double,double)\0"
    "setHome()\0moveToPosition()\0mode\0"
    "enableEditMode(bool)\0enable\0"
    "enableDaylight(bool)\0enableAtmosphere(bool)\0"
    "range\0setViewRange(float)\0"
    "setDistanceMode(int)\0setViewMode(VIEW_MODE)\0"
    "toggleViewMode()\0setViewRangeScaledInt(int)\0"
    "reloadHTML()\0initializeGoogleEarth()\0"
    "no,str1,str2,str3\0"
    "printWinException(int,QString,QString,QString)\0"
};

void QGCGoogleEarthView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QGCGoogleEarthView *_t = static_cast<QGCGoogleEarthView *>(_o);
        switch (_id) {
        case 0: _t->visibilityChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->updateState(); break;
        case 2: _t->addUAS((*reinterpret_cast< UASInterface*(*)>(_a[1]))); break;
        case 3: _t->setActiveUAS((*reinterpret_cast< UASInterface*(*)>(_a[1]))); break;
        case 4: _t->updateGlobalPosition((*reinterpret_cast< UASInterface*(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4])),(*reinterpret_cast< quint64(*)>(_a[5]))); break;
        case 5: _t->updateWaypoint((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< Waypoint*(*)>(_a[2]))); break;
        case 6: _t->updateWaypointList((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->showTrail((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->clearTrails(); break;
        case 9: _t->showWaypoints((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 10: _t->follow((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 11: _t->goHome(); break;
        case 12: _t->setHome((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3]))); break;
        case 13: _t->setHome(); break;
        case 14: _t->moveToPosition(); break;
        case 15: _t->enableEditMode((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 16: _t->enableDaylight((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 17: _t->enableAtmosphere((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 18: _t->setViewRange((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 19: _t->setDistanceMode((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 20: _t->setViewMode((*reinterpret_cast< VIEW_MODE(*)>(_a[1]))); break;
        case 21: _t->toggleViewMode(); break;
        case 22: _t->setViewRangeScaledInt((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 23: _t->reloadHTML(); break;
        case 24: _t->initializeGoogleEarth(); break;
        case 25: _t->printWinException((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< QString(*)>(_a[4]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QGCGoogleEarthView::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QGCGoogleEarthView::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_QGCGoogleEarthView,
      qt_meta_data_QGCGoogleEarthView, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QGCGoogleEarthView::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QGCGoogleEarthView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QGCGoogleEarthView::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QGCGoogleEarthView))
        return static_cast<void*>(const_cast< QGCGoogleEarthView*>(this));
    return QWidget::qt_metacast(_clname);
}

int QGCGoogleEarthView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 26)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 26;
    }
    return _id;
}

// SIGNAL 0
void QGCGoogleEarthView::visibilityChanged(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
