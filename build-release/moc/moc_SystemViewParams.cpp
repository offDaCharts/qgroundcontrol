/****************************************************************************
** Meta object code from reading C++ file 'SystemViewParams.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/ui/map3D/SystemViewParams.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SystemViewParams.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_SystemViewParams[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      33,   18,   17,   17, 0x05,

 // slots: signature, parameters, type, tag, flags
      67,   61,   17,   17, 0x0a,
      92,   85,   17,   17, 0x0a,
     128,  122,   17,   17, 0x0a,
     155,  122,   17,   17, 0x0a,
     176,  122,   17,   17, 0x0a,
     207,  200,   17,   17, 0x0a,
     231,  122,   17,   17, 0x0a,
     254,  122,   17,   17, 0x0a,
     276,  122,   17,   17, 0x0a,
     292,  122,   17,   17, 0x0a,
     313,  122,   17,   17, 0x0a,
     331,  122,   17,   17, 0x0a,
     349,  122,   17,   17, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_SystemViewParams[] = {
    "SystemViewParams\0\0systemId,index\0"
    "modelChangedSignal(int,int)\0index\0"
    "modelChanged(int)\0length\0"
    "setSetpointHistoryLength(int)\0state\0"
    "toggleColorPointCloud(int)\0"
    "toggleLocalGrid(int)\0toggleObstacleList(int)\0"
    "widget\0toggleOverlay(QWidget*)\0"
    "togglePlannedPath(int)\0togglePointCloud(int)\0"
    "toggleRGBD(int)\0toggleSetpoints(int)\0"
    "toggleTarget(int)\0toggleTrails(int)\0"
    "toggleWaypoints(int)\0"
};

void SystemViewParams::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        SystemViewParams *_t = static_cast<SystemViewParams *>(_o);
        switch (_id) {
        case 0: _t->modelChangedSignal((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 1: _t->modelChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->setSetpointHistoryLength((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->toggleColorPointCloud((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->toggleLocalGrid((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->toggleObstacleList((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->toggleOverlay((*reinterpret_cast< QWidget*(*)>(_a[1]))); break;
        case 7: _t->togglePlannedPath((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->togglePointCloud((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->toggleRGBD((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->toggleSetpoints((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: _t->toggleTarget((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 12: _t->toggleTrails((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 13: _t->toggleWaypoints((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData SystemViewParams::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject SystemViewParams::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_SystemViewParams,
      qt_meta_data_SystemViewParams, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &SystemViewParams::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *SystemViewParams::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *SystemViewParams::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SystemViewParams))
        return static_cast<void*>(const_cast< SystemViewParams*>(this));
    return QObject::qt_metacast(_clname);
}

int SystemViewParams::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    }
    return _id;
}

// SIGNAL 0
void SystemViewParams::modelChangedSignal(int _t1, int _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
