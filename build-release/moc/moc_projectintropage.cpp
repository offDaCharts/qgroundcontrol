/****************************************************************************
** Meta object code from reading C++ file 'projectintropage.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../libs/utils/projectintropage.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'projectintropage.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Utils__ProjectIntroPage[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       3,   44, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      25,   24,   24,   24, 0x05,

 // slots: signature, parameters, type, tag, flags
      42,   37,   24,   24, 0x0a,
      64,   59,   24,   24, 0x0a,
      93,   81,   24,   24, 0x0a,
     117,   24,   24,   24, 0x08,
     131,   24,   24,   24, 0x08,

 // properties: name, type, flags
      81,  147, 0x0a095003,
      37,  147, 0x0a095103,
      59,  147, 0x0a095103,

       0        // eod
};

static const char qt_meta_stringdata_Utils__ProjectIntroPage[] = {
    "Utils::ProjectIntroPage\0\0activated()\0"
    "path\0setPath(QString)\0name\0setName(QString)\0"
    "description\0setDescription(QString)\0"
    "slotChanged()\0slotActivated()\0QString\0"
};

void Utils::ProjectIntroPage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ProjectIntroPage *_t = static_cast<ProjectIntroPage *>(_o);
        switch (_id) {
        case 0: _t->activated(); break;
        case 1: _t->setPath((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->setName((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->setDescription((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->slotChanged(); break;
        case 5: _t->slotActivated(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Utils::ProjectIntroPage::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Utils::ProjectIntroPage::staticMetaObject = {
    { &QWizardPage::staticMetaObject, qt_meta_stringdata_Utils__ProjectIntroPage,
      qt_meta_data_Utils__ProjectIntroPage, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Utils::ProjectIntroPage::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Utils::ProjectIntroPage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Utils::ProjectIntroPage::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Utils__ProjectIntroPage))
        return static_cast<void*>(const_cast< ProjectIntroPage*>(this));
    return QWizardPage::qt_metacast(_clname);
}

int Utils::ProjectIntroPage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWizardPage::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = description(); break;
        case 1: *reinterpret_cast< QString*>(_v) = path(); break;
        case 2: *reinterpret_cast< QString*>(_v) = name(); break;
        }
        _id -= 3;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setPath(*reinterpret_cast< QString*>(_v)); break;
        case 1: setPath(*reinterpret_cast< QString*>(_v)); break;
        case 2: setName(*reinterpret_cast< QString*>(_v)); break;
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
void Utils::ProjectIntroPage::activated()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
