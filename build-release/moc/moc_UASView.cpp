/****************************************************************************
** Meta object code from reading C++ file 'UASView.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/ui/uas/UASView.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'UASView.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_UASView[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      27,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      13,    9,    8,    8, 0x05,
      39,    9,    8,    8, 0x05,

 // slots: signature, parameters, type, tag, flags
      71,   66,    8,    8, 0x0a,
      91,    9,    8,    8, 0x0a,
     134,  123,    8,    8, 0x0a,
     205,  169,    8,    8, 0x0a,
     271,  259,    8,    8, 0x0a,
     353,  335,    8,    8, 0x0a,
     418,  259,    8,    8, 0x0a,
     501,  474,    8,    8, 0x0a,
     569,  544,    8,    8, 0x0a,
     610,  601,    8,    8, 0x0a,
     643,    8,    8,    8, 0x0a,
     655,    8,    8,    8, 0x0a,
     676,    8,    8,    8, 0x0a,
     726,  686,    8,    8, 0x0a,
     794,  785,    8,    8, 0x0a,
     835,  826,    8,    8, 0x0a,
     874,  859,    8,    8, 0x0a,
     908,    8,    8,    8, 0x0a,
     940,  929,    8,    8, 0x0a,
     987,  976,    8,    8, 0x0a,
    1015,    8,    8,    8, 0x0a,
    1024,    8,    8,    8, 0x0a,
    1041,    8,    8,    8, 0x0a,
    1091, 1059,    8,    8, 0x0a,
    1143, 1127,    8,    8, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_UASView[] = {
    "UASView\0\0uas\0uasInFocus(UASInterface*)\0"
    "uasOutFocus(UASInterface*)\0name\0"
    "updateName(QString)\0receiveHeartbeat(UASInterface*)\0"
    "uas,thrust\0updateThrust(UASInterface*,double)\0"
    "uas,voltage,current,percent,seconds\0"
    "updateBattery(UASInterface*,double,double,double,int)\0"
    ",x,y,z,usec\0"
    "updateLocalPosition(UASInterface*,double,double,double,quint64)\0"
    ",lon,lat,alt,usec\0"
    "updateGlobalPosition(UASInterface*,double,double,double,quint64)\0"
    "updateSpeed(UASInterface*,double,double,double,quint64)\0"
    ",uasState,stateDescription\0"
    "updateState(UASInterface*,QString,QString)\0"
    "sysId,status,description\0"
    "updateMode(int,QString,QString)\0"
    "uas,load\0updateLoad(UASInterface*,double)\0"
    "showHILUi()\0triggerUASDeletion()\0"
    "refresh()\0uasId,id,x,y,z,yaw,autocontinue,current\0"
    "setWaypoint(int,int,double,double,double,double,bool,bool)\0"
    "waypoint\0currentWaypointUpdated(quint16)\0"
    "uasId,id\0selectWaypoint(int,int)\0"
    "uas,systemType\0setSystemType(UASInterface*,uint)\0"
    "setUASasActive(bool)\0uas,active\0"
    "updateActiveUAS(UASInterface*,bool)\0"
    "timeout,ms\0heartbeatTimeout(bool,uint)\0"
    "rename()\0selectAirframe()\0setBatterySpecs()\0"
    "uasid,componentid,severity,text\0"
    "showStatusText(int,int,int,QString)\0"
    "uasid,mode,text\0updateNavMode(int,int,QString)\0"
};

void UASView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        UASView *_t = static_cast<UASView *>(_o);
        switch (_id) {
        case 0: _t->uasInFocus((*reinterpret_cast< UASInterface*(*)>(_a[1]))); break;
        case 1: _t->uasOutFocus((*reinterpret_cast< UASInterface*(*)>(_a[1]))); break;
        case 2: _t->updateName((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->receiveHeartbeat((*reinterpret_cast< UASInterface*(*)>(_a[1]))); break;
        case 4: _t->updateThrust((*reinterpret_cast< UASInterface*(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 5: _t->updateBattery((*reinterpret_cast< UASInterface*(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5]))); break;
        case 6: _t->updateLocalPosition((*reinterpret_cast< UASInterface*(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4])),(*reinterpret_cast< quint64(*)>(_a[5]))); break;
        case 7: _t->updateGlobalPosition((*reinterpret_cast< UASInterface*(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4])),(*reinterpret_cast< quint64(*)>(_a[5]))); break;
        case 8: _t->updateSpeed((*reinterpret_cast< UASInterface*(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4])),(*reinterpret_cast< quint64(*)>(_a[5]))); break;
        case 9: _t->updateState((*reinterpret_cast< UASInterface*(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3]))); break;
        case 10: _t->updateMode((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3]))); break;
        case 11: _t->updateLoad((*reinterpret_cast< UASInterface*(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 12: _t->showHILUi(); break;
        case 13: _t->triggerUASDeletion(); break;
        case 14: _t->refresh(); break;
        case 15: _t->setWaypoint((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4])),(*reinterpret_cast< double(*)>(_a[5])),(*reinterpret_cast< double(*)>(_a[6])),(*reinterpret_cast< bool(*)>(_a[7])),(*reinterpret_cast< bool(*)>(_a[8]))); break;
        case 16: _t->currentWaypointUpdated((*reinterpret_cast< quint16(*)>(_a[1]))); break;
        case 17: _t->selectWaypoint((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 18: _t->setSystemType((*reinterpret_cast< UASInterface*(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2]))); break;
        case 19: _t->setUASasActive((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 20: _t->updateActiveUAS((*reinterpret_cast< UASInterface*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 21: _t->heartbeatTimeout((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2]))); break;
        case 22: _t->rename(); break;
        case 23: _t->selectAirframe(); break;
        case 24: _t->setBatterySpecs(); break;
        case 25: _t->showStatusText((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< QString(*)>(_a[4]))); break;
        case 26: _t->updateNavMode((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData UASView::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UASView::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_UASView,
      qt_meta_data_UASView, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UASView::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UASView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UASView::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UASView))
        return static_cast<void*>(const_cast< UASView*>(this));
    return QWidget::qt_metacast(_clname);
}

int UASView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 27)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 27;
    }
    return _id;
}

// SIGNAL 0
void UASView::uasInFocus(UASInterface * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void UASView::uasOutFocus(UASInterface * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
