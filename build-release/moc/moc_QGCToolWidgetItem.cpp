/****************************************************************************
** Meta object code from reading C++ file 'QGCToolWidgetItem.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/ui/designer/QGCToolWidgetItem.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QGCToolWidgetItem.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QGCToolWidgetItem[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      19,   18,   18,   18, 0x05,

 // slots: signature, parameters, type, tag, flags
      37,   18,   18,   18, 0x0a,
      53,   18,   18,   18, 0x0a,
      72,   67,   18,   18, 0x0a,
      99,   90,   18,   18, 0x0a,
     125,   90,   18,   18, 0x0a,
     162,  149,   18,   18, 0x0a,
     200,  196,   18,   18, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_QGCToolWidgetItem[] = {
    "QGCToolWidgetItem\0\0editingFinished()\0"
    "startEditMode()\0endEditMode()\0comp\0"
    "setComponent(int)\0settings\0"
    "writeSettings(QSettings&)\0"
    "readSettings(QSettings)\0pre,settings\0"
    "readSettings(QString,QVariantMap)\0uas\0"
    "setActiveUAS(UASInterface*)\0"
};

void QGCToolWidgetItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QGCToolWidgetItem *_t = static_cast<QGCToolWidgetItem *>(_o);
        switch (_id) {
        case 0: _t->editingFinished(); break;
        case 1: _t->startEditMode(); break;
        case 2: _t->endEditMode(); break;
        case 3: _t->setComponent((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->writeSettings((*reinterpret_cast< QSettings(*)>(_a[1]))); break;
        case 5: _t->readSettings((*reinterpret_cast< const QSettings(*)>(_a[1]))); break;
        case 6: _t->readSettings((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QVariantMap(*)>(_a[2]))); break;
        case 7: _t->setActiveUAS((*reinterpret_cast< UASInterface*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QGCToolWidgetItem::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QGCToolWidgetItem::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_QGCToolWidgetItem,
      qt_meta_data_QGCToolWidgetItem, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QGCToolWidgetItem::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QGCToolWidgetItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QGCToolWidgetItem::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QGCToolWidgetItem))
        return static_cast<void*>(const_cast< QGCToolWidgetItem*>(this));
    return QWidget::qt_metacast(_clname);
}

int QGCToolWidgetItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void QGCToolWidgetItem::editingFinished()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
