/****************************************************************************
** Meta object code from reading C++ file 'QGCXYPlot.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/ui/designer/QGCXYPlot.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QGCXYPlot.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QGCXYPlot[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      20,   11,   10,   10, 0x0a,
      46,   11,   10,   10, 0x0a,
      83,   70,   10,   10, 0x0a,
     147,  117,   10,   10, 0x0a,
     196,   10,   10,   10, 0x0a,
     214,  208,   10,   10, 0x0a,
     261,   10,   10,   10, 0x0a,
     290,  284,   10,   10, 0x08,
     338,  330,   10,   10, 0x08,
     371,  284,   10,   10, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_QGCXYPlot[] = {
    "QGCXYPlot\0\0settings\0writeSettings(QSettings&)\0"
    "readSettings(QSettings)\0pre,settings\0"
    "readSettings(QString,QVariantMap)\0"
    "uasId,curve,unit,variant,usec\0"
    "appendData(int,QString,QString,QVariant,quint64)\0"
    "clearPlot()\0style\0"
    "styleChanged(MainWindow::QGC_MAINWINDOW_STYLE)\0"
    "updateMinMaxSettings()\0value\0"
    "on_maxDataShowSpinBox_valueChanged(int)\0"
    "checked\0on_stopStartButton_toggled(bool)\0"
    "on_timeScrollBar_valueChanged(int)\0"
};

void QGCXYPlot::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QGCXYPlot *_t = static_cast<QGCXYPlot *>(_o);
        switch (_id) {
        case 0: _t->writeSettings((*reinterpret_cast< QSettings(*)>(_a[1]))); break;
        case 1: _t->readSettings((*reinterpret_cast< const QSettings(*)>(_a[1]))); break;
        case 2: _t->readSettings((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QVariantMap(*)>(_a[2]))); break;
        case 3: _t->appendData((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4])),(*reinterpret_cast< quint64(*)>(_a[5]))); break;
        case 4: _t->clearPlot(); break;
        case 5: _t->styleChanged((*reinterpret_cast< MainWindow::QGC_MAINWINDOW_STYLE(*)>(_a[1]))); break;
        case 6: _t->updateMinMaxSettings(); break;
        case 7: _t->on_maxDataShowSpinBox_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->on_stopStartButton_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: _t->on_timeScrollBar_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QGCXYPlot::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QGCXYPlot::staticMetaObject = {
    { &QGCToolWidgetItem::staticMetaObject, qt_meta_stringdata_QGCXYPlot,
      qt_meta_data_QGCXYPlot, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QGCXYPlot::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QGCXYPlot::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QGCXYPlot::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QGCXYPlot))
        return static_cast<void*>(const_cast< QGCXYPlot*>(this));
    return QGCToolWidgetItem::qt_metacast(_clname);
}

int QGCXYPlot::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGCToolWidgetItem::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
