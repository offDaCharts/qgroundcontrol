/****************************************************************************
** Meta object code from reading C++ file 'ViewParamWidget.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/ui/map3D/ViewParamWidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ViewParamWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ViewParamWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      31,   17,   16,   16, 0x08,
      63,   59,   16,   16, 0x08,
      98,   92,   16,   16, 0x08,
     128,   16,   16,   16, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_ViewParamWidget[] = {
    "ViewParamWidget\0\0systemId,name\0"
    "overlayCreated(int,QString)\0uas\0"
    "systemCreated(UASInterface*)\0state\0"
    "setpointsCheckBoxToggled(int)\0"
    "showImageryParamDialog()\0"
};

void ViewParamWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ViewParamWidget *_t = static_cast<ViewParamWidget *>(_o);
        switch (_id) {
        case 0: _t->overlayCreated((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 1: _t->systemCreated((*reinterpret_cast< UASInterface*(*)>(_a[1]))); break;
        case 2: _t->setpointsCheckBoxToggled((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->showImageryParamDialog(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData ViewParamWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ViewParamWidget::staticMetaObject = {
    { &QDockWidget::staticMetaObject, qt_meta_stringdata_ViewParamWidget,
      qt_meta_data_ViewParamWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ViewParamWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ViewParamWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ViewParamWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ViewParamWidget))
        return static_cast<void*>(const_cast< ViewParamWidget*>(this));
    return QDockWidget::qt_metacast(_clname);
}

int ViewParamWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDockWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
