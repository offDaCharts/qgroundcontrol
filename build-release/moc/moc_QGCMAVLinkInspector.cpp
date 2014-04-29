/****************************************************************************
** Meta object code from reading C++ file 'QGCMAVLinkInspector.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/ui/QGCMAVLinkInspector.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QGCMAVLinkInspector.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QGCMAVLinkInspector[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      34,   21,   20,   20, 0x0a,
      83,   20,   20,   20, 0x0a,
      95,   20,   20,   20, 0x0a,
     113,  109,   20,   20, 0x0a,
     157,  138,   20,   20, 0x0a,
     198,  187,   20,   20, 0x0a,
     228,  187,   20,   20, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_QGCMAVLinkInspector[] = {
    "QGCMAVLinkInspector\0\0link,message\0"
    "receiveMessage(LinkInterface*,mavlink_message_t)\0"
    "clearView()\0refreshView()\0uas\0"
    "addSystem(UASInterface*)\0uas,component,name\0"
    "addComponent(int,int,QString)\0dropdownid\0"
    "selectDropDownMenuSystem(int)\0"
    "selectDropDownMenuComponent(int)\0"
};

void QGCMAVLinkInspector::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QGCMAVLinkInspector *_t = static_cast<QGCMAVLinkInspector *>(_o);
        switch (_id) {
        case 0: _t->receiveMessage((*reinterpret_cast< LinkInterface*(*)>(_a[1])),(*reinterpret_cast< mavlink_message_t(*)>(_a[2]))); break;
        case 1: _t->clearView(); break;
        case 2: _t->refreshView(); break;
        case 3: _t->addSystem((*reinterpret_cast< UASInterface*(*)>(_a[1]))); break;
        case 4: _t->addComponent((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 5: _t->selectDropDownMenuSystem((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->selectDropDownMenuComponent((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QGCMAVLinkInspector::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QGCMAVLinkInspector::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_QGCMAVLinkInspector,
      qt_meta_data_QGCMAVLinkInspector, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QGCMAVLinkInspector::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QGCMAVLinkInspector::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QGCMAVLinkInspector::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QGCMAVLinkInspector))
        return static_cast<void*>(const_cast< QGCMAVLinkInspector*>(this));
    return QWidget::qt_metacast(_clname);
}

int QGCMAVLinkInspector::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
