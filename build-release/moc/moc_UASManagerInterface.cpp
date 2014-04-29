/****************************************************************************
** Meta object code from reading C++ file 'UASManagerInterface.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/uas/UASManagerInterface.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'UASManagerInterface.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_UASManagerInterface[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      25,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       8,       // signalCount

 // signals: signature, parameters, type, tag, flags
      25,   21,   20,   20, 0x05,
      51,   21,   20,   20, 0x05,
      77,   21,   20,   20, 0x05,
     114,  105,   20,   20, 0x05,
     142,  132,   20,   20, 0x05,
     180,  169,   20,   20, 0x05,
     239,  223,   20,   20, 0x05,
     284,  272,   20,   20, 0x05,

 // slots: signature, parameters, type, tag, flags
     326,   21,   20,   20, 0x0a,
     352,  348,   20,   20, 0x0a,
     377,   21,   20,   20, 0x0a,
     410,   20,  405,   20, 0x0a,
     428,   20,  405,   20, 0x0a,
     444,   20,  405,   20, 0x0a,
     464,   20,  405,   20, 0x0a,
     482,   20,  405,   20, 0x0a,
     498,   20,  405,   20, 0x0a,
     514,   20,   20,   20, 0x0a,
     535,   20,  405,   20, 0x0a,
     555,  272,  405,   20, 0x0a,
     593,  272,  405,   20, 0x0a,
     658,  640,   20,   20, 0x0a,
     742,  726,   20,   20, 0x0a,
     791,   20,   20,   20, 0x0a,
     806,   20,   20,   20, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_UASManagerInterface[] = {
    "UASManagerInterface\0\0UAS\0"
    "UASCreated(UASInterface*)\0"
    "UASDeleted(UASInterface*)\0"
    "activeUASSet(UASInterface*)\0systemId\0"
    "activeUASSet(int)\0listIndex\0"
    "activeUASSetListIndex(int)\0UAS,active\0"
    "activeUASStatusChanged(UASInterface*,bool)\0"
    "systemId,active\0activeUASStatusChanged(int,bool)\0"
    "lat,lon,alt\0homePositionChanged(double,double,double)\0"
    "addUAS(UASInterface*)\0uas\0"
    "removeUAS(UASInterface*)\0"
    "setActiveUAS(UASInterface*)\0bool\0"
    "launchActiveUAS()\0haltActiveUAS()\0"
    "continueActiveUAS()\0returnActiveUAS()\0"
    "stopActiveUAS()\0killActiveUAS()\0"
    "configureActiveUAS()\0shutdownActiveUAS()\0"
    "setHomePosition(double,double,double)\0"
    "setHomePositionAndNotify(double,double,double)\0"
    "x1,y1,z1,x2,y2,z2\0"
    "setLocalNEDSafetyBorders(double,double,double,double,double,double)\0"
    "uav,lat,lon,alt\0"
    "uavChangedHomePosition(int,double,double,double)\0"
    "loadSettings()\0storeSettings()\0"
};

void UASManagerInterface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        UASManagerInterface *_t = static_cast<UASManagerInterface *>(_o);
        switch (_id) {
        case 0: _t->UASCreated((*reinterpret_cast< UASInterface*(*)>(_a[1]))); break;
        case 1: _t->UASDeleted((*reinterpret_cast< UASInterface*(*)>(_a[1]))); break;
        case 2: _t->activeUASSet((*reinterpret_cast< UASInterface*(*)>(_a[1]))); break;
        case 3: _t->activeUASSet((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->activeUASSetListIndex((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->activeUASStatusChanged((*reinterpret_cast< UASInterface*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 6: _t->activeUASStatusChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 7: _t->homePositionChanged((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3]))); break;
        case 8: _t->addUAS((*reinterpret_cast< UASInterface*(*)>(_a[1]))); break;
        case 9: _t->removeUAS((*reinterpret_cast< UASInterface*(*)>(_a[1]))); break;
        case 10: _t->setActiveUAS((*reinterpret_cast< UASInterface*(*)>(_a[1]))); break;
        case 11: { bool _r = _t->launchActiveUAS();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 12: { bool _r = _t->haltActiveUAS();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 13: { bool _r = _t->continueActiveUAS();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 14: { bool _r = _t->returnActiveUAS();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 15: { bool _r = _t->stopActiveUAS();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 16: { bool _r = _t->killActiveUAS();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 17: _t->configureActiveUAS(); break;
        case 18: { bool _r = _t->shutdownActiveUAS();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 19: { bool _r = _t->setHomePosition((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 20: { bool _r = _t->setHomePositionAndNotify((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 21: _t->setLocalNEDSafetyBorders((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4])),(*reinterpret_cast< double(*)>(_a[5])),(*reinterpret_cast< double(*)>(_a[6]))); break;
        case 22: _t->uavChangedHomePosition((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4]))); break;
        case 23: _t->loadSettings(); break;
        case 24: _t->storeSettings(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData UASManagerInterface::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UASManagerInterface::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_UASManagerInterface,
      qt_meta_data_UASManagerInterface, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UASManagerInterface::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UASManagerInterface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UASManagerInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UASManagerInterface))
        return static_cast<void*>(const_cast< UASManagerInterface*>(this));
    return QObject::qt_metacast(_clname);
}

int UASManagerInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 25)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 25;
    }
    return _id;
}

// SIGNAL 0
void UASManagerInterface::UASCreated(UASInterface * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void UASManagerInterface::UASDeleted(UASInterface * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void UASManagerInterface::activeUASSet(UASInterface * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void UASManagerInterface::activeUASSet(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void UASManagerInterface::activeUASSetListIndex(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void UASManagerInterface::activeUASStatusChanged(UASInterface * _t1, bool _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void UASManagerInterface::activeUASStatusChanged(int _t1, bool _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void UASManagerInterface::homePositionChanged(double _t1, double _t2, double _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}
QT_END_MOC_NAMESPACE
