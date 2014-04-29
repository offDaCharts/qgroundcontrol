/****************************************************************************
** Meta object code from reading C++ file 'filewizardpage.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../libs/utils/filewizardpage.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'filewizardpage.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Utils__FileWizardPage[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       2,   44, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      23,   22,   22,   22, 0x05,
      35,   22,   22,   22, 0x05,

 // slots: signature, parameters, type, tag, flags
      54,   49,   22,   22, 0x0a,
      76,   71,   22,   22, 0x0a,
      93,   22,   22,   22, 0x08,
     112,   22,   22,   22, 0x08,

 // properties: name, type, flags
      49,  128, 0x0a095103,
      71,  128, 0x0a095103,

       0        // eod
};

static const char qt_meta_stringdata_Utils__FileWizardPage[] = {
    "Utils::FileWizardPage\0\0activated()\0"
    "pathChanged()\0path\0setPath(QString)\0"
    "name\0setName(QString)\0slotValidChanged()\0"
    "slotActivated()\0QString\0"
};

void Utils::FileWizardPage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        FileWizardPage *_t = static_cast<FileWizardPage *>(_o);
        switch (_id) {
        case 0: _t->activated(); break;
        case 1: _t->pathChanged(); break;
        case 2: _t->setPath((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->setName((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->slotValidChanged(); break;
        case 5: _t->slotActivated(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Utils::FileWizardPage::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Utils::FileWizardPage::staticMetaObject = {
    { &QWizardPage::staticMetaObject, qt_meta_stringdata_Utils__FileWizardPage,
      qt_meta_data_Utils__FileWizardPage, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Utils::FileWizardPage::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Utils::FileWizardPage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Utils::FileWizardPage::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Utils__FileWizardPage))
        return static_cast<void*>(const_cast< FileWizardPage*>(this));
    return QWizardPage::qt_metacast(_clname);
}

int Utils::FileWizardPage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
        case 0: *reinterpret_cast< QString*>(_v) = path(); break;
        case 1: *reinterpret_cast< QString*>(_v) = name(); break;
        }
        _id -= 2;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setPath(*reinterpret_cast< QString*>(_v)); break;
        case 1: setName(*reinterpret_cast< QString*>(_v)); break;
        }
        _id -= 2;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 2;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void Utils::FileWizardPage::activated()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void Utils::FileWizardPage::pathChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}
QT_END_MOC_NAMESPACE
