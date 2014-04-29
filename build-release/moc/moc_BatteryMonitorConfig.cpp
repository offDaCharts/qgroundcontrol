/****************************************************************************
** Meta object code from reading C++ file 'BatteryMonitorConfig.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/ui/configuration/BatteryMonitorConfig.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'BatteryMonitorConfig.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_BatteryMonitorConfig[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      56,   22,   21,   21, 0x08,
     105,   99,   21,   21, 0x08,
     137,   99,   21,   21, 0x08,
     168,   99,   21,   21, 0x08,
     199,   21,   21,   21, 0x08,
     216,   21,   21,   21, 0x08,
     233,   21,   21,   21, 0x08,
     262,  254,   21,   21, 0x08,
     290,  286,   21,   21, 0x08,
     354,  318,   21,   21, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_BatteryMonitorConfig[] = {
    "BatteryMonitorConfig\0\0"
    "uas,component,parameterName,value\0"
    "parameterChanged(int,int,QString,QVariant)\0"
    "index\0monitorCurrentIndexChanged(int)\0"
    "sensorCurrentIndexChanged(int)\0"
    "apmVerCurrentIndexChanged(int)\0"
    "calcDividerSet()\0ampsPerVoltSet()\0"
    "batteryCapacitySet()\0checked\0"
    "alertOnLowClicked(bool)\0uas\0"
    "activeUASSet(UASInterface*)\0"
    "uas,voltage,current,percent,seconds\0"
    "batteryChanged(UASInterface*,double,double,double,int)\0"
};

void BatteryMonitorConfig::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        BatteryMonitorConfig *_t = static_cast<BatteryMonitorConfig *>(_o);
        switch (_id) {
        case 0: _t->parameterChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< QVariant(*)>(_a[4]))); break;
        case 1: _t->monitorCurrentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->sensorCurrentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->apmVerCurrentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->calcDividerSet(); break;
        case 5: _t->ampsPerVoltSet(); break;
        case 6: _t->batteryCapacitySet(); break;
        case 7: _t->alertOnLowClicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->activeUASSet((*reinterpret_cast< UASInterface*(*)>(_a[1]))); break;
        case 9: _t->batteryChanged((*reinterpret_cast< UASInterface*(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData BatteryMonitorConfig::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject BatteryMonitorConfig::staticMetaObject = {
    { &AP2ConfigWidget::staticMetaObject, qt_meta_stringdata_BatteryMonitorConfig,
      qt_meta_data_BatteryMonitorConfig, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &BatteryMonitorConfig::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *BatteryMonitorConfig::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *BatteryMonitorConfig::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_BatteryMonitorConfig))
        return static_cast<void*>(const_cast< BatteryMonitorConfig*>(this));
    return AP2ConfigWidget::qt_metacast(_clname);
}

int BatteryMonitorConfig::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AP2ConfigWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
