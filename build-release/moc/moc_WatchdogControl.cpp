/****************************************************************************
** Meta object code from reading C++ file 'WatchdogControl.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/ui/watchdog/WatchdogControl.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'WatchdogControl.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_WatchdogControl[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      46,   17,   16,   16, 0x05,

 // slots: signature, parameters, type, tag, flags
     112,   79,   16,   16, 0x0a,
     194,  141,   16,   16, 0x0a,
     292,  238,   16,   16, 0x0a,
     340,  336,   16,   16, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_WatchdogControl[] = {
    "WatchdogControl\0\0watchdogId,processId,command\0"
    "sendProcessCommand(int,int,uint)\0"
    "systemId,watchdogId,processCount\0"
    "updateWatchdog(int,int,uint)\0"
    "systemId,watchdogId,processId,name,arguments,timeout\0"
    "addProcess(int,int,int,QString,QString,int)\0"
    "systemId,watchdogId,processId,state,muted,crashed,pid\0"
    "updateProcess(int,int,int,int,bool,int,int)\0"
    "uas\0setUAS(UASInterface*)\0"
};

void WatchdogControl::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        WatchdogControl *_t = static_cast<WatchdogControl *>(_o);
        switch (_id) {
        case 0: _t->sendProcessCommand((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< uint(*)>(_a[3]))); break;
        case 1: _t->updateWatchdog((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< uint(*)>(_a[3]))); break;
        case 2: _t->addProcess((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< QString(*)>(_a[4])),(*reinterpret_cast< QString(*)>(_a[5])),(*reinterpret_cast< int(*)>(_a[6]))); break;
        case 3: _t->updateProcess((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])),(*reinterpret_cast< bool(*)>(_a[5])),(*reinterpret_cast< int(*)>(_a[6])),(*reinterpret_cast< int(*)>(_a[7]))); break;
        case 4: _t->setUAS((*reinterpret_cast< UASInterface*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData WatchdogControl::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject WatchdogControl::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_WatchdogControl,
      qt_meta_data_WatchdogControl, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &WatchdogControl::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *WatchdogControl::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *WatchdogControl::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_WatchdogControl))
        return static_cast<void*>(const_cast< WatchdogControl*>(this));
    return QWidget::qt_metacast(_clname);
}

int WatchdogControl::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void WatchdogControl::sendProcessCommand(int _t1, int _t2, unsigned int _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
