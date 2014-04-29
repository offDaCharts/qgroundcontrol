/****************************************************************************
** Meta object code from reading C++ file 'HUD.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/ui/HUD.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'HUD.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_HUD[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      40,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      13,    5,    4,    4, 0x05,

 // slots: signature, parameters, type, tag, flags
      46,   37,    4,    4, 0x0a,
      97,   93,    4,    4, 0x0a,
     154,  125,    4,    4, 0x0a,
     252,  213,    4,    4, 0x0a,
     320,  315,    4,    4, 0x0a,
     374,    4,    4,    4, 0x0a,
     408,  406,    4,    4, 0x0a,
     443,  315,    4,    4, 0x0a,
     507,  315,    4,    4, 0x0a,
     572,  315,    4,    4, 0x0a,
     628,  406,    4,    4, 0x0a,
     683,  663,    4,    4, 0x0a,
     715,  406,    4,    4, 0x0a,
     757,  748,    4,    4, 0x0a,
     815,  781,    4,    4, 0x0a,
     881,  847,    4,    4, 0x0a,
     925,    4,    4,    4, 0x0a,
     939,    4,    4,    4, 0x0a,
     960,  951,    4,    4, 0x0a,
     984,  979,    4,    4, 0x0a,
    1001,    4,    4,    4, 0x0a,
    1034, 1026,    4,    4, 0x0a,
    1061, 1026,    4,    4, 0x0a,
    1079,   93,    4,    4, 0x0a,
    1104,    4,    4,    4, 0x09,
    1141, 1127,    4,    4, 0x09,
    1212, 1174,    4,    4, 0x09,
    1335, 1266,    4,    4, 0x09,
    1372,    4,    4,    4, 0x09,
    1412, 1383,    4,    4, 0x09,
    1461, 1383,    4,    4, 0x09,
    1554, 1510,    4,    4, 0x09,
    1677, 1611,    4,    4, 0x09,
    1806, 1749,    4,    4, 0x09,
    1926, 1871,    4,    4, 0x09,
    2045, 1998,    4,    4, 0x29,
    2173, 2112,    4,    4, 0x09,
    2306, 2251,    4,    4, 0x29,
    2398, 2379,    4,    4, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_HUD[] = {
    "HUD\0\0visible\0visibilityChanged(bool)\0"
    "newTheme\0styleChanged(MainWindow::QGC_MAINWINDOW_STYLE)\0"
    "uas\0setActiveUAS(UASInterface*)\0"
    "uas,roll,pitch,yaw,timestamp\0"
    "updateAttitude(UASInterface*,double,double,double,quint64)\0"
    "uas,component,roll,pitch,yaw,timestamp\0"
    "updateAttitude(UASInterface*,int,double,double,double,quint64)\0"
    ",,,,\0updateBattery(UASInterface*,double,double,double,int)\0"
    "receiveHeartbeat(UASInterface*)\0,\0"
    "updateThrust(UASInterface*,double)\0"
    "updateLocalPosition(UASInterface*,double,double,double,quint64)\0"
    "updateGlobalPosition(UASInterface*,double,double,double,quint64)\0"
    "updateSpeed(UASInterface*,double,double,double,quint64)\0"
    "updateState(UASInterface*,QString)\0"
    "id,mode,description\0updateMode(int,QString,QString)\0"
    "updateLoad(UASInterface*,double)\0"
    "uasId,id\0selectWaypoint(int,int)\0"
    "imgid,width,height,depth,channels\0"
    "startImage(int,int,int,int,int)\0"
    "imgid,imageData,length,startIndex\0"
    "setPixels(int,const unsigned char*,int,int)\0"
    "finishImage()\0saveImage()\0fileName\0"
    "saveImage(QString)\0save\0saveImages(bool)\0"
    "selectOfflineDirectory()\0enabled\0"
    "enableHUDInstruments(bool)\0enableVideo(bool)\0"
    "copyImage(UASInterface*)\0"
    "paintRollPitchStrips()\0pitch,painter\0"
    "paintPitchLines(float,QPainter*)\0"
    "text,color,fontSize,refX,refY,painter\0"
    "paintText(QString,QColor,float,float,float,QPainter*)\0"
    "referencePositionX,referencePositionY,referenceWidth,referenceHeight\0"
    "setupGLView(float,float,float,float)\0"
    "paintHUD()\0text,refPosX,refPosY,painter\0"
    "paintPitchLinePos(QString,float,float,QPainter*)\0"
    "paintPitchLineNeg(QString,float,float,QPainter*)\0"
    "refX1,refY1,refX2,refY2,width,color,painter\0"
    "drawLine(float,float,float,float,float,QColor,QPainter*)\0"
    "refX,refY,radiusX,radiusY,startDeg,endDeg,lineWidth,color,painter\0"
    "drawEllipse(float,float,float,float,float,float,float,QColor,QPainter*"
    ")\0"
    "refX,refY,radius,startDeg,endDeg,lineWidth,color,painter\0"
    "drawCircle(float,float,float,float,float,float,QColor,QPainter*)\0"
    "xRef,yRef,height,minRate,maxRate,value,painter,reverse\0"
    "drawChangeRateStrip(float,float,float,float,float,float,QPainter*,bool"
    ")\0"
    "xRef,yRef,height,minRate,maxRate,value,painter\0"
    "drawChangeRateStrip(float,float,float,float,float,float,QPainter*)\0"
    "xRef,yRef,radius,expectedMaxChange,value,color,painter,solid\0"
    "drawChangeIndicatorGauge(float,float,float,float,float,QColor,QPainter"
    "*,bool)\0"
    "xRef,yRef,radius,expectedMaxChange,value,color,painter\0"
    "drawChangeIndicatorGauge(float,float,float,float,float,QColor,QPainter"
    "*)\0"
    "refPolygon,painter\0drawPolygon(QPolygonF,QPainter*)\0"
};

void HUD::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        HUD *_t = static_cast<HUD *>(_o);
        switch (_id) {
        case 0: _t->visibilityChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->styleChanged((*reinterpret_cast< MainWindow::QGC_MAINWINDOW_STYLE(*)>(_a[1]))); break;
        case 2: _t->setActiveUAS((*reinterpret_cast< UASInterface*(*)>(_a[1]))); break;
        case 3: _t->updateAttitude((*reinterpret_cast< UASInterface*(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4])),(*reinterpret_cast< quint64(*)>(_a[5]))); break;
        case 4: _t->updateAttitude((*reinterpret_cast< UASInterface*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4])),(*reinterpret_cast< double(*)>(_a[5])),(*reinterpret_cast< quint64(*)>(_a[6]))); break;
        case 5: _t->updateBattery((*reinterpret_cast< UASInterface*(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5]))); break;
        case 6: _t->receiveHeartbeat((*reinterpret_cast< UASInterface*(*)>(_a[1]))); break;
        case 7: _t->updateThrust((*reinterpret_cast< UASInterface*(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 8: _t->updateLocalPosition((*reinterpret_cast< UASInterface*(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4])),(*reinterpret_cast< quint64(*)>(_a[5]))); break;
        case 9: _t->updateGlobalPosition((*reinterpret_cast< UASInterface*(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4])),(*reinterpret_cast< quint64(*)>(_a[5]))); break;
        case 10: _t->updateSpeed((*reinterpret_cast< UASInterface*(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4])),(*reinterpret_cast< quint64(*)>(_a[5]))); break;
        case 11: _t->updateState((*reinterpret_cast< UASInterface*(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 12: _t->updateMode((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3]))); break;
        case 13: _t->updateLoad((*reinterpret_cast< UASInterface*(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 14: _t->selectWaypoint((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 15: _t->startImage((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5]))); break;
        case 16: _t->setPixels((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const unsigned char*(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        case 17: _t->finishImage(); break;
        case 18: _t->saveImage(); break;
        case 19: _t->saveImage((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 20: _t->saveImages((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 21: _t->selectOfflineDirectory(); break;
        case 22: _t->enableHUDInstruments((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 23: _t->enableVideo((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 24: _t->copyImage((*reinterpret_cast< UASInterface*(*)>(_a[1]))); break;
        case 25: _t->paintRollPitchStrips(); break;
        case 26: _t->paintPitchLines((*reinterpret_cast< float(*)>(_a[1])),(*reinterpret_cast< QPainter*(*)>(_a[2]))); break;
        case 27: _t->paintText((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QColor(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3])),(*reinterpret_cast< float(*)>(_a[4])),(*reinterpret_cast< float(*)>(_a[5])),(*reinterpret_cast< QPainter*(*)>(_a[6]))); break;
        case 28: _t->setupGLView((*reinterpret_cast< float(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3])),(*reinterpret_cast< float(*)>(_a[4]))); break;
        case 29: _t->paintHUD(); break;
        case 30: _t->paintPitchLinePos((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3])),(*reinterpret_cast< QPainter*(*)>(_a[4]))); break;
        case 31: _t->paintPitchLineNeg((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3])),(*reinterpret_cast< QPainter*(*)>(_a[4]))); break;
        case 32: _t->drawLine((*reinterpret_cast< float(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3])),(*reinterpret_cast< float(*)>(_a[4])),(*reinterpret_cast< float(*)>(_a[5])),(*reinterpret_cast< const QColor(*)>(_a[6])),(*reinterpret_cast< QPainter*(*)>(_a[7]))); break;
        case 33: _t->drawEllipse((*reinterpret_cast< float(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3])),(*reinterpret_cast< float(*)>(_a[4])),(*reinterpret_cast< float(*)>(_a[5])),(*reinterpret_cast< float(*)>(_a[6])),(*reinterpret_cast< float(*)>(_a[7])),(*reinterpret_cast< const QColor(*)>(_a[8])),(*reinterpret_cast< QPainter*(*)>(_a[9]))); break;
        case 34: _t->drawCircle((*reinterpret_cast< float(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3])),(*reinterpret_cast< float(*)>(_a[4])),(*reinterpret_cast< float(*)>(_a[5])),(*reinterpret_cast< float(*)>(_a[6])),(*reinterpret_cast< const QColor(*)>(_a[7])),(*reinterpret_cast< QPainter*(*)>(_a[8]))); break;
        case 35: _t->drawChangeRateStrip((*reinterpret_cast< float(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3])),(*reinterpret_cast< float(*)>(_a[4])),(*reinterpret_cast< float(*)>(_a[5])),(*reinterpret_cast< float(*)>(_a[6])),(*reinterpret_cast< QPainter*(*)>(_a[7])),(*reinterpret_cast< bool(*)>(_a[8]))); break;
        case 36: _t->drawChangeRateStrip((*reinterpret_cast< float(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3])),(*reinterpret_cast< float(*)>(_a[4])),(*reinterpret_cast< float(*)>(_a[5])),(*reinterpret_cast< float(*)>(_a[6])),(*reinterpret_cast< QPainter*(*)>(_a[7]))); break;
        case 37: _t->drawChangeIndicatorGauge((*reinterpret_cast< float(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3])),(*reinterpret_cast< float(*)>(_a[4])),(*reinterpret_cast< float(*)>(_a[5])),(*reinterpret_cast< const QColor(*)>(_a[6])),(*reinterpret_cast< QPainter*(*)>(_a[7])),(*reinterpret_cast< bool(*)>(_a[8]))); break;
        case 38: _t->drawChangeIndicatorGauge((*reinterpret_cast< float(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3])),(*reinterpret_cast< float(*)>(_a[4])),(*reinterpret_cast< float(*)>(_a[5])),(*reinterpret_cast< const QColor(*)>(_a[6])),(*reinterpret_cast< QPainter*(*)>(_a[7]))); break;
        case 39: _t->drawPolygon((*reinterpret_cast< QPolygonF(*)>(_a[1])),(*reinterpret_cast< QPainter*(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData HUD::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject HUD::staticMetaObject = {
    { &QLabel::staticMetaObject, qt_meta_stringdata_HUD,
      qt_meta_data_HUD, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &HUD::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *HUD::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *HUD::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_HUD))
        return static_cast<void*>(const_cast< HUD*>(this));
    return QLabel::qt_metacast(_clname);
}

int HUD::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QLabel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 40)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 40;
    }
    return _id;
}

// SIGNAL 0
void HUD::visibilityChanged(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
