/****************************************************************************
** Meta object code from reading C++ file 'TCPLink.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/comm/TCPLink.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'TCPLink.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_TCPLink[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      21,    9,    8,    8, 0x0a,
      50,   45,    8,    8, 0x0a,
      75,   63,    8,    8, 0x0a,
     118,  106,    8,    8, 0x09,
     161,    8,    8,    8, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_TCPLink[] = {
    "TCPLink\0\0hostAddress\0setHostAddress(QString)\0"
    "port\0setPort(int)\0data,length\0"
    "writeBytes(const char*,qint64)\0"
    "socketError\0_socketError(QAbstractSocket::SocketError)\0"
    "readBytes()\0"
};

void TCPLink::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        TCPLink *_t = static_cast<TCPLink *>(_o);
        switch (_id) {
        case 0: _t->setHostAddress((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->setPort((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->writeBytes((*reinterpret_cast< const char*(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2]))); break;
        case 3: _t->_socketError((*reinterpret_cast< QAbstractSocket::SocketError(*)>(_a[1]))); break;
        case 4: _t->readBytes(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData TCPLink::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject TCPLink::staticMetaObject = {
    { &LinkInterface::staticMetaObject, qt_meta_stringdata_TCPLink,
      qt_meta_data_TCPLink, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &TCPLink::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *TCPLink::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *TCPLink::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_TCPLink))
        return static_cast<void*>(const_cast< TCPLink*>(this));
    return LinkInterface::qt_metacast(_clname);
}

int TCPLink::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = LinkInterface::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
