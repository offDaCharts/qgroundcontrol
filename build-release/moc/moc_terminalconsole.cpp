/****************************************************************************
** Meta object code from reading C++ file 'terminalconsole.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/ui/configuration/terminalconsole.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'terminalconsole.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_TerminalConsole[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      17,   16,   16,   16, 0x08,
      43,   34,   16,   16, 0x08,
      74,   16,   16,   16, 0x08,
      97,   92,   16,   16, 0x08,
     119,   16,   16,   16, 0x08,
     130,   16,   16,   16, 0x08,
     155,  149,   16,   16, 0x08,
     203,  197,   16,   16, 0x08,
     220,  197,   16,   16, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_TerminalConsole[] = {
    "TerminalConsole\0\0openSerialPort()\0"
    "settings\0openSerialPort(SerialSettings)\0"
    "closeSerialPort()\0data\0writeData(QByteArray)\0"
    "readData()\0sendResetCommand()\0error\0"
    "handleError(QSerialPort::SerialPortError)\0"
    "index\0setBaudRate(int)\0setLink(int)\0"
};

void TerminalConsole::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        TerminalConsole *_t = static_cast<TerminalConsole *>(_o);
        switch (_id) {
        case 0: _t->openSerialPort(); break;
        case 1: _t->openSerialPort((*reinterpret_cast< const SerialSettings(*)>(_a[1]))); break;
        case 2: _t->closeSerialPort(); break;
        case 3: _t->writeData((*reinterpret_cast< const QByteArray(*)>(_a[1]))); break;
        case 4: _t->readData(); break;
        case 5: _t->sendResetCommand(); break;
        case 6: _t->handleError((*reinterpret_cast< QSerialPort::SerialPortError(*)>(_a[1]))); break;
        case 7: _t->setBaudRate((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->setLink((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData TerminalConsole::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject TerminalConsole::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_TerminalConsole,
      qt_meta_data_TerminalConsole, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &TerminalConsole::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *TerminalConsole::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *TerminalConsole::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_TerminalConsole))
        return static_cast<void*>(const_cast< TerminalConsole*>(this));
    return QWidget::qt_metacast(_clname);
}

int TerminalConsole::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
