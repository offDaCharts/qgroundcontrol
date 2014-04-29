/****************************************************************************
** Meta object code from reading C++ file 'QGCHilFlightGearConfiguration.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/ui/QGCHilFlightGearConfiguration.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QGCHilFlightGearConfiguration.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QGCHilFlightGearConfiguration[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      50,   31,   30,   30, 0x05,

 // slots: signature, parameters, type, tag, flags
      80,   30,   30,   30, 0x08,
     105,   30,   30,   30, 0x08,
     140,  129,   30,   30, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_QGCHilFlightGearConfiguration[] = {
    "QGCHilFlightGearConfiguration\0\0"
    "barometerOffsetkPa\0barometerOffsetChanged(float)\0"
    "on_startButton_clicked()\0"
    "on_stopButton_clicked()\0baroOffset\0"
    "on_barometerOffsetLineEdit_textChanged(QString)\0"
};

void QGCHilFlightGearConfiguration::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QGCHilFlightGearConfiguration *_t = static_cast<QGCHilFlightGearConfiguration *>(_o);
        switch (_id) {
        case 0: _t->barometerOffsetChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 1: _t->on_startButton_clicked(); break;
        case 2: _t->on_stopButton_clicked(); break;
        case 3: _t->on_barometerOffsetLineEdit_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QGCHilFlightGearConfiguration::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QGCHilFlightGearConfiguration::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_QGCHilFlightGearConfiguration,
      qt_meta_data_QGCHilFlightGearConfiguration, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QGCHilFlightGearConfiguration::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QGCHilFlightGearConfiguration::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QGCHilFlightGearConfiguration::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QGCHilFlightGearConfiguration))
        return static_cast<void*>(const_cast< QGCHilFlightGearConfiguration*>(this));
    return QWidget::qt_metacast(_clname);
}

int QGCHilFlightGearConfiguration::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void QGCHilFlightGearConfiguration::barometerOffsetChanged(float _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
