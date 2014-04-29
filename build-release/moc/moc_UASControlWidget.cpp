/****************************************************************************
** Meta object code from reading C++ file 'UASControlWidget.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/ui/uas/UASControlWidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'UASControlWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_UASControlWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      18,   17,   17,   17, 0x05,

 // slots: signature, parameters, type, tag, flags
      35,   17,   17,   17, 0x0a,
      59,   53,   17,   17, 0x0a,
      81,   17,   17,   17, 0x0a,
     107,  102,   17,   17, 0x0a,
     120,   17,   17,   17, 0x0a,
     158,  135,   17,   17, 0x0a,
     196,  190,   17,   17, 0x0a,
     213,   17,   17,   17, 0x0a,
     235,  229,   17,   17, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_UASControlWidget[] = {
    "UASControlWidget\0\0changedMode(int)\0"
    "updateModesList()\0uasID\0setUAS(UASInterface*)\0"
    "cycleContextButton()\0mode\0setMode(int)\0"
    "transmitMode()\0uasID,mode,description\0"
    "updateMode(int,QString,QString)\0state\0"
    "updateState(int)\0updateArmText()\0color\0"
    "setBackgroundColor(QColor)\0"
};

void UASControlWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        UASControlWidget *_t = static_cast<UASControlWidget *>(_o);
        switch (_id) {
        case 0: _t->changedMode((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->updateModesList(); break;
        case 2: _t->setUAS((*reinterpret_cast< UASInterface*(*)>(_a[1]))); break;
        case 3: _t->cycleContextButton(); break;
        case 4: _t->setMode((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->transmitMode(); break;
        case 6: _t->updateMode((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3]))); break;
        case 7: _t->updateState((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->updateArmText(); break;
        case 9: _t->setBackgroundColor((*reinterpret_cast< QColor(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData UASControlWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UASControlWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_UASControlWidget,
      qt_meta_data_UASControlWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UASControlWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UASControlWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UASControlWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UASControlWidget))
        return static_cast<void*>(const_cast< UASControlWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int UASControlWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void UASControlWidget::changedMode(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
