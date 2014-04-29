/****************************************************************************
** Meta object code from reading C++ file 'QGCParamWidget.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/ui/QGCParamWidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QGCParamWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QGCParamWidget[] = {

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
      46,   16,   15,   15, 0x0a,
     126,   93,   15,   15, 0x0a,
     178,   15,   15,   15, 0x0a,
     225,  215,   15,   15, 0x0a,
     265,   15,   15,   15, 0x0a,
     292,   15,   15,   15, 0x0a,
     372,  319,   15,   15, 0x0a,
     456,   16,  439,   15, 0x0a,
     513,  501,   15,   15, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_QGCParamWidget[] = {
    "QGCParamWidget\0\0component,parameterName,value\0"
    "handleOnboardParamUpdate(int,QString,QVariant)\0"
    "compId,paramName,value,isPending\0"
    "handlePendingParamUpdate(int,QString,QVariant,bool)\0"
    "handleOnboardParameterListUpToDate()\0"
    "msg,level\0handleParamStatusMsgUpdate(QString,int)\0"
    "clearOnboardParamDisplay()\0"
    "clearPendingParamDisplay()\0"
    "indexLowerBound,indexUpperBound,parentItem,paramItem\0"
    "insertParamAlphabetical(int,int,QTreeWidgetItem*,QTreeWidgetItem*)\0"
    "QTreeWidgetItem*\0"
    "updateParameterDisplay(int,QString,QVariant)\0"
    "prev,column\0parameterItemChanged(QTreeWidgetItem*,int)\0"
};

void QGCParamWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QGCParamWidget *_t = static_cast<QGCParamWidget *>(_o);
        switch (_id) {
        case 0: _t->handleOnboardParamUpdate((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< QVariant(*)>(_a[3]))); break;
        case 1: _t->handlePendingParamUpdate((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< QVariant(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4]))); break;
        case 2: _t->handleOnboardParameterListUpToDate(); break;
        case 3: _t->handleParamStatusMsgUpdate((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 4: _t->clearOnboardParamDisplay(); break;
        case 5: _t->clearPendingParamDisplay(); break;
        case 6: _t->insertParamAlphabetical((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< QTreeWidgetItem*(*)>(_a[3])),(*reinterpret_cast< QTreeWidgetItem*(*)>(_a[4]))); break;
        case 7: { QTreeWidgetItem* _r = _t->updateParameterDisplay((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QVariant(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QTreeWidgetItem**>(_a[0]) = _r; }  break;
        case 8: _t->parameterItemChanged((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QGCParamWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QGCParamWidget::staticMetaObject = {
    { &QGCBaseParamWidget::staticMetaObject, qt_meta_stringdata_QGCParamWidget,
      qt_meta_data_QGCParamWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QGCParamWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QGCParamWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QGCParamWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QGCParamWidget))
        return static_cast<void*>(const_cast< QGCParamWidget*>(this));
    return QGCBaseParamWidget::qt_metacast(_clname);
}

int QGCParamWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGCBaseParamWidget::qt_metacall(_c, _id, _a);
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
