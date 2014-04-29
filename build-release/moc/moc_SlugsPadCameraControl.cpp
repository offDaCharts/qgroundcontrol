/****************************************************************************
** Meta object code from reading C++ file 'SlugsPadCameraControl.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/ui/SlugsPadCameraControl.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SlugsPadCameraControl.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_SlugsPadCameraControl[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      23,   22,   22,   22, 0x05,

 // slots: signature, parameters, type, tag, flags
      60,   56,   22,   22, 0x0a,
     117,   97,   89,   22, 0x0a,
     181,  177,   22,   22, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_SlugsPadCameraControl[] = {
    "SlugsPadCameraControl\0\0"
    "changeMotionCamera(MotionCamera)\0x,y\0"
    "getDeltaPositionPad(int,int)\0QPointF\0"
    "lon1,lat1,lon2,lat2\0"
    "ObtenerMarcacionDistanciaPixel(double,double,double,double)\0"
    "uas\0activeUasSet(UASInterface*)\0"
};

void SlugsPadCameraControl::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        SlugsPadCameraControl *_t = static_cast<SlugsPadCameraControl *>(_o);
        switch (_id) {
        case 0: _t->changeMotionCamera((*reinterpret_cast< MotionCamera(*)>(_a[1]))); break;
        case 1: _t->getDeltaPositionPad((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 2: { QPointF _r = _t->ObtenerMarcacionDistanciaPixel((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< QPointF*>(_a[0]) = _r; }  break;
        case 3: _t->activeUasSet((*reinterpret_cast< UASInterface*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData SlugsPadCameraControl::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject SlugsPadCameraControl::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_SlugsPadCameraControl,
      qt_meta_data_SlugsPadCameraControl, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &SlugsPadCameraControl::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *SlugsPadCameraControl::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *SlugsPadCameraControl::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SlugsPadCameraControl))
        return static_cast<void*>(const_cast< SlugsPadCameraControl*>(this));
    return QWidget::qt_metacast(_clname);
}

int SlugsPadCameraControl::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void SlugsPadCameraControl::changeMotionCamera(MotionCamera _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
