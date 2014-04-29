/****************************************************************************
** Meta object code from reading C++ file 'SerialLinkInterface.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/comm/SerialLinkInterface.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SerialLinkInterface.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_SerialLinkInterface[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      35,   26,   21,   20, 0x0a,
      61,   56,   21,   20, 0x0a,
      88,   78,   21,   20, 0x0a,
     114,  109,   21,   20, 0x0a,
     138,  131,   21,   20, 0x0a,
     166,  157,   21,   20, 0x0a,
     196,  187,   21,   20, 0x0a,
     217,   20,   20,   20, 0x0a,
     232,   20,   20,   20, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_SerialLinkInterface[] = {
    "SerialLinkInterface\0\0bool\0portName\0"
    "setPortName(QString)\0rate\0setBaudRate(int)\0"
    "rateIndex\0setBaudRateType(int)\0flow\0"
    "setFlowType(int)\0parity\0setParityType(int)\0"
    "dataBits\0setDataBitsType(int)\0stopBits\0"
    "setStopBitsType(int)\0loadSettings()\0"
    "writeSettings()\0"
};

void SerialLinkInterface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        SerialLinkInterface *_t = static_cast<SerialLinkInterface *>(_o);
        switch (_id) {
        case 0: { bool _r = _t->setPortName((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 1: { bool _r = _t->setBaudRate((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 2: { bool _r = _t->setBaudRateType((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 3: { bool _r = _t->setFlowType((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 4: { bool _r = _t->setParityType((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 5: { bool _r = _t->setDataBitsType((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 6: { bool _r = _t->setStopBitsType((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 7: _t->loadSettings(); break;
        case 8: _t->writeSettings(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData SerialLinkInterface::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject SerialLinkInterface::staticMetaObject = {
    { &LinkInterface::staticMetaObject, qt_meta_stringdata_SerialLinkInterface,
      qt_meta_data_SerialLinkInterface, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &SerialLinkInterface::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *SerialLinkInterface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *SerialLinkInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SerialLinkInterface))
        return static_cast<void*>(const_cast< SerialLinkInterface*>(this));
    return LinkInterface::qt_metacast(_clname);
}

int SerialLinkInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = LinkInterface::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
