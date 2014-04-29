/****************************************************************************
** Meta object code from reading C++ file 'apmtoolbar.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/ui/apmtoolbar.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'apmtoolbar.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_APMToolBar[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      20,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: signature, parameters, type, tag, flags
      12,   11,   11,   11, 0x05,
      32,   11,   11,   11, 0x05,
      56,   11,   11,   11, 0x05,
      78,   11,   11,   11, 0x05,
     100,   11,   11,   11, 0x05,
     124,   11,   11,   11, 0x05,
     156,  146,   11,   11, 0x05,

 // slots: signature, parameters, type, tag, flags
     175,   11,   11,   11, 0x0a,
     194,   11,   11,   11, 0x0a,
     217,   11,   11,   11, 0x0a,
     238,   11,   11,   11, 0x0a,
     259,   11,   11,   11, 0x0a,
     282,   11,   11,   11, 0x0a,
     303,   11,   11,   11, 0x0a,
     316,   11,   11,   11, 0x0a,
     350,  339,   11,   11, 0x0a,
     374,  370,   11,   11, 0x0a,
     420,  402,   11,   11, 0x0a,
     453,  447,   11,   11, 0x0a,
     481,  473,   11,   11, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_APMToolBar[] = {
    "APMToolBar\0\0triggerFlightView()\0"
    "triggerFlightPlanView()\0triggerHardwareView()\0"
    "triggerSoftwareView()\0triggerSimulationView()\0"
    "triggerTerminalView()\0connected\0"
    "MAVConnected(bool)\0selectFlightView()\0"
    "selectFlightPlanView()\0selectHardwareView()\0"
    "selectSoftwareView()\0selectSimulationView()\0"
    "selectTerminalView()\0connectMAV()\0"
    "showConnectionDialog()\0connection\0"
    "setConnection(bool)\0uas\0"
    "activeUasSet(UASInterface*)\0"
    "sysId,armingState\0armingChanged(int,QString)\0"
    "armed\0armingChanged(bool)\0newLink\0"
    "updateLinkDisplay(LinkInterface*)\0"
};

void APMToolBar::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        APMToolBar *_t = static_cast<APMToolBar *>(_o);
        switch (_id) {
        case 0: _t->triggerFlightView(); break;
        case 1: _t->triggerFlightPlanView(); break;
        case 2: _t->triggerHardwareView(); break;
        case 3: _t->triggerSoftwareView(); break;
        case 4: _t->triggerSimulationView(); break;
        case 5: _t->triggerTerminalView(); break;
        case 6: _t->MAVConnected((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->selectFlightView(); break;
        case 8: _t->selectFlightPlanView(); break;
        case 9: _t->selectHardwareView(); break;
        case 10: _t->selectSoftwareView(); break;
        case 11: _t->selectSimulationView(); break;
        case 12: _t->selectTerminalView(); break;
        case 13: _t->connectMAV(); break;
        case 14: _t->showConnectionDialog(); break;
        case 15: _t->setConnection((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 16: _t->activeUasSet((*reinterpret_cast< UASInterface*(*)>(_a[1]))); break;
        case 17: _t->armingChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 18: _t->armingChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 19: _t->updateLinkDisplay((*reinterpret_cast< LinkInterface*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData APMToolBar::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject APMToolBar::staticMetaObject = {
    { &QDeclarativeView::staticMetaObject, qt_meta_stringdata_APMToolBar,
      qt_meta_data_APMToolBar, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &APMToolBar::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *APMToolBar::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *APMToolBar::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_APMToolBar))
        return static_cast<void*>(const_cast< APMToolBar*>(this));
    return QDeclarativeView::qt_metacast(_clname);
}

int APMToolBar::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDeclarativeView::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 20)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 20;
    }
    return _id;
}

// SIGNAL 0
void APMToolBar::triggerFlightView()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void APMToolBar::triggerFlightPlanView()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void APMToolBar::triggerHardwareView()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}

// SIGNAL 3
void APMToolBar::triggerSoftwareView()
{
    QMetaObject::activate(this, &staticMetaObject, 3, 0);
}

// SIGNAL 4
void APMToolBar::triggerSimulationView()
{
    QMetaObject::activate(this, &staticMetaObject, 4, 0);
}

// SIGNAL 5
void APMToolBar::triggerTerminalView()
{
    QMetaObject::activate(this, &staticMetaObject, 5, 0);
}

// SIGNAL 6
void APMToolBar::MAVConnected(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}
QT_END_MOC_NAMESPACE
