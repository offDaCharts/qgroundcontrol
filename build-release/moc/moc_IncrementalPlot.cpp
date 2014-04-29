/****************************************************************************
** Meta object code from reading C++ file 'IncrementalPlot.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/ui/linechart/IncrementalPlot.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'IncrementalPlot.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_IncrementalPlot[] = {

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
      25,   17,   16,   16, 0x0a,
      72,   59,   16,   16, 0x0a,
     112,   16,   16,   16, 0x0a,
     127,   16,   16,   16, 0x0a,
     141,   16,   16,   16, 0x0a,
     159,  154,   16,   16, 0x0a,
     176,  154,   16,   16, 0x0a,
     197,  191,   16,   16, 0x0a,
     229,  219,   16,   16, 0x0a,
     256,  248,   16,   16, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_IncrementalPlot[] = {
    "IncrementalPlot\0\0key,x,y\0"
    "appendData(QString,double,double)\0"
    "key,x,y,size\0appendData(QString,double*,double*,int)\0"
    "resetScaling()\0updateScale()\0removeData()\0"
    "show\0showLegend(bool)\0showGrid(bool)\0"
    "style\0setStyleText(QString)\0symmetric\0"
    "setSymmetric(bool)\0item,on\0"
    "handleLegendClick(QwtPlotItem*,bool)\0"
};

void IncrementalPlot::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        IncrementalPlot *_t = static_cast<IncrementalPlot *>(_o);
        switch (_id) {
        case 0: _t->appendData((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3]))); break;
        case 1: _t->appendData((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< double*(*)>(_a[2])),(*reinterpret_cast< double*(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        case 2: _t->resetScaling(); break;
        case 3: _t->updateScale(); break;
        case 4: _t->removeData(); break;
        case 5: _t->showLegend((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->showGrid((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->setStyleText((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 8: _t->setSymmetric((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: _t->handleLegendClick((*reinterpret_cast< QwtPlotItem*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData IncrementalPlot::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject IncrementalPlot::staticMetaObject = {
    { &ChartPlot::staticMetaObject, qt_meta_stringdata_IncrementalPlot,
      qt_meta_data_IncrementalPlot, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &IncrementalPlot::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *IncrementalPlot::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *IncrementalPlot::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_IncrementalPlot))
        return static_cast<void*>(const_cast< IncrementalPlot*>(this));
    return ChartPlot::qt_metacast(_clname);
}

int IncrementalPlot::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ChartPlot::qt_metacall(_c, _id, _a);
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
