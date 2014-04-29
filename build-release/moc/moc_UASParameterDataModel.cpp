/****************************************************************************
** Meta object code from reading C++ file 'UASParameterDataModel.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/uas/UASParameterDataModel.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'UASParameterDataModel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_UASParameterDataModel[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: signature, parameters, type, tag, flags
      46,   23,   22,   22, 0x05,
     118,   85,   22,   22, 0x05,
     164,   22,   22,   22, 0x05,

 // slots: signature, parameters, type, tag, flags
     192,   22,   22,   22, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_UASParameterDataModel[] = {
    "UASParameterDataModel\0\0compId,paramName,value\0"
    "parameterUpdated(int,QString,QVariant)\0"
    "compId,paramName,value,isPending\0"
    "pendingParamUpdate(int,QString,QVariant,bool)\0"
    "allPendingParamsCommitted()\0"
    "clearAllPendingParams()\0"
};

void UASParameterDataModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        UASParameterDataModel *_t = static_cast<UASParameterDataModel *>(_o);
        switch (_id) {
        case 0: _t->parameterUpdated((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QVariant(*)>(_a[3]))); break;
        case 1: _t->pendingParamUpdate((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< QVariant(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4]))); break;
        case 2: _t->allPendingParamsCommitted(); break;
        case 3: _t->clearAllPendingParams(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData UASParameterDataModel::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UASParameterDataModel::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_UASParameterDataModel,
      qt_meta_data_UASParameterDataModel, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UASParameterDataModel::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UASParameterDataModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UASParameterDataModel::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UASParameterDataModel))
        return static_cast<void*>(const_cast< UASParameterDataModel*>(this));
    return QObject::qt_metacast(_clname);
}

int UASParameterDataModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void UASParameterDataModel::parameterUpdated(int _t1, QString _t2, QVariant _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void UASParameterDataModel::pendingParamUpdate(int _t1, const QString & _t2, QVariant _t3, bool _t4)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void UASParameterDataModel::allPendingParamsCommitted()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}
QT_END_MOC_NAMESPACE
