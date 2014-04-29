/****************************************************************************
** Meta object code from reading C++ file 'CameraGimbalConfig.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/ui/configuration/CameraGimbalConfig.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'CameraGimbalConfig.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_CameraGimbalConfig[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      54,   20,   19,   19, 0x08,
      97,   19,   19,   19, 0x08,
     110,   19,   19,   19, 0x08,
     123,   19,   19,   19, 0x08,
     135,   19,   19,   19, 0x08,
     151,   19,   19,   19, 0x08,
     173,   19,   19,   19, 0x08,
     195,   19,   19,   19, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_CameraGimbalConfig[] = {
    "CameraGimbalConfig\0\0"
    "uas,component,parameterName,value\0"
    "parameterChanged(int,int,QString,QVariant)\0"
    "updateTilt()\0updateRoll()\0updatePan()\0"
    "updateShutter()\0updateRetractAngles()\0"
    "updateNeutralAngles()\0updateControlAngles()\0"
};

void CameraGimbalConfig::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        CameraGimbalConfig *_t = static_cast<CameraGimbalConfig *>(_o);
        switch (_id) {
        case 0: _t->parameterChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< QVariant(*)>(_a[4]))); break;
        case 1: _t->updateTilt(); break;
        case 2: _t->updateRoll(); break;
        case 3: _t->updatePan(); break;
        case 4: _t->updateShutter(); break;
        case 5: _t->updateRetractAngles(); break;
        case 6: _t->updateNeutralAngles(); break;
        case 7: _t->updateControlAngles(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData CameraGimbalConfig::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject CameraGimbalConfig::staticMetaObject = {
    { &AP2ConfigWidget::staticMetaObject, qt_meta_stringdata_CameraGimbalConfig,
      qt_meta_data_CameraGimbalConfig, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &CameraGimbalConfig::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *CameraGimbalConfig::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *CameraGimbalConfig::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CameraGimbalConfig))
        return static_cast<void*>(const_cast< CameraGimbalConfig*>(this));
    return AP2ConfigWidget::qt_metacast(_clname);
}

int CameraGimbalConfig::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AP2ConfigWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
