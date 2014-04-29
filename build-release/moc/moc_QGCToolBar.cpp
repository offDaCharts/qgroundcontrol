/****************************************************************************
** Meta object code from reading C++ file 'QGCToolBar.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/ui/QGCToolBar.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QGCToolBar.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QGCToolBar[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      22,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      19,   12,   11,   11, 0x0a,
      52,   47,   11,   11, 0x0a,
      76,   47,   11,   11, 0x0a,
     113,  103,   11,   11, 0x0a,
     159,  135,   11,   11, 0x0a,
     202,  135,   11,   11, 0x0a,
     239,  234,   11,   11, 0x0a,
     274,  259,   11,   11, 0x0a,
     340,  308,   11,   11, 0x0a,
     416,  380,   11,   11, 0x0a,
     482,  479,   11,   11, 0x0a,
     522,  513,   11,   11, 0x0a,
     559,  553,   11,   11, 0x0a,
     583,   11,   11,   11, 0x0a,
     607,  596,   11,   11, 0x0a,
     656,  635,   11,   11, 0x0a,
     730,  722,   11,   11, 0x0a,
     748,   11,   11,   11, 0x0a,
     775,  768,   11,   11, 0x0a,
     811,   11,   11,   11, 0x0a,
     834,  828,   11,   11, 0x0a,
     852,  828,   11,   11, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_QGCToolBar[] = {
    "QGCToolBar\0\0active\0setActiveUAS(UASInterface*)\0"
    "link\0addLink(LinkInterface*)\0"
    "removeLink(LinkInterface*)\0connected\0"
    "updateLinkState(bool)\0system,name,description\0"
    "updateState(UASInterface*,QString,QString)\0"
    "updateMode(int,QString,QString)\0name\0"
    "updateName(QString)\0uas,systemType\0"
    "setSystemType(UASInterface*,uint)\0"
    "uasid,componentid,severity,text\0"
    "receiveTextMessage(int,int,int,QString)\0"
    "uas,voltage,current,percent,seconds\0"
    "updateBatteryRemaining(UASInterface*,double,double,double,int)\0"
    "id\0updateCurrentWaypoint(quint16)\0"
    "distance\0updateWaypointDistance(double)\0"
    "armed\0updateArmingState(bool)\0"
    "updateView()\0timeout,ms\0"
    "heartbeatTimeout(bool,uint)\0"
    "uas,lat,lon,alt,usec\0"
    "globalPositionChanged(UASInterface*,double,double,double,quint64)\0"
    "connect\0connectLink(bool)\0clearStatusString()\0"
    "action\0advancedActivityTriggered(QAction*)\0"
    "updateComboBox()\0index\0baudSelected(int)\0"
    "portSelected(int)\0"
};

void QGCToolBar::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QGCToolBar *_t = static_cast<QGCToolBar *>(_o);
        switch (_id) {
        case 0: _t->setActiveUAS((*reinterpret_cast< UASInterface*(*)>(_a[1]))); break;
        case 1: _t->addLink((*reinterpret_cast< LinkInterface*(*)>(_a[1]))); break;
        case 2: _t->removeLink((*reinterpret_cast< LinkInterface*(*)>(_a[1]))); break;
        case 3: _t->updateLinkState((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->updateState((*reinterpret_cast< UASInterface*(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3]))); break;
        case 5: _t->updateMode((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3]))); break;
        case 6: _t->updateName((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->setSystemType((*reinterpret_cast< UASInterface*(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2]))); break;
        case 8: _t->receiveTextMessage((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< QString(*)>(_a[4]))); break;
        case 9: _t->updateBatteryRemaining((*reinterpret_cast< UASInterface*(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5]))); break;
        case 10: _t->updateCurrentWaypoint((*reinterpret_cast< quint16(*)>(_a[1]))); break;
        case 11: _t->updateWaypointDistance((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 12: _t->updateArmingState((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 13: _t->updateView(); break;
        case 14: _t->heartbeatTimeout((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2]))); break;
        case 15: _t->globalPositionChanged((*reinterpret_cast< UASInterface*(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4])),(*reinterpret_cast< quint64(*)>(_a[5]))); break;
        case 16: _t->connectLink((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 17: _t->clearStatusString(); break;
        case 18: _t->advancedActivityTriggered((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 19: _t->updateComboBox(); break;
        case 20: _t->baudSelected((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 21: _t->portSelected((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QGCToolBar::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QGCToolBar::staticMetaObject = {
    { &QToolBar::staticMetaObject, qt_meta_stringdata_QGCToolBar,
      qt_meta_data_QGCToolBar, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QGCToolBar::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QGCToolBar::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QGCToolBar::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QGCToolBar))
        return static_cast<void*>(const_cast< QGCToolBar*>(this));
    return QToolBar::qt_metacast(_clname);
}

int QGCToolBar::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QToolBar::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 22)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 22;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
