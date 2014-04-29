/****************************************************************************
** Meta object code from reading C++ file 'Pixhawk3DWidget.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/ui/map3D/Pixhawk3DWidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Pixhawk3DWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Pixhawk3DWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      34,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: signature, parameters, type, tag, flags
      21,   17,   16,   16, 0x05,
      70,   56,   16,   16, 0x05,
     112,  104,   16,   16, 0x05,

 // slots: signature, parameters, type, tag, flags
     136,   17,   16,   16, 0x0a,
     171,   17,   16,   16, 0x0a,
     225,  200,   16,   16, 0x0a,
     309,  294,   16,   16, 0x0a,
     408,  374,   16,   16, 0x0a,
     496,  472,   16,   16, 0x0a,
     574,  556,   16,   16, 0x0a,
     636,  620,   16,   16, 0x0a,
     681,   16,   16,   16, 0x08,
     693,   16,   16,   16, 0x08,
     718,   16,   16,   16, 0x08,
     749,  740,   16,   16, 0x08,
     774,   16,   16,   16, 0x08,
     797,   16,   16,   16, 0x08,
     835,  820,   16,   16, 0x08,
     857,   16,   16,   16, 0x08,
     874,   16,   16,   16, 0x08,
     893,   16,   16,   16, 0x08,
     915,   16,   16,   16, 0x08,
     930,   16,   16,   16, 0x08,
     942,   16,   16,   16, 0x08,
     959,   16,   16,   16, 0x08,
     982,   16,   16,   16, 0x08,
    1004,   16,   16,   16, 0x08,
    1021,   16,   16,   16, 0x08,
    1043,   16,   16,   16, 0x08,
    1063,   16,   16,   16, 0x08,
    1077,   16,   16,   16, 0x08,
    1091,   16,   16,   16, 0x08,
    1120, 1107,   16,   16, 0x08,
    1141,   16,   16,   16, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_Pixhawk3DWidget[] = {
    "Pixhawk3DWidget\0\0uas\0"
    "systemCreatedSignal(UASInterface*)\0"
    "systemId,name\0overlayCreatedSignal(int,QString)\0"
    "visible\0visibilityChanged(bool)\0"
    "activeSystemChanged(UASInterface*)\0"
    "systemCreated(UASInterface*)\0"
    "uas,component,x,y,z,time\0"
    "localPositionChanged(UASInterface*,int,double,double,double,quint64)\0"
    "uas,x,y,z,time\0"
    "localPositionChanged(UASInterface*,double,double,double,quint64)\0"
    "uas,component,roll,pitch,yaw,time\0"
    "attitudeChanged(UASInterface*,int,double,double,double,quint64)\0"
    "uas,roll,pitch,yaw,time\0"
    "attitudeChanged(UASInterface*,double,double,double,quint64)\0"
    "uasId,lat,lon,alt\0"
    "homePositionChanged(int,double,double,double)\0"
    "uasId,x,y,z,yaw\0"
    "setpointChanged(int,float,float,float,float)\0"
    "clearData()\0showTerrainParamWindow()\0"
    "showViewParamWindow()\0systemId\0"
    "followCameraChanged(int)\0"
    "imageryParamsChanged()\0recenterActiveCamera()\0"
    "systemId,index\0modelChanged(int,int)\0"
    "setBirdEyeView()\0loadTerrainModel()\0"
    "selectTargetHeading()\0selectTarget()\0"
    "setTarget()\0insertWaypoint()\0"
    "moveWaypointPosition()\0moveWaypointHeading()\0"
    "deleteWaypoint()\0setWaypointAltitude()\0"
    "clearAllWaypoints()\0moveImagery()\0"
    "moveTerrain()\0rotateTerrain()\0"
    "width,height\0sizeChanged(int,int)\0"
    "update()\0"
};

void Pixhawk3DWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        Pixhawk3DWidget *_t = static_cast<Pixhawk3DWidget *>(_o);
        switch (_id) {
        case 0: _t->systemCreatedSignal((*reinterpret_cast< UASInterface*(*)>(_a[1]))); break;
        case 1: _t->overlayCreatedSignal((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 2: _t->visibilityChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->activeSystemChanged((*reinterpret_cast< UASInterface*(*)>(_a[1]))); break;
        case 4: _t->systemCreated((*reinterpret_cast< UASInterface*(*)>(_a[1]))); break;
        case 5: _t->localPositionChanged((*reinterpret_cast< UASInterface*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4])),(*reinterpret_cast< double(*)>(_a[5])),(*reinterpret_cast< quint64(*)>(_a[6]))); break;
        case 6: _t->localPositionChanged((*reinterpret_cast< UASInterface*(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4])),(*reinterpret_cast< quint64(*)>(_a[5]))); break;
        case 7: _t->attitudeChanged((*reinterpret_cast< UASInterface*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4])),(*reinterpret_cast< double(*)>(_a[5])),(*reinterpret_cast< quint64(*)>(_a[6]))); break;
        case 8: _t->attitudeChanged((*reinterpret_cast< UASInterface*(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4])),(*reinterpret_cast< quint64(*)>(_a[5]))); break;
        case 9: _t->homePositionChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4]))); break;
        case 10: _t->setpointChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3])),(*reinterpret_cast< float(*)>(_a[4])),(*reinterpret_cast< float(*)>(_a[5]))); break;
        case 11: _t->clearData(); break;
        case 12: _t->showTerrainParamWindow(); break;
        case 13: _t->showViewParamWindow(); break;
        case 14: _t->followCameraChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 15: _t->imageryParamsChanged(); break;
        case 16: _t->recenterActiveCamera(); break;
        case 17: _t->modelChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 18: _t->setBirdEyeView(); break;
        case 19: _t->loadTerrainModel(); break;
        case 20: _t->selectTargetHeading(); break;
        case 21: _t->selectTarget(); break;
        case 22: _t->setTarget(); break;
        case 23: _t->insertWaypoint(); break;
        case 24: _t->moveWaypointPosition(); break;
        case 25: _t->moveWaypointHeading(); break;
        case 26: _t->deleteWaypoint(); break;
        case 27: _t->setWaypointAltitude(); break;
        case 28: _t->clearAllWaypoints(); break;
        case 29: _t->moveImagery(); break;
        case 30: _t->moveTerrain(); break;
        case 31: _t->rotateTerrain(); break;
        case 32: _t->sizeChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 33: _t->update(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Pixhawk3DWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Pixhawk3DWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Pixhawk3DWidget,
      qt_meta_data_Pixhawk3DWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Pixhawk3DWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Pixhawk3DWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Pixhawk3DWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Pixhawk3DWidget))
        return static_cast<void*>(const_cast< Pixhawk3DWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int Pixhawk3DWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 34)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 34;
    }
    return _id;
}

// SIGNAL 0
void Pixhawk3DWidget::systemCreatedSignal(UASInterface * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Pixhawk3DWidget::overlayCreatedSignal(int _t1, const QString & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Pixhawk3DWidget::visibilityChanged(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE
