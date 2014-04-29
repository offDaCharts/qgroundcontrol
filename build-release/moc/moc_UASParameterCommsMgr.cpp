/****************************************************************************
** Meta object code from reading C++ file 'UASParameterCommsMgr.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/uas/UASParameterCommsMgr.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'UASParameterCommsMgr.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_UASParameterCommsMgr[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      18,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: signature, parameters, type, tag, flags
      48,   22,   21,   21, 0x05,
     124,   93,   21,   21, 0x05,
     208,  159,   21,   21, 0x05,
     266,   21,   21,   21, 0x05,
     310,  290,   21,   21, 0x05,
     368,  348,   21,   21, 0x05,
     416,  406,   21,   21, 0x05,

 // slots: signature, parameters, type, tag, flags
     482,  455,   21,   21, 0x0a,
     532,  515,   21,   21, 0x2a,
     560,   21,   21,   21, 0x2a,
     584,   21,   21,   21, 0x0a,
     657,  617,   21,   21, 0x0a,
     727,  697,   21,   21, 0x2a,
     762,   21,   21,   21, 0x0a,
     785,   21,   21,   21, 0x0a,
     807,  290,   21,   21, 0x0a,
     843,   21,   21,   21, 0x0a,
     924,  878,   21,   21, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_UASParameterCommsMgr[] = {
    "UASParameterCommsMgr\0\0component,parameter,value\0"
    "commitPendingParameter(int,QString,QVariant)\0"
    "component,parameterIndex,value\0"
    "parameterChanged(int,int,QVariant)\0"
    "uas,component,paramCount,paramId,parameter,value\0"
    "parameterValueConfirmed(int,int,int,int,QString,QVariant)\0"
    "parameterListUpToDate()\0component,parameter\0"
    "parameterUpdateRequested(int,QString)\0"
    "componentId,paramId\0"
    "parameterUpdateRequestedById(int,int)\0"
    "msg,level\0parameterStatusMsgUpdated(QString,int)\0"
    "copyToPersistent,forceSend\0"
    "sendPendingParameters(bool,bool)\0"
    "copyToPersistent\0sendPendingParameters(bool)\0"
    "sendPendingParameters()\0"
    "writeParamsToPersistentStorage()\0"
    "component,parameterName,value,forceSend\0"
    "setParameter(int,QString,QVariant,bool)\0"
    "component,parameterName,value\0"
    "setParameter(int,QString,QVariant)\0"
    "requestParameterList()\0silenceTimerExpired()\0"
    "requestParameterUpdate(int,QString)\0"
    "requestRcCalibrationParamsUpdate()\0"
    "uas,compId,paramCount,paramId,paramName,value\0"
    "receivedParameterUpdate(int,int,int,int,QString,QVariant)\0"
};

void UASParameterCommsMgr::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        UASParameterCommsMgr *_t = static_cast<UASParameterCommsMgr *>(_o);
        switch (_id) {
        case 0: _t->commitPendingParameter((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QVariant(*)>(_a[3]))); break;
        case 1: _t->parameterChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< QVariant(*)>(_a[3]))); break;
        case 2: _t->parameterValueConfirmed((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])),(*reinterpret_cast< QString(*)>(_a[5])),(*reinterpret_cast< QVariant(*)>(_a[6]))); break;
        case 3: _t->parameterListUpToDate(); break;
        case 4: _t->parameterUpdateRequested((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 5: _t->parameterUpdateRequestedById((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 6: _t->parameterStatusMsgUpdated((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 7: _t->sendPendingParameters((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 8: _t->sendPendingParameters((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: _t->sendPendingParameters(); break;
        case 10: _t->writeParamsToPersistentStorage(); break;
        case 11: _t->setParameter((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QVariant(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4]))); break;
        case 12: _t->setParameter((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QVariant(*)>(_a[3]))); break;
        case 13: _t->requestParameterList(); break;
        case 14: _t->silenceTimerExpired(); break;
        case 15: _t->requestParameterUpdate((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 16: _t->requestRcCalibrationParamsUpdate(); break;
        case 17: _t->receivedParameterUpdate((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])),(*reinterpret_cast< QString(*)>(_a[5])),(*reinterpret_cast< QVariant(*)>(_a[6]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData UASParameterCommsMgr::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UASParameterCommsMgr::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_UASParameterCommsMgr,
      qt_meta_data_UASParameterCommsMgr, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UASParameterCommsMgr::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UASParameterCommsMgr::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UASParameterCommsMgr::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UASParameterCommsMgr))
        return static_cast<void*>(const_cast< UASParameterCommsMgr*>(this));
    return QObject::qt_metacast(_clname);
}

int UASParameterCommsMgr::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 18)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 18;
    }
    return _id;
}

// SIGNAL 0
void UASParameterCommsMgr::commitPendingParameter(int _t1, QString _t2, QVariant _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void UASParameterCommsMgr::parameterChanged(int _t1, int _t2, QVariant _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void UASParameterCommsMgr::parameterValueConfirmed(int _t1, int _t2, int _t3, int _t4, QString _t5, QVariant _t6)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)), const_cast<void*>(reinterpret_cast<const void*>(&_t6)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void UASParameterCommsMgr::parameterListUpToDate()
{
    QMetaObject::activate(this, &staticMetaObject, 3, 0);
}

// SIGNAL 4
void UASParameterCommsMgr::parameterUpdateRequested(int _t1, const QString & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void UASParameterCommsMgr::parameterUpdateRequestedById(int _t1, int _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void UASParameterCommsMgr::parameterStatusMsgUpdated(QString _t1, int _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}
QT_END_MOC_NAMESPACE
