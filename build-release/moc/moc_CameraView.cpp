/****************************************************************************
** Meta object code from reading C++ file 'CameraView.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/ui/CameraView.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'CameraView.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_CameraView[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      16,   12,   11,   11, 0x0a,
      72,   38,   11,   11, 0x0a,
     138,  104,   11,   11, 0x0a,
     183,   11,   11,   11, 0x0a,
     197,   11,   11,   11, 0x0a,
     218,  209,   11,   11, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_CameraView[] = {
    "CameraView\0\0uas\0addUAS(UASInterface*)\0"
    "imgid,width,height,depth,channels\0"
    "startImage(int,int,int,int,int)\0"
    "imgid,imageData,length,startIndex\0"
    "setPixels(int,const unsigned char*,int,uint)\0"
    "finishImage()\0saveImage()\0fileName\0"
    "saveImage(QString)\0"
};

void CameraView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        CameraView *_t = static_cast<CameraView *>(_o);
        switch (_id) {
        case 0: _t->addUAS((*reinterpret_cast< UASInterface*(*)>(_a[1]))); break;
        case 1: _t->startImage((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5]))); break;
        case 2: _t->setPixels((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const unsigned char*(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< uint(*)>(_a[4]))); break;
        case 3: _t->finishImage(); break;
        case 4: _t->saveImage(); break;
        case 5: _t->saveImage((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData CameraView::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject CameraView::staticMetaObject = {
    { &QGLWidget::staticMetaObject, qt_meta_stringdata_CameraView,
      qt_meta_data_CameraView, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &CameraView::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *CameraView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *CameraView::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CameraView))
        return static_cast<void*>(const_cast< CameraView*>(this));
    return QGLWidget::qt_metacast(_clname);
}

int CameraView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGLWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
