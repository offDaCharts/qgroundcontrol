/****************************************************************************
** Meta object code from reading C++ file 'fancylineedit.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../libs/utils/fancylineedit.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'fancylineedit.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Utils__FancyLineEdit[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       5,   34, // properties
       1,   49, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      29,   22,   21,   21, 0x0a,
      51,   48,   21,   21, 0x0a,
      72,   21,   21,   21, 0x0a,
      87,   21,   21,   21, 0x0a,

 // properties: name, type, flags
      22,  102, 0x41095103,
     115,  110, 0x0009510b,
     125,  120, 0x01095103,
     144,  120, 0x01095103,
     172,  164, 0x0a095103,

 // enums: name, flags, count, data
     110, 0x0,    2,   53,

 // enum data: key, value
     181, uint(Utils::FancyLineEdit::Left),
     186, uint(Utils::FancyLineEdit::Right),

       0        // eod
};

static const char qt_meta_stringdata_Utils__FancyLineEdit[] = {
    "Utils::FancyLineEdit\0\0pixmap\0"
    "setPixmap(QPixmap)\0ht\0setHintText(QString)\0"
    "showHintText()\0hideHintText()\0QPixmap\0"
    "Side\0side\0bool\0useLayoutDirection\0"
    "menuTabFocusTrigger\0QString\0hintText\0"
    "Left\0Right\0"
};

void Utils::FancyLineEdit::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        FancyLineEdit *_t = static_cast<FancyLineEdit *>(_o);
        switch (_id) {
        case 0: _t->setPixmap((*reinterpret_cast< const QPixmap(*)>(_a[1]))); break;
        case 1: _t->setHintText((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->showHintText(); break;
        case 3: _t->hideHintText(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Utils::FancyLineEdit::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Utils::FancyLineEdit::staticMetaObject = {
    { &QLineEdit::staticMetaObject, qt_meta_stringdata_Utils__FancyLineEdit,
      qt_meta_data_Utils__FancyLineEdit, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Utils::FancyLineEdit::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Utils::FancyLineEdit::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Utils::FancyLineEdit::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Utils__FancyLineEdit))
        return static_cast<void*>(const_cast< FancyLineEdit*>(this));
    return QLineEdit::qt_metacast(_clname);
}

int Utils::FancyLineEdit::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QLineEdit::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QPixmap*>(_v) = pixmap(); break;
        case 1: *reinterpret_cast< Side*>(_v) = side(); break;
        case 2: *reinterpret_cast< bool*>(_v) = useLayoutDirection(); break;
        case 3: *reinterpret_cast< bool*>(_v) = hasMenuTabFocusTrigger(); break;
        case 4: *reinterpret_cast< QString*>(_v) = hintText(); break;
        }
        _id -= 5;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setPixmap(*reinterpret_cast< QPixmap*>(_v)); break;
        case 1: setSide(*reinterpret_cast< Side*>(_v)); break;
        case 2: setUseLayoutDirection(*reinterpret_cast< bool*>(_v)); break;
        case 3: setMenuTabFocusTrigger(*reinterpret_cast< bool*>(_v)); break;
        case 4: setHintText(*reinterpret_cast< QString*>(_v)); break;
        }
        _id -= 5;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        bool *_b = reinterpret_cast<bool*>(_a[0]);
        switch (_id) {
        case 1: *_b = isSideStored(); break;
        }
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        bool *_b = reinterpret_cast<bool*>(_a[0]);
        switch (_id) {
        case 1: *_b = isSideStored(); break;
        }
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 5;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_END_MOC_NAMESPACE
