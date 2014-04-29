/****************************************************************************
** Meta object code from reading C++ file 'synchronousprocess.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../libs/utils/synchronousprocess.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'synchronousprocess.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Utils__SynchronousProcess[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: signature, parameters, type, tag, flags
      42,   27,   26,   26, 0x05,
      66,   27,   26,   26, 0x05,
      90,   27,   26,   26, 0x05,
     119,   27,   26,   26, 0x05,

 // slots: signature, parameters, type, tag, flags
     148,   26,   26,   26, 0x08,
     173,  162,   26,   26, 0x08,
     208,   26,   26,   26, 0x08,
     238,   26,   26,   26, 0x08,
     252,   26,   26,   26, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_Utils__SynchronousProcess[] = {
    "Utils::SynchronousProcess\0\0data,firstTime\0"
    "stdOut(QByteArray,bool)\0stdErr(QByteArray,bool)\0"
    "stdOutBuffered(QString,bool)\0"
    "stdErrBuffered(QString,bool)\0slotTimeout()\0"
    "exitCode,e\0finished(int,QProcess::ExitStatus)\0"
    "error(QProcess::ProcessError)\0"
    "stdOutReady()\0stdErrReady()\0"
};

void Utils::SynchronousProcess::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        SynchronousProcess *_t = static_cast<SynchronousProcess *>(_o);
        switch (_id) {
        case 0: _t->stdOut((*reinterpret_cast< const QByteArray(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 1: _t->stdErr((*reinterpret_cast< const QByteArray(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 2: _t->stdOutBuffered((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 3: _t->stdErrBuffered((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 4: _t->slotTimeout(); break;
        case 5: _t->finished((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QProcess::ExitStatus(*)>(_a[2]))); break;
        case 6: _t->error((*reinterpret_cast< QProcess::ProcessError(*)>(_a[1]))); break;
        case 7: _t->stdOutReady(); break;
        case 8: _t->stdErrReady(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Utils::SynchronousProcess::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Utils::SynchronousProcess::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Utils__SynchronousProcess,
      qt_meta_data_Utils__SynchronousProcess, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Utils::SynchronousProcess::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Utils::SynchronousProcess::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Utils::SynchronousProcess::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Utils__SynchronousProcess))
        return static_cast<void*>(const_cast< SynchronousProcess*>(this));
    return QObject::qt_metacast(_clname);
}

int Utils::SynchronousProcess::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void Utils::SynchronousProcess::stdOut(const QByteArray & _t1, bool _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Utils::SynchronousProcess::stdErr(const QByteArray & _t1, bool _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Utils::SynchronousProcess::stdOutBuffered(const QString & _t1, bool _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void Utils::SynchronousProcess::stdErrBuffered(const QString & _t1, bool _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_END_MOC_NAMESPACE
