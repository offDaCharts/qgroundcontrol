/****************************************************************************
** Meta object code from reading C++ file 'MAVLinkDecoder.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/ui/MAVLinkDecoder.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'MAVLinkDecoder.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MAVLinkDecoder[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      48,   16,   15,   15, 0x05,
     116,   89,   15,   15, 0x05,

 // slots: signature, parameters, type, tag, flags
     180,  167,   15,   15, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_MAVLinkDecoder[] = {
    "MAVLinkDecoder\0\0uasid,componentid,severity,text\0"
    "textMessageReceived(int,int,int,QString)\0"
    "uasId,name,unit,value,msec\0"
    "valueChanged(int,QString,QString,QVariant,quint64)\0"
    "link,message\0"
    "receiveMessage(LinkInterface*,mavlink_message_t)\0"
};

void MAVLinkDecoder::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        MAVLinkDecoder *_t = static_cast<MAVLinkDecoder *>(_o);
        switch (_id) {
        case 0: _t->textMessageReceived((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4]))); break;
        case 1: _t->valueChanged((*reinterpret_cast< const int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4])),(*reinterpret_cast< const quint64(*)>(_a[5]))); break;
        case 2: _t->receiveMessage((*reinterpret_cast< LinkInterface*(*)>(_a[1])),(*reinterpret_cast< mavlink_message_t(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData MAVLinkDecoder::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject MAVLinkDecoder::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_MAVLinkDecoder,
      qt_meta_data_MAVLinkDecoder, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MAVLinkDecoder::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MAVLinkDecoder::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MAVLinkDecoder::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MAVLinkDecoder))
        return static_cast<void*>(const_cast< MAVLinkDecoder*>(this));
    return QObject::qt_metacast(_clname);
}

int MAVLinkDecoder::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void MAVLinkDecoder::textMessageReceived(int _t1, int _t2, int _t3, const QString & _t4)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void MAVLinkDecoder::valueChanged(const int _t1, const QString & _t2, const QString & _t3, const QVariant & _t4, const quint64 _t5)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
