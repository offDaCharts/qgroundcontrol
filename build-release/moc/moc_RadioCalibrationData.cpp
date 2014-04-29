/****************************************************************************
** Meta object code from reading C++ file 'RadioCalibrationData.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/ui/RadioCalibration/RadioCalibrationData.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'RadioCalibrationData.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_RadioCalibrationData[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      34,   22,   21,   21, 0x0a,
      59,   22,   21,   21, 0x0a,
      85,   22,   21,   21, 0x0a,
     109,   22,   21,   21, 0x0a,
     131,   22,   21,   21, 0x0a,
     154,   22,   21,   21, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_RadioCalibrationData[] = {
    "RadioCalibrationData\0\0index,value\0"
    "setAileron(int,uint16_t)\0"
    "setElevator(int,uint16_t)\0"
    "setRudder(int,uint16_t)\0setGyro(int,uint16_t)\0"
    "setPitch(int,uint16_t)\0setThrottle(int,uint16_t)\0"
};

void RadioCalibrationData::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        RadioCalibrationData *_t = static_cast<RadioCalibrationData *>(_o);
        switch (_id) {
        case 0: _t->setAileron((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< uint16_t(*)>(_a[2]))); break;
        case 1: _t->setElevator((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< uint16_t(*)>(_a[2]))); break;
        case 2: _t->setRudder((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< uint16_t(*)>(_a[2]))); break;
        case 3: _t->setGyro((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< uint16_t(*)>(_a[2]))); break;
        case 4: _t->setPitch((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< uint16_t(*)>(_a[2]))); break;
        case 5: _t->setThrottle((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< uint16_t(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData RadioCalibrationData::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject RadioCalibrationData::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_RadioCalibrationData,
      qt_meta_data_RadioCalibrationData, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &RadioCalibrationData::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *RadioCalibrationData::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *RadioCalibrationData::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_RadioCalibrationData))
        return static_cast<void*>(const_cast< RadioCalibrationData*>(this));
    return QObject::qt_metacast(_clname);
}

int RadioCalibrationData::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
