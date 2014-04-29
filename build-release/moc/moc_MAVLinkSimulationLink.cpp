/****************************************************************************
** Meta object code from reading C++ file 'MAVLinkSimulationLink.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/comm/MAVLinkSimulationLink.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'MAVLinkSimulationLink.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MAVLinkSimulationLink[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      46,   23,   22,   22, 0x05,
      95,   87,   22,   22, 0x05,

 // slots: signature, parameters, type, tag, flags
     140,  130,   22,   22, 0x0a,
     171,   22,   22,   22, 0x0a,
     183,   22,   22,   22, 0x0a,
     207,  199,  194,   22, 0x0a,
     225,   22,   22,   22, 0x0a,
     243,  239,   22,   22, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_MAVLinkSimulationLink[] = {
    "MAVLinkSimulationLink\0\0uasId,curve,value,usec\0"
    "valueChanged(int,QString,double,quint64)\0"
    "message\0messageReceived(mavlink_message_t)\0"
    "data,size\0writeBytes(const char*,qint64)\0"
    "readBytes()\0mainloop()\0bool\0connect\0"
    "connectLink(bool)\0connectLink()\0msg\0"
    "sendMAVLinkMessage(const mavlink_message_t*)\0"
};

void MAVLinkSimulationLink::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        MAVLinkSimulationLink *_t = static_cast<MAVLinkSimulationLink *>(_o);
        switch (_id) {
        case 0: _t->valueChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< quint64(*)>(_a[4]))); break;
        case 1: _t->messageReceived((*reinterpret_cast< const mavlink_message_t(*)>(_a[1]))); break;
        case 2: _t->writeBytes((*reinterpret_cast< const char*(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2]))); break;
        case 3: _t->readBytes(); break;
        case 4: _t->mainloop(); break;
        case 5: { bool _r = _t->connectLink((*reinterpret_cast< bool(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 6: _t->connectLink(); break;
        case 7: _t->sendMAVLinkMessage((*reinterpret_cast< const mavlink_message_t*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData MAVLinkSimulationLink::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject MAVLinkSimulationLink::staticMetaObject = {
    { &LinkInterface::staticMetaObject, qt_meta_stringdata_MAVLinkSimulationLink,
      qt_meta_data_MAVLinkSimulationLink, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MAVLinkSimulationLink::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MAVLinkSimulationLink::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MAVLinkSimulationLink::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MAVLinkSimulationLink))
        return static_cast<void*>(const_cast< MAVLinkSimulationLink*>(this));
    return LinkInterface::qt_metacast(_clname);
}

int MAVLinkSimulationLink::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = LinkInterface::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void MAVLinkSimulationLink::valueChanged(int _t1, QString _t2, double _t3, quint64 _t4)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void MAVLinkSimulationLink::messageReceived(const mavlink_message_t & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
