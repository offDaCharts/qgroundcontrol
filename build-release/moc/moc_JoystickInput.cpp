/****************************************************************************
** Meta object code from reading C++ file 'JoystickInput.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/input/JoystickInput.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'JoystickInput.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_JoystickInput[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       9,       // signalCount

 // signals: signature, parameters, type, tag, flags
      57,   15,   14,   14, 0x05,
     125,  114,   14,   14, 0x05,
     157,  153,   14,   14, 0x05,
     176,  153,   14,   14, 0x05,
     203,  196,   14,   14, 0x05,
     228,  224,   14,   14, 0x05,
     257,   14,   14,   14, 0x05,
     285,   14,   14,   14, 0x05,
     311,   14,   14,   14, 0x05,

 // slots: signature, parameters, type, tag, flags
     340,  333,   14,   14, 0x0a,
     361,  357,   14,   14, 0x0a,
     392,  389,   14,   14, 0x0a,
     431,  415,   14,   14, 0x0a,
     503,  489,   14,   14, 0x0a,
     546,  530,   14,   14, 0x0a,
     588,  574,   14,   14, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_JoystickInput[] = {
    "JoystickInput\0\0roll,pitch,yaw,throttle,xHat,yHat,buttons\0"
    "joystickChanged(double,double,double,double,int,int,int)\0"
    "axis,value\0axisValueChanged(int,float)\0"
    "key\0buttonPressed(int)\0buttonReleased(int)\0"
    "action\0actionTriggered(int)\0x,y\0"
    "hatDirectionChanged(int,int)\0"
    "activeUASSet(UASInterface*)\0"
    "joystickSettingsChanged()\0"
    "newJoystickSelected()\0enable\0"
    "setEnabled(bool)\0uas\0setActiveUAS(UASInterface*)\0"
    "id\0setActiveJoystick(int)\0axis,newMapping\0"
    "setAxisMapping(int,JoystickInput::JOYSTICK_INPUT_MAPPING)\0"
    "axis,inverted\0setAxisInversion(int,bool)\0"
    "axis,limitRange\0setAxisRangeLimit(int,bool)\0"
    "button,action\0setButtonAction(int,int)\0"
};

void JoystickInput::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        JoystickInput *_t = static_cast<JoystickInput *>(_o);
        switch (_id) {
        case 0: _t->joystickChanged((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5])),(*reinterpret_cast< int(*)>(_a[6])),(*reinterpret_cast< int(*)>(_a[7]))); break;
        case 1: _t->axisValueChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2]))); break;
        case 2: _t->buttonPressed((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->buttonReleased((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->actionTriggered((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->hatDirectionChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 6: _t->activeUASSet((*reinterpret_cast< UASInterface*(*)>(_a[1]))); break;
        case 7: _t->joystickSettingsChanged(); break;
        case 8: _t->newJoystickSelected(); break;
        case 9: _t->setEnabled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 10: _t->setActiveUAS((*reinterpret_cast< UASInterface*(*)>(_a[1]))); break;
        case 11: _t->setActiveJoystick((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 12: _t->setAxisMapping((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< JoystickInput::JOYSTICK_INPUT_MAPPING(*)>(_a[2]))); break;
        case 13: _t->setAxisInversion((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 14: _t->setAxisRangeLimit((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 15: _t->setButtonAction((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData JoystickInput::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject JoystickInput::staticMetaObject = {
    { &QThread::staticMetaObject, qt_meta_stringdata_JoystickInput,
      qt_meta_data_JoystickInput, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &JoystickInput::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *JoystickInput::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *JoystickInput::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_JoystickInput))
        return static_cast<void*>(const_cast< JoystickInput*>(this));
    return QThread::qt_metacast(_clname);
}

int JoystickInput::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    }
    return _id;
}

// SIGNAL 0
void JoystickInput::joystickChanged(double _t1, double _t2, double _t3, double _t4, int _t5, int _t6, int _t7)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)), const_cast<void*>(reinterpret_cast<const void*>(&_t6)), const_cast<void*>(reinterpret_cast<const void*>(&_t7)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void JoystickInput::axisValueChanged(int _t1, float _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void JoystickInput::buttonPressed(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void JoystickInput::buttonReleased(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void JoystickInput::actionTriggered(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void JoystickInput::hatDirectionChanged(int _t1, int _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void JoystickInput::activeUASSet(UASInterface * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void JoystickInput::joystickSettingsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 7, 0);
}

// SIGNAL 8
void JoystickInput::newJoystickSelected()
{
    QMetaObject::activate(this, &staticMetaObject, 8, 0);
}
QT_END_MOC_NAMESPACE
