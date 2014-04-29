/****************************************************************************
** Meta object code from reading C++ file 'WaypointList.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/ui/WaypointList.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'WaypointList.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_WaypointList[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      26,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      14,   13,   13,   13, 0x05,
      44,   33,   13,   13, 0x05,

 // slots: signature, parameters, type, tag, flags
      85,   73,   13,   13, 0x0a,
     165,  144,   13,   13, 0x0a,
     228,  224,   13,   13, 0x0a,
     250,   13,   13,   13, 0x0a,
     266,   13,   13,   13, 0x0a,
     282,   13,   13,   13, 0x0a,
     293,   13,   13,   13, 0x0a,
     300,   13,   13,   13, 0x0a,
     310,   13,   13,   13, 0x0a,
     342,  324,   13,   13, 0x0a,
     360,   13,   13,   13, 0x0a,
     396,  389,   13,   13, 0x0a,
     427,  423,   13,   13, 0x0a,
     458,  423,   13,   13, 0x0a,
     498,  423,   13,   13, 0x0a,
     545,  538,   13,   13, 0x0a,
     583,  538,   13,   13, 0x0a,
     621,   13,   13,   13, 0x0a,
     651,   13,   13,   13, 0x0a,
     681,   13,   13,   13, 0x0a,
     700,  697,   13,   13, 0x0a,
     718,  697,   13,   13, 0x0a,
     738,  697,   13,   13, 0x0a,
     764,   13,   13,   13, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_WaypointList[] = {
    "WaypointList\0\0clearPathclicked()\0"
    "coordinate\0createWaypointAtMap(QPointF)\0"
    ",x,y,z,usec\0"
    "updatePosition(UASInterface*,double,double,double,quint64)\0"
    ",roll,pitch,yaw,usec\0"
    "updateAttitude(UASInterface*,double,double,double,quint64)\0"
    "uas\0setUAS(UASInterface*)\0saveWaypoints()\0"
    "loadWaypoints()\0transmit()\0read()\0"
    "refresh()\0addEditable()\0onCurrentPosition\0"
    "addEditable(bool)\0addCurrentPositionWaypoint()\0"
    "string\0updateStatusLabel(QString)\0seq\0"
    "changeCurrentWaypoint(quint16)\0"
    "currentWaypointEditableChanged(quint16)\0"
    "currentWaypointViewOnlyChanged(quint16)\0"
    "uas,wp\0updateWaypointEditable(int,Waypoint*)\0"
    "updateWaypointViewOnly(int,Waypoint*)\0"
    "waypointEditableListChanged()\0"
    "waypointViewOnlyListChanged()\0"
    "clearWPWidget()\0wp\0moveUp(Waypoint*)\0"
    "moveDown(Waypoint*)\0removeWaypoint(Waypoint*)\0"
    "on_clearWPListButton_clicked()\0"
};

void WaypointList::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        WaypointList *_t = static_cast<WaypointList *>(_o);
        switch (_id) {
        case 0: _t->clearPathclicked(); break;
        case 1: _t->createWaypointAtMap((*reinterpret_cast< const QPointF(*)>(_a[1]))); break;
        case 2: _t->updatePosition((*reinterpret_cast< UASInterface*(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4])),(*reinterpret_cast< quint64(*)>(_a[5]))); break;
        case 3: _t->updateAttitude((*reinterpret_cast< UASInterface*(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4])),(*reinterpret_cast< quint64(*)>(_a[5]))); break;
        case 4: _t->setUAS((*reinterpret_cast< UASInterface*(*)>(_a[1]))); break;
        case 5: _t->saveWaypoints(); break;
        case 6: _t->loadWaypoints(); break;
        case 7: _t->transmit(); break;
        case 8: _t->read(); break;
        case 9: _t->refresh(); break;
        case 10: _t->addEditable(); break;
        case 11: _t->addEditable((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 12: _t->addCurrentPositionWaypoint(); break;
        case 13: _t->updateStatusLabel((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 14: _t->changeCurrentWaypoint((*reinterpret_cast< quint16(*)>(_a[1]))); break;
        case 15: _t->currentWaypointEditableChanged((*reinterpret_cast< quint16(*)>(_a[1]))); break;
        case 16: _t->currentWaypointViewOnlyChanged((*reinterpret_cast< quint16(*)>(_a[1]))); break;
        case 17: _t->updateWaypointEditable((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< Waypoint*(*)>(_a[2]))); break;
        case 18: _t->updateWaypointViewOnly((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< Waypoint*(*)>(_a[2]))); break;
        case 19: _t->waypointEditableListChanged(); break;
        case 20: _t->waypointViewOnlyListChanged(); break;
        case 21: _t->clearWPWidget(); break;
        case 22: _t->moveUp((*reinterpret_cast< Waypoint*(*)>(_a[1]))); break;
        case 23: _t->moveDown((*reinterpret_cast< Waypoint*(*)>(_a[1]))); break;
        case 24: _t->removeWaypoint((*reinterpret_cast< Waypoint*(*)>(_a[1]))); break;
        case 25: _t->on_clearWPListButton_clicked(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData WaypointList::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject WaypointList::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_WaypointList,
      qt_meta_data_WaypointList, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &WaypointList::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *WaypointList::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *WaypointList::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_WaypointList))
        return static_cast<void*>(const_cast< WaypointList*>(this));
    return QWidget::qt_metacast(_clname);
}

int WaypointList::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 26)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 26;
    }
    return _id;
}

// SIGNAL 0
void WaypointList::clearPathclicked()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void WaypointList::createWaypointAtMap(const QPointF _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
