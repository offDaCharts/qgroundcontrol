/****************************************************************************
** Meta object code from reading C++ file 'UASControlParameters.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/ui/uas/UASControlParameters.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'UASControlParameters.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_UASControlParameters[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      27,   22,   21,   21, 0x0a,
      48,   44,   21,   21, 0x0a,
      81,   76,   21,   21, 0x0a,
     146,   76,   21,   21, 0x0a,
     227,  203,   21,   21, 0x0a,
     286,   21,   21,   21, 0x0a,
     300,   21,   21,   21, 0x0a,
     314,   21,   21,   21, 0x0a,
     352,  331,   21,   21, 0x0a,
     397,  384,   21,   21, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_UASControlParameters[] = {
    "UASControlParameters\0\0mode\0changedMode(int)\0"
    "uas\0activeUasSet(UASInterface*)\0,,,,\0"
    "updateGlobalPosition(UASInterface*,double,double,double,quint64)\0"
    "speedChanged(UASInterface*,double,double,double,quint64)\0"
    "uas,roll,pitch,yaw,time\0"
    "updateAttitude(UASInterface*,double,double,double,quint64)\0"
    "setCommands()\0getCommands()\0"
    "setPassthrough()\0uas,mode,description\0"
    "updateMode(int,QString,QString)\0"
    "uas,throttle\0thrustChanged(UASInterface*,double)\0"
};

void UASControlParameters::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        UASControlParameters *_t = static_cast<UASControlParameters *>(_o);
        switch (_id) {
        case 0: _t->changedMode((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->activeUasSet((*reinterpret_cast< UASInterface*(*)>(_a[1]))); break;
        case 2: _t->updateGlobalPosition((*reinterpret_cast< UASInterface*(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4])),(*reinterpret_cast< quint64(*)>(_a[5]))); break;
        case 3: _t->speedChanged((*reinterpret_cast< UASInterface*(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4])),(*reinterpret_cast< quint64(*)>(_a[5]))); break;
        case 4: _t->updateAttitude((*reinterpret_cast< UASInterface*(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4])),(*reinterpret_cast< quint64(*)>(_a[5]))); break;
        case 5: _t->setCommands(); break;
        case 6: _t->getCommands(); break;
        case 7: _t->setPassthrough(); break;
        case 8: _t->updateMode((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3]))); break;
        case 9: _t->thrustChanged((*reinterpret_cast< UASInterface*(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData UASControlParameters::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UASControlParameters::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_UASControlParameters,
      qt_meta_data_UASControlParameters, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UASControlParameters::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UASControlParameters::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UASControlParameters::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UASControlParameters))
        return static_cast<void*>(const_cast< UASControlParameters*>(this));
    return QWidget::qt_metacast(_clname);
}

int UASControlParameters::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
