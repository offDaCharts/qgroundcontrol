/****************************************************************************
** Meta object code from reading C++ file 'UDPLink.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/comm/UDPLink.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'UDPLink.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_UDPLink[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      14,    9,    8,    8, 0x0a,
      44,   39,    8,    8, 0x0a,
      57,    9,    8,    8, 0x0a,
      74,    9,    8,    8, 0x0a,
      94,    8,    8,    8, 0x0a,
     118,  106,    8,    8, 0x0a,
     154,    8,  149,    8, 0x0a,
     164,    8,  149,    8, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_UDPLink[] = {
    "UDPLink\0\0host\0setAddress(QHostAddress)\0"
    "port\0setPort(int)\0addHost(QString)\0"
    "removeHost(QString)\0readBytes()\0"
    "data,length\0writeBytes(const char*,qint64)\0"
    "bool\0connect()\0disconnect()\0"
};

void UDPLink::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        UDPLink *_t = static_cast<UDPLink *>(_o);
        switch (_id) {
        case 0: _t->setAddress((*reinterpret_cast< QHostAddress(*)>(_a[1]))); break;
        case 1: _t->setPort((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->addHost((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->removeHost((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->readBytes(); break;
        case 5: _t->writeBytes((*reinterpret_cast< const char*(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2]))); break;
        case 6: { bool _r = _t->connect();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 7: { bool _r = _t->disconnect();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData UDPLink::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UDPLink::staticMetaObject = {
    { &LinkInterface::staticMetaObject, qt_meta_stringdata_UDPLink,
      qt_meta_data_UDPLink, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UDPLink::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UDPLink::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UDPLink::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UDPLink))
        return static_cast<void*>(const_cast< UDPLink*>(this));
    return LinkInterface::qt_metacast(_clname);
}

int UDPLink::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
QT_END_MOC_NAMESPACE
