/****************************************************************************
** Meta object code from reading C++ file 'QGCMapToolBar.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/ui/map/QGCMapToolBar.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QGCMapToolBar.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QGCMapToolBar[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      15,   14,   14,   14, 0x0a,
      31,   14,   14,   14, 0x0a,
      54,   45,   14,   14, 0x0a,
      76,   14,   14,   14, 0x0a,
      94,   14,   14,   14, 0x0a,
     116,   14,   14,   14, 0x0a,
     136,   14,   14,   14, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_QGCMapToolBar[] = {
    "QGCMapToolBar\0\0tileLoadStart()\0"
    "tileLoadEnd()\0progress\0tileLoadProgress(int)\0"
    "setUAVTrailTime()\0setUAVTrailDistance()\0"
    "setUpdateInterval()\0setMapType()\0"
};

void QGCMapToolBar::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QGCMapToolBar *_t = static_cast<QGCMapToolBar *>(_o);
        switch (_id) {
        case 0: _t->tileLoadStart(); break;
        case 1: _t->tileLoadEnd(); break;
        case 2: _t->tileLoadProgress((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->setUAVTrailTime(); break;
        case 4: _t->setUAVTrailDistance(); break;
        case 5: _t->setUpdateInterval(); break;
        case 6: _t->setMapType(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QGCMapToolBar::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QGCMapToolBar::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_QGCMapToolBar,
      qt_meta_data_QGCMapToolBar, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QGCMapToolBar::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QGCMapToolBar::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QGCMapToolBar::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QGCMapToolBar))
        return static_cast<void*>(const_cast< QGCMapToolBar*>(this));
    return QWidget::qt_metacast(_clname);
}

int QGCMapToolBar::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
