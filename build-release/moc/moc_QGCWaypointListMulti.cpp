/****************************************************************************
** Meta object code from reading C++ file 'QGCWaypointListMulti.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/ui/QGCWaypointListMulti.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QGCWaypointListMulti.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QGCWaypointListMulti[] = {

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
      26,   22,   21,   21, 0x0a,
      50,   22,   21,   21, 0x0a,
      79,   22,   21,   21, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_QGCWaypointListMulti[] = {
    "QGCWaypointListMulti\0\0uas\0"
    "systemDeleted(QObject*)\0"
    "systemCreated(UASInterface*)\0"
    "systemSetActive(int)\0"
};

void QGCWaypointListMulti::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QGCWaypointListMulti *_t = static_cast<QGCWaypointListMulti *>(_o);
        switch (_id) {
        case 0: _t->systemDeleted((*reinterpret_cast< QObject*(*)>(_a[1]))); break;
        case 1: _t->systemCreated((*reinterpret_cast< UASInterface*(*)>(_a[1]))); break;
        case 2: _t->systemSetActive((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QGCWaypointListMulti::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QGCWaypointListMulti::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_QGCWaypointListMulti,
      qt_meta_data_QGCWaypointListMulti, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QGCWaypointListMulti::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QGCWaypointListMulti::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QGCWaypointListMulti::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QGCWaypointListMulti))
        return static_cast<void*>(const_cast< QGCWaypointListMulti*>(this));
    return QWidget::qt_metacast(_clname);
}

int QGCWaypointListMulti::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
