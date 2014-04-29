/****************************************************************************
** Meta object code from reading C++ file 'AirfoilServoCalibrator.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/ui/RadioCalibration/AirfoilServoCalibrator.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'AirfoilServoCalibrator.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_AirfoilServoCalibrator[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      24,   23,   23,   23, 0x09,
      34,   23,   23,   23, 0x09,
      46,   23,   23,   23, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_AirfoilServoCalibrator[] = {
    "AirfoilServoCalibrator\0\0setHigh()\0"
    "setCenter()\0setLow()\0"
};

void AirfoilServoCalibrator::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        AirfoilServoCalibrator *_t = static_cast<AirfoilServoCalibrator *>(_o);
        switch (_id) {
        case 0: _t->setHigh(); break;
        case 1: _t->setCenter(); break;
        case 2: _t->setLow(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData AirfoilServoCalibrator::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject AirfoilServoCalibrator::staticMetaObject = {
    { &AbstractCalibrator::staticMetaObject, qt_meta_stringdata_AirfoilServoCalibrator,
      qt_meta_data_AirfoilServoCalibrator, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &AirfoilServoCalibrator::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *AirfoilServoCalibrator::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *AirfoilServoCalibrator::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_AirfoilServoCalibrator))
        return static_cast<void*>(const_cast< AirfoilServoCalibrator*>(this));
    return AbstractCalibrator::qt_metacast(_clname);
}

int AirfoilServoCalibrator::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractCalibrator::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
