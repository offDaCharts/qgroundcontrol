/****************************************************************************
** Meta object code from reading C++ file 'MAVLinkProtocol.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/comm/MAVLinkProtocol.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'MAVLinkProtocol.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MAVLinkProtocol[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      36,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      14,       // signalCount

 // signals: signature, parameters, type, tag, flags
      30,   17,   16,   16, 0x05,
      91,   80,   16,   16, 0x05,
     122,  114,   16,   16, 0x05,
     143,  114,   16,   16, 0x05,
     173,  169,   16,   16, 0x05,
     197,  114,   16,   16, 0x05,
     215,  114,   16,   16, 0x05,
     255,  241,   16,   16, 0x05,
     303,  294,   16,   16, 0x05,
     324,  114,   16,   16, 0x05,
     351,  348,   16,   16, 0x05,
     390,  348,   16,   16, 0x05,
     422,  114,   16,   16, 0x05,
     447,  348,   16,   16, 0x05,

 // slots: signature, parameters, type, tag, flags
     494,  487,   16,   16, 0x0a,
     544,  534,   16,   16, 0x0a,
     576,  568,   16,   16, 0x0a,
     607,   17,   16,   16, 0x0a,
     687,  653,   16,   16, 0x0a,
     752,  747,   16,   16, 0x0a,
     777,  774,   16,   16, 0x0a,
     794,  114,   16,   16, 0x0a,
     817,  114,   16,   16, 0x0a,
     837,  114,   16,   16, 0x0a,
     862,  114,   16,   16, 0x0a,
     885,  114,   16,   16, 0x0a,
     909,  348,   16,   16, 0x0a,
     944,  348,   16,   16, 0x0a,
     972,  348,   16,   16, 0x0a,
    1017, 1008,   16,   16, 0x0a,
    1041,  114,   16,   16, 0x0a,
    1073, 1066,   16,   16, 0x0a,
    1090,  169,   16,   16, 0x0a,
    1110,   16,   16,   16, 0x0a,
    1126,   16,   16,   16, 0x0a,
    1141,   16,   16,   16, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_MAVLinkProtocol[] = {
    "MAVLinkProtocol\0\0link,message\0"
    "messageReceived(LinkInterface*,mavlink_message_t)\0"
    "heartbeats\0heartbeatChanged(bool)\0"
    "enabled\0loggingChanged(bool)\0"
    "multiplexingChanged(bool)\0key\0"
    "authKeyChanged(QString)\0authChanged(bool)\0"
    "versionCheckChanged(bool)\0title,message\0"
    "protocolStatusMessage(QString,QString)\0"
    "systemId\0systemIdChanged(int)\0"
    "paramGuardChanged(bool)\0ms\0"
    "paramRetransmissionTimeoutChanged(int)\0"
    "paramRewriteTimeoutChanged(int)\0"
    "actionGuardChanged(bool)\0"
    "actionRetransmissionTimeoutChanged(int)\0"
    "link,b\0receiveBytes(LinkInterface*,QByteArray)\0"
    "connected\0linkStatusChanged(bool)\0"
    "message\0sendMessage(mavlink_message_t)\0"
    "sendMessage(LinkInterface*,mavlink_message_t)\0"
    "link,message,systemid,componentid\0"
    "sendMessage(LinkInterface*,mavlink_message_t,quint8,quint8)\0"
    "rate\0setHeartbeatRate(int)\0id\0"
    "setSystemId(int)\0enableHeartbeats(bool)\0"
    "enableLogging(bool)\0enableMultiplexing(bool)\0"
    "enableParamGuard(bool)\0enableActionGuard(bool)\0"
    "setParamRetransmissionTimeout(int)\0"
    "setParamRewriteTimeout(int)\0"
    "setActionRetransmissionTimeout(int)\0"
    "filename\0setLogfileName(QString)\0"
    "enableVersionCheck(bool)\0enable\0"
    "enableAuth(bool)\0setAuthKey(QString)\0"
    "sendHeartbeat()\0loadSettings()\0"
    "storeSettings()\0"
};

void MAVLinkProtocol::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        MAVLinkProtocol *_t = static_cast<MAVLinkProtocol *>(_o);
        switch (_id) {
        case 0: _t->messageReceived((*reinterpret_cast< LinkInterface*(*)>(_a[1])),(*reinterpret_cast< mavlink_message_t(*)>(_a[2]))); break;
        case 1: _t->heartbeatChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->loggingChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->multiplexingChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->authKeyChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 5: _t->authChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->versionCheckChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->protocolStatusMessage((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 8: _t->systemIdChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->paramGuardChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 10: _t->paramRetransmissionTimeoutChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: _t->paramRewriteTimeoutChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 12: _t->actionGuardChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 13: _t->actionRetransmissionTimeoutChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 14: _t->receiveBytes((*reinterpret_cast< LinkInterface*(*)>(_a[1])),(*reinterpret_cast< QByteArray(*)>(_a[2]))); break;
        case 15: _t->linkStatusChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 16: _t->sendMessage((*reinterpret_cast< mavlink_message_t(*)>(_a[1]))); break;
        case 17: _t->sendMessage((*reinterpret_cast< LinkInterface*(*)>(_a[1])),(*reinterpret_cast< mavlink_message_t(*)>(_a[2]))); break;
        case 18: _t->sendMessage((*reinterpret_cast< LinkInterface*(*)>(_a[1])),(*reinterpret_cast< mavlink_message_t(*)>(_a[2])),(*reinterpret_cast< quint8(*)>(_a[3])),(*reinterpret_cast< quint8(*)>(_a[4]))); break;
        case 19: _t->setHeartbeatRate((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 20: _t->setSystemId((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 21: _t->enableHeartbeats((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 22: _t->enableLogging((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 23: _t->enableMultiplexing((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 24: _t->enableParamGuard((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 25: _t->enableActionGuard((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 26: _t->setParamRetransmissionTimeout((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 27: _t->setParamRewriteTimeout((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 28: _t->setActionRetransmissionTimeout((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 29: _t->setLogfileName((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 30: _t->enableVersionCheck((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 31: _t->enableAuth((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 32: _t->setAuthKey((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 33: _t->sendHeartbeat(); break;
        case 34: _t->loadSettings(); break;
        case 35: _t->storeSettings(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData MAVLinkProtocol::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject MAVLinkProtocol::staticMetaObject = {
    { &ProtocolInterface::staticMetaObject, qt_meta_stringdata_MAVLinkProtocol,
      qt_meta_data_MAVLinkProtocol, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MAVLinkProtocol::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MAVLinkProtocol::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MAVLinkProtocol::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MAVLinkProtocol))
        return static_cast<void*>(const_cast< MAVLinkProtocol*>(this));
    return ProtocolInterface::qt_metacast(_clname);
}

int MAVLinkProtocol::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ProtocolInterface::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 36)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 36;
    }
    return _id;
}

// SIGNAL 0
void MAVLinkProtocol::messageReceived(LinkInterface * _t1, mavlink_message_t _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void MAVLinkProtocol::heartbeatChanged(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void MAVLinkProtocol::loggingChanged(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void MAVLinkProtocol::multiplexingChanged(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void MAVLinkProtocol::authKeyChanged(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void MAVLinkProtocol::authChanged(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void MAVLinkProtocol::versionCheckChanged(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void MAVLinkProtocol::protocolStatusMessage(const QString & _t1, const QString & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void MAVLinkProtocol::systemIdChanged(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void MAVLinkProtocol::paramGuardChanged(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void MAVLinkProtocol::paramRetransmissionTimeoutChanged(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void MAVLinkProtocol::paramRewriteTimeoutChanged(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void MAVLinkProtocol::actionGuardChanged(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void MAVLinkProtocol::actionRetransmissionTimeoutChanged(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}
QT_END_MOC_NAMESPACE
