/****************************************************************************
** Meta object code from reading C++ file 'WaypointEditableView.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/ui/WaypointEditableView.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'WaypointEditableView.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_WaypointEditableView[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      33,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      14,       // signalCount

 // signals: signature, parameters, type, tag, flags
      22,   21,   21,   21, 0x05,
      48,   21,   21,   21, 0x05,
      76,   21,   21,   21, 0x05,
     102,   21,   21,   21, 0x05,
     133,   21,   21,   21, 0x05,
     159,  148,   21,   21, 0x05,
     187,  181,   21,   21, 0x05,
     219,  213,   21,   21, 0x05,
     243,  213,   21,   21, 0x05,
     267,  213,   21,   21, 0x05,
     291,  213,   21,   21, 0x05,
     315,  213,   21,   21, 0x05,
     339,  213,   21,   21, 0x05,
     363,  213,   21,   21, 0x05,

 // slots: signature, parameters, type, tag, flags
     387,   21,   21,   21, 0x0a,
     396,   21,   21,   21, 0x0a,
     407,   21,   21,   21, 0x0a,
     425,  416,   21,   21, 0x0a,
     443,   21,   21,   21, 0x0a,
     474,  468,   21,   21, 0x0a,
     499,  492,   21,   21, 0x0a,
     521,  492,   21,   21, 0x0a,
     547,   21,   21,   21, 0x0a,
     567,   21,   21,   21, 0x0a,
     582,  468,   21,   21, 0x0a,
     601,  148,   21,   21, 0x0a,
     621,  213,   21,   21, 0x0a,
     643,  213,   21,   21, 0x0a,
     665,  213,   21,   21, 0x0a,
     687,  213,   21,   21, 0x0a,
     709,  213,   21,   21, 0x0a,
     731,  213,   21,   21, 0x0a,
     753,  213,   21,   21, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_WaypointEditableView[] = {
    "WaypointEditableView\0\0moveUpWaypoint(Waypoint*)\0"
    "moveDownWaypoint(Waypoint*)\0"
    "removeWaypoint(Waypoint*)\0"
    "changeCurrentWaypoint(quint16)\0"
    "setYaw(double)\0mav_cmd_id\0"
    "commandBroadcast(int)\0frame\0"
    "frameBroadcast(MAV_FRAME)\0value\0"
    "param1Broadcast(double)\0param2Broadcast(double)\0"
    "param3Broadcast(double)\0param4Broadcast(double)\0"
    "param5Broadcast(double)\0param6Broadcast(double)\0"
    "param7Broadcast(double)\0moveUp()\0"
    "moveDown()\0remove()\0waypoint\0"
    "deleted(QObject*)\0changedAutoContinue(int)\0"
    "state\0changedFrame(int)\0action\0"
    "updateActionView(int)\0initializeActionView(int)\0"
    "changedCurrent(int)\0updateValues()\0"
    "changedAction(int)\0changedCommand(int)\0"
    "changedParam1(double)\0changedParam2(double)\0"
    "changedParam3(double)\0changedParam4(double)\0"
    "changedParam5(double)\0changedParam6(double)\0"
    "changedParam7(double)\0"
};

void WaypointEditableView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        WaypointEditableView *_t = static_cast<WaypointEditableView *>(_o);
        switch (_id) {
        case 0: _t->moveUpWaypoint((*reinterpret_cast< Waypoint*(*)>(_a[1]))); break;
        case 1: _t->moveDownWaypoint((*reinterpret_cast< Waypoint*(*)>(_a[1]))); break;
        case 2: _t->removeWaypoint((*reinterpret_cast< Waypoint*(*)>(_a[1]))); break;
        case 3: _t->changeCurrentWaypoint((*reinterpret_cast< quint16(*)>(_a[1]))); break;
        case 4: _t->setYaw((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 5: _t->commandBroadcast((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->frameBroadcast((*reinterpret_cast< MAV_FRAME(*)>(_a[1]))); break;
        case 7: _t->param1Broadcast((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 8: _t->param2Broadcast((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 9: _t->param3Broadcast((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 10: _t->param4Broadcast((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 11: _t->param5Broadcast((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 12: _t->param6Broadcast((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 13: _t->param7Broadcast((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 14: _t->moveUp(); break;
        case 15: _t->moveDown(); break;
        case 16: _t->remove(); break;
        case 17: _t->deleted((*reinterpret_cast< QObject*(*)>(_a[1]))); break;
        case 18: _t->changedAutoContinue((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 19: _t->changedFrame((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 20: _t->updateActionView((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 21: _t->initializeActionView((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 22: _t->changedCurrent((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 23: _t->updateValues(); break;
        case 24: _t->changedAction((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 25: _t->changedCommand((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 26: _t->changedParam1((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 27: _t->changedParam2((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 28: _t->changedParam3((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 29: _t->changedParam4((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 30: _t->changedParam5((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 31: _t->changedParam6((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 32: _t->changedParam7((*reinterpret_cast< double(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData WaypointEditableView::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject WaypointEditableView::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_WaypointEditableView,
      qt_meta_data_WaypointEditableView, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &WaypointEditableView::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *WaypointEditableView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *WaypointEditableView::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_WaypointEditableView))
        return static_cast<void*>(const_cast< WaypointEditableView*>(this));
    return QWidget::qt_metacast(_clname);
}

int WaypointEditableView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 33)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 33;
    }
    return _id;
}

// SIGNAL 0
void WaypointEditableView::moveUpWaypoint(Waypoint * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void WaypointEditableView::moveDownWaypoint(Waypoint * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void WaypointEditableView::removeWaypoint(Waypoint * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void WaypointEditableView::changeCurrentWaypoint(quint16 _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void WaypointEditableView::setYaw(double _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void WaypointEditableView::commandBroadcast(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void WaypointEditableView::frameBroadcast(MAV_FRAME _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void WaypointEditableView::param1Broadcast(double _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void WaypointEditableView::param2Broadcast(double _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void WaypointEditableView::param3Broadcast(double _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void WaypointEditableView::param4Broadcast(double _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void WaypointEditableView::param5Broadcast(double _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void WaypointEditableView::param6Broadcast(double _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void WaypointEditableView::param7Broadcast(double _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}
QT_END_MOC_NAMESPACE
