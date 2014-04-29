/****************************************************************************
** Meta object code from reading C++ file 'AdvancedParamConfig.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/ui/configuration/AdvancedParamConfig.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'AdvancedParamConfig.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_AdvancedParamConfig[] = {

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
      55,   21,   20,   20, 0x08,
     110,   98,   20,   20, 0x08,
     145,   98,   20,   20, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_AdvancedParamConfig[] = {
    "AdvancedParamConfig\0\0"
    "uas,component,parameterName,value\0"
    "parameterChanged(int,int,QString,QVariant)\0"
    "param,value\0doubleValueChanged(QString,double)\0"
    "intValueChanged(QString,int)\0"
};

void AdvancedParamConfig::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        AdvancedParamConfig *_t = static_cast<AdvancedParamConfig *>(_o);
        switch (_id) {
        case 0: _t->parameterChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< QVariant(*)>(_a[4]))); break;
        case 1: _t->doubleValueChanged((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 2: _t->intValueChanged((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData AdvancedParamConfig::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject AdvancedParamConfig::staticMetaObject = {
    { &AP2ConfigWidget::staticMetaObject, qt_meta_stringdata_AdvancedParamConfig,
      qt_meta_data_AdvancedParamConfig, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &AdvancedParamConfig::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *AdvancedParamConfig::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *AdvancedParamConfig::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_AdvancedParamConfig))
        return static_cast<void*>(const_cast< AdvancedParamConfig*>(this));
    return AP2ConfigWidget::qt_metacast(_clname);
}

int AdvancedParamConfig::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
