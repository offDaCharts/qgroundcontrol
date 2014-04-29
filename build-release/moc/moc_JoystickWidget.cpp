/****************************************************************************
** Meta object code from reading C++ file 'JoystickWidget.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/ui/JoystickWidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'JoystickWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_JoystickWidget[] = {

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
      16,   15,   15,   15, 0x0a,
      49,   38,   15,   15, 0x0a,
      80,   76,   15,   15, 0x0a,
     100,   96,   15,   15, 0x0a,
     127,   96,   15,   15, 0x0a,
     155,   15,   15,   15, 0x0a,
     202,   15,   15,   15, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_JoystickWidget[] = {
    "JoystickWidget\0\0createUIForJoystick()\0"
    "axis,value\0updateAxisValue(int,float)\0"
    "x,y\0setHat(int,int)\0key\0"
    "joystickButtonPressed(int)\0"
    "joystickButtonReleased(int)\0"
    "styleChanged(MainWindow::QGC_MAINWINDOW_STYLE)\0"
    "updateUI()\0"
};

void JoystickWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        JoystickWidget *_t = static_cast<JoystickWidget *>(_o);
        switch (_id) {
        case 0: _t->createUIForJoystick(); break;
        case 1: _t->updateAxisValue((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2]))); break;
        case 2: _t->setHat((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 3: _t->joystickButtonPressed((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->joystickButtonReleased((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->styleChanged((*reinterpret_cast< MainWindow::QGC_MAINWINDOW_STYLE(*)>(_a[1]))); break;
        case 6: _t->updateUI(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData JoystickWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject JoystickWidget::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_JoystickWidget,
      qt_meta_data_JoystickWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &JoystickWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *JoystickWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *JoystickWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_JoystickWidget))
        return static_cast<void*>(const_cast< JoystickWidget*>(this));
    return QDialog::qt_metacast(_clname);
}

int JoystickWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
