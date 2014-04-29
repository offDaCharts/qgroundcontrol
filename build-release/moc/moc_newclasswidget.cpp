/****************************************************************************
** Meta object code from reading C++ file 'newclasswidget.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../libs/utils/newclasswidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'newclasswidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Utils__NewClassWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      27,   14, // methods
      22,  149, // properties
       1,  215, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      23,   22,   22,   22, 0x05,
      38,   22,   22,   22, 0x05,

 // slots: signature, parameters, type, tag, flags
      52,   50,   22,   22, 0x0a,
      87,   79,   22,   22, 0x0a,
     127,  118,   22,   22, 0x0a,
     154,   79,   22,   22, 0x0a,
     180,   79,   22,   22, 0x0a,
     208,  206,   22,   22, 0x0a,
     236,  206,   22,   22, 0x0a,
     276,  262,   22,   22, 0x0a,
     298,   22,   22,   22, 0x0a,
     329,  324,   22,   22, 0x0a,
     354,  346,   22,   22, 0x0a,
     389,  387,   22,   22, 0x0a,
     417,  387,   22,   22, 0x0a,
     445,  387,   22,   22, 0x0a,
     471,  206,   22,   22, 0x0a,
     497,  206,   22,   22, 0x0a,
     524,  521,   22,   22, 0x0a,
     548,  206,   22,   22, 0x0a,
     579,   22,   22,   22, 0x0a,
     606,   22,   22,   22, 0x0a,
     633,  631,   22,   22, 0x08,
     662,   22,   22,   22, 0x08,
     681,   22,   22,   22, 0x08,
     697,   22,   22,   22, 0x08,
     715,   22,   22,   22, 0x08,

 // properties: name, type, flags
     743,  738, 0x01095103,
     761,  738, 0x01095103,
     783,  738, 0x01094103,
     801,  738, 0x01095103,
     818,  738, 0x01095103,
     835,  738, 0x01095103,
     865,  857, 0x0a095103,
     875,  857, 0x0a095103,
     889,  857, 0x0a094001,
     904,  857, 0x0a094001,
     919,  857, 0x0a094001,
     324,  857, 0x0a095103,
     944,  932, 0x0b095103,
     961,  857, 0x0a095103,
     977,  857, 0x0a095103,
     993,  857, 0x0a095103,
    1007,  738, 0x01095103,
    1026,  738, 0x01095103,
    1043,  738, 0x01095103,
    1060,  738, 0x01095103,
    1085, 1075, 0x0009510b,
    1095,  932, 0x0b194001,

 // enums: name, flags, count, data
    1075, 0x0,    3,  219,

 // enum data: key, value
    1101, uint(Utils::NewClassWidget::NoClassType),
    1113, uint(Utils::NewClassWidget::ClassInheritsQObject),
    1134, uint(Utils::NewClassWidget::ClassInheritsQWidget),

       0        // eod
};

static const char qt_meta_stringdata_Utils__NewClassWidget[] = {
    "Utils::NewClassWidget\0\0validChanged()\0"
    "activated()\0b\0setNamespacesEnabled(bool)\0"
    "visible\0setBaseClassInputVisible(bool)\0"
    "editable\0setBaseClassEditable(bool)\0"
    "setFormInputVisible(bool)\0"
    "setPathInputVisible(bool)\0v\0"
    "setFormInputCheckable(bool)\0"
    "setFormInputChecked(bool)\0suggestedName\0"
    "setClassName(QString)\0setBaseClassName(QString)\0"
    "path\0setPath(QString)\0choices\0"
    "setBaseClassChoices(QStringList)\0e\0"
    "setSourceExtension(QString)\0"
    "setHeaderExtension(QString)\0"
    "setFormExtension(QString)\0"
    "setAllowDirectories(bool)\0"
    "setLowerCaseFiles(bool)\0ct\0"
    "setClassType(ClassType)\0"
    "setClassTypeComboVisible(bool)\0"
    "suggestClassNameFromBase()\0"
    "triggerUpdateFileNames()\0t\0"
    "slotUpdateFileNames(QString)\0"
    "slotValidChanged()\0slotActivated()\0"
    "classNameEdited()\0slotFormInputChecked()\0"
    "bool\0namespacesEnabled\0baseClassInputVisible\0"
    "baseClassEditable\0formInputVisible\0"
    "pathInputVisible\0classTypeComboVisible\0"
    "QString\0className\0baseClassName\0"
    "sourceFileName\0headerFileName\0"
    "formFileName\0QStringList\0baseClassChoices\0"
    "sourceExtension\0headerExtension\0"
    "formExtension\0formInputCheckable\0"
    "formInputChecked\0allowDirectories\0"
    "lowerCaseFiles\0ClassType\0classType\0"
    "files\0NoClassType\0ClassInheritsQObject\0"
    "ClassInheritsQWidget\0"
};

void Utils::NewClassWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        NewClassWidget *_t = static_cast<NewClassWidget *>(_o);
        switch (_id) {
        case 0: _t->validChanged(); break;
        case 1: _t->activated(); break;
        case 2: _t->setNamespacesEnabled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->setBaseClassInputVisible((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->setBaseClassEditable((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->setFormInputVisible((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->setPathInputVisible((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->setFormInputCheckable((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->setFormInputChecked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: _t->setClassName((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 10: _t->setBaseClassName((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 11: _t->setPath((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 12: _t->setBaseClassChoices((*reinterpret_cast< const QStringList(*)>(_a[1]))); break;
        case 13: _t->setSourceExtension((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 14: _t->setHeaderExtension((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 15: _t->setFormExtension((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 16: _t->setAllowDirectories((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 17: _t->setLowerCaseFiles((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 18: _t->setClassType((*reinterpret_cast< ClassType(*)>(_a[1]))); break;
        case 19: _t->setClassTypeComboVisible((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 20: _t->suggestClassNameFromBase(); break;
        case 21: _t->triggerUpdateFileNames(); break;
        case 22: _t->slotUpdateFileNames((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 23: _t->slotValidChanged(); break;
        case 24: _t->slotActivated(); break;
        case 25: _t->classNameEdited(); break;
        case 26: _t->slotFormInputChecked(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Utils::NewClassWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Utils::NewClassWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Utils__NewClassWidget,
      qt_meta_data_Utils__NewClassWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Utils::NewClassWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Utils::NewClassWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Utils::NewClassWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Utils__NewClassWidget))
        return static_cast<void*>(const_cast< NewClassWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int Utils::NewClassWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 27)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 27;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = namespacesEnabled(); break;
        case 1: *reinterpret_cast< bool*>(_v) = isBaseClassInputVisible(); break;
        case 2: *reinterpret_cast< bool*>(_v) = isBaseClassEditable(); break;
        case 3: *reinterpret_cast< bool*>(_v) = isFormInputVisible(); break;
        case 4: *reinterpret_cast< bool*>(_v) = isPathInputVisible(); break;
        case 5: *reinterpret_cast< bool*>(_v) = isClassTypeComboVisible(); break;
        case 6: *reinterpret_cast< QString*>(_v) = className(); break;
        case 7: *reinterpret_cast< QString*>(_v) = baseClassName(); break;
        case 8: *reinterpret_cast< QString*>(_v) = sourceFileName(); break;
        case 9: *reinterpret_cast< QString*>(_v) = headerFileName(); break;
        case 10: *reinterpret_cast< QString*>(_v) = formFileName(); break;
        case 11: *reinterpret_cast< QString*>(_v) = path(); break;
        case 12: *reinterpret_cast< QStringList*>(_v) = baseClassChoices(); break;
        case 13: *reinterpret_cast< QString*>(_v) = sourceExtension(); break;
        case 14: *reinterpret_cast< QString*>(_v) = headerExtension(); break;
        case 15: *reinterpret_cast< QString*>(_v) = formExtension(); break;
        case 16: *reinterpret_cast< bool*>(_v) = formInputCheckable(); break;
        case 17: *reinterpret_cast< bool*>(_v) = formInputChecked(); break;
        case 18: *reinterpret_cast< bool*>(_v) = allowDirectories(); break;
        case 19: *reinterpret_cast< bool*>(_v) = lowerCaseFiles(); break;
        case 20: *reinterpret_cast< ClassType*>(_v) = classType(); break;
        case 21: *reinterpret_cast< QStringList*>(_v) = files(); break;
        }
        _id -= 22;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setNamespacesEnabled(*reinterpret_cast< bool*>(_v)); break;
        case 1: setBaseClassInputVisible(*reinterpret_cast< bool*>(_v)); break;
        case 2: setBaseClassEditable(*reinterpret_cast< bool*>(_v)); break;
        case 3: setFormInputVisible(*reinterpret_cast< bool*>(_v)); break;
        case 4: setPathInputVisible(*reinterpret_cast< bool*>(_v)); break;
        case 5: setClassTypeComboVisible(*reinterpret_cast< bool*>(_v)); break;
        case 6: setClassName(*reinterpret_cast< QString*>(_v)); break;
        case 7: setBaseClassName(*reinterpret_cast< QString*>(_v)); break;
        case 11: setPath(*reinterpret_cast< QString*>(_v)); break;
        case 12: setBaseClassChoices(*reinterpret_cast< QStringList*>(_v)); break;
        case 13: setSourceExtension(*reinterpret_cast< QString*>(_v)); break;
        case 14: setHeaderExtension(*reinterpret_cast< QString*>(_v)); break;
        case 15: setFormExtension(*reinterpret_cast< QString*>(_v)); break;
        case 16: setFormInputCheckable(*reinterpret_cast< bool*>(_v)); break;
        case 17: setFormInputChecked(*reinterpret_cast< bool*>(_v)); break;
        case 18: setAllowDirectories(*reinterpret_cast< bool*>(_v)); break;
        case 19: setLowerCaseFiles(*reinterpret_cast< bool*>(_v)); break;
        case 20: setClassType(*reinterpret_cast< ClassType*>(_v)); break;
        }
        _id -= 22;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 22;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 22;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 22;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 22;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 22;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 22;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void Utils::NewClassWidget::validChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void Utils::NewClassWidget::activated()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}
QT_END_MOC_NAMESPACE
