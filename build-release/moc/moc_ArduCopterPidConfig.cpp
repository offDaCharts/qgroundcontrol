/****************************************************************************
** Meta object code from reading C++ file 'ArduCopterPidConfig.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/ui/configuration/ArduCopterPidConfig.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ArduCopterPidConfig.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ArduCopterPidConfig[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      21,   20,   20,   20, 0x08,
      42,   20,   20,   20, 0x08,
      99,   65,   20,   20, 0x08,
     150,  142,   20,   20, 0x08,
     182,  176,   20,   20, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_ArduCopterPidConfig[] = {
    "ArduCopterPidConfig\0\0writeButtonClicked()\0"
    "refreshButtonClicked()\0"
    "uas,component,parameterName,value\0"
    "parameterChanged(int,int,QString,QVariant)\0"
    "checked\0lockCheckBoxClicked(bool)\0"
    "value\0stabilLockedChanged(double)\0"
};

void ArduCopterPidConfig::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ArduCopterPidConfig *_t = static_cast<ArduCopterPidConfig *>(_o);
        switch (_id) {
        case 0: _t->writeButtonClicked(); break;
        case 1: _t->refreshButtonClicked(); break;
        case 2: _t->parameterChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< QVariant(*)>(_a[4]))); break;
        case 3: _t->lockCheckBoxClicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->stabilLockedChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData ArduCopterPidConfig::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ArduCopterPidConfig::staticMetaObject = {
    { &AP2ConfigWidget::staticMetaObject, qt_meta_stringdata_ArduCopterPidConfig,
      qt_meta_data_ArduCopterPidConfig, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ArduCopterPidConfig::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ArduCopterPidConfig::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ArduCopterPidConfig::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ArduCopterPidConfig))
        return static_cast<void*>(const_cast< ArduCopterPidConfig*>(this));
    return AP2ConfigWidget::qt_metacast(_clname);
}

int ArduCopterPidConfig::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AP2ConfigWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
