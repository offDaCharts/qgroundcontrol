/****************************************************************************
** Meta object code from reading C++ file 'qserialport.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../libs/serialport/qserialport.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qserialport.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QSerialPort[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
      10,   64, // properties
       8,  104, // enums/sets
       0,    0, // constructors
       0,       // flags
      10,       // signalCount

 // signals: signature, parameters, type, tag, flags
      26,   13,   12,   12, 0x05,
      83,   74,   12,   12, 0x05,
     129,  122,   12,   12, 0x05,
     173,  164,   12,   12, 0x05,
     217,  212,   12,   12, 0x05,
     269,  262,   12,   12, 0x05,
     326,  322,   12,   12, 0x05,
     357,  322,   12,   12, 0x05,
     400,  384,   12,   12, 0x05,
     444,  436,   12,   12, 0x05,

 // properties: name, type, flags
     488,  481, 0x02495103,
      74,  497, 0x0049510b,
     122,  506, 0x0049510b,
     164,  513, 0x0049510b,
     534,  522, 0x0049510b,
     562,  546, 0x0049510b,
     583,  578, 0x01495103,
     601,  578, 0x01495103,
     631,  615, 0x0049500d,
     637,  578, 0x01495103,

 // properties: notify_signal_id
       0,
       1,
       2,
       3,
       4,
       5,
       6,
       7,
       8,
       9,

 // enums: name, flags, count, data
     661, 0x0,    3,  136,
     497, 0x0,    5,  142,
     506, 0x0,    6,  152,
     513, 0x0,    4,  164,
     522, 0x0,    4,  172,
     672, 0x0,   11,  180,
     546, 0x0,    5,  202,
     615, 0x0,   12,  212,

 // enum data: key, value
     686, uint(QSerialPort::Input),
     692, uint(QSerialPort::Output),
     699, uint(QSerialPort::AllDirections),
     713, uint(QSerialPort::Data5),
     719, uint(QSerialPort::Data6),
     725, uint(QSerialPort::Data7),
     731, uint(QSerialPort::Data8),
     737, uint(QSerialPort::UnknownDataBits),
     753, uint(QSerialPort::NoParity),
     762, uint(QSerialPort::EvenParity),
     773, uint(QSerialPort::OddParity),
     783, uint(QSerialPort::SpaceParity),
     795, uint(QSerialPort::MarkParity),
     806, uint(QSerialPort::UnknownParity),
     820, uint(QSerialPort::OneStop),
     828, uint(QSerialPort::OneAndHalfStop),
     843, uint(QSerialPort::TwoStop),
     851, uint(QSerialPort::UnknownStopBits),
     867, uint(QSerialPort::NoFlowControl),
     881, uint(QSerialPort::HardwareControl),
     897, uint(QSerialPort::SoftwareControl),
     913, uint(QSerialPort::UnknownFlowControl),
     932, uint(QSerialPort::NoSignal),
     941, uint(QSerialPort::TransmittedDataSignal),
     963, uint(QSerialPort::ReceivedDataSignal),
     982, uint(QSerialPort::DataTerminalReadySignal),
    1006, uint(QSerialPort::DataCarrierDetectSignal),
    1030, uint(QSerialPort::DataSetReadySignal),
    1049, uint(QSerialPort::RingIndicatorSignal),
    1069, uint(QSerialPort::RequestToSendSignal),
    1089, uint(QSerialPort::ClearToSendSignal),
    1107, uint(QSerialPort::SecondaryTransmittedDataSignal),
    1138, uint(QSerialPort::SecondaryReceivedDataSignal),
    1166, uint(QSerialPort::SkipPolicy),
    1177, uint(QSerialPort::PassZeroPolicy),
    1192, uint(QSerialPort::IgnorePolicy),
    1205, uint(QSerialPort::StopReceivingPolicy),
    1225, uint(QSerialPort::UnknownPolicy),
    1239, uint(QSerialPort::NoError),
    1247, uint(QSerialPort::DeviceNotFoundError),
    1267, uint(QSerialPort::PermissionError),
    1283, uint(QSerialPort::OpenError),
    1293, uint(QSerialPort::ParityError),
    1305, uint(QSerialPort::FramingError),
    1318, uint(QSerialPort::BreakConditionError),
    1338, uint(QSerialPort::WriteError),
    1349, uint(QSerialPort::ReadError),
    1359, uint(QSerialPort::ResourceError),
    1373, uint(QSerialPort::UnsupportedOperationError),
    1399, uint(QSerialPort::UnknownError),

       0        // eod
};

static const char qt_meta_stringdata_QSerialPort[] = {
    "QSerialPort\0\0baudRate,dir\0"
    "baudRateChanged(qint32,QSerialPort::Directions)\0"
    "dataBits\0dataBitsChanged(QSerialPort::DataBits)\0"
    "parity\0parityChanged(QSerialPort::Parity)\0"
    "stopBits\0stopBitsChanged(QSerialPort::StopBits)\0"
    "flow\0flowControlChanged(QSerialPort::FlowControl)\0"
    "policy\0dataErrorPolicyChanged(QSerialPort::DataErrorPolicy)\0"
    "set\0dataTerminalReadyChanged(bool)\0"
    "requestToSendChanged(bool)\0serialPortError\0"
    "error(QSerialPort::SerialPortError)\0"
    "restore\0settingsRestoredOnCloseChanged(bool)\0"
    "qint32\0baudRate\0DataBits\0Parity\0"
    "StopBits\0FlowControl\0flowControl\0"
    "DataErrorPolicy\0dataErrorPolicy\0bool\0"
    "dataTerminalReady\0requestToSend\0"
    "SerialPortError\0error\0settingsRestoredOnClose\0"
    "Directions\0PinoutSignals\0Input\0Output\0"
    "AllDirections\0Data5\0Data6\0Data7\0Data8\0"
    "UnknownDataBits\0NoParity\0EvenParity\0"
    "OddParity\0SpaceParity\0MarkParity\0"
    "UnknownParity\0OneStop\0OneAndHalfStop\0"
    "TwoStop\0UnknownStopBits\0NoFlowControl\0"
    "HardwareControl\0SoftwareControl\0"
    "UnknownFlowControl\0NoSignal\0"
    "TransmittedDataSignal\0ReceivedDataSignal\0"
    "DataTerminalReadySignal\0DataCarrierDetectSignal\0"
    "DataSetReadySignal\0RingIndicatorSignal\0"
    "RequestToSendSignal\0ClearToSendSignal\0"
    "SecondaryTransmittedDataSignal\0"
    "SecondaryReceivedDataSignal\0SkipPolicy\0"
    "PassZeroPolicy\0IgnorePolicy\0"
    "StopReceivingPolicy\0UnknownPolicy\0"
    "NoError\0DeviceNotFoundError\0PermissionError\0"
    "OpenError\0ParityError\0FramingError\0"
    "BreakConditionError\0WriteError\0ReadError\0"
    "ResourceError\0UnsupportedOperationError\0"
    "UnknownError\0"
};

void QSerialPort::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QSerialPort *_t = static_cast<QSerialPort *>(_o);
        switch (_id) {
        case 0: _t->baudRateChanged((*reinterpret_cast< qint32(*)>(_a[1])),(*reinterpret_cast< QSerialPort::Directions(*)>(_a[2]))); break;
        case 1: _t->dataBitsChanged((*reinterpret_cast< QSerialPort::DataBits(*)>(_a[1]))); break;
        case 2: _t->parityChanged((*reinterpret_cast< QSerialPort::Parity(*)>(_a[1]))); break;
        case 3: _t->stopBitsChanged((*reinterpret_cast< QSerialPort::StopBits(*)>(_a[1]))); break;
        case 4: _t->flowControlChanged((*reinterpret_cast< QSerialPort::FlowControl(*)>(_a[1]))); break;
        case 5: _t->dataErrorPolicyChanged((*reinterpret_cast< QSerialPort::DataErrorPolicy(*)>(_a[1]))); break;
        case 6: _t->dataTerminalReadyChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->requestToSendChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->error((*reinterpret_cast< QSerialPort::SerialPortError(*)>(_a[1]))); break;
        case 9: _t->settingsRestoredOnCloseChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QSerialPort::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QSerialPort::staticMetaObject = {
    { &QIODevice::staticMetaObject, qt_meta_stringdata_QSerialPort,
      qt_meta_data_QSerialPort, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QSerialPort::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QSerialPort::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QSerialPort::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QSerialPort))
        return static_cast<void*>(const_cast< QSerialPort*>(this));
    return QIODevice::qt_metacast(_clname);
}

int QSerialPort::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QIODevice::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< qint32*>(_v) = baudRate(); break;
        case 1: *reinterpret_cast< DataBits*>(_v) = dataBits(); break;
        case 2: *reinterpret_cast< Parity*>(_v) = parity(); break;
        case 3: *reinterpret_cast< StopBits*>(_v) = stopBits(); break;
        case 4: *reinterpret_cast< FlowControl*>(_v) = flowControl(); break;
        case 5: *reinterpret_cast< DataErrorPolicy*>(_v) = dataErrorPolicy(); break;
        case 6: *reinterpret_cast< bool*>(_v) = isDataTerminalReady(); break;
        case 7: *reinterpret_cast< bool*>(_v) = isRequestToSend(); break;
        case 8: *reinterpret_cast< SerialPortError*>(_v) = error(); break;
        case 9: *reinterpret_cast< bool*>(_v) = settingsRestoredOnClose(); break;
        }
        _id -= 10;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setBaudRate(*reinterpret_cast< qint32*>(_v)); break;
        case 1: setDataBits(*reinterpret_cast< DataBits*>(_v)); break;
        case 2: setParity(*reinterpret_cast< Parity*>(_v)); break;
        case 3: setStopBits(*reinterpret_cast< StopBits*>(_v)); break;
        case 4: setFlowControl(*reinterpret_cast< FlowControl*>(_v)); break;
        case 5: setDataErrorPolicy(*reinterpret_cast< DataErrorPolicy*>(_v)); break;
        case 6: setDataTerminalReady(*reinterpret_cast< bool*>(_v)); break;
        case 7: setRequestToSend(*reinterpret_cast< bool*>(_v)); break;
        case 9: setSettingsRestoredOnClose(*reinterpret_cast< bool*>(_v)); break;
        }
        _id -= 10;
    } else if (_c == QMetaObject::ResetProperty) {
        switch (_id) {
        case 8: clearError(); break;
        }
        _id -= 10;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 10;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 10;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 10;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 10;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 10;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QSerialPort::baudRateChanged(qint32 _t1, QSerialPort::Directions _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QSerialPort::dataBitsChanged(QSerialPort::DataBits _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QSerialPort::parityChanged(QSerialPort::Parity _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QSerialPort::stopBitsChanged(QSerialPort::StopBits _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void QSerialPort::flowControlChanged(QSerialPort::FlowControl _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void QSerialPort::dataErrorPolicyChanged(QSerialPort::DataErrorPolicy _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void QSerialPort::dataTerminalReadyChanged(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void QSerialPort::requestToSendChanged(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void QSerialPort::error(QSerialPort::SerialPortError _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void QSerialPort::settingsRestoredOnCloseChanged(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}
QT_END_MOC_NAMESPACE
