/****************************************************************************
** Meta object code from reading C++ file 'QGCVehicleConfig.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/ui/QGCVehicleConfig.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QGCVehicleConfig.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QGCVehicleConfig[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      44,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      26,   18,   17,   17, 0x05,

 // slots: signature, parameters, type, tag, flags
      50,   17,   17,   17, 0x0a,
      72,   17,   17,   17, 0x0a,
      98,   17,   17,   17, 0x0a,
     125,   17,   17,   17, 0x0a,
     160,  153,   17,   17, 0x0a,
     196,  188,   17,   17, 0x0a,
     216,   17,   17,   17, 0x0a,
     229,   17,   17,   17, 0x0a,
     250,   17,   17,   17, 0x0a,
     278,  270,   17,   17, 0x0a,
     304,   17,   17,   17, 0x0a,
     323,   17,   17,   17, 0x0a,
     358,  348,   17,   17, 0x0a,
     378,   17,   17,   17, 0x0a,
     391,   17,   17,   17, 0x0a,
     414,  406,   17,   17, 0x0a,
     431,  406,   17,   17, 0x0a,
     449,  406,   17,   17, 0x0a,
     465,  406,   17,   17, 0x0a,
     486,  406,   17,   17, 0x0a,
     503,  406,   17,   17, 0x0a,
     520,  406,   17,   17, 0x0a,
     537,  406,   17,   17, 0x0a,
     563,  554,   17,   17, 0x0a,
     585,  554,   17,   17, 0x0a,
     608,  554,   17,   17, 0x0a,
     629,  554,   17,   17, 0x0a,
     655,  554,   17,   17, 0x0a,
     677,  554,   17,   17, 0x0a,
     699,  554,   17,   17, 0x0a,
     721,  554,   17,   17, 0x0a,
     743,   17,   17,   17, 0x09,
     763,   17,   17,   17, 0x09,
     784,   17,   17,   17, 0x09,
     805,   17,   17,   17, 0x09,
     828,   17,   17,   17, 0x09,
     855,  846,   17,   17, 0x09,
     931,  897,   17,   17, 0x09,
     978,  974,   17,   17, 0x09,
    1000,  974,   17,   17, 0x09,
    1026, 1021,   17,   17, 0x09,
    1041,   17,   17,   17, 0x09,
    1063, 1057,   17,   17, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_QGCVehicleConfig[] = {
    "QGCVehicleConfig\0\0visible\0"
    "visibilityChanged(bool)\0rcMenuButtonClicked()\0"
    "sensorMenuButtonClicked()\0"
    "generalMenuButtonClicked()\0"
    "advancedMenuButtonClicked()\0active\0"
    "setActiveUAS(UASInterface*)\0primary\0"
    "loadQgcConfig(bool)\0loadConfig()\0"
    "startCalibrationRC()\0stopCalibrationRC()\0"
    "enabled\0toggleCalibrationRC(bool)\0"
    "setTrimPositions()\0detectChannelInversion()\0"
    "newRcMode\0setRCModeIndex(int)\0"
    "updateView()\0updateMinMax()\0channel\0"
    "setRollChan(int)\0setPitchChan(int)\0"
    "setYawChan(int)\0setThrottleChan(int)\0"
    "setModeChan(int)\0setAux1Chan(int)\0"
    "setAux2Chan(int)\0setAux3Chan(int)\0"
    "inverted\0setRollInverted(bool)\0"
    "setPitchInverted(bool)\0setYawInverted(bool)\0"
    "setThrottleInverted(bool)\0"
    "setModeInverted(bool)\0setAux1Inverted(bool)\0"
    "setAux2Inverted(bool)\0setAux3Inverted(bool)\0"
    "menuButtonClicked()\0resetCalibrationRC()\0"
    "writeCalibrationRC()\0requestCalibrationRC()\0"
    "writeParameters()\0chan,val\0"
    "remoteControlChannelRawChanged(int,float)\0"
    "uas,component,parameterName,value\0"
    "parameterChanged(int,int,QString,QVariant)\0"
    "str\0updateStatus(QString)\0"
    "updateError(QString)\0type\0setRCType(int)\0"
    "checktimeOuts()\0index\0"
    "updateInvertedCheckboxes(int)\0"
};

void QGCVehicleConfig::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QGCVehicleConfig *_t = static_cast<QGCVehicleConfig *>(_o);
        switch (_id) {
        case 0: _t->visibilityChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->rcMenuButtonClicked(); break;
        case 2: _t->sensorMenuButtonClicked(); break;
        case 3: _t->generalMenuButtonClicked(); break;
        case 4: _t->advancedMenuButtonClicked(); break;
        case 5: _t->setActiveUAS((*reinterpret_cast< UASInterface*(*)>(_a[1]))); break;
        case 6: _t->loadQgcConfig((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->loadConfig(); break;
        case 8: _t->startCalibrationRC(); break;
        case 9: _t->stopCalibrationRC(); break;
        case 10: _t->toggleCalibrationRC((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 11: _t->setTrimPositions(); break;
        case 12: _t->detectChannelInversion(); break;
        case 13: _t->setRCModeIndex((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 14: _t->updateView(); break;
        case 15: _t->updateMinMax(); break;
        case 16: _t->setRollChan((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 17: _t->setPitchChan((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 18: _t->setYawChan((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 19: _t->setThrottleChan((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 20: _t->setModeChan((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 21: _t->setAux1Chan((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 22: _t->setAux2Chan((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 23: _t->setAux3Chan((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 24: _t->setRollInverted((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 25: _t->setPitchInverted((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 26: _t->setYawInverted((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 27: _t->setThrottleInverted((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 28: _t->setModeInverted((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 29: _t->setAux1Inverted((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 30: _t->setAux2Inverted((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 31: _t->setAux3Inverted((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 32: _t->menuButtonClicked(); break;
        case 33: _t->resetCalibrationRC(); break;
        case 34: _t->writeCalibrationRC(); break;
        case 35: _t->requestCalibrationRC(); break;
        case 36: _t->writeParameters(); break;
        case 37: _t->remoteControlChannelRawChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2]))); break;
        case 38: _t->parameterChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< QVariant(*)>(_a[4]))); break;
        case 39: _t->updateStatus((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 40: _t->updateError((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 41: _t->setRCType((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 42: _t->checktimeOuts(); break;
        case 43: _t->updateInvertedCheckboxes((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QGCVehicleConfig::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QGCVehicleConfig::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_QGCVehicleConfig,
      qt_meta_data_QGCVehicleConfig, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QGCVehicleConfig::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QGCVehicleConfig::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QGCVehicleConfig::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QGCVehicleConfig))
        return static_cast<void*>(const_cast< QGCVehicleConfig*>(this));
    return QWidget::qt_metacast(_clname);
}

int QGCVehicleConfig::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 44)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 44;
    }
    return _id;
}

// SIGNAL 0
void QGCVehicleConfig::visibilityChanged(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
