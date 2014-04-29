/****************************************************************************
** Meta object code from reading C++ file 'QGCToolWidget.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/ui/designer/QGCToolWidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QGCToolWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QGCToolWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      21,   15,   14,   14, 0x05,

 // slots: signature, parameters, type, tag, flags
      47,   43,   14,   14, 0x0a,
      69,   14,   14,   14, 0x0a,
      84,   14,   14,   14, 0x0a,
      99,   14,   14,   14, 0x0a,
     114,   14,   14,   14, 0x0a,
     148,  139,   14,   14, 0x0a,
     171,   15,   14,   14, 0x0a,
     219,  189,   14,   14, 0x0a,
     254,   14,   14,   14, 0x09,
     265,   14,   14,   14, 0x09,
     278,   14,   14,   14, 0x09,
     288,   14,   14,   14, 0x09,
     299,   14,   14,   14, 0x09,
     310,   14,   14,   14, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_QGCToolWidget[] = {
    "QGCToolWidget\0\0title\0titleChanged(QString)\0"
    "uas\0addUAS(UASInterface*)\0deleteWidget()\0"
    "exportWidget()\0importWidget()\0"
    "storeWidgetsToSettings()\0name,num\0"
    "showLabel(QString,int)\0setTitle(QString)\0"
    "uas,component,paramname,value\0"
    "addParam(int,int,QString,QVariant)\0"
    "addParam()\0addCommand()\0addPlot()\0"
    "addLabel()\0setTitle()\0widgetRemoved()\0"
};

void QGCToolWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QGCToolWidget *_t = static_cast<QGCToolWidget *>(_o);
        switch (_id) {
        case 0: _t->titleChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->addUAS((*reinterpret_cast< UASInterface*(*)>(_a[1]))); break;
        case 2: _t->deleteWidget(); break;
        case 3: _t->exportWidget(); break;
        case 4: _t->importWidget(); break;
        case 5: _t->storeWidgetsToSettings(); break;
        case 6: _t->showLabel((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 7: _t->setTitle((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 8: _t->addParam((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< QVariant(*)>(_a[4]))); break;
        case 9: _t->addParam(); break;
        case 10: _t->addCommand(); break;
        case 11: _t->addPlot(); break;
        case 12: _t->addLabel(); break;
        case 13: _t->setTitle(); break;
        case 14: _t->widgetRemoved(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QGCToolWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QGCToolWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_QGCToolWidget,
      qt_meta_data_QGCToolWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QGCToolWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QGCToolWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QGCToolWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QGCToolWidget))
        return static_cast<void*>(const_cast< QGCToolWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int QGCToolWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    }
    return _id;
}

// SIGNAL 0
void QGCToolWidget::titleChanged(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
