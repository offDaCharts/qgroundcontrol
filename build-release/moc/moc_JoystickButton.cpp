/****************************************************************************
** Meta object code from reading C++ file 'JoystickButton.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/ui/JoystickButton.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'JoystickButton.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_JoystickButton[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      25,   16,   15,   15, 0x05,

 // slots: signature, parameters, type, tag, flags
      52,   48,   15,   15, 0x0a,
      86,   80,   15,   15, 0x0a,
     101,   80,   15,   15, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_JoystickButton[] = {
    "JoystickButton\0\0id,index\0"
    "actionChanged(int,int)\0uas\0"
    "setActiveUAS(UASInterface*)\0index\0"
    "setAction(int)\0actionComboBoxChanged(int)\0"
};

void JoystickButton::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        JoystickButton *_t = static_cast<JoystickButton *>(_o);
        switch (_id) {
        case 0: _t->actionChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 1: _t->setActiveUAS((*reinterpret_cast< UASInterface*(*)>(_a[1]))); break;
        case 2: _t->setAction((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->actionComboBoxChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData JoystickButton::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject JoystickButton::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_JoystickButton,
      qt_meta_data_JoystickButton, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &JoystickButton::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *JoystickButton::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *JoystickButton::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_JoystickButton))
        return static_cast<void*>(const_cast< JoystickButton*>(this));
    return QWidget::qt_metacast(_clname);
}

int JoystickButton::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void JoystickButton::actionChanged(int _t1, int _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
