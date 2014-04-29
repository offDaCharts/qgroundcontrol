/****************************************************************************
** Meta object code from reading C++ file 'fancymainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../libs/utils/fancymainwindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'fancymainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Utils__FancyMainWindow[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      31,   24,   23,   23, 0x0a,
      47,   23,   23,   23, 0x08,
      71,   23,   23,   23, 0x08,
     100,   23,   23,   23, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_Utils__FancyMainWindow[] = {
    "Utils::FancyMainWindow\0\0locked\0"
    "setLocked(bool)\0onDockActionTriggered()\0"
    "onDockVisibilityChange(bool)\0"
    "onTopLevelChanged()\0"
};

void Utils::FancyMainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        FancyMainWindow *_t = static_cast<FancyMainWindow *>(_o);
        switch (_id) {
        case 0: _t->setLocked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->onDockActionTriggered(); break;
        case 2: _t->onDockVisibilityChange((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->onTopLevelChanged(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Utils::FancyMainWindow::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Utils::FancyMainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_Utils__FancyMainWindow,
      qt_meta_data_Utils__FancyMainWindow, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Utils::FancyMainWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Utils::FancyMainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Utils::FancyMainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Utils__FancyMainWindow))
        return static_cast<void*>(const_cast< FancyMainWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int Utils::FancyMainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
