/****************************************************************************
** Meta object code from reading C++ file 'welcomemodetreewidget.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../libs/utils/welcomemodetreewidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'welcomemodetreewidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Utils__WelcomeModeLabel[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

static const char qt_meta_stringdata_Utils__WelcomeModeLabel[] = {
    "Utils::WelcomeModeLabel\0"
};

void Utils::WelcomeModeLabel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData Utils::WelcomeModeLabel::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Utils::WelcomeModeLabel::staticMetaObject = {
    { &QLabel::staticMetaObject, qt_meta_stringdata_Utils__WelcomeModeLabel,
      qt_meta_data_Utils__WelcomeModeLabel, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Utils::WelcomeModeLabel::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Utils::WelcomeModeLabel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Utils::WelcomeModeLabel::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Utils__WelcomeModeLabel))
        return static_cast<void*>(const_cast< WelcomeModeLabel*>(this));
    return QLabel::qt_metacast(_clname);
}

int Utils::WelcomeModeLabel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QLabel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_Utils__WelcomeModeTreeWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      35,   30,   29,   29, 0x05,

 // slots: signature, parameters, type, tag, flags
      77,   54,   29,   29, 0x0a,
     123,  118,   29,   29, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_Utils__WelcomeModeTreeWidget[] = {
    "Utils::WelcomeModeTreeWidget\0\0data\0"
    "activated(QString)\0title,description,link\0"
    "slotAddNewsItem(QString,QString,QString)\0"
    "item\0slotItemClicked(QTreeWidgetItem*)\0"
};

void Utils::WelcomeModeTreeWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        WelcomeModeTreeWidget *_t = static_cast<WelcomeModeTreeWidget *>(_o);
        switch (_id) {
        case 0: _t->activated((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->slotAddNewsItem((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 2: _t->slotItemClicked((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Utils::WelcomeModeTreeWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Utils::WelcomeModeTreeWidget::staticMetaObject = {
    { &QTreeWidget::staticMetaObject, qt_meta_stringdata_Utils__WelcomeModeTreeWidget,
      qt_meta_data_Utils__WelcomeModeTreeWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Utils::WelcomeModeTreeWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Utils::WelcomeModeTreeWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Utils::WelcomeModeTreeWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Utils__WelcomeModeTreeWidget))
        return static_cast<void*>(const_cast< WelcomeModeTreeWidget*>(this));
    return QTreeWidget::qt_metacast(_clname);
}

int Utils::WelcomeModeTreeWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTreeWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void Utils::WelcomeModeTreeWidget::activated(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
