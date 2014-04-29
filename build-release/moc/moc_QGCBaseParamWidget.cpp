/****************************************************************************
** Meta object code from reading C++ file 'QGCBaseParamWidget.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/ui/QGCBaseParamWidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QGCBaseParamWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QGCBaseParamWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      50,   20,   19,   19, 0x0a,
     130,   97,   19,   19, 0x0a,
     182,   19,   19,   19, 0x0a,
     229,  219,   19,   19, 0x0a,
     269,   19,   19,   19, 0x0a,
     296,   19,   19,   19, 0x0a,
     323,   19,   19,   19, 0x0a,
     352,   19,   19,   19, 0x0a,
     375,   19,   19,   19, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_QGCBaseParamWidget[] = {
    "QGCBaseParamWidget\0\0component,parameterName,value\0"
    "handleOnboardParamUpdate(int,QString,QVariant)\0"
    "compId,paramName,value,isPending\0"
    "handlePendingParamUpdate(int,QString,QVariant,bool)\0"
    "handleOnboardParameterListUpToDate()\0"
    "msg,level\0handleParamStatusMsgUpdate(QString,int)\0"
    "clearOnboardParamDisplay()\0"
    "clearPendingParamDisplay()\0"
    "requestOnboardParamsUpdate()\0"
    "saveParametersToFile()\0loadParametersFromFile()\0"
};

void QGCBaseParamWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QGCBaseParamWidget *_t = static_cast<QGCBaseParamWidget *>(_o);
        switch (_id) {
        case 0: _t->handleOnboardParamUpdate((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< QVariant(*)>(_a[3]))); break;
        case 1: _t->handlePendingParamUpdate((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< QVariant(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4]))); break;
        case 2: _t->handleOnboardParameterListUpToDate(); break;
        case 3: _t->handleParamStatusMsgUpdate((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 4: _t->clearOnboardParamDisplay(); break;
        case 5: _t->clearPendingParamDisplay(); break;
        case 6: _t->requestOnboardParamsUpdate(); break;
        case 7: _t->saveParametersToFile(); break;
        case 8: _t->loadParametersFromFile(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QGCBaseParamWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QGCBaseParamWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_QGCBaseParamWidget,
      qt_meta_data_QGCBaseParamWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QGCBaseParamWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QGCBaseParamWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QGCBaseParamWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QGCBaseParamWidget))
        return static_cast<void*>(const_cast< QGCBaseParamWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int QGCBaseParamWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
