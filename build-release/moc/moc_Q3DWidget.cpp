/****************************************************************************
** Meta object code from reading C++ file 'Q3DWidget.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/ui/map3D/Q3DWidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Q3DWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Q3DWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      24,   11,   10,   10, 0x05,
      45,   10,   10,   10, 0x05,

 // slots: signature, parameters, type, tag, flags
      54,   10,   10,   10, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_Q3DWidget[] = {
    "Q3DWidget\0\0width,height\0sizeChanged(int,int)\0"
    "update()\0redraw()\0"
};

void Q3DWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        Q3DWidget *_t = static_cast<Q3DWidget *>(_o);
        switch (_id) {
        case 0: _t->sizeChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 1: _t->update(); break;
        case 2: _t->redraw(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Q3DWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Q3DWidget::staticMetaObject = {
    { &QGLWidget::staticMetaObject, qt_meta_stringdata_Q3DWidget,
      qt_meta_data_Q3DWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Q3DWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Q3DWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Q3DWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Q3DWidget))
        return static_cast<void*>(const_cast< Q3DWidget*>(this));
    if (!strcmp(_clname, "osgViewer::Viewer"))
        return static_cast< osgViewer::Viewer*>(const_cast< Q3DWidget*>(this));
    return QGLWidget::qt_metacast(_clname);
}

int Q3DWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGLWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void Q3DWidget::sizeChanged(int _t1, int _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Q3DWidget::update()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}
QT_END_MOC_NAMESPACE
