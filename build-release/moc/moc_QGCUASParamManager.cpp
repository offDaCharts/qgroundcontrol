/****************************************************************************
** Meta object code from reading C++ file 'QGCUASParamManager.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/uas/QGCUASParamManager.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QGCUASParamManager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QGCUASParamManager[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      19,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: signature, parameters, type, tag, flags
      30,   20,   19,   19, 0x05,
      69,   19,   19,   19, 0x05,
     116,   93,   19,   19, 0x05,
     188,  155,   19,   19, 0x05,

 // slots: signature, parameters, type, tag, flags
     264,  234,   19,   19, 0x0a,
     326,  299,   19,   19, 0x0a,
     376,  359,   19,   19, 0x2a,
     404,   19,   19,   19, 0x2a,
     428,   19,   19,   19, 0x0a,
     451,   19,   19,   19, 0x0a,
     513,  481,   19,   19, 0x0a,
     578,  556,   19,   19, 0x2a,
     616,   19,   19,   19, 0x0a,
     660,  640,   19,   19, 0x0a,
     711,  696,   19,   19, 0x0a,
     767,  760,   19,   19, 0x0a,
     809,   19,   19,   19, 0x0a,
     844,   19,   19,   19, 0x0a,
     877,   19,   19,   19, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_QGCUASParamManager[] = {
    "QGCUASParamManager\0\0msg,level\0"
    "parameterStatusMsgUpdated(QString,int)\0"
    "parameterListUpToDate()\0compId,paramName,value\0"
    "parameterUpdated(int,QString,QVariant)\0"
    "compId,paramName,value,isPending\0"
    "pendingParamUpdate(int,QString,QVariant,bool)\0"
    "component,parameterName,value\0"
    "setParameter(int,QString,QVariant)\0"
    "persistAfterSend,forceSend\0"
    "sendPendingParameters(bool,bool)\0"
    "persistAfterSend\0sendPendingParameters(bool)\0"
    "sendPendingParameters()\0requestParameterList()\0"
    "requestParameterListIfEmpty()\0"
    "componentId,key,value,forceSend\0"
    "setPendingParam(int,QString,QVariant,bool)\0"
    "componentId,key,value\0"
    "setPendingParam(int,QString,QVariant)\0"
    "clearAllPendingParams()\0component,parameter\0"
    "requestParameterUpdate(int,QString)\0"
    "stream,uasName\0"
    "writeOnboardParamsToStream(QTextStream&,QString)\0"
    "stream\0readPendingParamsFromStream(QTextStream&)\0"
    "requestRcCalibrationParamsUpdate()\0"
    "copyVolatileParamsToPersistent()\0"
    "copyPersistentParamsToVolatile()\0"
};

void QGCUASParamManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QGCUASParamManager *_t = static_cast<QGCUASParamManager *>(_o);
        switch (_id) {
        case 0: _t->parameterStatusMsgUpdated((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 1: _t->parameterListUpToDate(); break;
        case 2: _t->parameterUpdated((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QVariant(*)>(_a[3]))); break;
        case 3: _t->pendingParamUpdate((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< QVariant(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4]))); break;
        case 4: _t->setParameter((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QVariant(*)>(_a[3]))); break;
        case 5: _t->sendPendingParameters((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 6: _t->sendPendingParameters((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->sendPendingParameters(); break;
        case 8: _t->requestParameterList(); break;
        case 9: _t->requestParameterListIfEmpty(); break;
        case 10: _t->setPendingParam((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4]))); break;
        case 11: _t->setPendingParam((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 12: _t->clearAllPendingParams(); break;
        case 13: _t->requestParameterUpdate((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 14: _t->writeOnboardParamsToStream((*reinterpret_cast< QTextStream(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 15: _t->readPendingParamsFromStream((*reinterpret_cast< QTextStream(*)>(_a[1]))); break;
        case 16: _t->requestRcCalibrationParamsUpdate(); break;
        case 17: _t->copyVolatileParamsToPersistent(); break;
        case 18: _t->copyPersistentParamsToVolatile(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QGCUASParamManager::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QGCUASParamManager::staticMetaObject = {
    { &QGCUASParamManagerInterface::staticMetaObject, qt_meta_stringdata_QGCUASParamManager,
      qt_meta_data_QGCUASParamManager, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QGCUASParamManager::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QGCUASParamManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QGCUASParamManager::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QGCUASParamManager))
        return static_cast<void*>(const_cast< QGCUASParamManager*>(this));
    return QGCUASParamManagerInterface::qt_metacast(_clname);
}

int QGCUASParamManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGCUASParamManagerInterface::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 19)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 19;
    }
    return _id;
}

// SIGNAL 0
void QGCUASParamManager::parameterStatusMsgUpdated(QString _t1, int _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QGCUASParamManager::parameterListUpToDate()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void QGCUASParamManager::parameterUpdated(int _t1, QString _t2, QVariant _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QGCUASParamManager::pendingParamUpdate(int _t1, const QString & _t2, QVariant _t3, bool _t4)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_END_MOC_NAMESPACE
