/****************************************************************************
** Meta object code from reading C++ file 'consoleprocess.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../libs/utils/consoleprocess.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'consoleprocess.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Utils__ConsoleProcess[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: signature, parameters, type, tag, flags
      29,   23,   22,   22, 0x05,
      51,   22,   22,   22, 0x05,
      68,   22,   22,   22, 0x05,
      85,   22,   22,   22, 0x05,
     102,   22,   22,   22, 0x05,

 // slots: signature, parameters, type, tag, flags
     119,   22,   22,   22, 0x08,
     145,   22,   22,   22, 0x08,
     162,   22,   22,   22, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_Utils__ConsoleProcess[] = {
    "Utils::ConsoleProcess\0\0error\0"
    "processError(QString)\0processStarted()\0"
    "processStopped()\0wrapperStarted()\0"
    "wrapperStopped()\0stubConnectionAvailable()\0"
    "readStubOutput()\0stubExited()\0"
};

void Utils::ConsoleProcess::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ConsoleProcess *_t = static_cast<ConsoleProcess *>(_o);
        switch (_id) {
        case 0: _t->processError((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->processStarted(); break;
        case 2: _t->processStopped(); break;
        case 3: _t->wrapperStarted(); break;
        case 4: _t->wrapperStopped(); break;
        case 5: _t->stubConnectionAvailable(); break;
        case 6: _t->readStubOutput(); break;
        case 7: _t->stubExited(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Utils::ConsoleProcess::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Utils::ConsoleProcess::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Utils__ConsoleProcess,
      qt_meta_data_Utils__ConsoleProcess, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Utils::ConsoleProcess::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Utils::ConsoleProcess::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Utils::ConsoleProcess::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Utils__ConsoleProcess))
        return static_cast<void*>(const_cast< ConsoleProcess*>(this));
    if (!strcmp(_clname, "AbstractProcess"))
        return static_cast< AbstractProcess*>(const_cast< ConsoleProcess*>(this));
    return QObject::qt_metacast(_clname);
}

int Utils::ConsoleProcess::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void Utils::ConsoleProcess::processError(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Utils::ConsoleProcess::processStarted()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void Utils::ConsoleProcess::processStopped()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}

// SIGNAL 3
void Utils::ConsoleProcess::wrapperStarted()
{
    QMetaObject::activate(this, &staticMetaObject, 3, 0);
}

// SIGNAL 4
void Utils::ConsoleProcess::wrapperStopped()
{
    QMetaObject::activate(this, &staticMetaObject, 4, 0);
}
QT_END_MOC_NAMESPACE
