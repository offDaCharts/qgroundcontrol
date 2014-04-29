/****************************************************************************
** Meta object code from reading C++ file 'QGCSensorSettingsWidget.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/ui/QGCSensorSettingsWidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QGCSensorSettingsWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QGCSensorSettingsWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      30,   25,   24,   24, 0x0a,
      56,   25,   24,   24, 0x0a,
      83,   25,   24,   24, 0x0a,
     108,   25,   24,   24, 0x0a,
     127,   25,   24,   24, 0x0a,
     152,   25,   24,   24, 0x0a,
     175,   25,   24,   24, 0x0a,
     198,   25,   24,   24, 0x0a,
     221,   24,   24,   24, 0x09,
     237,   24,   24,   24, 0x09,
     254,   24,   24,   24, 0x09,
     269,   24,   24,   24, 0x09,
     278,   24,   24,   24, 0x09,
     293,   24,   24,   24, 0x09,
     306,   24,   24,   24, 0x09,
     319,   24,   24,   24, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_QGCSensorSettingsWidget[] = {
    "QGCSensorSettingsWidget\0\0rate\0"
    "delayedSendRawSensor(int)\0"
    "delayedSendController(int)\0"
    "delayedSendExtended(int)\0delayedSendRC(int)\0"
    "delayedSendPosition(int)\0"
    "delayedSendExtra1(int)\0delayedSendExtra2(int)\0"
    "delayedSendExtra3(int)\0sendRawSensor()\0"
    "sendController()\0sendExtended()\0"
    "sendRC()\0sendPosition()\0sendExtra1()\0"
    "sendExtra2()\0sendExtra3()\0"
};

void QGCSensorSettingsWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QGCSensorSettingsWidget *_t = static_cast<QGCSensorSettingsWidget *>(_o);
        switch (_id) {
        case 0: _t->delayedSendRawSensor((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->delayedSendController((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->delayedSendExtended((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->delayedSendRC((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->delayedSendPosition((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->delayedSendExtra1((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->delayedSendExtra2((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->delayedSendExtra3((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->sendRawSensor(); break;
        case 9: _t->sendController(); break;
        case 10: _t->sendExtended(); break;
        case 11: _t->sendRC(); break;
        case 12: _t->sendPosition(); break;
        case 13: _t->sendExtra1(); break;
        case 14: _t->sendExtra2(); break;
        case 15: _t->sendExtra3(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QGCSensorSettingsWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QGCSensorSettingsWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_QGCSensorSettingsWidget,
      qt_meta_data_QGCSensorSettingsWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QGCSensorSettingsWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QGCSensorSettingsWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QGCSensorSettingsWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QGCSensorSettingsWidget))
        return static_cast<void*>(const_cast< QGCSensorSettingsWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int QGCSensorSettingsWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
