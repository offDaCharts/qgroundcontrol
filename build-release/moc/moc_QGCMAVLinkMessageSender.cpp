/****************************************************************************
** Meta object code from reading C++ file 'QGCMAVLinkMessageSender.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/ui/mavlink/QGCMAVLinkMessageSender.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QGCMAVLinkMessageSender.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QGCMAVLinkMessageSender[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      30,   24,   25,   24, 0x0a,
      44,   24,   24,   24, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_QGCMAVLinkMessageSender[] = {
    "QGCMAVLinkMessageSender\0\0bool\0"
    "sendMessage()\0refresh()\0"
};

void QGCMAVLinkMessageSender::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QGCMAVLinkMessageSender *_t = static_cast<QGCMAVLinkMessageSender *>(_o);
        switch (_id) {
        case 0: { bool _r = _t->sendMessage();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 1: _t->refresh(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QGCMAVLinkMessageSender::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QGCMAVLinkMessageSender::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_QGCMAVLinkMessageSender,
      qt_meta_data_QGCMAVLinkMessageSender, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QGCMAVLinkMessageSender::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QGCMAVLinkMessageSender::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QGCMAVLinkMessageSender::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QGCMAVLinkMessageSender))
        return static_cast<void*>(const_cast< QGCMAVLinkMessageSender*>(this));
    return QWidget::qt_metacast(_clname);
}

int QGCMAVLinkMessageSender::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
