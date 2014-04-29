/****************************************************************************
** Meta object code from reading C++ file 'submitfieldwidget.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../libs/utils/submitfieldwidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'submitfieldwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Utils__SubmitFieldWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       3,   34, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      36,   26,   25,   25, 0x05,

 // slots: signature, parameters, type, tag, flags
      69,   25,   25,   25, 0x08,
      82,   25,   25,   25, 0x08,
     109,   25,   25,   25, 0x08,

 // properties: name, type, flags
     147,  135, 0x0b095103,
     159,  154, 0x01095103,
     175,  154, 0x01095103,

       0        // eod
};

static const char qt_meta_stringdata_Utils__SubmitFieldWidget[] = {
    "Utils::SubmitFieldWidget\0\0pos,field\0"
    "browseButtonClicked(int,QString)\0"
    "slotRemove()\0slotComboIndexChanged(int)\0"
    "slotBrowseButtonClicked()\0QStringList\0"
    "fields\0bool\0hasBrowseButton\0"
    "allowDuplicateFields\0"
};

void Utils::SubmitFieldWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        SubmitFieldWidget *_t = static_cast<SubmitFieldWidget *>(_o);
        switch (_id) {
        case 0: _t->browseButtonClicked((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 1: _t->slotRemove(); break;
        case 2: _t->slotComboIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->slotBrowseButtonClicked(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Utils::SubmitFieldWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Utils::SubmitFieldWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Utils__SubmitFieldWidget,
      qt_meta_data_Utils__SubmitFieldWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Utils::SubmitFieldWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Utils::SubmitFieldWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Utils::SubmitFieldWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Utils__SubmitFieldWidget))
        return static_cast<void*>(const_cast< SubmitFieldWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int Utils::SubmitFieldWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
        case 0: *reinterpret_cast< QStringList*>(_v) = fields(); break;
        case 1: *reinterpret_cast< bool*>(_v) = hasBrowseButton(); break;
        case 2: *reinterpret_cast< bool*>(_v) = allowDuplicateFields(); break;
        }
        _id -= 3;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setFields(*reinterpret_cast< QStringList*>(_v)); break;
        case 1: setHasBrowseButton(*reinterpret_cast< bool*>(_v)); break;
        case 2: setAllowDuplicateFields(*reinterpret_cast< bool*>(_v)); break;
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
void Utils::SubmitFieldWidget::browseButtonClicked(int _t1, const QString & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
