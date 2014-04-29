/****************************************************************************
** Meta object code from reading C++ file 'ApmFirmwareConfig.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/ui/configuration/ApmFirmwareConfig.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ApmFirmwareConfig.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ApmFirmwareConfig[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      19,   18,   18,   18, 0x08,
      48,   42,   18,   18, 0x08,
      95,   18,   18,   18, 0x08,
     136,  116,   18,   18, 0x08,
     168,   18,   18,   18, 0x08,
     194,  187,   18,   18, 0x08,
     223,   18,   18,   18, 0x08,
     250,   42,   18,   18, 0x08,
     310,  295,   18,   18, 0x08,
     350,   18,   18,   18, 0x08,
     369,   18,   18,   18, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_ApmFirmwareConfig[] = {
    "ApmFirmwareConfig\0\0firmwareListFinished()\0"
    "error\0firmwareListError(QNetworkReply::NetworkError)\0"
    "flashButtonClicked()\0betafirmwareenabled\0"
    "betaFirmwareButtonClicked(bool)\0"
    "downloadFinished()\0status\0"
    "firmwareProcessFinished(int)\0"
    "firmwareProcessReadyRead()\0"
    "firmwareProcessError(QProcess::ProcessError)\0"
    "received,total\0firmwareDownloadProgress(qint64,qint64)\0"
    "requestFirmwares()\0requestBetaFirmwares()\0"
};

void ApmFirmwareConfig::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ApmFirmwareConfig *_t = static_cast<ApmFirmwareConfig *>(_o);
        switch (_id) {
        case 0: _t->firmwareListFinished(); break;
        case 1: _t->firmwareListError((*reinterpret_cast< QNetworkReply::NetworkError(*)>(_a[1]))); break;
        case 2: _t->flashButtonClicked(); break;
        case 3: _t->betaFirmwareButtonClicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->downloadFinished(); break;
        case 5: _t->firmwareProcessFinished((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->firmwareProcessReadyRead(); break;
        case 7: _t->firmwareProcessError((*reinterpret_cast< QProcess::ProcessError(*)>(_a[1]))); break;
        case 8: _t->firmwareDownloadProgress((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2]))); break;
        case 9: _t->requestFirmwares(); break;
        case 10: _t->requestBetaFirmwares(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData ApmFirmwareConfig::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ApmFirmwareConfig::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_ApmFirmwareConfig,
      qt_meta_data_ApmFirmwareConfig, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ApmFirmwareConfig::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ApmFirmwareConfig::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ApmFirmwareConfig::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ApmFirmwareConfig))
        return static_cast<void*>(const_cast< ApmFirmwareConfig*>(this));
    return QWidget::qt_metacast(_clname);
}

int ApmFirmwareConfig::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
