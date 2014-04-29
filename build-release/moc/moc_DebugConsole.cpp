/****************************************************************************
** Meta object code from reading C++ file 'DebugConsole.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/ui/DebugConsole.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'DebugConsole.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_DebugConsole[] = {

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
      19,   14,   13,   13, 0x0a,
      47,   43,   13,   13, 0x0a,
      73,   14,   13,   13, 0x0a,
     110,  105,   13,   13, 0x0a,
     141,  134,   13,   13, 0x0a,
     170,  159,   13,   13, 0x0a,
     210,   13,   13,   13, 0x0a,
     227,  222,   13,   13, 0x0a,
     255,  248,   13,   13, 0x0a,
     287,  282,   13,   13, 0x0a,
     298,   13,   13,   13, 0x0a,
     323,   13,   13,   13, 0x0a,
     345,  282,   13,   13, 0x0a,
     390,  363,   13,   13, 0x0a,
     435,  430,   13,   13, 0x0a,
     464,   13,   13,   13, 0x0a,
     486,  430,   13,   13, 0x0a,
     527,  517,   13,   13, 0x0a,
     567,  561,   13,   13, 0x09,
     592,   13,   13,   13, 0x09,
     620,   13,   13,   13, 0x09,
     635,   13,   13,   13, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_DebugConsole[] = {
    "DebugConsole\0\0link\0addLink(LinkInterface*)\0"
    "uas\0uasCreated(UASInterface*)\0"
    "removeLink(LinkInterface*const)\0name\0"
    "updateLinkName(QString)\0linkId\0"
    "linkSelected(int)\0link,bytes\0"
    "receiveBytes(LinkInterface*,QByteArray)\0"
    "sendBytes()\0mode\0hexModeEnabled(bool)\0"
    "filter\0MAVLINKfilterEnabled(bool)\0"
    "hold\0hold(bool)\0setConnectionState(bool)\0"
    "handleConnectButton()\0setAutoHold(bool)\0"
    "id,component,severity,text\0"
    "receiveTextMessage(int,int,int,QString)\0"
    "text\0appendSpecialSymbol(QString)\0"
    "appendSpecialSymbol()\0"
    "specialSymbolSelected(QString)\0name,text\0"
    "linkStatusUpdate(QString,QString)\0"
    "event\0paintEvent(QPaintEvent*)\0"
    "updateTrafficMeasurements()\0loadSettings()\0"
    "storeSettings()\0"
};

void DebugConsole::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        DebugConsole *_t = static_cast<DebugConsole *>(_o);
        switch (_id) {
        case 0: _t->addLink((*reinterpret_cast< LinkInterface*(*)>(_a[1]))); break;
        case 1: _t->uasCreated((*reinterpret_cast< UASInterface*(*)>(_a[1]))); break;
        case 2: _t->removeLink((*reinterpret_cast< LinkInterface*const(*)>(_a[1]))); break;
        case 3: _t->updateLinkName((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: _t->linkSelected((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->receiveBytes((*reinterpret_cast< LinkInterface*(*)>(_a[1])),(*reinterpret_cast< QByteArray(*)>(_a[2]))); break;
        case 6: _t->sendBytes(); break;
        case 7: _t->hexModeEnabled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->MAVLINKfilterEnabled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: _t->hold((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 10: _t->setConnectionState((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 11: _t->handleConnectButton(); break;
        case 12: _t->setAutoHold((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 13: _t->receiveTextMessage((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< QString(*)>(_a[4]))); break;
        case 14: _t->appendSpecialSymbol((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 15: _t->appendSpecialSymbol(); break;
        case 16: _t->specialSymbolSelected((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 17: _t->linkStatusUpdate((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 18: _t->paintEvent((*reinterpret_cast< QPaintEvent*(*)>(_a[1]))); break;
        case 19: _t->updateTrafficMeasurements(); break;
        case 20: _t->loadSettings(); break;
        case 21: _t->storeSettings(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData DebugConsole::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject DebugConsole::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_DebugConsole,
      qt_meta_data_DebugConsole, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &DebugConsole::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *DebugConsole::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *DebugConsole::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_DebugConsole))
        return static_cast<void*>(const_cast< DebugConsole*>(this));
    return QWidget::qt_metacast(_clname);
}

int DebugConsole::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
