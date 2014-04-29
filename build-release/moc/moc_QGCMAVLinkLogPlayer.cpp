/****************************************************************************
** Meta object code from reading C++ file 'QGCMAVLinkLogPlayer.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/ui/QGCMAVLinkLogPlayer.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QGCMAVLinkLogPlayer.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QGCMAVLinkLogPlayer[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      32,   21,   20,   20, 0x05,

 // slots: signature, parameters, type, tag, flags
      70,   20,   20,   20, 0x0a,
      93,   88,   20,   20, 0x0a,
     109,   20,   20,   20, 0x0a,
     116,   20,   20,   20, 0x0a,
     141,  129,  124,   20, 0x0a,
     152,   20,  124,   20, 0x2a,
     175,  160,  124,   20, 0x0a,
     198,   20,  124,   20, 0x0a,
     219,  214,  124,   20, 0x0a,
     252,  240,   20,   20, 0x0a,
     273,   20,   20,   20, 0x0a,
     290,  283,   20,   20, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_QGCMAVLinkLogPlayer[] = {
    "QGCMAVLinkLogPlayer\0\0link,bytes\0"
    "bytesReady(LinkInterface*,QByteArray)\0"
    "playPauseToggle()\0play\0playPause(bool)\0"
    "play()\0pause()\0bool\0packetIndex\0"
    "reset(int)\0reset()\0startDirectory\0"
    "selectLogFile(QString)\0selectLogFile()\0"
    "file\0loadLogFile(QString)\0slidervalue\0"
    "jumpToSliderVal(int)\0logLoop()\0factor\0"
    "setAccelerationFactorInt(int)\0"
};

void QGCMAVLinkLogPlayer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QGCMAVLinkLogPlayer *_t = static_cast<QGCMAVLinkLogPlayer *>(_o);
        switch (_id) {
        case 0: _t->bytesReady((*reinterpret_cast< LinkInterface*(*)>(_a[1])),(*reinterpret_cast< const QByteArray(*)>(_a[2]))); break;
        case 1: _t->playPauseToggle(); break;
        case 2: _t->playPause((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->play(); break;
        case 4: _t->pause(); break;
        case 5: { bool _r = _t->reset((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 6: { bool _r = _t->reset();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 7: { bool _r = _t->selectLogFile((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 8: { bool _r = _t->selectLogFile();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 9: { bool _r = _t->loadLogFile((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 10: _t->jumpToSliderVal((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: _t->logLoop(); break;
        case 12: _t->setAccelerationFactorInt((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QGCMAVLinkLogPlayer::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QGCMAVLinkLogPlayer::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_QGCMAVLinkLogPlayer,
      qt_meta_data_QGCMAVLinkLogPlayer, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QGCMAVLinkLogPlayer::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QGCMAVLinkLogPlayer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QGCMAVLinkLogPlayer::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QGCMAVLinkLogPlayer))
        return static_cast<void*>(const_cast< QGCMAVLinkLogPlayer*>(this));
    return QWidget::qt_metacast(_clname);
}

int QGCMAVLinkLogPlayer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    }
    return _id;
}

// SIGNAL 0
void QGCMAVLinkLogPlayer::bytesReady(LinkInterface * _t1, const QByteArray & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
