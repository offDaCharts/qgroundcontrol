/****************************************************************************
** Meta object code from reading C++ file 'filenamevalidatinglineedit.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../libs/utils/filenamevalidatinglineedit.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'filenamevalidatinglineedit.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Utils__FileNameValidatingLineEdit[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       1,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
      39,   34, 0x01095103,

       0        // eod
};

static const char qt_meta_stringdata_Utils__FileNameValidatingLineEdit[] = {
    "Utils::FileNameValidatingLineEdit\0"
    "bool\0allowDirectories\0"
};

void Utils::FileNameValidatingLineEdit::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData Utils::FileNameValidatingLineEdit::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Utils::FileNameValidatingLineEdit::staticMetaObject = {
    { &BaseValidatingLineEdit::staticMetaObject, qt_meta_stringdata_Utils__FileNameValidatingLineEdit,
      qt_meta_data_Utils__FileNameValidatingLineEdit, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Utils::FileNameValidatingLineEdit::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Utils::FileNameValidatingLineEdit::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Utils::FileNameValidatingLineEdit::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Utils__FileNameValidatingLineEdit))
        return static_cast<void*>(const_cast< FileNameValidatingLineEdit*>(this));
    return BaseValidatingLineEdit::qt_metacast(_clname);
}

int Utils::FileNameValidatingLineEdit::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = BaseValidatingLineEdit::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
     if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = allowDirectories(); break;
        }
        _id -= 1;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setAllowDirectories(*reinterpret_cast< bool*>(_v)); break;
        }
        _id -= 1;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 1;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_END_MOC_NAMESPACE
