/****************************************************************************
** Meta object code from reading C++ file 'ObjectDetectionView.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/ui/ObjectDetectionView.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ObjectDetectionView.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ObjectDetectionView[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      25,   21,   20,   20, 0x0a,
      85,   47,   20,   20, 0x0a,
     153,  120,   20,   20, 0x0a,
     187,   20,   20,   20, 0x0a,
     208,   20,   20,   20, 0x0a,
     227,   20,   20,   20, 0x0a,
     240,   20,   20,   20, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_ObjectDetectionView[] = {
    "ObjectDetectionView\0\0uas\0setUAS(UASInterface*)\0"
    "uasId,patternPath,confidence,detected\0"
    "newPattern(int,QString,float,bool)\0"
    "uasId,letter,confidence,detected\0"
    "newLetter(int,QString,float,bool)\0"
    "decreaseLetterTime()\0updateLetterList()\0"
    "clearLists()\0takeAction()\0"
};

void ObjectDetectionView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ObjectDetectionView *_t = static_cast<ObjectDetectionView *>(_o);
        switch (_id) {
        case 0: _t->setUAS((*reinterpret_cast< UASInterface*(*)>(_a[1]))); break;
        case 1: _t->newPattern((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4]))); break;
        case 2: _t->newLetter((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4]))); break;
        case 3: _t->decreaseLetterTime(); break;
        case 4: _t->updateLetterList(); break;
        case 5: _t->clearLists(); break;
        case 6: _t->takeAction(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData ObjectDetectionView::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ObjectDetectionView::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_ObjectDetectionView,
      qt_meta_data_ObjectDetectionView, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ObjectDetectionView::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ObjectDetectionView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ObjectDetectionView::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ObjectDetectionView))
        return static_cast<void*>(const_cast< ObjectDetectionView*>(this));
    return QWidget::qt_metacast(_clname);
}

int ObjectDetectionView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
