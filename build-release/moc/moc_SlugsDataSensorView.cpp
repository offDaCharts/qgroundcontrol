/****************************************************************************
** Meta object code from reading C++ file 'SlugsDataSensorView.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/ui/SlugsDataSensorView.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SlugsDataSensorView.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_SlugsDataSensorView[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      25,   21,   20,   20, 0x0a,
      47,   21,   20,   20, 0x0a,
      89,   75,   20,   20, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_SlugsDataSensorView[] = {
    "SlugsDataSensorView\0\0uas\0addUAS(UASInterface*)\0"
    "setActiveUAS(UASInterface*)\0uasId,rawData\0"
    "slugRawDataChanged(int,mavlink_raw_imu_t)\0"
};

void SlugsDataSensorView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        SlugsDataSensorView *_t = static_cast<SlugsDataSensorView *>(_o);
        switch (_id) {
        case 0: _t->addUAS((*reinterpret_cast< UASInterface*(*)>(_a[1]))); break;
        case 1: _t->setActiveUAS((*reinterpret_cast< UASInterface*(*)>(_a[1]))); break;
        case 2: _t->slugRawDataChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const mavlink_raw_imu_t(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData SlugsDataSensorView::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject SlugsDataSensorView::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_SlugsDataSensorView,
      qt_meta_data_SlugsDataSensorView, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &SlugsDataSensorView::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *SlugsDataSensorView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *SlugsDataSensorView::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SlugsDataSensorView))
        return static_cast<void*>(const_cast< SlugsDataSensorView*>(this));
    return QWidget::qt_metacast(_clname);
}

int SlugsDataSensorView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
