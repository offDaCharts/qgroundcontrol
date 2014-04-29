/****************************************************************************
** Meta object code from reading C++ file 'parameteraction.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../libs/utils/parameteraction.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'parameteraction.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Utils__ParameterAction[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       3,   19, // properties
       1,   28, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      24,   23,   23,   23, 0x0a,

 // properties: name, type, flags
      54,   46, 0x0a095103,
      64,   46, 0x0a095103,
      91,   78, 0x0009510b,

 // enums: name, flags, count, data
      78, 0x0,    2,   32,

 // enum data: key, value
     104, uint(Utils::ParameterAction::AlwaysEnabled),
     118, uint(Utils::ParameterAction::EnabledWithParameter),

       0        // eod
};

static const char qt_meta_stringdata_Utils__ParameterAction[] = {
    "Utils::ParameterAction\0\0setParameter(QString)\0"
    "QString\0emptyText\0parameterText\0"
    "EnablingMode\0enablingMode\0AlwaysEnabled\0"
    "EnabledWithParameter\0"
};

void Utils::ParameterAction::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ParameterAction *_t = static_cast<ParameterAction *>(_o);
        switch (_id) {
        case 0: _t->setParameter((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Utils::ParameterAction::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Utils::ParameterAction::staticMetaObject = {
    { &QAction::staticMetaObject, qt_meta_stringdata_Utils__ParameterAction,
      qt_meta_data_Utils__ParameterAction, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Utils::ParameterAction::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Utils::ParameterAction::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Utils::ParameterAction::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Utils__ParameterAction))
        return static_cast<void*>(const_cast< ParameterAction*>(this));
    return QAction::qt_metacast(_clname);
}

int Utils::ParameterAction::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAction::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = emptyText(); break;
        case 1: *reinterpret_cast< QString*>(_v) = parameterText(); break;
        case 2: *reinterpret_cast< EnablingMode*>(_v) = enablingMode(); break;
        }
        _id -= 3;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setEmptyText(*reinterpret_cast< QString*>(_v)); break;
        case 1: setParameterText(*reinterpret_cast< QString*>(_v)); break;
        case 2: setEnablingMode(*reinterpret_cast< EnablingMode*>(_v)); break;
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
QT_END_MOC_NAMESPACE
