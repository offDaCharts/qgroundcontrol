/****************************************************************************
** Meta object code from reading C++ file 'mapripform.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../libs/opmapcontrol/src/mapwidget/mapripform.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mapripform.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MapRipForm[] = {

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
      17,   12,   11,   11, 0x0a,
      46,   36,   11,   11, 0x0a,
      84,   71,   11,   11, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_MapRipForm[] = {
    "MapRipForm\0\0perc\0SetPercentage(int)\0"
    "prov,zoom\0SetProvider(QString,int)\0"
    "total,actual\0SetNumberOfTiles(int,int)\0"
};

void MapRipForm::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        MapRipForm *_t = static_cast<MapRipForm *>(_o);
        switch (_id) {
        case 0: _t->SetPercentage((*reinterpret_cast< const int(*)>(_a[1]))); break;
        case 1: _t->SetProvider((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const int(*)>(_a[2]))); break;
        case 2: _t->SetNumberOfTiles((*reinterpret_cast< const int(*)>(_a[1])),(*reinterpret_cast< const int(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData MapRipForm::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject MapRipForm::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_MapRipForm,
      qt_meta_data_MapRipForm, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MapRipForm::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MapRipForm::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MapRipForm::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MapRipForm))
        return static_cast<void*>(const_cast< MapRipForm*>(this));
    return QWidget::qt_metacast(_clname);
}

int MapRipForm::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
