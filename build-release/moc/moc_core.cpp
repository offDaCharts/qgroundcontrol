/****************************************************************************
** Meta object code from reading C++ file 'core.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../libs/opmapcontrol/src/internals/core.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'core.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_internals__Core[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       9,       // signalCount

 // signals: signature, parameters, type, tag, flags
      23,   17,   16,   16, 0x05,
      72,   16,   16,   16, 0x05,
     100,   93,   16,   16, 0x05,
     124,   16,   16,   16, 0x05,
     142,   16,   16,   16, 0x05,
     154,   16,   16,   16, 0x05,
     178,  173,   16,   16, 0x05,
     220,  211,   16,   16, 0x05,
     254,   16,   16,   16, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_internals__Core[] = {
    "internals::Core\0\0point\0"
    "OnCurrentPositionChanged(internals::PointLatLng)\0"
    "OnTileLoadComplete()\0number\0"
    "OnTilesStillToLoad(int)\0OnTileLoadStart()\0"
    "OnMapDrag()\0OnMapZoomChanged()\0type\0"
    "OnMapTypeChanged(MapType::Types)\0"
    "zoom,pos\0OnEmptyTileError(int,core::Point)\0"
    "OnNeedInvalidation()\0"
};

void internals::Core::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        Core *_t = static_cast<Core *>(_o);
        switch (_id) {
        case 0: _t->OnCurrentPositionChanged((*reinterpret_cast< internals::PointLatLng(*)>(_a[1]))); break;
        case 1: _t->OnTileLoadComplete(); break;
        case 2: _t->OnTilesStillToLoad((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->OnTileLoadStart(); break;
        case 4: _t->OnMapDrag(); break;
        case 5: _t->OnMapZoomChanged(); break;
        case 6: _t->OnMapTypeChanged((*reinterpret_cast< MapType::Types(*)>(_a[1]))); break;
        case 7: _t->OnEmptyTileError((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< core::Point(*)>(_a[2]))); break;
        case 8: _t->OnNeedInvalidation(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData internals::Core::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject internals::Core::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_internals__Core,
      qt_meta_data_internals__Core, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &internals::Core::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *internals::Core::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *internals::Core::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_internals__Core))
        return static_cast<void*>(const_cast< Core*>(this));
    if (!strcmp(_clname, "QRunnable"))
        return static_cast< QRunnable*>(const_cast< Core*>(this));
    return QObject::qt_metacast(_clname);
}

int internals::Core::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void internals::Core::OnCurrentPositionChanged(internals::PointLatLng _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void internals::Core::OnTileLoadComplete()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void internals::Core::OnTilesStillToLoad(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void internals::Core::OnTileLoadStart()
{
    QMetaObject::activate(this, &staticMetaObject, 3, 0);
}

// SIGNAL 4
void internals::Core::OnMapDrag()
{
    QMetaObject::activate(this, &staticMetaObject, 4, 0);
}

// SIGNAL 5
void internals::Core::OnMapZoomChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, 0);
}

// SIGNAL 6
void internals::Core::OnMapTypeChanged(MapType::Types _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void internals::Core::OnEmptyTileError(int _t1, core::Point _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void internals::Core::OnNeedInvalidation()
{
    QMetaObject::activate(this, &staticMetaObject, 8, 0);
}
QT_END_MOC_NAMESPACE
