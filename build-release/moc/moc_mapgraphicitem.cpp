/****************************************************************************
** Meta object code from reading C++ file 'mapgraphicitem.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../libs/opmapcontrol/src/mapwidget/mapgraphicitem.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mapgraphicitem.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_mapcontrol__MapGraphicItem[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      56,   28,   27,   27, 0x05,
      90,   27,   27,   27, 0x05,

 // slots: signature, parameters, type, tag, flags
     109,  103,   27,   27, 0x0a,
     148,   27,   27,   27, 0x08,
     174,   27,   27,   27, 0x08,
     197,  192,   27,   27, 0x0a,
     212,   27,   27,   27, 0x2a,

       0        // eod
};

static const char qt_meta_stringdata_mapcontrol__MapGraphicItem[] = {
    "mapcontrol::MapGraphicItem\0\0"
    "zoomtotal,zoomreal,zoomdigi\0"
    "zoomChanged(double,double,double)\0"
    "mapChanged()\0value\0"
    "SetSelectedArea(internals::RectLatLng)\0"
    "Core_OnNeedInvalidation()\0ChildPosRefresh()\0"
    "rect\0resize(QRectF)\0resize()\0"
};

void mapcontrol::MapGraphicItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        MapGraphicItem *_t = static_cast<MapGraphicItem *>(_o);
        switch (_id) {
        case 0: _t->zoomChanged((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3]))); break;
        case 1: _t->mapChanged(); break;
        case 2: _t->SetSelectedArea((*reinterpret_cast< const internals::RectLatLng(*)>(_a[1]))); break;
        case 3: _t->Core_OnNeedInvalidation(); break;
        case 4: _t->ChildPosRefresh(); break;
        case 5: _t->resize((*reinterpret_cast< const QRectF(*)>(_a[1]))); break;
        case 6: _t->resize(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData mapcontrol::MapGraphicItem::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject mapcontrol::MapGraphicItem::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_mapcontrol__MapGraphicItem,
      qt_meta_data_mapcontrol__MapGraphicItem, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &mapcontrol::MapGraphicItem::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *mapcontrol::MapGraphicItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *mapcontrol::MapGraphicItem::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_mapcontrol__MapGraphicItem))
        return static_cast<void*>(const_cast< MapGraphicItem*>(this));
    if (!strcmp(_clname, "QGraphicsItem"))
        return static_cast< QGraphicsItem*>(const_cast< MapGraphicItem*>(this));
    if (!strcmp(_clname, "com.trolltech.Qt.QGraphicsItem"))
        return static_cast< QGraphicsItem*>(const_cast< MapGraphicItem*>(this));
    return QObject::qt_metacast(_clname);
}

int mapcontrol::MapGraphicItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void mapcontrol::MapGraphicItem::zoomChanged(double _t1, double _t2, double _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void mapcontrol::MapGraphicItem::mapChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}
QT_END_MOC_NAMESPACE
