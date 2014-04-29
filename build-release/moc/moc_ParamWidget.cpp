/****************************************************************************
** Meta object code from reading C++ file 'ParamWidget.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/ui/configuration/ParamWidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ParamWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ParamWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      25,   13,   12,   12, 0x05,
      60,   13,   12,   12, 0x05,

 // slots: signature, parameters, type, tag, flags
      89,   12,   12,   12, 0x08,
     114,   12,   12,   12, 0x08,
     142,  136,   12,   12, 0x08,
     165,   12,   12,   12, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_ParamWidget[] = {
    "ParamWidget\0\0param,value\0"
    "doubleValueChanged(QString,double)\0"
    "intValueChanged(QString,int)\0"
    "doubleSpinEditFinished()\0intSpinEditFinished()\0"
    "index\0comboIndexChanged(int)\0"
    "valueSliderReleased()\0"
};

void ParamWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ParamWidget *_t = static_cast<ParamWidget *>(_o);
        switch (_id) {
        case 0: _t->doubleValueChanged((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 1: _t->intValueChanged((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 2: _t->doubleSpinEditFinished(); break;
        case 3: _t->intSpinEditFinished(); break;
        case 4: _t->comboIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->valueSliderReleased(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData ParamWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ParamWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_ParamWidget,
      qt_meta_data_ParamWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ParamWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ParamWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ParamWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ParamWidget))
        return static_cast<void*>(const_cast< ParamWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int ParamWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void ParamWidget::doubleValueChanged(QString _t1, double _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ParamWidget::intValueChanged(QString _t1, int _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
