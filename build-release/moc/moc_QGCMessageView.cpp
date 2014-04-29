/****************************************************************************
** Meta object code from reading C++ file 'QGCMessageView.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/ui/uas/QGCMessageView.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QGCMessageView.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QGCMessageView[] = {

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
      20,   16,   15,   15, 0x0a,
      80,   48,   15,   15, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_QGCMessageView[] = {
    "QGCMessageView\0\0uas\0setActiveUAS(UASInterface*)\0"
    "uasid,componentid,severity,text\0"
    "handleTextMessage(int,int,int,QString)\0"
};

void QGCMessageView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QGCMessageView *_t = static_cast<QGCMessageView *>(_o);
        switch (_id) {
        case 0: _t->setActiveUAS((*reinterpret_cast< UASInterface*(*)>(_a[1]))); break;
        case 1: _t->handleTextMessage((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< QString(*)>(_a[4]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QGCMessageView::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QGCMessageView::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_QGCMessageView,
      qt_meta_data_QGCMessageView, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QGCMessageView::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QGCMessageView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QGCMessageView::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QGCMessageView))
        return static_cast<void*>(const_cast< QGCMessageView*>(this));
    return QWidget::qt_metacast(_clname);
}

int QGCMessageView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
