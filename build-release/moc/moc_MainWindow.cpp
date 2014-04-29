/****************************************************************************
** Meta object code from reading C++ file 'MainWindow.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/ui/MainWindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'MainWindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MainWindow[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      51,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: signature, parameters, type, tag, flags
      21,   12,   11,   11, 0x05,
      92,   68,   11,   11, 0x05,
     157,  130,   11,   11, 0x05,

 // slots: signature, parameters, type, tag, flags
     223,  208,   11,   11, 0x0a,
     261,  254,   11,   11, 0x0a,
     302,  288,   11,   11, 0x0a,
     339,  288,   11,   11, 0x0a,
     372,   11,   11,   11, 0x0a,
     402,   11,  387,   11, 0x0a,
     417,  412,   11,   11, 0x0a,
     446,  412,  441,   11, 0x0a,
     473,   11,   11,   11, 0x0a,
     494,  485,   11,   11, 0x0a,
     517,  513,   11,   11, 0x0a,
     545,  513,   11,   11, 0x0a,
     571,  513,   11,   11, 0x0a,
     597,  513,   11,   11, 0x0a,
     618,   11,   11,   11, 0x0a,
     638,   11,   11,   11, 0x0a,
     657,   11,   11,   11, 0x0a,
     685,  670,   11,   11, 0x0a,
     707,   11,   11,   11, 0x0a,
     732,   11,   11,   11, 0x0a,
     757,   11,   11,   11, 0x0a,
     779,   11,   11,   11, 0x0a,
     795,   11,   11,   11, 0x0a,
     816,   11,   11,   11, 0x0a,
     835,   11,   11,   11, 0x0a,
     854,   11,   11,   11, 0x0a,
     872,   11,   11,   11, 0x0a,
     891,   11,   11,   11, 0x0a,
     913,   11,   11,   11, 0x0a,
     931,   11,   11,   11, 0x0a,
     942,   11,   11,   11, 0x0a,
     956,   11,   11,   11, 0x0a,
     978,  970,   11,   11, 0x0a,
    1010,  970,   11,   11, 0x0a,
    1036,  970,   11,   11, 0x0a,
    1075, 1061,  441,   11, 0x0a,
    1115,   11,   11,   11, 0x0a,
    1136,   11,   11,   11, 0x0a,
    1179, 1155,   11,   11, 0x0a,
    1219, 1210,   11,   11, 0x2a,
    1259, 1245,   11,   11, 0x0a,
    1314, 1289,   11,   11, 0x0a,
    1361,  513,   11,   11, 0x0a,
    1409, 1403,   11,   11, 0x0a,
    1434,   11,   11,   11, 0x0a,
    1454,   11,   11,   11, 0x0a,
    1480, 1476,   11,   11, 0x0a,
    1521, 1511,   11,   11, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_MainWindow[] = {
    "MainWindow\0\0newTheme\0"
    "styleChanged(MainWindow::QGC_MAINWINDOW_STYLE)\0"
    "message,alignment,color\0"
    "initStatusChanged(QString,int,QColor)\0"
    "uasId,name,unit,value,msec\0"
    "valueChanged(int,QString,QString,QVariant,quint64)\0"
    "status,timeout\0showStatusMessage(QString,int)\0"
    "status\0showStatusMessage(QString)\0"
    "title,message\0showCriticalMessage(QString,QString)\0"
    "showInfoMessage(QString,QString)\0"
    "showSettings()\0LinkInterface*\0addLink()\0"
    "link\0addLink(LinkInterface*)\0bool\0"
    "configLink(LinkInterface*)\0configure()\0"
    "simulate\0simulateLink(bool)\0uas\0"
    "setActiveUAS(UASInterface*)\0"
    "UASCreated(UASInterface*)\0"
    "UASDeleted(UASInterface*)\0"
    "UASSpecsChanged(int)\0startVideoCapture()\0"
    "stopVideoCapture()\0saveScreen()\0"
    "isAdvancedMode\0setAdvancedMode(bool)\0"
    "loadHardwareConfigView()\0"
    "loadSoftwareConfigView()\0loadUnconnectedView()\0"
    "loadPilotView()\0loadSimulationView()\0"
    "loadEngineerView()\0loadOperatorView()\0"
    "loadMAVLinkView()\0loadTerminalView()\0"
    "loadGoogleEarthView()\0loadLocal3DView()\0"
    "showHelp()\0showCredits()\0showRoadMap()\0"
    "enabled\0enableDockWidgetTitleBars(bool)\0"
    "enableAutoReconnect(bool)\0"
    "enableLowPowerMode(bool)\0style,cssFile\0"
    "loadStyle(QGC_MAINWINDOW_STYLE,QString)\0"
    "createCustomWidget()\0loadCustomWidget()\0"
    "fileName,singleinstance\0"
    "loadCustomWidget(QString,bool)\0fileName\0"
    "loadCustomWidget(QString)\0fileName,view\0"
    "loadCustomWidget(QString,int)\0"
    "systemType,autopilotType\0"
    "loadCustomWidgetsFromDefaults(QString,QString)\0"
    "showHILConfigurationWidget(UASInterface*)\0"
    "event\0closeEvent(QCloseEvent*)\0"
    "showCentralWidget()\0configureWindowName()\0"
    "obj\0commsWidgetDestroyed(QObject*)\0"
    "name,show\0showDockWidget(QString,bool)\0"
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        MainWindow *_t = static_cast<MainWindow *>(_o);
        switch (_id) {
        case 0: _t->styleChanged((*reinterpret_cast< MainWindow::QGC_MAINWINDOW_STYLE(*)>(_a[1]))); break;
        case 1: _t->initStatusChanged((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const QColor(*)>(_a[3]))); break;
        case 2: _t->valueChanged((*reinterpret_cast< const int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4])),(*reinterpret_cast< const quint64(*)>(_a[5]))); break;
        case 3: _t->showStatusMessage((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 4: _t->showStatusMessage((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->showCriticalMessage((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 6: _t->showInfoMessage((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 7: _t->showSettings(); break;
        case 8: { LinkInterface* _r = _t->addLink();
            if (_a[0]) *reinterpret_cast< LinkInterface**>(_a[0]) = _r; }  break;
        case 9: _t->addLink((*reinterpret_cast< LinkInterface*(*)>(_a[1]))); break;
        case 10: { bool _r = _t->configLink((*reinterpret_cast< LinkInterface*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 11: _t->configure(); break;
        case 12: _t->simulateLink((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 13: _t->setActiveUAS((*reinterpret_cast< UASInterface*(*)>(_a[1]))); break;
        case 14: _t->UASCreated((*reinterpret_cast< UASInterface*(*)>(_a[1]))); break;
        case 15: _t->UASDeleted((*reinterpret_cast< UASInterface*(*)>(_a[1]))); break;
        case 16: _t->UASSpecsChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 17: _t->startVideoCapture(); break;
        case 18: _t->stopVideoCapture(); break;
        case 19: _t->saveScreen(); break;
        case 20: _t->setAdvancedMode((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 21: _t->loadHardwareConfigView(); break;
        case 22: _t->loadSoftwareConfigView(); break;
        case 23: _t->loadUnconnectedView(); break;
        case 24: _t->loadPilotView(); break;
        case 25: _t->loadSimulationView(); break;
        case 26: _t->loadEngineerView(); break;
        case 27: _t->loadOperatorView(); break;
        case 28: _t->loadMAVLinkView(); break;
        case 29: _t->loadTerminalView(); break;
        case 30: _t->loadGoogleEarthView(); break;
        case 31: _t->loadLocal3DView(); break;
        case 32: _t->showHelp(); break;
        case 33: _t->showCredits(); break;
        case 34: _t->showRoadMap(); break;
        case 35: _t->enableDockWidgetTitleBars((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 36: _t->enableAutoReconnect((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 37: _t->enableLowPowerMode((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 38: { bool _r = _t->loadStyle((*reinterpret_cast< QGC_MAINWINDOW_STYLE(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 39: _t->createCustomWidget(); break;
        case 40: _t->loadCustomWidget(); break;
        case 41: _t->loadCustomWidget((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 42: _t->loadCustomWidget((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 43: _t->loadCustomWidget((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 44: _t->loadCustomWidgetsFromDefaults((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 45: _t->showHILConfigurationWidget((*reinterpret_cast< UASInterface*(*)>(_a[1]))); break;
        case 46: _t->closeEvent((*reinterpret_cast< QCloseEvent*(*)>(_a[1]))); break;
        case 47: _t->showCentralWidget(); break;
        case 48: _t->configureWindowName(); break;
        case 49: _t->commsWidgetDestroyed((*reinterpret_cast< QObject*(*)>(_a[1]))); break;
        case 50: _t->showDockWidget((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData MainWindow::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow,
      qt_meta_data_MainWindow, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MainWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow))
        return static_cast<void*>(const_cast< MainWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 51)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 51;
    }
    return _id;
}

// SIGNAL 0
void MainWindow::styleChanged(MainWindow::QGC_MAINWINDOW_STYLE _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void MainWindow::initStatusChanged(const QString & _t1, int _t2, const QColor & _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void MainWindow::valueChanged(const int _t1, const QString & _t2, const QString & _t3, const QVariant & _t4, const quint64 _t5)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE
