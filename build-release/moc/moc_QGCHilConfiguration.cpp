/****************************************************************************
** Meta object code from reading C++ file 'QGCHilConfiguration.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/ui/QGCHilConfiguration.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QGCHilConfiguration.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QGCHilConfiguration[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      29,   21,   20,   20, 0x0a,
      67,   59,   20,   20, 0x0a,
      93,   87,   20,   20, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_QGCHilConfiguration[] = {
    "QGCHilConfiguration\0\0message\0"
    "receiveStatusMessage(QString)\0version\0"
    "setVersion(QString)\0index\0"
    "on_simComboBox_currentIndexChanged(int)\0"
};

void QGCHilConfiguration::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QGCHilConfiguration *_t = static_cast<QGCHilConfiguration *>(_o);
        switch (_id) {
        case 0: _t->receiveStatusMessage((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->setVersion((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->on_simComboBox_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QGCHilConfiguration::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QGCHilConfiguration::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_QGCHilConfiguration,
      qt_meta_data_QGCHilConfiguration, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QGCHilConfiguration::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QGCHilConfiguration::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QGCHilConfiguration::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QGCHilConfiguration))
        return static_cast<void*>(const_cast< QGCHilConfiguration*>(this));
    return QWidget::qt_metacast(_clname);
}

int QGCHilConfiguration::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
