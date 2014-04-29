/****************************************************************************
** Meta object code from reading C++ file 'JoystickAxis.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/ui/JoystickAxis.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'JoystickAxis.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_JoystickAxis[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: signature, parameters, type, tag, flags
      28,   14,   13,   13, 0x05,
      99,   86,   13,   13, 0x05,
     137,  126,   13,   13, 0x05,

 // slots: signature, parameters, type, tag, flags
     166,  160,   13,   13, 0x0a,
     186,  182,   13,   13, 0x0a,
     225,  214,   13,   13, 0x08,
     262,  253,   13,   13, 0x08,
     293,  253,   13,   13, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_JoystickAxis[] = {
    "JoystickAxis\0\0id,newMapping\0"
    "mappingChanged(int,JoystickInput::JOYSTICK_INPUT_MAPPING)\0"
    "id,inversion\0inversionChanged(int,bool)\0"
    "id,limited\0rangeChanged(int,bool)\0"
    "value\0setValue(float)\0uas\0"
    "setActiveUAS(UASInterface*)\0newMapping\0"
    "mappingComboBoxChanged(int)\0inverted\0"
    "inversionCheckBoxChanged(bool)\0"
    "rangeCheckBoxChanged(bool)\0"
};

void JoystickAxis::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        JoystickAxis *_t = static_cast<JoystickAxis *>(_o);
        switch (_id) {
        case 0: _t->mappingChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< JoystickInput::JOYSTICK_INPUT_MAPPING(*)>(_a[2]))); break;
        case 1: _t->inversionChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 2: _t->rangeChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 3: _t->setValue((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 4: _t->setActiveUAS((*reinterpret_cast< UASInterface*(*)>(_a[1]))); break;
        case 5: _t->mappingComboBoxChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->inversionCheckBoxChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->rangeCheckBoxChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData JoystickAxis::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject JoystickAxis::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_JoystickAxis,
      qt_meta_data_JoystickAxis, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &JoystickAxis::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *JoystickAxis::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *JoystickAxis::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_JoystickAxis))
        return static_cast<void*>(const_cast< JoystickAxis*>(this));
    return QWidget::qt_metacast(_clname);
}

int JoystickAxis::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void JoystickAxis::mappingChanged(int _t1, JoystickInput::JOYSTICK_INPUT_MAPPING _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void JoystickAxis::inversionChanged(int _t1, bool _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void JoystickAxis::rangeChanged(int _t1, bool _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE
