/****************************************************************************
** Meta object code from reading C++ file 'SerialLink.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/comm/SerialLink.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SerialLink.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_SerialLink[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      17,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      12,   11,   11,   11, 0x05,
      39,   11,   11,   11, 0x05,

 // slots: signature, parameters, type, tag, flags
      72,   63,   58,   11, 0x0a,
      98,   93,   58,   11, 0x0a,
     124,  115,   58,   11, 0x0a,
     150,  141,   58,   11, 0x0a,
     167,   93,   58,   11, 0x0a,
     204,  194,   58,   11, 0x0a,
     230,  225,   58,   11, 0x0a,
     254,  247,   58,   11, 0x0a,
     273,  115,   58,   11, 0x0a,
     294,  141,   58,   11, 0x0a,
     315,   11,   11,   11, 0x0a,
     339,  327,   11,   11, 0x0a,
     370,   11,   58,   11, 0x0a,
     380,   11,   58,   11, 0x0a,
     399,  393,   11,   11, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_SerialLink[] = {
    "SerialLink\0\0updateLink(LinkInterface*)\0"
    "aboutToCloseFlag()\0bool\0portName\0"
    "setPortName(QString)\0rate\0setBaudRate(int)\0"
    "dataBits\0setDataBits(int)\0stopBits\0"
    "setStopBits(int)\0setBaudRateString(QString)\0"
    "rateIndex\0setBaudRateType(int)\0flow\0"
    "setFlowType(int)\0parity\0setParityType(int)\0"
    "setDataBitsType(int)\0setStopBitsType(int)\0"
    "readBytes()\0data,length\0"
    "writeBytes(const char*,qint64)\0connect()\0"
    "disconnect()\0error\0"
    "linkError(QSerialPort::SerialPortError)\0"
};

void SerialLink::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        SerialLink *_t = static_cast<SerialLink *>(_o);
        switch (_id) {
        case 0: _t->updateLink((*reinterpret_cast< LinkInterface*(*)>(_a[1]))); break;
        case 1: _t->aboutToCloseFlag(); break;
        case 2: { bool _r = _t->setPortName((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 3: { bool _r = _t->setBaudRate((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 4: { bool _r = _t->setDataBits((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 5: { bool _r = _t->setStopBits((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 6: { bool _r = _t->setBaudRateString((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 7: { bool _r = _t->setBaudRateType((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 8: { bool _r = _t->setFlowType((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 9: { bool _r = _t->setParityType((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 10: { bool _r = _t->setDataBitsType((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 11: { bool _r = _t->setStopBitsType((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 12: _t->readBytes(); break;
        case 13: _t->writeBytes((*reinterpret_cast< const char*(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2]))); break;
        case 14: { bool _r = _t->connect();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 15: { bool _r = _t->disconnect();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 16: _t->linkError((*reinterpret_cast< QSerialPort::SerialPortError(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData SerialLink::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject SerialLink::staticMetaObject = {
    { &SerialLinkInterface::staticMetaObject, qt_meta_stringdata_SerialLink,
      qt_meta_data_SerialLink, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &SerialLink::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *SerialLink::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *SerialLink::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SerialLink))
        return static_cast<void*>(const_cast< SerialLink*>(this));
    return SerialLinkInterface::qt_metacast(_clname);
}

int SerialLink::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = SerialLinkInterface::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    }
    return _id;
}

// SIGNAL 0
void SerialLink::updateLink(LinkInterface * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void SerialLink::aboutToCloseFlag()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}
QT_END_MOC_NAMESPACE
