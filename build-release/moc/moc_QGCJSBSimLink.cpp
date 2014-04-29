/****************************************************************************
** Meta object code from reading C++ file 'QGCJSBSimLink.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/comm/QGCJSBSimLink.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QGCJSBSimLink.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QGCJSBSimLink[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      20,   15,   14,   14, 0x0a,
      38,   33,   14,   14, 0x0a,
     131,   61,   14,   14, 0x0a,
     241,  196,   14,   14, 0x0a,
     319,  315,   14,   14, 0x0a,
     364,  356,   14,   14, 0x0a,
     393,  384,   14,   14, 0x0a,
     424,  417,   14,   14, 0x0a,
     446,   14,   14,   14, 0x0a,
     470,  458,   14,   14, 0x0a,
     506,   14,  501,   14, 0x0a,
     526,   14,  501,   14, 0x0a,
     566,  549,   14,   14, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_QGCJSBSimLink[] = {
    "QGCJSBSimLink\0\0port\0setPort(int)\0host\0"
    "setRemoteHost(QString)\0"
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
    "disconnectSimulation()\0startupArguments\0"
    "setStartupArguments(QString)\0"
};

void QGCJSBSimLink::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QGCJSBSimLink *_t = static_cast<QGCJSBSimLink *>(_o);
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
        case 12: _t->setStartupArguments((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QGCJSBSimLink::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QGCJSBSimLink::staticMetaObject = {
    { &QGCHilLink::staticMetaObject, qt_meta_stringdata_QGCJSBSimLink,
      qt_meta_data_QGCJSBSimLink, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QGCJSBSimLink::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QGCJSBSimLink::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QGCJSBSimLink::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QGCJSBSimLink))
        return static_cast<void*>(const_cast< QGCJSBSimLink*>(this));
    return QGCHilLink::qt_metacast(_clname);
}

int QGCJSBSimLink::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGCHilLink::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
