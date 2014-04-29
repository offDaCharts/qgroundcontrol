/****************************************************************************
** Meta object code from reading C++ file 'QGCCommandButton.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/ui/designer/QGCCommandButton.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QGCCommandButton.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QGCCommandButton[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      27,   18,   17,   17, 0x05,

 // slots: signature, parameters, type, tag, flags
      50,   17,   17,   17, 0x0a,
      69,   64,   17,   17, 0x0a,
     108,   99,   17,   17, 0x0a,
     134,   99,   17,   17, 0x0a,
     171,  158,   17,   17, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_QGCCommandButton[] = {
    "QGCCommandButton\0\0name,num\0"
    "showLabel(QString,int)\0sendCommand()\0"
    "text\0setCommandButtonName(QString)\0"
    "settings\0writeSettings(QSettings&)\0"
    "readSettings(QSettings)\0pre,settings\0"
    "readSettings(QString,QVariantMap)\0"
};

void QGCCommandButton::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QGCCommandButton *_t = static_cast<QGCCommandButton *>(_o);
        switch (_id) {
        case 0: _t->showLabel((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 1: _t->sendCommand(); break;
        case 2: _t->setCommandButtonName((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->writeSettings((*reinterpret_cast< QSettings(*)>(_a[1]))); break;
        case 4: _t->readSettings((*reinterpret_cast< const QSettings(*)>(_a[1]))); break;
        case 5: _t->readSettings((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QVariantMap(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QGCCommandButton::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QGCCommandButton::staticMetaObject = {
    { &QGCToolWidgetItem::staticMetaObject, qt_meta_stringdata_QGCCommandButton,
      qt_meta_data_QGCCommandButton, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QGCCommandButton::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QGCCommandButton::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QGCCommandButton::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QGCCommandButton))
        return static_cast<void*>(const_cast< QGCCommandButton*>(this));
    return QGCToolWidgetItem::qt_metacast(_clname);
}

int QGCCommandButton::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGCToolWidgetItem::qt_metacall(_c, _id, _a);
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
void QGCCommandButton::showLabel(QString _t1, int _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
