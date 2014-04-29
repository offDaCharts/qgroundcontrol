/****************************************************************************
** Meta object code from reading C++ file 'LinechartPlot.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/ui/linechart/LinechartPlot.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'LinechartPlot.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_LinechartPlot[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      21,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: signature, parameters, type, tag, flags
      24,   15,   14,   14, 0x05,
      49,   44,   14,   14, 0x05,
      80,   71,   14,   14, 0x05,

 // slots: signature, parameters, type, tag, flags
     114,  111,   14,   14, 0x0a,
     152,  134,   14,   14, 0x0a,
     190,  187,   14,   14, 0x0a,
     209,  187,   14,   14, 0x0a,
     235,  228,   14,   14, 0x0a,
     262,  251,   14,   14, 0x0a,
     300,  291,   14,   14, 0x0a,
     338,  330,   14,   14, 0x0a,
     367,   14,  362,   14, 0x0a,
     384,  380,   14,   14, 0x0a,
     420,  411,   14,   14, 0x0a,
     449,  441,   14,   14, 0x0a,
     465,  228,   14,   14, 0x0a,
     485,   14,   14,   14, 0x0a,
     501,   14,   14,   14, 0x0a,
     525,   14,   14,   14, 0x0a,
     555,  544,   14,   14, 0x0a,
     577,   14,   14,   14, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_LinechartPlot[] = {
    "LinechartPlot\0\0idstring\0curveAdded(QString)\0"
    "name\0curveRemoved(QString)\0position\0"
    "windowPositionChanged(quint64)\0ms\0"
    "setRefreshRate(int)\0dataname,ms,value\0"
    "appendData(QString,quint64,double)\0"
    "id\0hideCurve(QString)\0showCurve(QString)\0"
    "active\0setActive(bool)\0id,visible\0"
    "setVisibleById(QString,bool)\0id,color\0"
    "setCurveColor(QString,QColor)\0enforce\0"
    "enforceGroundTime(bool)\0bool\0groundTime()\0"
    "end\0setWindowPosition(quint64)\0interval\0"
    "setPlotInterval(int)\0scaling\0"
    "setScaling(int)\0setAutoScroll(bool)\0"
    "paintRealtime()\0setLogarithmicScaling()\0"
    "setLinearScaling()\0windowSize\0"
    "setAverageWindow(int)\0removeTimedOutCurves()\0"
};

void LinechartPlot::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        LinechartPlot *_t = static_cast<LinechartPlot *>(_o);
        switch (_id) {
        case 0: _t->curveAdded((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->curveRemoved((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->windowPositionChanged((*reinterpret_cast< quint64(*)>(_a[1]))); break;
        case 3: _t->setRefreshRate((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->appendData((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< quint64(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3]))); break;
        case 5: _t->hideCurve((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 6: _t->showCurve((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 7: _t->setActive((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->setVisibleById((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 9: _t->setCurveColor((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QColor(*)>(_a[2]))); break;
        case 10: _t->enforceGroundTime((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 11: { bool _r = _t->groundTime();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 12: _t->setWindowPosition((*reinterpret_cast< quint64(*)>(_a[1]))); break;
        case 13: _t->setPlotInterval((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 14: _t->setScaling((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 15: _t->setAutoScroll((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 16: _t->paintRealtime(); break;
        case 17: _t->setLogarithmicScaling(); break;
        case 18: _t->setLinearScaling(); break;
        case 19: _t->setAverageWindow((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 20: _t->removeTimedOutCurves(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData LinechartPlot::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject LinechartPlot::staticMetaObject = {
    { &ChartPlot::staticMetaObject, qt_meta_stringdata_LinechartPlot,
      qt_meta_data_LinechartPlot, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &LinechartPlot::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *LinechartPlot::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *LinechartPlot::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_LinechartPlot))
        return static_cast<void*>(const_cast< LinechartPlot*>(this));
    return ChartPlot::qt_metacast(_clname);
}

int LinechartPlot::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ChartPlot::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 21)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 21;
    }
    return _id;
}

// SIGNAL 0
void LinechartPlot::curveAdded(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void LinechartPlot::curveRemoved(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void LinechartPlot::windowPositionChanged(quint64 _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE
