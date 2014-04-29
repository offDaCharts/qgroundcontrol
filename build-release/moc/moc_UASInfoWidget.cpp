/****************************************************************************
** Meta object code from reading C++ file 'UASInfoWidget.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/ui/uas/UASInfoWidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'UASInfoWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_UASInfoWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      19,   15,   14,   14, 0x0a,
      41,   15,   14,   14, 0x0a,
     105,   69,   14,   14, 0x0a,
     168,  159,   14,   14, 0x0a,
     222,  204,   14,   14, 0x0a,
     266,  251,   14,   14, 0x0a,
     321,  292,   14,   14, 0x0a,
     375,  363,   14,   14, 0x0a,
     424,  408,   14,   14, 0x0a,
     473,  461,   14,   14, 0x0a,
     512,   14,   14,   14, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_UASInfoWidget[] = {
    "UASInfoWidget\0\0uas\0addUAS(UASInterface*)\0"
    "setActiveUAS(UASInterface*)\0"
    "uas,voltage,current,percent,seconds\0"
    "updateBattery(UASInterface*,double,double,double,int)\0"
    "uas,load\0updateCPULoad(UASInterface*,double)\0"
    "uasId,receiveLoss\0updateReceiveLoss(int,float)\0"
    "uasId,sendLoss\0updateSendLoss(int,float)\0"
    "uasid,component,device,count\0"
    "updateErrorCount(int,QString,QString,int)\0"
    "uas,voltage\0setVoltage(UASInterface*,double)\0"
    "uas,chargeLevel\0setChargeLevel(UASInterface*,double)\0"
    "uas,seconds\0setTimeRemaining(UASInterface*,double)\0"
    "refresh()\0"
};

void UASInfoWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        UASInfoWidget *_t = static_cast<UASInfoWidget *>(_o);
        switch (_id) {
        case 0: _t->addUAS((*reinterpret_cast< UASInterface*(*)>(_a[1]))); break;
        case 1: _t->setActiveUAS((*reinterpret_cast< UASInterface*(*)>(_a[1]))); break;
        case 2: _t->updateBattery((*reinterpret_cast< UASInterface*(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5]))); break;
        case 3: _t->updateCPULoad((*reinterpret_cast< UASInterface*(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 4: _t->updateReceiveLoss((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2]))); break;
        case 5: _t->updateSendLoss((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2]))); break;
        case 6: _t->updateErrorCount((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        case 7: _t->setVoltage((*reinterpret_cast< UASInterface*(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 8: _t->setChargeLevel((*reinterpret_cast< UASInterface*(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 9: _t->setTimeRemaining((*reinterpret_cast< UASInterface*(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 10: _t->refresh(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData UASInfoWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UASInfoWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_UASInfoWidget,
      qt_meta_data_UASInfoWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UASInfoWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UASInfoWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UASInfoWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UASInfoWidget))
        return static_cast<void*>(const_cast< UASInfoWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int UASInfoWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
