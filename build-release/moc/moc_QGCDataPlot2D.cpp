/****************************************************************************
** Meta object code from reading C++ file 'QGCDataPlot2D.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/ui/QGCDataPlot2D.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QGCDataPlot2D.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QGCDataPlot2D[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      17,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      23,   15,   14,   14, 0x05,

 // slots: signature, parameters, type, tag, flags
      47,   14,   14,   14, 0x0a,
      63,   58,   14,   14, 0x0a,
      81,   14,   14,   14, 0x0a,
      94,   14,   14,   14, 0x0a,
     134,  107,   14,   14, 0x0a,
     185,  170,   14,   14, 0x2a,
     213,   58,   14,   14, 0x2a,
     233,  107,   14,   14, 0x0a,
     269,  170,   14,   14, 0x2a,
     297,   58,   14,   14, 0x2a,
     317,   14,   14,   14, 0x0a,
     330,   14,   14,   14, 0x0a,
     350,  341,   14,   14, 0x0a,
     369,   58,   14,   14, 0x0a,
     388,   14,   14,   14, 0x0a,
     401,   14,  396,   14, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_QGCDataPlot2D[] = {
    "QGCDataPlot2D\0\0visible\0visibilityChanged(bool)\0"
    "loadFile()\0file\0loadFile(QString)\0"
    "reloadFile()\0selectFile()\0"
    "file,xAxisName,yAxisFilter\0"
    "loadCsvLog(QString,QString,QString)\0"
    "file,xAxisName\0loadCsvLog(QString,QString)\0"
    "loadCsvLog(QString)\0"
    "loadRawLog(QString,QString,QString)\0"
    "loadRawLog(QString,QString)\0"
    "loadRawLog(QString)\0saveCsvLog()\0"
    "savePlot()\0fileName\0exportPDF(QString)\0"
    "exportSVG(QString)\0print()\0bool\0"
    "calculateRegression()\0"
};

void QGCDataPlot2D::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QGCDataPlot2D *_t = static_cast<QGCDataPlot2D *>(_o);
        switch (_id) {
        case 0: _t->visibilityChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->loadFile(); break;
        case 2: _t->loadFile((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->reloadFile(); break;
        case 4: _t->selectFile(); break;
        case 5: _t->loadCsvLog((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3]))); break;
        case 6: _t->loadCsvLog((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 7: _t->loadCsvLog((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 8: _t->loadRawLog((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3]))); break;
        case 9: _t->loadRawLog((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 10: _t->loadRawLog((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 11: _t->saveCsvLog(); break;
        case 12: _t->savePlot(); break;
        case 13: _t->exportPDF((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 14: _t->exportSVG((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 15: _t->print(); break;
        case 16: { bool _r = _t->calculateRegression();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QGCDataPlot2D::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QGCDataPlot2D::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_QGCDataPlot2D,
      qt_meta_data_QGCDataPlot2D, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QGCDataPlot2D::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QGCDataPlot2D::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QGCDataPlot2D::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QGCDataPlot2D))
        return static_cast<void*>(const_cast< QGCDataPlot2D*>(this));
    return QWidget::qt_metacast(_clname);
}

int QGCDataPlot2D::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    }
    return _id;
}

// SIGNAL 0
void QGCDataPlot2D::visibilityChanged(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
