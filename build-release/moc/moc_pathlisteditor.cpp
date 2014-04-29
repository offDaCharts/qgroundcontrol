/****************************************************************************
** Meta object code from reading C++ file 'pathlisteditor.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../libs/utils/pathlisteditor.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pathlisteditor.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Utils__PathListEditor[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       2,   64, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      23,   22,   22,   22, 0x0a,
      33,   31,   22,   22, 0x0a,
      69,   58,   22,   22, 0x0a,
      94,   90,   22,   22, 0x0a,
     130,   31,   22,   22, 0x0a,
     158,   22,   22,   22, 0x09,
     186,   22,   22,   22, 0x09,
     207,   22,   22,   22, 0x09,
     227,   22,   22,   22, 0x08,
     237,   22,   22,   22, 0x08,

 // properties: name, type, flags
     262,  250, 0x0b095103,
     279,  271, 0x0a095103,

       0        // eod
};

static const char qt_meta_stringdata_Utils__PathListEditor[] = {
    "Utils::PathListEditor\0\0clear()\0l\0"
    "setPathList(QStringList)\0pathString\0"
    "setPathList(QString)\0var\0"
    "setPathListFromEnvVariable(QString)\0"
    "setFileDialogTitle(QString)\0"
    "insertPathAtCursor(QString)\0"
    "deletePathAtCursor()\0appendPath(QString)\0"
    "slotAdd()\0slotInsert()\0QStringList\0"
    "pathList\0QString\0fileDialogTitle\0"
};

void Utils::PathListEditor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PathListEditor *_t = static_cast<PathListEditor *>(_o);
        switch (_id) {
        case 0: _t->clear(); break;
        case 1: _t->setPathList((*reinterpret_cast< const QStringList(*)>(_a[1]))); break;
        case 2: _t->setPathList((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->setPathListFromEnvVariable((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->setFileDialogTitle((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->insertPathAtCursor((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->deletePathAtCursor(); break;
        case 7: _t->appendPath((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 8: _t->slotAdd(); break;
        case 9: _t->slotInsert(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Utils::PathListEditor::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Utils::PathListEditor::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Utils__PathListEditor,
      qt_meta_data_Utils__PathListEditor, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Utils::PathListEditor::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Utils::PathListEditor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Utils::PathListEditor::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Utils__PathListEditor))
        return static_cast<void*>(const_cast< PathListEditor*>(this));
    return QWidget::qt_metacast(_clname);
}

int Utils::PathListEditor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QStringList*>(_v) = pathList(); break;
        case 1: *reinterpret_cast< QString*>(_v) = fileDialogTitle(); break;
        }
        _id -= 2;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setPathList(*reinterpret_cast< QStringList*>(_v)); break;
        case 1: setFileDialogTitle(*reinterpret_cast< QString*>(_v)); break;
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
QT_END_MOC_NAMESPACE
