/****************************************************************************
** Meta object code from reading C++ file 'RadioCalibrationWindow.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/ui/RadioCalibration/RadioCalibrationWindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'RadioCalibrationWindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_RadioCalibrationWindow[] = {

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
      31,   24,   23,   23, 0x0a,
      53,   23,   23,   23, 0x0a,
      64,   23,   23,   23, 0x0a,
      75,   23,   23,   23, 0x0a,
      82,   23,   23,   23, 0x0a,
      98,   92,   23,   23, 0x0a,
     141,  138,   23,   23, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_RadioCalibrationWindow[] = {
    "RadioCalibrationWindow\0\0ch,raw\0"
    "setChannel(int,float)\0loadFile()\0"
    "saveFile()\0send()\0request()\0radio\0"
    "receive(QPointer<RadioCalibrationData>)\0"
    "id\0setUASId(int)\0"
};

void RadioCalibrationWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        RadioCalibrationWindow *_t = static_cast<RadioCalibrationWindow *>(_o);
        switch (_id) {
        case 0: _t->setChannel((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2]))); break;
        case 1: _t->loadFile(); break;
        case 2: _t->saveFile(); break;
        case 3: _t->send(); break;
        case 4: _t->request(); break;
        case 5: _t->receive((*reinterpret_cast< const QPointer<RadioCalibrationData>(*)>(_a[1]))); break;
        case 6: _t->setUASId((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData RadioCalibrationWindow::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject RadioCalibrationWindow::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_RadioCalibrationWindow,
      qt_meta_data_RadioCalibrationWindow, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &RadioCalibrationWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *RadioCalibrationWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *RadioCalibrationWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_RadioCalibrationWindow))
        return static_cast<void*>(const_cast< RadioCalibrationWindow*>(this));
    return QWidget::qt_metacast(_clname);
}

int RadioCalibrationWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
