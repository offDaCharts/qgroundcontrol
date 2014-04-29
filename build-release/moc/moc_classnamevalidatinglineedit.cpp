/****************************************************************************
** Meta object code from reading C++ file 'classnamevalidatinglineedit.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../libs/utils/classnamevalidatinglineedit.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'classnamevalidatinglineedit.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Utils__ClassNameValidatingLineEdit[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       2,   19, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      38,   36,   35,   35, 0x05,

 // properties: name, type, flags
      67,   62, 0x01095103,
      85,   62, 0x01095103,

       0        // eod
};

static const char qt_meta_stringdata_Utils__ClassNameValidatingLineEdit[] = {
    "Utils::ClassNameValidatingLineEdit\0\0"
    "t\0updateFileName(QString)\0bool\0"
    "namespacesEnabled\0lowerCaseFileName\0"
};

void Utils::ClassNameValidatingLineEdit::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ClassNameValidatingLineEdit *_t = static_cast<ClassNameValidatingLineEdit *>(_o);
        switch (_id) {
        case 0: _t->updateFileName((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Utils::ClassNameValidatingLineEdit::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Utils::ClassNameValidatingLineEdit::staticMetaObject = {
    { &Utils::BaseValidatingLineEdit::staticMetaObject, qt_meta_stringdata_Utils__ClassNameValidatingLineEdit,
      qt_meta_data_Utils__ClassNameValidatingLineEdit, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Utils::ClassNameValidatingLineEdit::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Utils::ClassNameValidatingLineEdit::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Utils::ClassNameValidatingLineEdit::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Utils__ClassNameValidatingLineEdit))
        return static_cast<void*>(const_cast< ClassNameValidatingLineEdit*>(this));
    typedef Utils::BaseValidatingLineEdit QMocSuperClass;
    return QMocSuperClass::qt_metacast(_clname);
}

int Utils::ClassNameValidatingLineEdit::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    typedef Utils::BaseValidatingLineEdit QMocSuperClass;
    _id = QMocSuperClass::qt_metacall(_c, _id, _a);
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
        case 0: *reinterpret_cast< bool*>(_v) = namespacesEnabled(); break;
        case 1: *reinterpret_cast< bool*>(_v) = lowerCaseFileName(); break;
        }
        _id -= 2;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setNamespacesEnabled(*reinterpret_cast< bool*>(_v)); break;
        case 1: setLowerCaseFileName(*reinterpret_cast< bool*>(_v)); break;
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
void Utils::ClassNameValidatingLineEdit::updateFileName(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
