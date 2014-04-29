/****************************************************************************
** Meta object code from reading C++ file 'QGCHilLink.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/comm/QGCHilLink.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QGCHilLink.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QGCHilLink[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      25,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      13,       // signalCount

 // signals: signature, parameters, type, tag, flags
      12,   11,   11,   11, 0x05,
      34,   11,   11,   11, 0x05,
      69,   59,   11,   11, 0x05,
     211,   95,   11,   11, 0x05,
     341,   95,   11,   11, 0x05,
     542,  477,   11,   11, 0x05,
     765,  642,   11,   11, 0x05,
     892,  883,   11,   11, 0x05,
     923,  915,   11,   11, 0x05,
     955,  946,   11,   11, 0x05,
     988,  980,   11,   11, 0x05,
    1012,  980,   11,   11, 0x05,
    1040, 1032,   11,   11, 0x05,

 // slots: signature, parameters, type, tag, flags
    1068, 1063,   11,   11, 0x0a,
    1086, 1081,   11,   11, 0x0a,
    1179, 1109,   11,   11, 0x0a,
    1289, 1244,   11,   11, 0x0a,
    1367, 1363,   11,   11, 0x0a,
    1404,  980,   11,   11, 0x0a,
    1431, 1424,   11,   11, 0x0a,
    1453,  946,   11,   11, 0x0a,
    1477,   11,   11,   11, 0x0a,
    1501, 1489,   11,   11, 0x0a,
    1537,   11, 1532,   11, 0x0a,
    1557,   11, 1532,   11, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_QGCHilLink[] = {
    "QGCHilLink\0\0simulationConnected()\0"
    "simulationDisconnected()\0connected\0"
    "simulationConnected(bool)\0"
    "time_us,roll,pitch,yaw,rollspeed,pitchspeed,yawspeed,lat,lon,alt,vx,vy"
    ",vz,ind_airspeed,true_airspeed,xacc,yacc,zacc\0"
    "hilStateChanged(quint64,float,float,float,float,float,float,double,dou"
    "ble,double,float,float,float,float,float,float,float,float)\0"
    "hilGroundTruthChanged(quint64,float,float,float,float,float,float,doub"
    "le,double,double,float,float,float,float,float,float,float,float)\0"
    "time_us,lat,lon,alt,fix_type,eph,epv,vel,vn,ve,vd,cog,satellites\0"
    "sensorHilGpsChanged(quint64,double,double,double,int,float,float,float"
    ",float,float,float,float,int)\0"
    "time_us,xacc,yacc,zacc,xgyro,ygyro,zgyro,xmag,ymag,zmag,abs_pressure,d"
    "iff_pressure,pressure_alt,temperature,fields_updated\0"
    "sensorHilRawImuChanged(quint64,float,float,float,float,float,float,flo"
    "at,float,float,float,float,float,float,quint32)\0"
    "hostPort\0remoteChanged(QString)\0message\0"
    "statusMessage(QString)\0airframe\0"
    "airframeChanged(QString)\0version\0"
    "versionChanged(QString)\0versionChanged(int)\0"
    "enabled\0sensorHilChanged(bool)\0port\0"
    "setPort(int)\0host\0setRemoteHost(QString)\0"
    "time,rollAilerons,pitchElevator,yawRudder,throttle,systemMode,navMode\0"
    "updateControls(uint64_t,float,float,float,float,uint8_t,uint8_t)\0"
    "time,act1,act2,act3,act4,act5,act6,act7,act8\0"
    "updateActuators(uint64_t,float,float,float,float,float,float,float,flo"
    "at)\0"
    "err\0processError(QProcess::ProcessError)\0"
    "setVersion(QString)\0enable\0"
    "enableSensorHIL(bool)\0selectAirframe(QString)\0"
    "readBytes()\0data,length\0"
    "writeBytes(const char*,qint64)\0bool\0"
    "connectSimulation()\0disconnectSimulation()\0"
};

void QGCHilLink::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QGCHilLink *_t = static_cast<QGCHilLink *>(_o);
        switch (_id) {
        case 0: _t->simulationConnected(); break;
        case 1: _t->simulationDisconnected(); break;
        case 2: _t->simulationConnected((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->hilStateChanged((*reinterpret_cast< quint64(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3])),(*reinterpret_cast< float(*)>(_a[4])),(*reinterpret_cast< float(*)>(_a[5])),(*reinterpret_cast< float(*)>(_a[6])),(*reinterpret_cast< float(*)>(_a[7])),(*reinterpret_cast< double(*)>(_a[8])),(*reinterpret_cast< double(*)>(_a[9])),(*reinterpret_cast< double(*)>(_a[10])),(*reinterpret_cast< float(*)>(_a[11])),(*reinterpret_cast< float(*)>(_a[12])),(*reinterpret_cast< float(*)>(_a[13])),(*reinterpret_cast< float(*)>(_a[14])),(*reinterpret_cast< float(*)>(_a[15])),(*reinterpret_cast< float(*)>(_a[16])),(*reinterpret_cast< float(*)>(_a[17])),(*reinterpret_cast< float(*)>(_a[18]))); break;
        case 4: _t->hilGroundTruthChanged((*reinterpret_cast< quint64(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3])),(*reinterpret_cast< float(*)>(_a[4])),(*reinterpret_cast< float(*)>(_a[5])),(*reinterpret_cast< float(*)>(_a[6])),(*reinterpret_cast< float(*)>(_a[7])),(*reinterpret_cast< double(*)>(_a[8])),(*reinterpret_cast< double(*)>(_a[9])),(*reinterpret_cast< double(*)>(_a[10])),(*reinterpret_cast< float(*)>(_a[11])),(*reinterpret_cast< float(*)>(_a[12])),(*reinterpret_cast< float(*)>(_a[13])),(*reinterpret_cast< float(*)>(_a[14])),(*reinterpret_cast< float(*)>(_a[15])),(*reinterpret_cast< float(*)>(_a[16])),(*reinterpret_cast< float(*)>(_a[17])),(*reinterpret_cast< float(*)>(_a[18]))); break;
        case 5: _t->sensorHilGpsChanged((*reinterpret_cast< quint64(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5])),(*reinterpret_cast< float(*)>(_a[6])),(*reinterpret_cast< float(*)>(_a[7])),(*reinterpret_cast< float(*)>(_a[8])),(*reinterpret_cast< float(*)>(_a[9])),(*reinterpret_cast< float(*)>(_a[10])),(*reinterpret_cast< float(*)>(_a[11])),(*reinterpret_cast< float(*)>(_a[12])),(*reinterpret_cast< int(*)>(_a[13]))); break;
        case 6: _t->sensorHilRawImuChanged((*reinterpret_cast< quint64(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3])),(*reinterpret_cast< float(*)>(_a[4])),(*reinterpret_cast< float(*)>(_a[5])),(*reinterpret_cast< float(*)>(_a[6])),(*reinterpret_cast< float(*)>(_a[7])),(*reinterpret_cast< float(*)>(_a[8])),(*reinterpret_cast< float(*)>(_a[9])),(*reinterpret_cast< float(*)>(_a[10])),(*reinterpret_cast< float(*)>(_a[11])),(*reinterpret_cast< float(*)>(_a[12])),(*reinterpret_cast< float(*)>(_a[13])),(*reinterpret_cast< float(*)>(_a[14])),(*reinterpret_cast< quint32(*)>(_a[15]))); break;
        case 7: _t->remoteChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 8: _t->statusMessage((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 9: _t->airframeChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 10: _t->versionChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 11: _t->versionChanged((*reinterpret_cast< const int(*)>(_a[1]))); break;
        case 12: _t->sensorHilChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 13: _t->setPort((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 14: _t->setRemoteHost((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 15: _t->updateControls((*reinterpret_cast< uint64_t(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3])),(*reinterpret_cast< float(*)>(_a[4])),(*reinterpret_cast< float(*)>(_a[5])),(*reinterpret_cast< uint8_t(*)>(_a[6])),(*reinterpret_cast< uint8_t(*)>(_a[7]))); break;
        case 16: _t->updateActuators((*reinterpret_cast< uint64_t(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3])),(*reinterpret_cast< float(*)>(_a[4])),(*reinterpret_cast< float(*)>(_a[5])),(*reinterpret_cast< float(*)>(_a[6])),(*reinterpret_cast< float(*)>(_a[7])),(*reinterpret_cast< float(*)>(_a[8])),(*reinterpret_cast< float(*)>(_a[9]))); break;
        case 17: _t->processError((*reinterpret_cast< QProcess::ProcessError(*)>(_a[1]))); break;
        case 18: _t->setVersion((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 19: _t->enableSensorHIL((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 20: _t->selectAirframe((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 21: _t->readBytes(); break;
        case 22: _t->writeBytes((*reinterpret_cast< const char*(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2]))); break;
        case 23: { bool _r = _t->connectSimulation();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 24: { bool _r = _t->disconnectSimulation();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QGCHilLink::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QGCHilLink::staticMetaObject = {
    { &QThread::staticMetaObject, qt_meta_stringdata_QGCHilLink,
      qt_meta_data_QGCHilLink, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QGCHilLink::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QGCHilLink::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QGCHilLink::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QGCHilLink))
        return static_cast<void*>(const_cast< QGCHilLink*>(this));
    return QThread::qt_metacast(_clname);
}

int QGCHilLink::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 25)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 25;
    }
    return _id;
}

// SIGNAL 0
void QGCHilLink::simulationConnected()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void QGCHilLink::simulationDisconnected()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void QGCHilLink::simulationConnected(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QGCHilLink::hilStateChanged(quint64 _t1, float _t2, float _t3, float _t4, float _t5, float _t6, float _t7, double _t8, double _t9, double _t10, float _t11, float _t12, float _t13, float _t14, float _t15, float _t16, float _t17, float _t18)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)), const_cast<void*>(reinterpret_cast<const void*>(&_t6)), const_cast<void*>(reinterpret_cast<const void*>(&_t7)), const_cast<void*>(reinterpret_cast<const void*>(&_t8)), const_cast<void*>(reinterpret_cast<const void*>(&_t9)), const_cast<void*>(reinterpret_cast<const void*>(&_t10)), const_cast<void*>(reinterpret_cast<const void*>(&_t11)), const_cast<void*>(reinterpret_cast<const void*>(&_t12)), const_cast<void*>(reinterpret_cast<const void*>(&_t13)), const_cast<void*>(reinterpret_cast<const void*>(&_t14)), const_cast<void*>(reinterpret_cast<const void*>(&_t15)), const_cast<void*>(reinterpret_cast<const void*>(&_t16)), const_cast<void*>(reinterpret_cast<const void*>(&_t17)), const_cast<void*>(reinterpret_cast<const void*>(&_t18)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void QGCHilLink::hilGroundTruthChanged(quint64 _t1, float _t2, float _t3, float _t4, float _t5, float _t6, float _t7, double _t8, double _t9, double _t10, float _t11, float _t12, float _t13, float _t14, float _t15, float _t16, float _t17, float _t18)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)), const_cast<void*>(reinterpret_cast<const void*>(&_t6)), const_cast<void*>(reinterpret_cast<const void*>(&_t7)), const_cast<void*>(reinterpret_cast<const void*>(&_t8)), const_cast<void*>(reinterpret_cast<const void*>(&_t9)), const_cast<void*>(reinterpret_cast<const void*>(&_t10)), const_cast<void*>(reinterpret_cast<const void*>(&_t11)), const_cast<void*>(reinterpret_cast<const void*>(&_t12)), const_cast<void*>(reinterpret_cast<const void*>(&_t13)), const_cast<void*>(reinterpret_cast<const void*>(&_t14)), const_cast<void*>(reinterpret_cast<const void*>(&_t15)), const_cast<void*>(reinterpret_cast<const void*>(&_t16)), const_cast<void*>(reinterpret_cast<const void*>(&_t17)), const_cast<void*>(reinterpret_cast<const void*>(&_t18)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void QGCHilLink::sensorHilGpsChanged(quint64 _t1, double _t2, double _t3, double _t4, int _t5, float _t6, float _t7, float _t8, float _t9, float _t10, float _t11, float _t12, int _t13)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)), const_cast<void*>(reinterpret_cast<const void*>(&_t6)), const_cast<void*>(reinterpret_cast<const void*>(&_t7)), const_cast<void*>(reinterpret_cast<const void*>(&_t8)), const_cast<void*>(reinterpret_cast<const void*>(&_t9)), const_cast<void*>(reinterpret_cast<const void*>(&_t10)), const_cast<void*>(reinterpret_cast<const void*>(&_t11)), const_cast<void*>(reinterpret_cast<const void*>(&_t12)), const_cast<void*>(reinterpret_cast<const void*>(&_t13)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void QGCHilLink::sensorHilRawImuChanged(quint64 _t1, float _t2, float _t3, float _t4, float _t5, float _t6, float _t7, float _t8, float _t9, float _t10, float _t11, float _t12, float _t13, float _t14, quint32 _t15)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)), const_cast<void*>(reinterpret_cast<const void*>(&_t6)), const_cast<void*>(reinterpret_cast<const void*>(&_t7)), const_cast<void*>(reinterpret_cast<const void*>(&_t8)), const_cast<void*>(reinterpret_cast<const void*>(&_t9)), const_cast<void*>(reinterpret_cast<const void*>(&_t10)), const_cast<void*>(reinterpret_cast<const void*>(&_t11)), const_cast<void*>(reinterpret_cast<const void*>(&_t12)), const_cast<void*>(reinterpret_cast<const void*>(&_t13)), const_cast<void*>(reinterpret_cast<const void*>(&_t14)), const_cast<void*>(reinterpret_cast<const void*>(&_t15)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void QGCHilLink::remoteChanged(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void QGCHilLink::statusMessage(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void QGCHilLink::airframeChanged(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void QGCHilLink::versionChanged(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void QGCHilLink::versionChanged(const int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void QGCHilLink::sensorHilChanged(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}
QT_END_MOC_NAMESPACE
