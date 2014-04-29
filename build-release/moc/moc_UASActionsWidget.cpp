/****************************************************************************
** Meta object code from reading C++ file 'UASActionsWidget.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/ui/uas/UASActionsWidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'UASActionsWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_UASActionsWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      18,   17,   17,   17, 0x08,
      43,   37,   17,   17, 0x08,
      68,   63,   17,   17, 0x08,
     100,   17,   17,   17, 0x08,
     125,  121,   17,   17, 0x08,
     153,   17,   17,   17, 0x08,
     175,   17,   17,   17, 0x08,
     199,   17,   17,   17, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_UASActionsWidget[] = {
    "UASActionsWidget\0\0armButtonClicked()\0"
    "state\0armingChanged(bool)\0wpid\0"
    "currentWaypointChanged(quint16)\0"
    "updateWaypointList()\0uas\0"
    "activeUASSet(UASInterface*)\0"
    "goToWaypointClicked()\0changeAltitudeClicked()\0"
    "changeSpeedClicked()\0"
};

void UASActionsWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        UASActionsWidget *_t = static_cast<UASActionsWidget *>(_o);
        switch (_id) {
        case 0: _t->armButtonClicked(); break;
        case 1: _t->armingChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->currentWaypointChanged((*reinterpret_cast< quint16(*)>(_a[1]))); break;
        case 3: _t->updateWaypointList(); break;
        case 4: _t->activeUASSet((*reinterpret_cast< UASInterface*(*)>(_a[1]))); break;
        case 5: _t->goToWaypointClicked(); break;
        case 6: _t->changeAltitudeClicked(); break;
        case 7: _t->changeSpeedClicked(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData UASActionsWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UASActionsWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_UASActionsWidget,
      qt_meta_data_UASActionsWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UASActionsWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UASActionsWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UASActionsWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UASActionsWidget))
        return static_cast<void*>(const_cast< UASActionsWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int UASActionsWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
QT_END_MOC_NAMESPACE
