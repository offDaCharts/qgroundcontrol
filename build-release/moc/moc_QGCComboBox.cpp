/****************************************************************************
** Meta object code from reading C++ file 'QGCComboBox.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/ui/designer/QGCComboBox.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QGCComboBox.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QGCComboBox[] = {

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
      13,   12,   12,   12, 0x0a,
      89,   31,   12,   12, 0x0a,
     150,  141,   12,   12, 0x0a,
     189,  176,   12,   12, 0x0a,
     223,  141,   12,   12, 0x0a,
     247,   12,   12,   12, 0x0a,
     270,  266,   12,   12, 0x0a,
     313,  298,   12,   12, 0x0a,
     345,  334,   12,   12, 0x0a,
     373,  366,   12,   12, 0x0a,
     388,   12,   12,   12, 0x0a,
     402,   12,   12,   12, 0x09,
     421,   12,   12,   12, 0x09,
     440,   12,   12,   12, 0x09,
     463,  459,   12,   12, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_QGCComboBox[] = {
    "QGCComboBox\0\0setParamPending()\0"
    "uas,componentId,paramCount,paramIndex,parameterName,value\0"
    "setParameterValue(int,int,int,int,QString,QVariant)\0"
    "settings\0writeSettings(QSettings&)\0"
    "pre,settings\0readSettings(QString,QVariantMap)\0"
    "readSettings(QSettings)\0refreshParameter()\0"
    "uas\0setActiveUAS(UASInterface*)\0"
    "componentIndex\0selectComponent(int)\0"
    "paramIndex\0selectParameter(int)\0enable\0"
    "showInfo(bool)\0showTooltip()\0"
    "requestParameter()\0addButtonClicked()\0"
    "delButtonClicked()\0val\0"
    "comboBoxIndexChanged(QString)\0"
};

void QGCComboBox::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QGCComboBox *_t = static_cast<QGCComboBox *>(_o);
        switch (_id) {
        case 0: _t->setParamPending(); break;
        case 1: _t->setParameterValue((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])),(*reinterpret_cast< QString(*)>(_a[5])),(*reinterpret_cast< const QVariant(*)>(_a[6]))); break;
        case 2: _t->writeSettings((*reinterpret_cast< QSettings(*)>(_a[1]))); break;
        case 3: _t->readSettings((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QVariantMap(*)>(_a[2]))); break;
        case 4: _t->readSettings((*reinterpret_cast< const QSettings(*)>(_a[1]))); break;
        case 5: _t->refreshParameter(); break;
        case 6: _t->setActiveUAS((*reinterpret_cast< UASInterface*(*)>(_a[1]))); break;
        case 7: _t->selectComponent((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->selectParameter((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->showInfo((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 10: _t->showTooltip(); break;
        case 11: _t->requestParameter(); break;
        case 12: _t->addButtonClicked(); break;
        case 13: _t->delButtonClicked(); break;
        case 14: _t->comboBoxIndexChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QGCComboBox::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QGCComboBox::staticMetaObject = {
    { &QGCToolWidgetItem::staticMetaObject, qt_meta_stringdata_QGCComboBox,
      qt_meta_data_QGCComboBox, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QGCComboBox::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QGCComboBox::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QGCComboBox::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QGCComboBox))
        return static_cast<void*>(const_cast< QGCComboBox*>(this));
    return QGCToolWidgetItem::qt_metacast(_clname);
}

int QGCComboBox::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGCToolWidgetItem::qt_metacall(_c, _id, _a);
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
