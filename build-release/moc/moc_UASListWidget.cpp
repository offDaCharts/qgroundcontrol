/****************************************************************************
** Meta object code from reading C++ file 'UASListWidget.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/ui/uas/UASListWidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'UASListWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_UASListWidget[] = {

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
      19,   15,   14,   14, 0x0a,
      41,   15,   14,   14, 0x0a,
      66,   15,   14,   14, 0x0a,
      96,   91,   14,   14, 0x0a,
     123,   14,   14,   14, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_UASListWidget[] = {
    "UASListWidget\0\0uas\0addUAS(UASInterface*)\0"
    "activeUAS(UASInterface*)\0"
    "removeUAS(UASInterface*)\0link\0"
    "removeLink(LinkInterface*)\0updateStatus()\0"
};

void UASListWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        UASListWidget *_t = static_cast<UASListWidget *>(_o);
        switch (_id) {
        case 0: _t->addUAS((*reinterpret_cast< UASInterface*(*)>(_a[1]))); break;
        case 1: _t->activeUAS((*reinterpret_cast< UASInterface*(*)>(_a[1]))); break;
        case 2: _t->removeUAS((*reinterpret_cast< UASInterface*(*)>(_a[1]))); break;
        case 3: _t->removeLink((*reinterpret_cast< LinkInterface*(*)>(_a[1]))); break;
        case 4: _t->updateStatus(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData UASListWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UASListWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_UASListWidget,
      qt_meta_data_UASListWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UASListWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UASListWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UASListWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UASListWidget))
        return static_cast<void*>(const_cast< UASListWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int UASListWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
