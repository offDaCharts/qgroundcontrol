/****************************************************************************
** Meta object code from reading C++ file 'FailSafeConfig.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/ui/configuration/FailSafeConfig.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'FailSafeConfig.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_FailSafeConfig[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      20,   16,   15,   15, 0x08,
      59,   48,   15,   15, 0x08,
     146,  101,   15,   15, 0x08,
     230,  224,   15,   15, 0x08,
     284,  250,   15,   15, 0x08,
     335,  327,   15,   15, 0x08,
     360,  327,   15,   15, 0x08,
     380,  327,   15,   15, 0x08,
     401,  327,   15,   15, 0x08,
     418,  327,   15,   15, 0x08,
     446,  327,   15,   15, 0x08,
     468,   15,   15,   15, 0x08,
     495,  489,   15,   15, 0x08,
     536,  524,   15,   15, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_FailSafeConfig[] = {
    "FailSafeConfig\0\0uas\0activeUASSet(UASInterface*)\0"
    "chan,value\0remoteControlChannelRawChanges(int,float)\0"
    "time,act1,act2,act3,act4,act5,act6,act7,act8\0"
    "hilActuatorsChanged(uint64_t,float,float,float,float,float,float,float"
    ",float)\0"
    "armed\0armingChanged(bool)\0"
    "uas,component,parameterName,value\0"
    "parameterChanged(int,int,QString,QVariant)\0"
    "checked\0batteryFailChecked(bool)\0"
    "fsLongClicked(bool)\0fsShortClicked(bool)\0"
    "gcsChecked(bool)\0throttleActionChecked(bool)\0"
    "throttleChecked(bool)\0throttlePwmChanged()\0"
    "index\0throttleFailSafeChanged(int)\0"
    "uas,fixtype\0gpsStatusChanged(UASInterface*,int)\0"
};

void FailSafeConfig::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        FailSafeConfig *_t = static_cast<FailSafeConfig *>(_o);
        switch (_id) {
        case 0: _t->activeUASSet((*reinterpret_cast< UASInterface*(*)>(_a[1]))); break;
        case 1: _t->remoteControlChannelRawChanges((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2]))); break;
        case 2: _t->hilActuatorsChanged((*reinterpret_cast< uint64_t(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3])),(*reinterpret_cast< float(*)>(_a[4])),(*reinterpret_cast< float(*)>(_a[5])),(*reinterpret_cast< float(*)>(_a[6])),(*reinterpret_cast< float(*)>(_a[7])),(*reinterpret_cast< float(*)>(_a[8])),(*reinterpret_cast< float(*)>(_a[9]))); break;
        case 3: _t->armingChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->parameterChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< QVariant(*)>(_a[4]))); break;
        case 5: _t->batteryFailChecked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->fsLongClicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->fsShortClicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->gcsChecked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: _t->throttleActionChecked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 10: _t->throttleChecked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 11: _t->throttlePwmChanged(); break;
        case 12: _t->throttleFailSafeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 13: _t->gpsStatusChanged((*reinterpret_cast< UASInterface*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData FailSafeConfig::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject FailSafeConfig::staticMetaObject = {
    { &AP2ConfigWidget::staticMetaObject, qt_meta_stringdata_FailSafeConfig,
      qt_meta_data_FailSafeConfig, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &FailSafeConfig::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *FailSafeConfig::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *FailSafeConfig::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_FailSafeConfig))
        return static_cast<void*>(const_cast< FailSafeConfig*>(this));
    return AP2ConfigWidget::qt_metacast(_clname);
}

int FailSafeConfig::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AP2ConfigWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
