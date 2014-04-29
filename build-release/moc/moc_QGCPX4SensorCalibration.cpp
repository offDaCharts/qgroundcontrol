/****************************************************************************
** Meta object code from reading C++ file 'QGCPX4SensorCalibration.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/ui/px4_configuration/QGCPX4SensorCalibration.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QGCPX4SensorCalibration.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QGCPX4SensorCalibration[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      29,   25,   24,   24, 0x0a,
      89,   57,   24,   24, 0x0a,
     128,   24,   24,   24, 0x0a,
     148,   24,   24,   24, 0x0a,
     167,   24,   24,   24, 0x0a,
     188,   24,   24,   24, 0x0a,
     222,  216,   24,   24, 0x0a,
     265,  259,   24,   24, 0x0a,
     294,  259,   24,   24, 0x0a,
     351,  317,   24,   24, 0x0a,
     399,  394,   24,   24, 0x09,
     428,  394,   24,   24, 0x09,
     455,  259,   24,   24, 0x09,
     472,  259,   24,   24, 0x09,
     495,  394,   24,   24, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_QGCPX4SensorCalibration[] = {
    "QGCPX4SensorCalibration\0\0uas\0"
    "setActiveUAS(UASInterface*)\0"
    "uasid,componentid,severity,text\0"
    "handleTextMessage(int,int,int,QString)\0"
    "gyroButtonClicked()\0magButtonClicked()\0"
    "accelButtonClicked()\0diffPressureButtonClicked()\0"
    "event\0contextMenuEvent(QContextMenuEvent*)\0"
    "index\0setAutopilotOrientation(int)\0"
    "setGpsOrientation(int)\0"
    "uas,component,parameterName,value\0"
    "parameterChanged(int,int,QString,QVariant)\0"
    "path\0setInstructionImage(QString)\0"
    "setAutopilotImage(QString)\0setGpsImage(int)\0"
    "setAutopilotImage(int)\0setGpsImage(QString)\0"
};

void QGCPX4SensorCalibration::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QGCPX4SensorCalibration *_t = static_cast<QGCPX4SensorCalibration *>(_o);
        switch (_id) {
        case 0: _t->setActiveUAS((*reinterpret_cast< UASInterface*(*)>(_a[1]))); break;
        case 1: _t->handleTextMessage((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< QString(*)>(_a[4]))); break;
        case 2: _t->gyroButtonClicked(); break;
        case 3: _t->magButtonClicked(); break;
        case 4: _t->accelButtonClicked(); break;
        case 5: _t->diffPressureButtonClicked(); break;
        case 6: _t->contextMenuEvent((*reinterpret_cast< QContextMenuEvent*(*)>(_a[1]))); break;
        case 7: _t->setAutopilotOrientation((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->setGpsOrientation((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->parameterChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< QVariant(*)>(_a[4]))); break;
        case 10: _t->setInstructionImage((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 11: _t->setAutopilotImage((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 12: _t->setGpsImage((*reinterpret_cast< const int(*)>(_a[1]))); break;
        case 13: _t->setAutopilotImage((*reinterpret_cast< const int(*)>(_a[1]))); break;
        case 14: _t->setGpsImage((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QGCPX4SensorCalibration::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QGCPX4SensorCalibration::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_QGCPX4SensorCalibration,
      qt_meta_data_QGCPX4SensorCalibration, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QGCPX4SensorCalibration::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QGCPX4SensorCalibration::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QGCPX4SensorCalibration::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QGCPX4SensorCalibration))
        return static_cast<void*>(const_cast< QGCPX4SensorCalibration*>(this));
    return QWidget::qt_metacast(_clname);
}

int QGCPX4SensorCalibration::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
