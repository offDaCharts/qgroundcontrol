/****************************************************************************
** Meta object code from reading C++ file 'RadioCalibrationConfig.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/ui/configuration/RadioCalibrationConfig.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'RadioCalibrationConfig.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_RadioCalibrationConfig[] = {

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
      28,   24,   23,   23, 0x08,
      65,   56,   23,   23, 0x08,
     141,  107,   23,   23, 0x08,
     184,   23,   23,   23, 0x08,
     205,   23,   23,   23, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_RadioCalibrationConfig[] = {
    "RadioCalibrationConfig\0\0uas\0"
    "activeUASSet(UASInterface*)\0chan,val\0"
    "remoteControlChannelRawChanged(int,float)\0"
    "uas,component,parameterName,value\0"
    "parameterChanged(int,int,QString,QVariant)\0"
    "guiUpdateTimerTick()\0calibrateButtonClicked()\0"
};

void RadioCalibrationConfig::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        RadioCalibrationConfig *_t = static_cast<RadioCalibrationConfig *>(_o);
        switch (_id) {
        case 0: _t->activeUASSet((*reinterpret_cast< UASInterface*(*)>(_a[1]))); break;
        case 1: _t->remoteControlChannelRawChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2]))); break;
        case 2: _t->parameterChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< QVariant(*)>(_a[4]))); break;
        case 3: _t->guiUpdateTimerTick(); break;
        case 4: _t->calibrateButtonClicked(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData RadioCalibrationConfig::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject RadioCalibrationConfig::staticMetaObject = {
    { &AP2ConfigWidget::staticMetaObject, qt_meta_stringdata_RadioCalibrationConfig,
      qt_meta_data_RadioCalibrationConfig, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &RadioCalibrationConfig::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *RadioCalibrationConfig::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *RadioCalibrationConfig::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_RadioCalibrationConfig))
        return static_cast<void*>(const_cast< RadioCalibrationConfig*>(this));
    return AP2ConfigWidget::qt_metacast(_clname);
}

int RadioCalibrationConfig::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AP2ConfigWidget::qt_metacall(_c, _id, _a);
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
