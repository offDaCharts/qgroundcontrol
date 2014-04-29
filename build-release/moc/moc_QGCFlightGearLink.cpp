/****************************************************************************
** Meta object code from reading C++ file 'QGCFlightGearLink.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/comm/QGCFlightGearLink.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QGCFlightGearLink.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QGCFlightGearLink[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      18,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      24,   19,   18,   18, 0x0a,
      42,   37,   18,   18, 0x0a,
     135,   65,   18,   18, 0x0a,
     245,  200,   18,   18, 0x0a,
     323,  319,   18,   18, 0x0a,
     368,  360,   18,   18, 0x0a,
     397,  388,   18,   18, 0x0a,
     428,  421,   18,   18, 0x0a,
     450,   18,   18,   18, 0x0a,
     474,  462,   18,   18, 0x0a,
     510,   18,  505,   18, 0x0a,
     530,   18,  505,   18, 0x0a,
     553,   18,   18,   18, 0x0a,
     576,   18,   18,   18, 0x0a,
     598,   18,   18,   18, 0x0a,
     616,   18,   18,   18, 0x0a,
     650,  633,   18,   18, 0x0a,
     698,  679,   18,   18, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_QGCFlightGearLink[] = {
    "QGCFlightGearLink\0\0port\0setPort(int)\0"
    "host\0setRemoteHost(QString)\0"
    "time,rollAilerons,pitchElevator,yawRudder,throttle,systemMode,navMode\0"
    "updateControls(uint64_t,float,float,float,float,uint8_t,uint8_t)\0"
    "time,act1,act2,act3,act4,act5,act6,act7,act8\0"
    "updateActuators(uint64_t,float,float,float,float,float,float,float,flo"
    "at)\0"
    "err\0processError(QProcess::ProcessError)\0"
    "version\0setVersion(QString)\0airframe\0"
    "selectAirframe(QString)\0enable\0"
    "enableSensorHIL(bool)\0readBytes()\0"
    "data,length\0writeBytes(const char*,qint64)\0"
    "bool\0connectSimulation()\0"
    "disconnectSimulation()\0printTerraSyncOutput()\0"
    "printTerraSyncError()\0printFgfsOutput()\0"
    "printFgfsError()\0startupArguments\0"
    "setStartupArguments(QString)\0"
    "barometerOffsetkPa\0setBarometerOffset(float)\0"
};

void QGCFlightGearLink::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QGCFlightGearLink *_t = static_cast<QGCFlightGearLink *>(_o);
        switch (_id) {
        case 0: _t->setPort((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->setRemoteHost((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->updateControls((*reinterpret_cast< uint64_t(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3])),(*reinterpret_cast< float(*)>(_a[4])),(*reinterpret_cast< float(*)>(_a[5])),(*reinterpret_cast< uint8_t(*)>(_a[6])),(*reinterpret_cast< uint8_t(*)>(_a[7]))); break;
        case 3: _t->updateActuators((*reinterpret_cast< uint64_t(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3])),(*reinterpret_cast< float(*)>(_a[4])),(*reinterpret_cast< float(*)>(_a[5])),(*reinterpret_cast< float(*)>(_a[6])),(*reinterpret_cast< float(*)>(_a[7])),(*reinterpret_cast< float(*)>(_a[8])),(*reinterpret_cast< float(*)>(_a[9]))); break;
        case 4: _t->processError((*reinterpret_cast< QProcess::ProcessError(*)>(_a[1]))); break;
        case 5: _t->setVersion((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->selectAirframe((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->enableSensorHIL((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->readBytes(); break;
        case 9: _t->writeBytes((*reinterpret_cast< const char*(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2]))); break;
        case 10: { bool _r = _t->connectSimulation();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 11: { bool _r = _t->disconnectSimulation();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 12: _t->printTerraSyncOutput(); break;
        case 13: _t->printTerraSyncError(); break;
        case 14: _t->printFgfsOutput(); break;
        case 15: _t->printFgfsError(); break;
        case 16: _t->setStartupArguments((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 17: _t->setBarometerOffset((*reinterpret_cast< float(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QGCFlightGearLink::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QGCFlightGearLink::staticMetaObject = {
    { &QGCHilLink::staticMetaObject, qt_meta_stringdata_QGCFlightGearLink,
      qt_meta_data_QGCFlightGearLink, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QGCFlightGearLink::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QGCFlightGearLink::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QGCFlightGearLink::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QGCFlightGearLink))
        return static_cast<void*>(const_cast< QGCFlightGearLink*>(this));
    return QGCHilLink::qt_metacast(_clname);
}

int QGCFlightGearLink::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGCHilLink::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 18)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 18;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
