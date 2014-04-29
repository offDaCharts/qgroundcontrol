/****************************************************************************
** Meta object code from reading C++ file 'CurveCalibrator.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/ui/RadioCalibration/CurveCalibrator.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'CurveCalibrator.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_CurveCalibrator[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      26,   17,   16,   16, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_CurveCalibrator[] = {
    "CurveCalibrator\0\0setpoint\0setSetpoint(int)\0"
};

void CurveCalibrator::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        CurveCalibrator *_t = static_cast<CurveCalibrator *>(_o);
        switch (_id) {
        case 0: _t->setSetpoint((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData CurveCalibrator::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject CurveCalibrator::staticMetaObject = {
    { &AbstractCalibrator::staticMetaObject, qt_meta_stringdata_CurveCalibrator,
      qt_meta_data_CurveCalibrator, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &CurveCalibrator::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *CurveCalibrator::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *CurveCalibrator::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CurveCalibrator))
        return static_cast<void*>(const_cast< CurveCalibrator*>(this));
    return AbstractCalibrator::qt_metacast(_clname);
}

int CurveCalibrator::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractCalibrator::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
