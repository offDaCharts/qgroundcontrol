/****************************************************************************
** Meta object code from reading C++ file 'GlobalViewParams.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/ui/map3D/GlobalViewParams.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'GlobalViewParams.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_GlobalViewParams[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      27,   18,   17,   17, 0x05,
      52,   17,   17,   17, 0x05,

 // slots: signature, parameters, type, tag, flags
      80,   75,   17,   17, 0x0a,
     109,   75,   17,   17, 0x0a,
     137,  131,   17,   17, 0x0a,
     156,  131,   17,   17, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_GlobalViewParams[] = {
    "GlobalViewParams\0\0systemId\0"
    "followCameraChanged(int)\0"
    "imageryParamsChanged()\0text\0"
    "followCameraChanged(QString)\0"
    "frameChanged(QString)\0state\0"
    "toggleTerrain(int)\0toggleWorldGrid(int)\0"
};

void GlobalViewParams::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        GlobalViewParams *_t = static_cast<GlobalViewParams *>(_o);
        switch (_id) {
        case 0: _t->followCameraChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->imageryParamsChanged(); break;
        case 2: _t->followCameraChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->frameChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->toggleTerrain((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->toggleWorldGrid((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData GlobalViewParams::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject GlobalViewParams::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_GlobalViewParams,
      qt_meta_data_GlobalViewParams, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &GlobalViewParams::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *GlobalViewParams::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *GlobalViewParams::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_GlobalViewParams))
        return static_cast<void*>(const_cast< GlobalViewParams*>(this));
    return QObject::qt_metacast(_clname);
}

int GlobalViewParams::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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

// SIGNAL 0
void GlobalViewParams::followCameraChanged(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void GlobalViewParams::imageryParamsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}
QT_END_MOC_NAMESPACE
