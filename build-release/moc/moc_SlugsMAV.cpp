/****************************************************************************
** Meta object code from reading C++ file 'SlugsMAV.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/uas/SlugsMAV.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SlugsMAV.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_SlugsMAV[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      24,   10,    9,    9, 0x05,
      73,   59,    9,    9, 0x05,

 // slots: signature, parameters, type, tag, flags
     120,  107,    9,    9, 0x0a,
     169,    9,    9,    9, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_SlugsMAV[] = {
    "SlugsMAV\0\0uasId,rawData\0"
    "slugsRawImu(int,mavlink_raw_imu_t)\0"
    "uasId,cog,sog\0slugsGPSCogSog(int,double,double)\0"
    "link,message\0"
    "receiveMessage(LinkInterface*,mavlink_message_t)\0"
    "emitSignals()\0"
};

void SlugsMAV::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        SlugsMAV *_t = static_cast<SlugsMAV *>(_o);
        switch (_id) {
        case 0: _t->slugsRawImu((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const mavlink_raw_imu_t(*)>(_a[2]))); break;
        case 1: _t->slugsGPSCogSog((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3]))); break;
        case 2: _t->receiveMessage((*reinterpret_cast< LinkInterface*(*)>(_a[1])),(*reinterpret_cast< mavlink_message_t(*)>(_a[2]))); break;
        case 3: _t->emitSignals(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData SlugsMAV::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject SlugsMAV::staticMetaObject = {
    { &UAS::staticMetaObject, qt_meta_stringdata_SlugsMAV,
      qt_meta_data_SlugsMAV, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &SlugsMAV::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *SlugsMAV::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *SlugsMAV::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SlugsMAV))
        return static_cast<void*>(const_cast< SlugsMAV*>(this));
    if (!strcmp(_clname, "org.qgroundcontrol/1.0"))
        return static_cast< UASInterface*>(const_cast< SlugsMAV*>(this));
    return UAS::qt_metacast(_clname);
}

int SlugsMAV::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = UAS::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void SlugsMAV::slugsRawImu(int _t1, const mavlink_raw_imu_t & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void SlugsMAV::slugsGPSCogSog(int _t1, double _t2, double _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
