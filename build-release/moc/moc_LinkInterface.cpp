/****************************************************************************
** Meta object code from reading C++ file 'LinkInterface.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/comm/LinkInterface.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'LinkInterface.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_LinkInterface[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       8,       // signalCount

 // signals: signature, parameters, type, tag, flags
      25,   15,   14,   14, 0x05,
      66,   14,   14,   14, 0x05,
      78,   14,   14,   14, 0x05,
     103,   93,   14,   14, 0x05,
     124,  119,   14,   14, 0x05,
     160,  145,   14,   14, 0x05,
     210,  196,   14,   14, 0x05,
     252,  247,   14,   14, 0x05,

 // slots: signature, parameters, type, tag, flags
     297,  284,   14,   14, 0x0a,
     328,   14,   14,   14, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_LinkInterface[] = {
    "LinkInterface\0\0link,data\0"
    "bytesReceived(LinkInterface*,QByteArray)\0"
    "connected()\0disconnected()\0connected\0"
    "connected(bool)\0name\0nameChanged(QString)\0"
    "linkname,error\0communicationError(QString,QString)\0"
    "linkname,text\0communicationUpdate(QString,QString)\0"
    "link\0deleteLink(LinkInterface*const)\0"
    "bytes,length\0writeBytes(const char*,qint64)\0"
    "readBytes()\0"
};

void LinkInterface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        LinkInterface *_t = static_cast<LinkInterface *>(_o);
        switch (_id) {
        case 0: _t->bytesReceived((*reinterpret_cast< LinkInterface*(*)>(_a[1])),(*reinterpret_cast< QByteArray(*)>(_a[2]))); break;
        case 1: _t->connected(); break;
        case 2: _t->disconnected(); break;
        case 3: _t->connected((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->nameChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 5: _t->communicationError((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 6: _t->communicationUpdate((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 7: _t->deleteLink((*reinterpret_cast< LinkInterface*const(*)>(_a[1]))); break;
        case 8: _t->writeBytes((*reinterpret_cast< const char*(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2]))); break;
        case 9: _t->readBytes(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData LinkInterface::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject LinkInterface::staticMetaObject = {
    { &QThread::staticMetaObject, qt_meta_stringdata_LinkInterface,
      qt_meta_data_LinkInterface, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &LinkInterface::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *LinkInterface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *LinkInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_LinkInterface))
        return static_cast<void*>(const_cast< LinkInterface*>(this));
    return QThread::qt_metacast(_clname);
}

int LinkInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void LinkInterface::bytesReceived(LinkInterface * _t1, QByteArray _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void LinkInterface::connected()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void LinkInterface::disconnected()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}

// SIGNAL 3
void LinkInterface::connected(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void LinkInterface::nameChanged(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void LinkInterface::communicationError(const QString & _t1, const QString & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void LinkInterface::communicationUpdate(const QString & _t1, const QString & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void LinkInterface::deleteLink(LinkInterface * const _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}
QT_END_MOC_NAMESPACE
