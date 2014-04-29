/****************************************************************************
** Meta object code from reading C++ file 'Linecharts.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/ui/linechart/Linecharts.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Linecharts.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Linecharts[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      21,   12,   11,   11, 0x05,
      53,   45,   11,   11, 0x05,

 // slots: signature, parameters, type, tag, flags
      86,   77,   11,   11, 0x0a,
     108,  104,   11,   11, 0x0a,
     137,  133,   11,   11, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_Linecharts[] = {
    "Linecharts\0\0fileName\0logfileWritten(QString)\0"
    "visible\0visibilityChanged(bool)\0"
    "systemid\0selectSystem(int)\0uas\0"
    "addSystem(UASInterface*)\0obj\0"
    "addSource(QObject*)\0"
};

void Linecharts::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        Linecharts *_t = static_cast<Linecharts *>(_o);
        switch (_id) {
        case 0: _t->logfileWritten((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->visibilityChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->selectSystem((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->addSystem((*reinterpret_cast< UASInterface*(*)>(_a[1]))); break;
        case 4: _t->addSource((*reinterpret_cast< QObject*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Linecharts::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Linecharts::staticMetaObject = {
    { &QStackedWidget::staticMetaObject, qt_meta_stringdata_Linecharts,
      qt_meta_data_Linecharts, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Linecharts::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Linecharts::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Linecharts::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Linecharts))
        return static_cast<void*>(const_cast< Linecharts*>(this));
    return QStackedWidget::qt_metacast(_clname);
}

int Linecharts::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QStackedWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void Linecharts::logfileWritten(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Linecharts::visibilityChanged(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
