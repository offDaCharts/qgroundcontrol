/****************************************************************************
** Meta object code from reading C++ file 'SlugsHilSim.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/ui/SlugsHilSim.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SlugsHilSim.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_SlugsHilSim[] = {

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
      21,   13,   12,   12, 0x0a,
      48,   12,   12,   12, 0x0a,
      63,   12,   12,   12, 0x0a,
      82,   78,   12,   12, 0x0a,
     118,  110,   12,   12, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_SlugsHilSim[] = {
    "SlugsHilSim\0\0theLink\0addToCombo(LinkInterface*)\0"
    "putInHilMode()\0readDatagram()\0uas\0"
    "activeUasSet(UASInterface*)\0cbIndex\0"
    "linkSelected(int)\0"
};

void SlugsHilSim::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        SlugsHilSim *_t = static_cast<SlugsHilSim *>(_o);
        switch (_id) {
        case 0: _t->addToCombo((*reinterpret_cast< LinkInterface*(*)>(_a[1]))); break;
        case 1: _t->putInHilMode(); break;
        case 2: _t->readDatagram(); break;
        case 3: _t->activeUasSet((*reinterpret_cast< UASInterface*(*)>(_a[1]))); break;
        case 4: _t->linkSelected((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData SlugsHilSim::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject SlugsHilSim::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_SlugsHilSim,
      qt_meta_data_SlugsHilSim, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &SlugsHilSim::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *SlugsHilSim::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *SlugsHilSim::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SlugsHilSim))
        return static_cast<void*>(const_cast< SlugsHilSim*>(this));
    return QWidget::qt_metacast(_clname);
}

int SlugsHilSim::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
