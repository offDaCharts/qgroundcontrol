/****************************************************************************
** Meta object code from reading C++ file 'LinechartWidget.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/ui/linechart/LinechartWidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'LinechartWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_LinechartWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      31,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: signature, parameters, type, tag, flags
      23,   17,   16,   16, 0x05,
      60,   45,   16,   16, 0x05,
      96,   82,   16,   16, 0x05,
     132,  123,   16,   16, 0x05,
     167,  123,   16,   16, 0x05,
     207,  198,   16,   16, 0x05,

 // slots: signature, parameters, type, tag, flags
     242,  231,   16,   16, 0x0a,
     268,   17,   16,   16, 0x0a,
     289,   16,   16,   16, 0x0a,
     306,  299,   16,   16, 0x0a,
     354,  326,   16,   16, 0x0a,
     410,  403,   16,   16, 0x0a,
     440,  432,   16,   16, 0x0a,
     479,  471,   16,   16, 0x0a,
     516,  501,   16,   16, 0x0a,
     543,  123,   16,   16, 0x0a,
     583,  574,   16,   16, 0x0a,
     614,  608,   16,   16, 0x0a,
     637,  608,   16,   16, 0x0a,
     667,  660,   16,   16, 0x0a,
     687,  683,   16,   16, 0x0a,
     722,  711,   16,   16, 0x0a,
     744,   16,   16,   16, 0x0a,
     759,   16,   16,   16, 0x0a,
     773,   16,   16,   16, 0x0a,
     783,   16,   16,   16, 0x0a,
     799,   16,   16,   16, 0x0a,
     818,  814,   16,   16, 0x0a,
     840,   16,   16,   16, 0x0a,
     875,  869,   16,   16, 0x08,
     907,  897,   16,   16, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_LinechartWidget[] = {
    "LinechartWidget\0\0curve\0curveRemoved(QString)\0"
    "curve,position\0curveSet(QString,int)\0"
    "curve,visible\0curveVisible(QString,bool)\0"
    "position\0plotWindowPositionUpdated(quint64)\0"
    "plotWindowPositionUpdated(int)\0fileName\0"
    "logfileWritten(QString)\0curve,unit\0"
    "addCurve(QString,QString)\0"
    "removeCurve(QString)\0recolor()\0enable\0"
    "setShortNames(bool)\0uasId,curve,unit,value,usec\0"
    "appendData(int,QString,QString,QVariant,quint64)\0"
    "filter\0filterCurves(QString)\0toggled\0"
    "toggleLogarithmicScaling(bool)\0checked\0"
    "takeButtonClick(bool)\0scrollBarValue\0"
    "setPlotWindowPosition(int)\0"
    "setPlotWindowPosition(quint64)\0interval\0"
    "setPlotInterval(quint64)\0event\0"
    "showEvent(QShowEvent*)\0hideEvent(QHideEvent*)\0"
    "active\0setActive(bool)\0mav\0"
    "selectActiveSystem(int)\0windowSize\0"
    "setAverageWindow(int)\0startLogging()\0"
    "stopLogging()\0refresh()\0writeSettings()\0"
    "readSettings()\0all\0selectAllCurves(bool)\0"
    "setPlotFilterLineEditFocus()\0index\0"
    "timeScaleChanged(int)\0key,match\0"
    "filterCurve(QString,bool)\0"
};

void LinechartWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        LinechartWidget *_t = static_cast<LinechartWidget *>(_o);
        switch (_id) {
        case 0: _t->curveRemoved((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->curveSet((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 2: _t->curveVisible((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 3: _t->plotWindowPositionUpdated((*reinterpret_cast< quint64(*)>(_a[1]))); break;
        case 4: _t->plotWindowPositionUpdated((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->logfileWritten((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 6: _t->addCurve((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 7: _t->removeCurve((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 8: _t->recolor(); break;
        case 9: _t->setShortNames((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 10: _t->appendData((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4])),(*reinterpret_cast< quint64(*)>(_a[5]))); break;
        case 11: _t->filterCurves((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 12: _t->toggleLogarithmicScaling((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 13: _t->takeButtonClick((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 14: _t->setPlotWindowPosition((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 15: _t->setPlotWindowPosition((*reinterpret_cast< quint64(*)>(_a[1]))); break;
        case 16: _t->setPlotInterval((*reinterpret_cast< quint64(*)>(_a[1]))); break;
        case 17: _t->showEvent((*reinterpret_cast< QShowEvent*(*)>(_a[1]))); break;
        case 18: _t->hideEvent((*reinterpret_cast< QHideEvent*(*)>(_a[1]))); break;
        case 19: _t->setActive((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 20: _t->selectActiveSystem((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 21: _t->setAverageWindow((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 22: _t->startLogging(); break;
        case 23: _t->stopLogging(); break;
        case 24: _t->refresh(); break;
        case 25: _t->writeSettings(); break;
        case 26: _t->readSettings(); break;
        case 27: _t->selectAllCurves((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 28: _t->setPlotFilterLineEditFocus(); break;
        case 29: _t->timeScaleChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 30: _t->filterCurve((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData LinechartWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject LinechartWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_LinechartWidget,
      qt_meta_data_LinechartWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &LinechartWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *LinechartWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *LinechartWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_LinechartWidget))
        return static_cast<void*>(const_cast< LinechartWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int LinechartWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 31)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 31;
    }
    return _id;
}

// SIGNAL 0
void LinechartWidget::curveRemoved(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void LinechartWidget::curveSet(QString _t1, int _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void LinechartWidget::curveVisible(QString _t1, bool _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void LinechartWidget::plotWindowPositionUpdated(quint64 _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void LinechartWidget::plotWindowPositionUpdated(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void LinechartWidget::logfileWritten(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
QT_END_MOC_NAMESPACE
