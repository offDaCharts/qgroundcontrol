/****************************************************************************
** Meta object code from reading C++ file 'PrimaryFlightDisplay.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/ui/PrimaryFlightDisplay.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'PrimaryFlightDisplay.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_PrimaryFlightDisplay[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      30,   22,   21,   21, 0x05,

 // slots: signature, parameters, type, tag, flags
      83,   54,   21,   21, 0x0a,
     181,  142,   21,   21, 0x0a,
     281,  244,   21,   21, 0x0a,
     387,  330,   21,   21, 0x0a,
     487,  446,   21,   21, 0x0a,
     560,  556,   21,   21, 0x0a,
     585,  556,   21,   21, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_PrimaryFlightDisplay[] = {
    "PrimaryFlightDisplay\0\0visible\0"
    "visibilityChanged(bool)\0"
    "uas,roll,pitch,yaw,timestamp\0"
    "updateAttitude(UASInterface*,double,double,double,quint64)\0"
    "uas,component,roll,pitch,yaw,timestamp\0"
    "updateAttitude(UASInterface*,int,double,double,double,quint64)\0"
    "uas,_groundSpeed,_airSpeed,timestamp\0"
    "updateSpeed(UASInterface*,double,double,quint64)\0"
    "uas,_altitudeAMSL,_altitudeRelative,_climbRate,timestamp\0"
    "updateAltitude(UASInterface*,double,double,double,quint64)\0"
    "uas,altitudeError,speedError,xtrackError\0"
    "updateNavigationControllerErrors(UASInterface*,double,double,double)\0"
    "uas\0forgetUAS(UASInterface*)\0"
    "setActiveUAS(UASInterface*)\0"
};

void PrimaryFlightDisplay::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PrimaryFlightDisplay *_t = static_cast<PrimaryFlightDisplay *>(_o);
        switch (_id) {
        case 0: _t->visibilityChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->updateAttitude((*reinterpret_cast< UASInterface*(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4])),(*reinterpret_cast< quint64(*)>(_a[5]))); break;
        case 2: _t->updateAttitude((*reinterpret_cast< UASInterface*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4])),(*reinterpret_cast< double(*)>(_a[5])),(*reinterpret_cast< quint64(*)>(_a[6]))); break;
        case 3: _t->updateSpeed((*reinterpret_cast< UASInterface*(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< quint64(*)>(_a[4]))); break;
        case 4: _t->updateAltitude((*reinterpret_cast< UASInterface*(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4])),(*reinterpret_cast< quint64(*)>(_a[5]))); break;
        case 5: _t->updateNavigationControllerErrors((*reinterpret_cast< UASInterface*(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4]))); break;
        case 6: _t->forgetUAS((*reinterpret_cast< UASInterface*(*)>(_a[1]))); break;
        case 7: _t->setActiveUAS((*reinterpret_cast< UASInterface*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PrimaryFlightDisplay::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PrimaryFlightDisplay::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_PrimaryFlightDisplay,
      qt_meta_data_PrimaryFlightDisplay, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PrimaryFlightDisplay::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PrimaryFlightDisplay::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PrimaryFlightDisplay::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PrimaryFlightDisplay))
        return static_cast<void*>(const_cast< PrimaryFlightDisplay*>(this));
    return QWidget::qt_metacast(_clname);
}

int PrimaryFlightDisplay::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void PrimaryFlightDisplay::visibilityChanged(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
