/****************************************************************************
** Meta object code from reading C++ file 'CommConfigurationWindow.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/ui/CommConfigurationWindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'CommConfigurationWindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_CommConfigurationWindow[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      38,   25,   24,   24, 0x08,
      76,   67,   24,   24, 0x0a,
      93,   24,   24,   24, 0x0a,
     117,  109,   24,   24, 0x0a,
     144,  139,   24,   24, 0x0a,
     165,   24,   24,   24, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_CommConfigurationWindow[] = {
    "CommConfigurationWindow\0\0currentIndex\0"
    "linkCurrentIndexChanged(int)\0protocol\0"
    "setProtocol(int)\0setConnection()\0"
    "connect\0connectionState(bool)\0name\0"
    "setLinkName(QString)\0remove()\0"
};

void CommConfigurationWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        CommConfigurationWindow *_t = static_cast<CommConfigurationWindow *>(_o);
        switch (_id) {
        case 0: _t->linkCurrentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->setProtocol((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->setConnection(); break;
        case 3: _t->connectionState((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->setLinkName((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 5: _t->remove(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData CommConfigurationWindow::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject CommConfigurationWindow::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_CommConfigurationWindow,
      qt_meta_data_CommConfigurationWindow, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &CommConfigurationWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *CommConfigurationWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *CommConfigurationWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CommConfigurationWindow))
        return static_cast<void*>(const_cast< CommConfigurationWindow*>(this));
    return QDialog::qt_metacast(_clname);
}

int CommConfigurationWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
