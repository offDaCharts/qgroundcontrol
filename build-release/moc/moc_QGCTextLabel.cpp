/****************************************************************************
** Meta object code from reading C++ file 'QGCTextLabel.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/ui/designer/QGCTextLabel.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QGCTextLabel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QGCTextLabel[] = {

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
      23,   14,   13,   13, 0x0a,
      49,   14,   13,   13, 0x0a,
      86,   73,   13,   13, 0x0a,
     155,  120,   13,   13, 0x0a,
     196,   13,   13,   13, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_QGCTextLabel[] = {
    "QGCTextLabel\0\0settings\0writeSettings(QSettings&)\0"
    "readSettings(QSettings)\0pre,settings\0"
    "readSettings(QString,QVariantMap)\0"
    "uasid,componentId,severity,message\0"
    "textMessageReceived(int,int,int,QString)\0"
    "update_isMavCommand()\0"
};

void QGCTextLabel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QGCTextLabel *_t = static_cast<QGCTextLabel *>(_o);
        switch (_id) {
        case 0: _t->writeSettings((*reinterpret_cast< QSettings(*)>(_a[1]))); break;
        case 1: _t->readSettings((*reinterpret_cast< const QSettings(*)>(_a[1]))); break;
        case 2: _t->readSettings((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QVariantMap(*)>(_a[2]))); break;
        case 3: _t->textMessageReceived((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< QString(*)>(_a[4]))); break;
        case 4: _t->update_isMavCommand(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QGCTextLabel::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QGCTextLabel::staticMetaObject = {
    { &QGCToolWidgetItem::staticMetaObject, qt_meta_stringdata_QGCTextLabel,
      qt_meta_data_QGCTextLabel, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QGCTextLabel::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QGCTextLabel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QGCTextLabel::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QGCTextLabel))
        return static_cast<void*>(const_cast< QGCTextLabel*>(this));
    return QGCToolWidgetItem::qt_metacast(_clname);
}

int QGCTextLabel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGCToolWidgetItem::qt_metacall(_c, _id, _a);
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
