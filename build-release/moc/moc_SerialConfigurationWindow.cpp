/****************************************************************************
** Meta object code from reading C++ file 'SerialConfigurationWindow.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/ui/SerialConfigurationWindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SerialConfigurationWindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_SerialConfigurationWindow[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      27,   26,   26,   26, 0x0a,
      57,   52,   26,   26, 0x0a,
      88,   81,   26,   26, 0x0a,
     108,   81,   26,   26, 0x0a,
     127,   81,   26,   26, 0x0a,
     152,  147,   26,   26, 0x0a,
     178,  173,   26,   26, 0x0a,
     199,   26,   26,   26, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_SerialConfigurationWindow[] = {
    "SerialConfigurationWindow\0\0"
    "configureCommunication()\0flow\0"
    "enableFlowControl(bool)\0accept\0"
    "setParityNone(bool)\0setParityOdd(bool)\0"
    "setParityEven(bool)\0port\0setPortName(QString)\0"
    "name\0setLinkName(QString)\0setupPortList()\0"
};

void SerialConfigurationWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        SerialConfigurationWindow *_t = static_cast<SerialConfigurationWindow *>(_o);
        switch (_id) {
        case 0: _t->configureCommunication(); break;
        case 1: _t->enableFlowControl((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->setParityNone((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->setParityOdd((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->setParityEven((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->setPortName((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 6: _t->setLinkName((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 7: _t->setupPortList(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData SerialConfigurationWindow::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject SerialConfigurationWindow::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_SerialConfigurationWindow,
      qt_meta_data_SerialConfigurationWindow, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &SerialConfigurationWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *SerialConfigurationWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *SerialConfigurationWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SerialConfigurationWindow))
        return static_cast<void*>(const_cast< SerialConfigurationWindow*>(this));
    return QWidget::qt_metacast(_clname);
}

int SerialConfigurationWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
