/****************************************************************************
** Meta object code from reading C++ file 'AirspeedConfig.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/ui/configuration/AirspeedConfig.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'AirspeedConfig.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_AirspeedConfig[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      50,   16,   15,   15, 0x08,
     101,   93,   15,   15, 0x08,
     126,   93,   15,   15, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_AirspeedConfig[] = {
    "AirspeedConfig\0\0uas,component,parameterName,value\0"
    "parameterChanged(int,int,QString,QVariant)\0"
    "checked\0useCheckBoxClicked(bool)\0"
    "enableCheckBoxClicked(bool)\0"
};

void AirspeedConfig::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        AirspeedConfig *_t = static_cast<AirspeedConfig *>(_o);
        switch (_id) {
        case 0: _t->parameterChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< QVariant(*)>(_a[4]))); break;
        case 1: _t->useCheckBoxClicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->enableCheckBoxClicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData AirspeedConfig::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject AirspeedConfig::staticMetaObject = {
    { &AP2ConfigWidget::staticMetaObject, qt_meta_stringdata_AirspeedConfig,
      qt_meta_data_AirspeedConfig, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &AirspeedConfig::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *AirspeedConfig::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *AirspeedConfig::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_AirspeedConfig))
        return static_cast<void*>(const_cast< AirspeedConfig*>(this));
    return AP2ConfigWidget::qt_metacast(_clname);
}

int AirspeedConfig::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AP2ConfigWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
