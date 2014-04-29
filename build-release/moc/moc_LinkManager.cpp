/****************************************************************************
** Meta object code from reading C++ file 'LinkManager.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/comm/LinkManager.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'LinkManager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_LinkManager[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      18,   13,   12,   12, 0x05,
      42,   13,   12,   12, 0x05,

 // slots: signature, parameters, type, tag, flags
      70,   13,   12,   12, 0x0a,
     104,   90,   12,   12, 0x0a,
     155,  151,   12,   12, 0x0a,
     180,   13,  175,   12, 0x0a,
     207,   12,  175,   12, 0x0a,
     220,   13,  175,   12, 0x0a,
     248,   12,  175,   12, 0x0a,
     264,   13,  175,   12, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_LinkManager[] = {
    "LinkManager\0\0link\0newLink(LinkInterface*)\0"
    "linkRemoved(LinkInterface*)\0"
    "add(LinkInterface*)\0link,protocol\0"
    "addProtocol(LinkInterface*,ProtocolInterface*)\0"
    "obj\0removeObj(QObject*)\0bool\0"
    "removeLink(LinkInterface*)\0connectAll()\0"
    "connectLink(LinkInterface*)\0disconnectAll()\0"
    "disconnectLink(LinkInterface*)\0"
};

void LinkManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        LinkManager *_t = static_cast<LinkManager *>(_o);
        switch (_id) {
        case 0: _t->newLink((*reinterpret_cast< LinkInterface*(*)>(_a[1]))); break;
        case 1: _t->linkRemoved((*reinterpret_cast< LinkInterface*(*)>(_a[1]))); break;
        case 2: _t->add((*reinterpret_cast< LinkInterface*(*)>(_a[1]))); break;
        case 3: _t->addProtocol((*reinterpret_cast< LinkInterface*(*)>(_a[1])),(*reinterpret_cast< ProtocolInterface*(*)>(_a[2]))); break;
        case 4: _t->removeObj((*reinterpret_cast< QObject*(*)>(_a[1]))); break;
        case 5: { bool _r = _t->removeLink((*reinterpret_cast< LinkInterface*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 6: { bool _r = _t->connectAll();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 7: { bool _r = _t->connectLink((*reinterpret_cast< LinkInterface*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 8: { bool _r = _t->disconnectAll();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 9: { bool _r = _t->disconnectLink((*reinterpret_cast< LinkInterface*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData LinkManager::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject LinkManager::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_LinkManager,
      qt_meta_data_LinkManager, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &LinkManager::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *LinkManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *LinkManager::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_LinkManager))
        return static_cast<void*>(const_cast< LinkManager*>(this));
    return QObject::qt_metacast(_clname);
}

int LinkManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
void LinkManager::newLink(LinkInterface * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void LinkManager::linkRemoved(LinkInterface * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
