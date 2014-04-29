/****************************************************************************
** Meta object code from reading C++ file 'HDDisplay.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/ui/HDDisplay.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'HDDisplay.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_HDDisplay[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      38,   11,   10,   10, 0x0a,
      92,   88,   10,   10, 0x0a,
     124,  120,   10,   10, 0x0a,
     144,  120,   10,   10, 0x0a,
     167,   10,   10,   10, 0x0a,
     188,   10,   10,   10, 0x0a,
     205,  199,   10,   10, 0x0a,
     223,   10,   10,   10, 0x0a,
     234,   10,   10,   10, 0x0a,
     252,  247,   10,   10, 0x0a,
     268,   10,   10,   10, 0x0a,
     280,   10,   10,   10, 0x0a,
     302,  295,   10,   10, 0x09,
     326,   10,   10,   10, 0x09,
     342,   10,   10,   10, 0x09,
     358,   10,   10,   10, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_HDDisplay[] = {
    "HDDisplay\0\0uasId,name,unit,value,msec\0"
    "updateValue(int,QString,QString,QVariant,quint64)\0"
    "uas\0setActiveUAS(UASInterface*)\0obj\0"
    "addSource(QObject*)\0removeSource(QObject*)\0"
    "removeItemByAction()\0addGauge()\0gauge\0"
    "addGauge(QString)\0setTitle()\0setColumns()\0"
    "cols\0setColumns(int)\0saveState()\0"
    "restoreState()\0enable\0enableGLRendering(bool)\0"
    "renderOverlay()\0triggerUpdate()\0"
    "adjustGaugeAspectRatio()\0"
};

void HDDisplay::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        HDDisplay *_t = static_cast<HDDisplay *>(_o);
        switch (_id) {
        case 0: _t->updateValue((*reinterpret_cast< const int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4])),(*reinterpret_cast< const quint64(*)>(_a[5]))); break;
        case 1: _t->setActiveUAS((*reinterpret_cast< UASInterface*(*)>(_a[1]))); break;
        case 2: _t->addSource((*reinterpret_cast< QObject*(*)>(_a[1]))); break;
        case 3: _t->removeSource((*reinterpret_cast< QObject*(*)>(_a[1]))); break;
        case 4: _t->removeItemByAction(); break;
        case 5: _t->addGauge(); break;
        case 6: _t->addGauge((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->setTitle(); break;
        case 8: _t->setColumns(); break;
        case 9: _t->setColumns((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->saveState(); break;
        case 11: _t->restoreState(); break;
        case 12: _t->enableGLRendering((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 13: _t->renderOverlay(); break;
        case 14: _t->triggerUpdate(); break;
        case 15: _t->adjustGaugeAspectRatio(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData HDDisplay::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject HDDisplay::staticMetaObject = {
    { &QGraphicsView::staticMetaObject, qt_meta_stringdata_HDDisplay,
      qt_meta_data_HDDisplay, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &HDDisplay::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *HDDisplay::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *HDDisplay::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_HDDisplay))
        return static_cast<void*>(const_cast< HDDisplay*>(this));
    return QGraphicsView::qt_metacast(_clname);
}

int HDDisplay::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGraphicsView::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
