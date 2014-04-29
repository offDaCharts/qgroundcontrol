/****************************************************************************
** Meta object code from reading C++ file 'QGCParamSlider.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/ui/designer/QGCParamSlider.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QGCParamSlider.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QGCParamSlider[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      16,   15,   15,   15, 0x0a,
      46,   34,   15,   15, 0x0a,
     124,   66,   15,   15, 0x0a,
     185,  176,   15,   15, 0x0a,
     211,  176,   15,   15, 0x0a,
     248,  235,   15,   15, 0x0a,
     282,   15,   15,   15, 0x0a,
     305,  301,   15,   15, 0x0a,
     348,  333,   15,   15, 0x0a,
     380,  369,   15,   15, 0x0a,
     407,  401,   15,   15, 0x0a,
     429,  401,   15,   15, 0x0a,
     455,  448,   15,   15, 0x0a,
     470,   15,   15,   15, 0x0a,
     484,   15,   15,   15, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_QGCParamSlider[] = {
    "QGCParamSlider\0\0setParamPending()\0"
    "sliderValue\0setSliderValue(int)\0"
    "uas,componentId,paramCount,paramIndex,parameterName,value\0"
    "setParameterValue(int,int,int,int,QString,QVariant)\0"
    "settings\0writeSettings(QSettings&)\0"
    "readSettings(QSettings)\0pre,settings\0"
    "readSettings(QString,QVariantMap)\0"
    "refreshParamList()\0uas\0"
    "setActiveUAS(UASInterface*)\0componentIndex\0"
    "selectComponent(int)\0paramIndex\0"
    "selectParameter(int)\0value\0"
    "setParamValue(double)\0setParamValue(int)\0"
    "enable\0showInfo(bool)\0showTooltip()\0"
    "requestParameter()\0"
};

void QGCParamSlider::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QGCParamSlider *_t = static_cast<QGCParamSlider *>(_o);
        switch (_id) {
        case 0: _t->setParamPending(); break;
        case 1: _t->setSliderValue((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->setParameterValue((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])),(*reinterpret_cast< QString(*)>(_a[5])),(*reinterpret_cast< const QVariant(*)>(_a[6]))); break;
        case 3: _t->writeSettings((*reinterpret_cast< QSettings(*)>(_a[1]))); break;
        case 4: _t->readSettings((*reinterpret_cast< const QSettings(*)>(_a[1]))); break;
        case 5: _t->readSettings((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QVariantMap(*)>(_a[2]))); break;
        case 6: _t->refreshParamList(); break;
        case 7: _t->setActiveUAS((*reinterpret_cast< UASInterface*(*)>(_a[1]))); break;
        case 8: _t->selectComponent((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->selectParameter((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->setParamValue((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 11: _t->setParamValue((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 12: _t->showInfo((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 13: _t->showTooltip(); break;
        case 14: _t->requestParameter(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QGCParamSlider::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QGCParamSlider::staticMetaObject = {
    { &QGCToolWidgetItem::staticMetaObject, qt_meta_stringdata_QGCParamSlider,
      qt_meta_data_QGCParamSlider, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QGCParamSlider::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QGCParamSlider::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QGCParamSlider::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QGCParamSlider))
        return static_cast<void*>(const_cast< QGCParamSlider*>(this));
    return QGCToolWidgetItem::qt_metacast(_clname);
}

int QGCParamSlider::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGCToolWidgetItem::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
