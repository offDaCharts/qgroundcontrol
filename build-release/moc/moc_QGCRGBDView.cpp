/****************************************************************************
** Meta object code from reading C++ file 'QGCRGBDView.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/ui/QGCRGBDView.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QGCRGBDView.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QGCRGBDView[] = {

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
      17,   13,   12,   12, 0x0a,
      45,   12,   12,   12, 0x0a,
      65,   57,   12,   12, 0x0a,
      81,   57,   12,   12, 0x0a,
      99,   13,   12,   12, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_QGCRGBDView[] = {
    "QGCRGBDView\0\0uas\0setActiveUAS(UASInterface*)\0"
    "clearData()\0enabled\0enableRGB(bool)\0"
    "enableDepth(bool)\0updateData(UASInterface*)\0"
};

void QGCRGBDView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QGCRGBDView *_t = static_cast<QGCRGBDView *>(_o);
        switch (_id) {
        case 0: _t->setActiveUAS((*reinterpret_cast< UASInterface*(*)>(_a[1]))); break;
        case 1: _t->clearData(); break;
        case 2: _t->enableRGB((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->enableDepth((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->updateData((*reinterpret_cast< UASInterface*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QGCRGBDView::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QGCRGBDView::staticMetaObject = {
    { &HUD::staticMetaObject, qt_meta_stringdata_QGCRGBDView,
      qt_meta_data_QGCRGBDView, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QGCRGBDView::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QGCRGBDView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QGCRGBDView::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QGCRGBDView))
        return static_cast<void*>(const_cast< QGCRGBDView*>(this));
    return HUD::qt_metacast(_clname);
}

int QGCRGBDView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = HUD::qt_metacall(_c, _id, _a);
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
