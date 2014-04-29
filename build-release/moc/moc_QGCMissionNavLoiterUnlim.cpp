/****************************************************************************
** Meta object code from reading C++ file 'QGCMissionNavLoiterUnlim.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/ui/mission/QGCMissionNavLoiterUnlim.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QGCMissionNavLoiterUnlim.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QGCMissionNavLoiterUnlim[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      26,   25,   25,   25, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_QGCMissionNavLoiterUnlim[] = {
    "QGCMissionNavLoiterUnlim\0\0"
    "updateFrame(MAV_FRAME)\0"
};

void QGCMissionNavLoiterUnlim::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QGCMissionNavLoiterUnlim *_t = static_cast<QGCMissionNavLoiterUnlim *>(_o);
        switch (_id) {
        case 0: _t->updateFrame((*reinterpret_cast< MAV_FRAME(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QGCMissionNavLoiterUnlim::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QGCMissionNavLoiterUnlim::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_QGCMissionNavLoiterUnlim,
      qt_meta_data_QGCMissionNavLoiterUnlim, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QGCMissionNavLoiterUnlim::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QGCMissionNavLoiterUnlim::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QGCMissionNavLoiterUnlim::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QGCMissionNavLoiterUnlim))
        return static_cast<void*>(const_cast< QGCMissionNavLoiterUnlim*>(this));
    return QWidget::qt_metacast(_clname);
}

int QGCMissionNavLoiterUnlim::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
