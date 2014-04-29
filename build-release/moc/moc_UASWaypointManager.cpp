/****************************************************************************
** Meta object code from reading C++ file 'UASWaypointManager.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/uas/UASWaypointManager.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'UASWaypointManager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_UASWaypointManager[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      25,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      11,       // signalCount

 // signals: signature, parameters, type, tag, flags
      20,   19,   19,   19, 0x05,
      56,   50,   19,   19, 0x05,
      98,   89,   19,   19, 0x05,
     137,   19,   19,   19, 0x05,
     167,   50,   19,   19, 0x05,
     200,   89,   19,   19, 0x05,
     239,   19,   19,   19, 0x05,
     271,   19,   19,   19, 0x05,
     308,  299,   19,   19, 0x05,
     340,   19,   19,   19, 0x05,
     359,  353,   19,   19, 0x05,

 // slots: signature, parameters, type, tag, flags
     385,   19,   19,   19, 0x0a,
     417,  395,   19,   19, 0x0a,
     456,  453,   19,   19, 0x2a,
     487,  453,   19,   19, 0x0a,
     547,  528,  518,   19, 0x0a,
     568,   19,  518,   19, 0x2a,
     593,  589,  585,   19, 0x0a,
     633,  617,   19,   19, 0x0a,
     672,  663,   19,   19, 0x0a,
     704,  695,   19,   19, 0x0a,
     727,  453,   19,   19, 0x0a,
     761,  453,   19,   19, 0x0a,
     810,  795,   19,   19, 0x0a,
     902,  881,   19,   19, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_UASWaypointManager[] = {
    "UASWaypointManager\0\0waypointEditableListChanged()\0"
    "uasid\0waypointEditableListChanged(int)\0"
    "uasid,wp\0waypointEditableChanged(int,Waypoint*)\0"
    "waypointViewOnlyListChanged()\0"
    "waypointViewOnlyListChanged(int)\0"
    "waypointViewOnlyChanged(int,Waypoint*)\0"
    "currentWaypointChanged(quint16)\0"
    "updateStatusString(QString)\0distance\0"
    "waypointDistanceChanged(double)\0"
    "loadWPFile()\0value\0readGlobalWPFromUAS(bool)\0"
    "timeout()\0wp,enforceFirstActive\0"
    "addWaypointEditable(Waypoint*,bool)\0"
    "wp\0addWaypointEditable(Waypoint*)\0"
    "addWaypointViewOnly(Waypoint*)\0Waypoint*\0"
    "enforceFirstActive\0createWaypoint(bool)\0"
    "createWaypoint()\0int\0seq\0"
    "removeWaypoint(quint16)\0cur_seq,new_seq\0"
    "moveWaypoint(quint16,quint16)\0saveFile\0"
    "saveWaypoints(QString)\0loadFile\0"
    "loadWaypoints(QString)\0"
    "notifyOfChangeEditable(Waypoint*)\0"
    "notifyOfChangeViewOnly(Waypoint*)\0"
    "mav,x,y,z,time\0"
    "handleLocalPositionChanged(UASInterface*,double,double,double,quint64)\0"
    "mav,lat,lon,alt,time\0"
    "handleGlobalPositionChanged(UASInterface*,double,double,double,quint64"
    ")\0"
};

void UASWaypointManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        UASWaypointManager *_t = static_cast<UASWaypointManager *>(_o);
        switch (_id) {
        case 0: _t->waypointEditableListChanged(); break;
        case 1: _t->waypointEditableListChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->waypointEditableChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< Waypoint*(*)>(_a[2]))); break;
        case 3: _t->waypointViewOnlyListChanged(); break;
        case 4: _t->waypointViewOnlyListChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->waypointViewOnlyChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< Waypoint*(*)>(_a[2]))); break;
        case 6: _t->currentWaypointChanged((*reinterpret_cast< quint16(*)>(_a[1]))); break;
        case 7: _t->updateStatusString((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 8: _t->waypointDistanceChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 9: _t->loadWPFile(); break;
        case 10: _t->readGlobalWPFromUAS((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 11: _t->timeout(); break;
        case 12: _t->addWaypointEditable((*reinterpret_cast< Waypoint*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 13: _t->addWaypointEditable((*reinterpret_cast< Waypoint*(*)>(_a[1]))); break;
        case 14: _t->addWaypointViewOnly((*reinterpret_cast< Waypoint*(*)>(_a[1]))); break;
        case 15: { Waypoint* _r = _t->createWaypoint((*reinterpret_cast< bool(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< Waypoint**>(_a[0]) = _r; }  break;
        case 16: { Waypoint* _r = _t->createWaypoint();
            if (_a[0]) *reinterpret_cast< Waypoint**>(_a[0]) = _r; }  break;
        case 17: { int _r = _t->removeWaypoint((*reinterpret_cast< quint16(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 18: _t->moveWaypoint((*reinterpret_cast< quint16(*)>(_a[1])),(*reinterpret_cast< quint16(*)>(_a[2]))); break;
        case 19: _t->saveWaypoints((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 20: _t->loadWaypoints((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 21: _t->notifyOfChangeEditable((*reinterpret_cast< Waypoint*(*)>(_a[1]))); break;
        case 22: _t->notifyOfChangeViewOnly((*reinterpret_cast< Waypoint*(*)>(_a[1]))); break;
        case 23: _t->handleLocalPositionChanged((*reinterpret_cast< UASInterface*(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4])),(*reinterpret_cast< quint64(*)>(_a[5]))); break;
        case 24: _t->handleGlobalPositionChanged((*reinterpret_cast< UASInterface*(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4])),(*reinterpret_cast< quint64(*)>(_a[5]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData UASWaypointManager::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UASWaypointManager::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_UASWaypointManager,
      qt_meta_data_UASWaypointManager, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UASWaypointManager::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UASWaypointManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UASWaypointManager::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UASWaypointManager))
        return static_cast<void*>(const_cast< UASWaypointManager*>(this));
    return QObject::qt_metacast(_clname);
}

int UASWaypointManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 25)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 25;
    }
    return _id;
}

// SIGNAL 0
void UASWaypointManager::waypointEditableListChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void UASWaypointManager::waypointEditableListChanged(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void UASWaypointManager::waypointEditableChanged(int _t1, Waypoint * _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void UASWaypointManager::waypointViewOnlyListChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, 0);
}

// SIGNAL 4
void UASWaypointManager::waypointViewOnlyListChanged(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void UASWaypointManager::waypointViewOnlyChanged(int _t1, Waypoint * _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void UASWaypointManager::currentWaypointChanged(quint16 _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void UASWaypointManager::updateStatusString(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void UASWaypointManager::waypointDistanceChanged(double _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void UASWaypointManager::loadWPFile()
{
    QMetaObject::activate(this, &staticMetaObject, 9, 0);
}

// SIGNAL 10
void UASWaypointManager::readGlobalWPFromUAS(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}
QT_END_MOC_NAMESPACE
