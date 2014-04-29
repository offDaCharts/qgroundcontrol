/****************************************************************************
** Meta object code from reading C++ file 'checkablemessagebox.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../libs/utils/checkablemessagebox.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'checkablemessagebox.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Utils__CheckableMessageBox[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       6,   19, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      30,   28,   27,   27, 0x08,

 // properties: name, type, flags
      68,   60, 0x0a095103,
      81,   73, 0x41095103,
      97,   92, 0x01095003,
     107,   60, 0x0a095103,
     154,  120, 0x0009500b,
     195,  162, 0x0009510b,

       0        // eod
};

static const char qt_meta_stringdata_Utils__CheckableMessageBox[] = {
    "Utils::CheckableMessageBox\0\0b\0"
    "slotClicked(QAbstractButton*)\0QString\0"
    "text\0QPixmap\0iconPixmap\0bool\0isChecked\0"
    "checkBoxText\0QDialogButtonBox::StandardButtons\0"
    "buttons\0QDialogButtonBox::StandardButton\0"
    "defaultButton\0"
};

void Utils::CheckableMessageBox::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        CheckableMessageBox *_t = static_cast<CheckableMessageBox *>(_o);
        switch (_id) {
        case 0: _t->slotClicked((*reinterpret_cast< QAbstractButton*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

#ifdef Q_NO_DATA_RELOCATION
static const QMetaObjectAccessor qt_meta_extradata_Utils__CheckableMessageBox[] = {
        QDialogButtonBox::getStaticMetaObject,
#else
static const QMetaObject *qt_meta_extradata_Utils__CheckableMessageBox[] = {
        &QDialogButtonBox::staticMetaObject,
#endif //Q_NO_DATA_RELOCATION
    0
};

const QMetaObjectExtraData Utils::CheckableMessageBox::staticMetaObjectExtraData = {
    qt_meta_extradata_Utils__CheckableMessageBox,  qt_static_metacall 
};

const QMetaObject Utils::CheckableMessageBox::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_Utils__CheckableMessageBox,
      qt_meta_data_Utils__CheckableMessageBox, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Utils::CheckableMessageBox::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Utils::CheckableMessageBox::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Utils::CheckableMessageBox::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Utils__CheckableMessageBox))
        return static_cast<void*>(const_cast< CheckableMessageBox*>(this));
    return QDialog::qt_metacast(_clname);
}

int Utils::CheckableMessageBox::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
        case 0: *reinterpret_cast< QString*>(_v) = text(); break;
        case 1: *reinterpret_cast< QPixmap*>(_v) = iconPixmap(); break;
        case 2: *reinterpret_cast< bool*>(_v) = isChecked(); break;
        case 3: *reinterpret_cast< QString*>(_v) = checkBoxText(); break;
        case 4: *reinterpret_cast< QDialogButtonBox::StandardButtons*>(_v) = standardButtons(); break;
        case 5: *reinterpret_cast< QDialogButtonBox::StandardButton*>(_v) = defaultButton(); break;
        }
        _id -= 6;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setText(*reinterpret_cast< QString*>(_v)); break;
        case 1: setIconPixmap(*reinterpret_cast< QPixmap*>(_v)); break;
        case 2: setChecked(*reinterpret_cast< bool*>(_v)); break;
        case 3: setCheckBoxText(*reinterpret_cast< QString*>(_v)); break;
        case 4: setStandardButtons(*reinterpret_cast< QDialogButtonBox::StandardButtons*>(_v)); break;
        case 5: setDefaultButton(*reinterpret_cast< QDialogButtonBox::StandardButton*>(_v)); break;
        }
        _id -= 6;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 6;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_END_MOC_NAMESPACE
