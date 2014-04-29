/****************************************************************************
** Meta object code from reading C++ file 'filewizarddialog.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../libs/utils/filewizarddialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'filewizarddialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Utils__FileWizardDialog[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      30,   25,   24,   24, 0x0a,
      52,   47,   24,   24, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_Utils__FileWizardDialog[] = {
    "Utils::FileWizardDialog\0\0path\0"
    "setPath(QString)\0name\0setName(QString)\0"
};

void Utils::FileWizardDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        FileWizardDialog *_t = static_cast<FileWizardDialog *>(_o);
        switch (_id) {
        case 0: _t->setPath((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->setName((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Utils::FileWizardDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Utils::FileWizardDialog::staticMetaObject = {
    { &QWizard::staticMetaObject, qt_meta_stringdata_Utils__FileWizardDialog,
      qt_meta_data_Utils__FileWizardDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Utils::FileWizardDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Utils::FileWizardDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Utils::FileWizardDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Utils__FileWizardDialog))
        return static_cast<void*>(const_cast< FileWizardDialog*>(this));
    return QWizard::qt_metacast(_clname);
}

int Utils::FileWizardDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWizard::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
