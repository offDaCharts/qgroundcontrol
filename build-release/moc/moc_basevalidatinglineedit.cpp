/****************************************************************************
** Meta object code from reading C++ file 'basevalidatinglineedit.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../libs/utils/basevalidatinglineedit.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'basevalidatinglineedit.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Utils__BaseValidatingLineEdit[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       2,   39, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: signature, parameters, type, tag, flags
      31,   30,   30,   30, 0x05,
      57,   46,   30,   30, 0x05,
      76,   30,   30,   30, 0x05,

 // slots: signature, parameters, type, tag, flags
      97,   30,   30,   30, 0x09,
     119,  117,   30,   30, 0x09,

 // properties: name, type, flags
     148,  140, 0x0a095103,
     167,  160, 0x43095103,

       0        // eod
};

static const char qt_meta_stringdata_Utils__BaseValidatingLineEdit[] = {
    "Utils::BaseValidatingLineEdit\0\0"
    "validChanged()\0validState\0validChanged(bool)\0"
    "validReturnPressed()\0slotReturnPressed()\0"
    "t\0slotChanged(QString)\0QString\0"
    "initialText\0QColor\0errorColor\0"
};

void Utils::BaseValidatingLineEdit::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        BaseValidatingLineEdit *_t = static_cast<BaseValidatingLineEdit *>(_o);
        switch (_id) {
        case 0: _t->validChanged(); break;
        case 1: _t->validChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->validReturnPressed(); break;
        case 3: _t->slotReturnPressed(); break;
        case 4: _t->slotChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Utils::BaseValidatingLineEdit::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Utils::BaseValidatingLineEdit::staticMetaObject = {
    { &QLineEdit::staticMetaObject, qt_meta_stringdata_Utils__BaseValidatingLineEdit,
      qt_meta_data_Utils__BaseValidatingLineEdit, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Utils::BaseValidatingLineEdit::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Utils::BaseValidatingLineEdit::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Utils::BaseValidatingLineEdit::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Utils__BaseValidatingLineEdit))
        return static_cast<void*>(const_cast< BaseValidatingLineEdit*>(this));
    return QLineEdit::qt_metacast(_clname);
}

int Utils::BaseValidatingLineEdit::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QLineEdit::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = initialText(); break;
        case 1: *reinterpret_cast< QColor*>(_v) = errorColor(); break;
        }
        _id -= 2;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setInitialText(*reinterpret_cast< QString*>(_v)); break;
        case 1: setErrorColor(*reinterpret_cast< QColor*>(_v)); break;
        }
        _id -= 2;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 2;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void Utils::BaseValidatingLineEdit::validChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void Utils::BaseValidatingLineEdit::validChanged(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Utils::BaseValidatingLineEdit::validReturnPressed()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}
QT_END_MOC_NAMESPACE
