/****************************************************************************
** Meta object code from reading C++ file 'QGCPX4AirframeConfig.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/ui/px4_configuration/QGCPX4AirframeConfig.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QGCPX4AirframeConfig.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QGCPX4AirframeConfig[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      24,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      26,   22,   21,   21, 0x0a,
      88,   54,   21,   21, 0x0a,
     131,   21,   21,   21, 0x0a,
     153,  147,   21,   21, 0x0a,
     172,   21,   21,   21, 0x0a,
     186,  147,   21,   21, 0x0a,
     203,   21,   21,   21, 0x0a,
     219,  147,   21,   21, 0x0a,
     238,   21,   21,   21, 0x0a,
     259,  147,   21,   21, 0x0a,
     283,   21,   21,   21, 0x0a,
     302,  147,   21,   21, 0x0a,
     324,   21,   21,   21, 0x0a,
     340,  147,   21,   21, 0x0a,
     359,   21,   21,   21, 0x0a,
     378,  147,   21,   21, 0x0a,
     400,   21,   21,   21, 0x0a,
     416,  147,   21,   21, 0x0a,
     435,   21,   21,   21, 0x0a,
     454,  147,   21,   21, 0x0a,
     476,   21,   21,   21, 0x0a,
     488,  147,   21,   21, 0x0a,
     503,   21,   21,   21, 0x0a,
     520,   21,   21,   21, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_QGCPX4AirframeConfig[] = {
    "QGCPX4AirframeConfig\0\0uas\0"
    "setActiveUAS(UASInterface*)\0"
    "uas,component,parameterName,value\0"
    "parameterChanged(int,int,QString,QVariant)\0"
    "quadXSelected()\0index\0quadXSelected(int)\0"
    "simSelected()\0simSelected(int)\0"
    "planeSelected()\0planeSelected(int)\0"
    "flyingWingSelected()\0flyingWingSelected(int)\0"
    "quadPlusSelected()\0quadPlusSelected(int)\0"
    "hexaXSelected()\0hexaXSelected(int)\0"
    "hexaPlusSelected()\0hexaPlusSelected(int)\0"
    "octoXSelected()\0octoXSelected(int)\0"
    "octoPlusSelected()\0octoPlusSelected(int)\0"
    "hSelected()\0hSelected(int)\0applyAndReboot()\0"
    "checkConfigState()\0"
};

void QGCPX4AirframeConfig::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QGCPX4AirframeConfig *_t = static_cast<QGCPX4AirframeConfig *>(_o);
        switch (_id) {
        case 0: _t->setActiveUAS((*reinterpret_cast< UASInterface*(*)>(_a[1]))); break;
        case 1: _t->parameterChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< QVariant(*)>(_a[4]))); break;
        case 2: _t->quadXSelected(); break;
        case 3: _t->quadXSelected((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->simSelected(); break;
        case 5: _t->simSelected((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->planeSelected(); break;
        case 7: _t->planeSelected((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->flyingWingSelected(); break;
        case 9: _t->flyingWingSelected((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->quadPlusSelected(); break;
        case 11: _t->quadPlusSelected((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 12: _t->hexaXSelected(); break;
        case 13: _t->hexaXSelected((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 14: _t->hexaPlusSelected(); break;
        case 15: _t->hexaPlusSelected((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 16: _t->octoXSelected(); break;
        case 17: _t->octoXSelected((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 18: _t->octoPlusSelected(); break;
        case 19: _t->octoPlusSelected((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 20: _t->hSelected(); break;
        case 21: _t->hSelected((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 22: _t->applyAndReboot(); break;
        case 23: _t->checkConfigState(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QGCPX4AirframeConfig::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QGCPX4AirframeConfig::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_QGCPX4AirframeConfig,
      qt_meta_data_QGCPX4AirframeConfig, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QGCPX4AirframeConfig::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QGCPX4AirframeConfig::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QGCPX4AirframeConfig::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QGCPX4AirframeConfig))
        return static_cast<void*>(const_cast< QGCPX4AirframeConfig*>(this));
    return QWidget::qt_metacast(_clname);
}

int QGCPX4AirframeConfig::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 24)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 24;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
