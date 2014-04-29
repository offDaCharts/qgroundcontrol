/****************************************************************************
** Meta object code from reading C++ file 'AP2ConfigWidget.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/ui/configuration/AP2ConfigWidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'AP2ConfigWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_AP2ConfigWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      21,   17,   16,   16, 0x0a,
      83,   49,   16,   16, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_AP2ConfigWidget[] = {
    "AP2ConfigWidget\0\0uas\0activeUASSet(UASInterface*)\0"
    "uas,component,parameterName,value\0"
    "parameterChanged(int,int,QString,QVariant)\0"
};

void AP2ConfigWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        AP2ConfigWidget *_t = static_cast<AP2ConfigWidget *>(_o);
        switch (_id) {
        case 0: _t->activeUASSet((*reinterpret_cast< UASInterface*(*)>(_a[1]))); break;
        case 1: _t->parameterChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< QVariant(*)>(_a[4]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData AP2ConfigWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject AP2ConfigWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_AP2ConfigWidget,
      qt_meta_data_AP2ConfigWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &AP2ConfigWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *AP2ConfigWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *AP2ConfigWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_AP2ConfigWidget))
        return static_cast<void*>(const_cast< AP2ConfigWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int AP2ConfigWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
