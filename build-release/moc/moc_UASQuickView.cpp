/****************************************************************************
** Meta object code from reading C++ file 'UASQuickView.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/ui/uas/UASQuickView.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'UASQuickView.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_UASQuickView[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      42,   14,   13,   13, 0x0a,
     101,   93,   13,   13, 0x0a,
     123,   13,   13,   13, 0x0a,
     141,   13,   13,   13, 0x0a,
     163,  159,   13,   13, 0x0a,
     185,  159,   13,   13, 0x0a,
     213,   13,   13,   13, 0x0a,
     240,  234,   13,   13, 0x0a,
     262,  234,   13,   13, 0x0a,
     285,   13,   13,   13, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_UASQuickView[] = {
    "UASQuickView\0\0uasid,name,unit,value,msecs\0"
    "valueChanged(int,QString,QString,QVariant,quint64)\0"
    "checked\0actionTriggered(bool)\0"
    "actionTriggered()\0updateTimerTick()\0"
    "uas\0addUAS(UASInterface*)\0"
    "setActiveUAS(UASInterface*)\0"
    "selectDialogClosed()\0value\0"
    "valueEnabled(QString)\0valueDisabled(QString)\0"
    "columnActionTriggered()\0"
};

void UASQuickView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        UASQuickView *_t = static_cast<UASQuickView *>(_o);
        switch (_id) {
        case 0: _t->valueChanged((*reinterpret_cast< const int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4])),(*reinterpret_cast< const quint64(*)>(_a[5]))); break;
        case 1: _t->actionTriggered((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->actionTriggered(); break;
        case 3: _t->updateTimerTick(); break;
        case 4: _t->addUAS((*reinterpret_cast< UASInterface*(*)>(_a[1]))); break;
        case 5: _t->setActiveUAS((*reinterpret_cast< UASInterface*(*)>(_a[1]))); break;
        case 6: _t->selectDialogClosed(); break;
        case 7: _t->valueEnabled((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 8: _t->valueDisabled((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 9: _t->columnActionTriggered(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData UASQuickView::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UASQuickView::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_UASQuickView,
      qt_meta_data_UASQuickView, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UASQuickView::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UASQuickView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UASQuickView::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UASQuickView))
        return static_cast<void*>(const_cast< UASQuickView*>(this));
    return QWidget::qt_metacast(_clname);
}

int UASQuickView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
