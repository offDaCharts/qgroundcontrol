/****************************************************************************
** Meta object code from reading C++ file 'pathchooser.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../libs/utils/pathchooser.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pathchooser.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Utils__PathChooser[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       3,   59, // properties
       1,   68, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: signature, parameters, type, tag, flags
      20,   19,   19,   19, 0x05,
      46,   35,   19,   19, 0x05,
      70,   65,   19,   19, 0x05,
      87,   19,   19,   19, 0x05,
     105,   19,   19,   19, 0x05,
     122,   19,   19,   19, 0x05,
     141,   19,   19,   19, 0x05,

 // slots: signature, parameters, type, tag, flags
     157,   19,   19,   19, 0x0a,
     174,   19,   19,   19, 0x08,

 // properties: name, type, flags
     195,  187, 0x0a095103,
     200,  187, 0x0a095103,
     223,  218, 0x0009510b,

 // enums: name, flags, count, data
     218, 0x0,    3,   72,

 // enum data: key, value
     236, uint(Utils::PathChooser::Directory),
     246, uint(Utils::PathChooser::File),
     251, uint(Utils::PathChooser::Command),

       0        // eod
};

static const char qt_meta_stringdata_Utils__PathChooser[] = {
    "Utils::PathChooser\0\0validChanged()\0"
    "validState\0validChanged(bool)\0text\0"
    "changed(QString)\0editingFinished()\0"
    "beforeBrowsing()\0browsingFinished()\0"
    "returnPressed()\0setPath(QString)\0"
    "slotBrowse()\0QString\0path\0promptDialogTitle\0"
    "Kind\0expectedKind\0Directory\0File\0"
    "Command\0"
};

void Utils::PathChooser::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PathChooser *_t = static_cast<PathChooser *>(_o);
        switch (_id) {
        case 0: _t->validChanged(); break;
        case 1: _t->validChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->changed((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->editingFinished(); break;
        case 4: _t->beforeBrowsing(); break;
        case 5: _t->browsingFinished(); break;
        case 6: _t->returnPressed(); break;
        case 7: _t->setPath((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 8: _t->slotBrowse(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Utils::PathChooser::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Utils::PathChooser::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Utils__PathChooser,
      qt_meta_data_Utils__PathChooser, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Utils::PathChooser::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Utils::PathChooser::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Utils::PathChooser::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Utils__PathChooser))
        return static_cast<void*>(const_cast< PathChooser*>(this));
    return QWidget::qt_metacast(_clname);
}

int Utils::PathChooser::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = path(); break;
        case 1: *reinterpret_cast< QString*>(_v) = promptDialogTitle(); break;
        case 2: *reinterpret_cast< Kind*>(_v) = expectedKind(); break;
        }
        _id -= 3;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setPath(*reinterpret_cast< QString*>(_v)); break;
        case 1: setPromptDialogTitle(*reinterpret_cast< QString*>(_v)); break;
        case 2: setExpectedKind(*reinterpret_cast< Kind*>(_v)); break;
        }
        _id -= 3;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 3;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void Utils::PathChooser::validChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void Utils::PathChooser::validChanged(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Utils::PathChooser::changed(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void Utils::PathChooser::editingFinished()
{
    QMetaObject::activate(this, &staticMetaObject, 3, 0);
}

// SIGNAL 4
void Utils::PathChooser::beforeBrowsing()
{
    QMetaObject::activate(this, &staticMetaObject, 4, 0);
}

// SIGNAL 5
void Utils::PathChooser::browsingFinished()
{
    QMetaObject::activate(this, &staticMetaObject, 5, 0);
}

// SIGNAL 6
void Utils::PathChooser::returnPressed()
{
    QMetaObject::activate(this, &staticMetaObject, 6, 0);
}
QT_END_MOC_NAMESPACE
