/****************************************************************************
** Meta object code from reading C++ file 'HSIDisplay.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/ui/HSIDisplay.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'HSIDisplay.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_HSIDisplay[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      62,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      18,   12,   11,   11, 0x05,

 // slots: signature, parameters, type, tag, flags
      49,   45,   11,   11, 0x0a,
      77,   12,   11,   11, 0x0a,
     139,  100,   11,   11, 0x0a,
     243,  187,   11,   11, 0x0a,
     342,  318,   11,   11, 0x0a,
     445,  401,   11,   11, 0x0a,
     551,  502,   11,   11, 0x0a,
     624,  612,   11,   11, 0x0a,
     706,  688,   11,   11, 0x0a,
     789,  771,   11,   11, 0x0a,
     854,  845,   11,   11, 0x0a,
     901,  893,   11,   11, 0x0a,
     939,  893,   11,   11, 0x0a,
     979,  893,   11,   11, 0x0a,
    1039, 1018,   11,   11, 0x0a,
    1079, 1018,   11,   11, 0x0a,
    1126, 1018,   11,   11, 0x0a,
    1169, 1018,   11,   11, 0x0a,
    1202, 1018,   11,   11, 0x0a,
    1236, 1018,   11,   11, 0x0a,
    1274, 1018,   11,   11, 0x0a,
    1307, 1018,   11,   11, 0x0a,
    1344, 1018,   11,   11, 0x0a,
    1381, 1018,   11,   11, 0x0a,
    1415, 1018,   11,   11, 0x0a,
    1504, 1461,   11,   11, 0x0a,
    1563,  893,   11,   11, 0x0a,
    1621, 1604,   11,   11, 0x0a,
    1659, 1604,   11,   11, 0x0a,
    1700, 1604,   11,   11, 0x0a,
    1752, 1744,   11,   11, 0x0a,
    1814, 1808,   11,   11, 0x0a,
    1871, 1839,   11,   11, 0x0a,
    1927, 1923,   11,   11, 0x0a,
    1941,   11,   11,   11, 0x0a,
    1957,   11,   11,   11, 0x0a,
    1978,   11,   11,   11, 0x09,
    2002, 1994,   11,   11, 0x09,
    2021, 1994,   11,   11, 0x09,
    2075, 2044,   11,   11, 0x09,
    2133, 2044,   11,   11, 0x09,
    2191, 2044,   11,   11, 0x09,
    2279, 2248,   11,   11, 0x09,
    2369, 2335,   11,   11, 0x09,
    2430, 2248,   11,   11, 0x09,
    2491, 2487,   11,   11, 0x09,
    2538, 2534,   11,   11, 0x09,
    2577, 2575,   11,   11, 0x09,
    2612,   11,   11,   11, 0x09,
    2666, 2642,   11,   11, 0x09,
    2727, 1994,   11,   11, 0x09,
    2776, 2752,   11,   11, 0x09,
    2871, 2837,   11,   11, 0x09,
    2920, 1808,   11,   11, 0x09,
    2956, 1808,   11,   11, 0x09,
    2986, 1808,   11,   11, 0x09,
    3018, 1808,   11,   11, 0x09,
    3047, 1808,   11,   11, 0x09,
    3072, 1808,   11,   11, 0x09,
    3098, 1808,   11,   11, 0x09,
    3143, 3135,   11,   11, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_HSIDisplay[] = {
    "HSIDisplay\0\0width\0metricWidthChanged(double)\0"
    "uas\0setActiveUAS(UASInterface*)\0"
    "setMetricWidth(double)\0"
    "uasid,satid,azimuth,direction,snr,used\0"
    "updateSatellite(int,int,float,float,float,bool)\0"
    ",rollDesired,pitchDesired,yawDesired,thrustDesired,usec\0"
    "updateAttitudeSetpoints(UASInterface*,double,double,double,double,quin"
    "t64)\0"
    "uas,roll,pitch,yaw,time\0"
    "updateAttitude(UASInterface*,double,double,double,quint64)\0"
    "uasid,xDesired,yDesired,zDesired,yawDesired\0"
    "updateUserPositionSetpoints(int,float,float,float,float)\0"
    "uasid,xDesired,yDesired,zDesired,yawDesired,usec\0"
    "updatePositionSetpoints(int,float,float,float,float,quint64)\0"
    ",x,y,z,usec\0"
    "updateLocalPosition(UASInterface*,double,double,double,quint64)\0"
    ",lat,lon,alt,usec\0"
    "updateGlobalPosition(UASInterface*,double,double,double,quint64)\0"
    "uas,vx,vy,vz,time\0"
    "updateSpeed(UASInterface*,double,double,double,quint64)\0"
    "uas,lock\0updatePositionLock(UASInterface*,bool)\0"
    "enabled\0updateAttitudeControllerEnabled(bool)\0"
    "updatePositionXYControllerEnabled(bool)\0"
    "updatePositionZControllerEnabled(bool)\0"
    "supported,enabled,ok\0"
    "updateOpticalFlowStatus(bool,bool,bool)\0"
    "updateVisionLocalizationStatus(bool,bool,bool)\0"
    "updateDistanceSensorStatus(bool,bool,bool)\0"
    "updateGyroStatus(bool,bool,bool)\0"
    "updateAccelStatus(bool,bool,bool)\0"
    "updateMagSensorStatus(bool,bool,bool)\0"
    "updateBaroStatus(bool,bool,bool)\0"
    "updateAirspeedStatus(bool,bool,bool)\0"
    "updateActuatorStatus(bool,bool,bool)\0"
    "updateLaserStatus(bool,bool,bool)\0"
    "updateGroundTruthSensorStatus(bool,bool,bool)\0"
    "time,id,type,name,quality,bearing,distance\0"
    "updateObjectPosition(uint,int,int,QString,int,float,float)\0"
    "updatePositionYawControllerEnabled(bool)\0"
    "uas,localization\0updateLocalization(UASInterface*,int)\0"
    "updateGpsLocalization(UASInterface*,int)\0"
    "updateVisionLocalization(UASInterface*,int)\0"
    "uas,fix\0updateInfraredUltrasoundLocalization(UASInterface*,int)\0"
    "event\0paintEvent(QPaintEvent*)\0"
    "roll,pitch,yaw,thrust,xHat,yHat\0"
    "updateJoystick(double,double,double,double,int,int)\0"
    "key\0pressKey(int)\0resetMAVState()\0"
    "clearStatusMessage()\0renderOverlay()\0"
    "painter\0drawGPS(QPainter&)\0"
    "drawObjects(QPainter&)\0"
    "xRef,yRef,radius,color,painter\0"
    "drawPositionDirection(float,float,float,QColor,QPainter*)\0"
    "drawAttitudeDirection(float,float,float,QColor,QPainter*)\0"
    "drawAltitudeSetpoint(float,float,float,QColor,QPainter*)\0"
    "x,y,label,status,known,painter\0"
    "drawStatusFlag(float,float,QString,bool,bool,QPainter&)\0"
    "x,y,label,status,known,ok,painter\0"
    "drawStatusFlag(float,float,QString,bool,bool,bool,QPainter&)\0"
    "drawPositionLock(float,float,QString,int,bool,QPainter&)\0"
    "x,y\0setBodySetpointCoordinateXY(double,double)\0"
    "yaw\0setBodySetpointCoordinateYaw(double)\0"
    "z\0setBodySetpointCoordinateZ(double)\0"
    "sendBodySetPointCoordinates()\0"
    "x,y,z,yaw,color,painter\0"
    "drawSetpointXYZYaw(float,float,float,float,QColor,QPainter&)\0"
    "drawWaypoints(QPainter&)\0"
    "painter,color,width,w,p\0"
    "drawWaypoint(QPainter&,QColor,float,const Waypoint*,QPointF)\0"
    "topLeft,bottomRight,color,painter\0"
    "drawSafetyArea(QPointF,QPointF,QColor,QPainter&)\0"
    "mouseDoubleClickEvent(QMouseEvent*)\0"
    "mousePressEvent(QMouseEvent*)\0"
    "mouseReleaseEvent(QMouseEvent*)\0"
    "mouseMoveEvent(QMouseEvent*)\0"
    "wheelEvent(QWheelEvent*)\0"
    "keyPressEvent(QKeyEvent*)\0"
    "contextMenuEvent(QContextMenuEvent*)\0"
    "message\0setStatusMessage(QString)\0"
};

void HSIDisplay::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        HSIDisplay *_t = static_cast<HSIDisplay *>(_o);
        switch (_id) {
        case 0: _t->metricWidthChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 1: _t->setActiveUAS((*reinterpret_cast< UASInterface*(*)>(_a[1]))); break;
        case 2: _t->setMetricWidth((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 3: _t->updateSatellite((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3])),(*reinterpret_cast< float(*)>(_a[4])),(*reinterpret_cast< float(*)>(_a[5])),(*reinterpret_cast< bool(*)>(_a[6]))); break;
        case 4: _t->updateAttitudeSetpoints((*reinterpret_cast< UASInterface*(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4])),(*reinterpret_cast< double(*)>(_a[5])),(*reinterpret_cast< quint64(*)>(_a[6]))); break;
        case 5: _t->updateAttitude((*reinterpret_cast< UASInterface*(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4])),(*reinterpret_cast< quint64(*)>(_a[5]))); break;
        case 6: _t->updateUserPositionSetpoints((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3])),(*reinterpret_cast< float(*)>(_a[4])),(*reinterpret_cast< float(*)>(_a[5]))); break;
        case 7: _t->updatePositionSetpoints((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3])),(*reinterpret_cast< float(*)>(_a[4])),(*reinterpret_cast< float(*)>(_a[5])),(*reinterpret_cast< quint64(*)>(_a[6]))); break;
        case 8: _t->updateLocalPosition((*reinterpret_cast< UASInterface*(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4])),(*reinterpret_cast< quint64(*)>(_a[5]))); break;
        case 9: _t->updateGlobalPosition((*reinterpret_cast< UASInterface*(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4])),(*reinterpret_cast< quint64(*)>(_a[5]))); break;
        case 10: _t->updateSpeed((*reinterpret_cast< UASInterface*(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4])),(*reinterpret_cast< quint64(*)>(_a[5]))); break;
        case 11: _t->updatePositionLock((*reinterpret_cast< UASInterface*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 12: _t->updateAttitudeControllerEnabled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 13: _t->updatePositionXYControllerEnabled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 14: _t->updatePositionZControllerEnabled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 15: _t->updateOpticalFlowStatus((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 16: _t->updateVisionLocalizationStatus((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 17: _t->updateDistanceSensorStatus((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 18: _t->updateGyroStatus((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 19: _t->updateAccelStatus((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 20: _t->updateMagSensorStatus((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 21: _t->updateBaroStatus((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 22: _t->updateAirspeedStatus((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 23: _t->updateActuatorStatus((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 24: _t->updateLaserStatus((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 25: _t->updateGroundTruthSensorStatus((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 26: _t->updateObjectPosition((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5])),(*reinterpret_cast< float(*)>(_a[6])),(*reinterpret_cast< float(*)>(_a[7]))); break;
        case 27: _t->updatePositionYawControllerEnabled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 28: _t->updateLocalization((*reinterpret_cast< UASInterface*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 29: _t->updateGpsLocalization((*reinterpret_cast< UASInterface*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 30: _t->updateVisionLocalization((*reinterpret_cast< UASInterface*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 31: _t->updateInfraredUltrasoundLocalization((*reinterpret_cast< UASInterface*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 32: _t->paintEvent((*reinterpret_cast< QPaintEvent*(*)>(_a[1]))); break;
        case 33: _t->updateJoystick((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5])),(*reinterpret_cast< int(*)>(_a[6]))); break;
        case 34: _t->pressKey((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 35: _t->resetMAVState(); break;
        case 36: _t->clearStatusMessage(); break;
        case 37: _t->renderOverlay(); break;
        case 38: _t->drawGPS((*reinterpret_cast< QPainter(*)>(_a[1]))); break;
        case 39: _t->drawObjects((*reinterpret_cast< QPainter(*)>(_a[1]))); break;
        case 40: _t->drawPositionDirection((*reinterpret_cast< float(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3])),(*reinterpret_cast< const QColor(*)>(_a[4])),(*reinterpret_cast< QPainter*(*)>(_a[5]))); break;
        case 41: _t->drawAttitudeDirection((*reinterpret_cast< float(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3])),(*reinterpret_cast< const QColor(*)>(_a[4])),(*reinterpret_cast< QPainter*(*)>(_a[5]))); break;
        case 42: _t->drawAltitudeSetpoint((*reinterpret_cast< float(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3])),(*reinterpret_cast< const QColor(*)>(_a[4])),(*reinterpret_cast< QPainter*(*)>(_a[5]))); break;
        case 43: _t->drawStatusFlag((*reinterpret_cast< float(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4])),(*reinterpret_cast< bool(*)>(_a[5])),(*reinterpret_cast< QPainter(*)>(_a[6]))); break;
        case 44: _t->drawStatusFlag((*reinterpret_cast< float(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4])),(*reinterpret_cast< bool(*)>(_a[5])),(*reinterpret_cast< bool(*)>(_a[6])),(*reinterpret_cast< QPainter(*)>(_a[7]))); break;
        case 45: _t->drawPositionLock((*reinterpret_cast< float(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])),(*reinterpret_cast< bool(*)>(_a[5])),(*reinterpret_cast< QPainter(*)>(_a[6]))); break;
        case 46: _t->setBodySetpointCoordinateXY((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 47: _t->setBodySetpointCoordinateYaw((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 48: _t->setBodySetpointCoordinateZ((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 49: _t->sendBodySetPointCoordinates(); break;
        case 50: _t->drawSetpointXYZYaw((*reinterpret_cast< float(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3])),(*reinterpret_cast< float(*)>(_a[4])),(*reinterpret_cast< const QColor(*)>(_a[5])),(*reinterpret_cast< QPainter(*)>(_a[6]))); break;
        case 51: _t->drawWaypoints((*reinterpret_cast< QPainter(*)>(_a[1]))); break;
        case 52: _t->drawWaypoint((*reinterpret_cast< QPainter(*)>(_a[1])),(*reinterpret_cast< const QColor(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3])),(*reinterpret_cast< const Waypoint*(*)>(_a[4])),(*reinterpret_cast< const QPointF(*)>(_a[5]))); break;
        case 53: _t->drawSafetyArea((*reinterpret_cast< const QPointF(*)>(_a[1])),(*reinterpret_cast< const QPointF(*)>(_a[2])),(*reinterpret_cast< const QColor(*)>(_a[3])),(*reinterpret_cast< QPainter(*)>(_a[4]))); break;
        case 54: _t->mouseDoubleClickEvent((*reinterpret_cast< QMouseEvent*(*)>(_a[1]))); break;
        case 55: _t->mousePressEvent((*reinterpret_cast< QMouseEvent*(*)>(_a[1]))); break;
        case 56: _t->mouseReleaseEvent((*reinterpret_cast< QMouseEvent*(*)>(_a[1]))); break;
        case 57: _t->mouseMoveEvent((*reinterpret_cast< QMouseEvent*(*)>(_a[1]))); break;
        case 58: _t->wheelEvent((*reinterpret_cast< QWheelEvent*(*)>(_a[1]))); break;
        case 59: _t->keyPressEvent((*reinterpret_cast< QKeyEvent*(*)>(_a[1]))); break;
        case 60: _t->contextMenuEvent((*reinterpret_cast< QContextMenuEvent*(*)>(_a[1]))); break;
        case 61: _t->setStatusMessage((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData HSIDisplay::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject HSIDisplay::staticMetaObject = {
    { &HDDisplay::staticMetaObject, qt_meta_stringdata_HSIDisplay,
      qt_meta_data_HSIDisplay, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &HSIDisplay::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *HSIDisplay::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *HSIDisplay::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_HSIDisplay))
        return static_cast<void*>(const_cast< HSIDisplay*>(this));
    return HDDisplay::qt_metacast(_clname);
}

int HSIDisplay::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = HDDisplay::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 62)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 62;
    }
    return _id;
}

// SIGNAL 0
void HSIDisplay::metricWidthChanged(double _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
