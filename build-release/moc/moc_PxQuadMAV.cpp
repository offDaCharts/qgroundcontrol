/****************************************************************************
** Meta object code from reading C++ file 'PxQuadMAV.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/uas/PxQuadMAV.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'PxQuadMAV.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_PxQuadMAV[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: signature, parameters, type, tag, flags
      44,   11,   10,   10, 0x05,
     128,   75,   10,   10, 0x05,
     231,  177,   10,   10, 0x05,

 // slots: signature, parameters, type, tag, flags
     289,  276,   10,   10, 0x0a,
     367,  338,   10,   10, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_PxQuadMAV[] = {
    "PxQuadMAV\0\0systemId,watchdogId,processCount\0"
    "watchdogReceived(int,int,uint)\0"
    "systemId,watchdogId,processId,name,arguments,timeout\0"
    "processReceived(int,int,int,QString,QString,int)\0"
    "systemId,watchdogId,processId,state,muted,crashed,pid\0"
    "processChanged(int,int,int,int,bool,int,int)\0"
    "link,message\0"
    "receiveMessage(LinkInterface*,mavlink_message_t)\0"
    "watchdogId,processId,command\0"
    "sendProcessCommand(int,int,uint)\0"
};

void PxQuadMAV::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PxQuadMAV *_t = static_cast<PxQuadMAV *>(_o);
        switch (_id) {
        case 0: _t->watchdogReceived((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< uint(*)>(_a[3]))); break;
        case 1: _t->processReceived((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< QString(*)>(_a[4])),(*reinterpret_cast< QString(*)>(_a[5])),(*reinterpret_cast< int(*)>(_a[6]))); break;
        case 2: _t->processChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])),(*reinterpret_cast< bool(*)>(_a[5])),(*reinterpret_cast< int(*)>(_a[6])),(*reinterpret_cast< int(*)>(_a[7]))); break;
        case 3: _t->receiveMessage((*reinterpret_cast< LinkInterface*(*)>(_a[1])),(*reinterpret_cast< mavlink_message_t(*)>(_a[2]))); break;
        case 4: _t->sendProcessCommand((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< uint(*)>(_a[3]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PxQuadMAV::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PxQuadMAV::staticMetaObject = {
    { &UAS::staticMetaObject, qt_meta_stringdata_PxQuadMAV,
      qt_meta_data_PxQuadMAV, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PxQuadMAV::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PxQuadMAV::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PxQuadMAV::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PxQuadMAV))
        return static_cast<void*>(const_cast< PxQuadMAV*>(this));
    if (!strcmp(_clname, "org.qgroundcontrol/1.0"))
        return static_cast< UASInterface*>(const_cast< PxQuadMAV*>(this));
    return UAS::qt_metacast(_clname);
}

int PxQuadMAV::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = UAS::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void PxQuadMAV::watchdogReceived(int _t1, int _t2, unsigned int _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void PxQuadMAV::processReceived(int _t1, int _t2, int _t3, QString _t4, QString _t5, int _t6)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)), const_cast<void*>(reinterpret_cast<const void*>(&_t6)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void PxQuadMAV::processChanged(int _t1, int _t2, int _t3, int _t4, bool _t5, int _t6, int _t7)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)), const_cast<void*>(reinterpret_cast<const void*>(&_t6)), const_cast<void*>(reinterpret_cast<const void*>(&_t7)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE
