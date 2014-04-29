/****************************************************************************
** Meta object code from reading C++ file 'QGCSettingsWidget.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/ui/QGCSettingsWidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QGCSettingsWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QGCSettingsWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      25,   19,   18,   18, 0x0a,
      43,   18,   18,   18, 0x0a,
      62,   18,   18,   18, 0x0a,
      80,   18,   18,   18, 0x0a,
     104,   99,   18,   18, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_QGCSettingsWidget[] = {
    "QGCSettingsWidget\0\0index\0styleChanged(int)\0"
    "lineEditFinished()\0setDefaultStyle()\0"
    "selectStylesheet()\0mode\0selectCustomMode(int)\0"
};

void QGCSettingsWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QGCSettingsWidget *_t = static_cast<QGCSettingsWidget *>(_o);
        switch (_id) {
        case 0: _t->styleChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->lineEditFinished(); break;
        case 2: _t->setDefaultStyle(); break;
        case 3: _t->selectStylesheet(); break;
        case 4: _t->selectCustomMode((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QGCSettingsWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QGCSettingsWidget::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_QGCSettingsWidget,
      qt_meta_data_QGCSettingsWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QGCSettingsWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QGCSettingsWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QGCSettingsWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QGCSettingsWidget))
        return static_cast<void*>(const_cast< QGCSettingsWidget*>(this));
    return QDialog::qt_metacast(_clname);
}

int QGCSettingsWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
