/****************************************************************************
** Meta object code from reading C++ file 'Waypoint.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/Waypoint.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Waypoint.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Waypoint[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      30,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      13,   10,    9,    9, 0x05,

 // slots: signature, parameters, type, tag, flags
      35,   32,    9,    9, 0x0a,
      52,   50,    9,    9, 0x0a,
      67,   65,    9,    9, 0x0a,
      82,   80,    9,    9, 0x0a,
      99,   95,    9,    9, 0x0a,
     123,  119,    9,    9, 0x0a,
     148,  144,    9,    9, 0x0a,
     172,  168,    9,    9, 0x0a,
     184,  168,    9,    9, 0x0a,
     206,  199,    9,    9, 0x0a,
     221,  199,    9,    9, 0x0a,
     246,  240,    9,    9, 0x0a,
     279,  266,    9,    9, 0x0a,
     309,  301,    9,    9, 0x0a,
     332,  326,    9,    9, 0x0a,
     362,  355,    9,    9, 0x0a,
     387,  380,    9,    9, 0x0a,
     412,  405,    9,    9, 0x0a,
     437,  430,    9,    9, 0x0a,
     462,  455,    9,    9, 0x0a,
     487,  480,    9,    9, 0x0a,
     512,  505,    9,    9, 0x0a,
     537,  530,    9,    9, 0x0a,
     574,  565,    9,    9, 0x0a,
     591,  565,    9,    9, 0x0a,
     617,  611,    9,    9, 0x0a,
     631,    9,    9,    9, 0x0a,
     649,    9,  644,    9, 0x0a,
     669,    9,  661,    9, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_Waypoint[] = {
    "Waypoint\0\0wp\0changed(Waypoint*)\0id\0"
    "setId(quint16)\0x\0setX(double)\0y\0"
    "setY(double)\0z\0setZ(double)\0lat\0"
    "setLatitude(double)\0lon\0setLongitude(double)\0"
    "alt\0setAltitude(double)\0yaw\0setYaw(int)\0"
    "setYaw(double)\0action\0setAction(int)\0"
    "setAction(MAV_CMD)\0frame\0setFrame(MAV_FRAME)\0"
    "autoContinue\0setAutocontinue(bool)\0"
    "current\0setCurrent(bool)\0orbit\0"
    "setLoiterOrbit(double)\0param1\0"
    "setParam1(double)\0param2\0setParam2(double)\0"
    "param3\0setParam3(double)\0param4\0"
    "setParam4(double)\0param5\0setParam5(double)\0"
    "param6\0setParam6(double)\0param7\0"
    "setParam7(double)\0radius\0"
    "setAcceptanceRadius(double)\0holdTime\0"
    "setHoldTime(int)\0setHoldTime(double)\0"
    "turns\0setTurns(int)\0setReached()\0bool\0"
    "isReached()\0quint64\0getReachedTime()\0"
};

void Waypoint::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        Waypoint *_t = static_cast<Waypoint *>(_o);
        switch (_id) {
        case 0: _t->changed((*reinterpret_cast< Waypoint*(*)>(_a[1]))); break;
        case 1: _t->setId((*reinterpret_cast< quint16(*)>(_a[1]))); break;
        case 2: _t->setX((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 3: _t->setY((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 4: _t->setZ((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 5: _t->setLatitude((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 6: _t->setLongitude((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 7: _t->setAltitude((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 8: _t->setYaw((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->setYaw((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 10: _t->setAction((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: _t->setAction((*reinterpret_cast< MAV_CMD(*)>(_a[1]))); break;
        case 12: _t->setFrame((*reinterpret_cast< MAV_FRAME(*)>(_a[1]))); break;
        case 13: _t->setAutocontinue((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 14: _t->setCurrent((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 15: _t->setLoiterOrbit((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 16: _t->setParam1((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 17: _t->setParam2((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 18: _t->setParam3((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 19: _t->setParam4((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 20: _t->setParam5((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 21: _t->setParam6((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 22: _t->setParam7((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 23: _t->setAcceptanceRadius((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 24: _t->setHoldTime((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 25: _t->setHoldTime((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 26: _t->setTurns((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 27: _t->setReached(); break;
        case 28: { bool _r = _t->isReached();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 29: { quint64 _r = _t->getReachedTime();
            if (_a[0]) *reinterpret_cast< quint64*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Waypoint::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Waypoint::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Waypoint,
      qt_meta_data_Waypoint, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Waypoint::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Waypoint::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Waypoint::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Waypoint))
        return static_cast<void*>(const_cast< Waypoint*>(this));
    return QObject::qt_metacast(_clname);
}

int Waypoint::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 30)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 30;
    }
    return _id;
}

// SIGNAL 0
void Waypoint::changed(Waypoint * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
