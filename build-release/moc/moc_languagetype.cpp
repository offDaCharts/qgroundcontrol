/****************************************************************************
** Meta object code from reading C++ file 'languagetype.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../libs/opmapcontrol/src/core/languagetype.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'languagetype.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_core__LanguageType[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       1,   14, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // enums: name, flags, count, data
      19, 0x0,   54,   18,

 // enum data: key, value
      25, uint(core::LanguageType::Arabic),
      32, uint(core::LanguageType::Bulgarian),
      42, uint(core::LanguageType::Bengali),
      50, uint(core::LanguageType::Catalan),
      58, uint(core::LanguageType::Czech),
      64, uint(core::LanguageType::Danish),
      71, uint(core::LanguageType::German),
      78, uint(core::LanguageType::Greek),
      84, uint(core::LanguageType::English),
      92, uint(core::LanguageType::EnglishAustralian),
     110, uint(core::LanguageType::EnglishGreatBritain),
     130, uint(core::LanguageType::Spanish),
     138, uint(core::LanguageType::Basque),
     145, uint(core::LanguageType::Finnish),
     153, uint(core::LanguageType::Filipino),
     162, uint(core::LanguageType::French),
     169, uint(core::LanguageType::Galician),
     178, uint(core::LanguageType::Gujarati),
     187, uint(core::LanguageType::Hindi),
     193, uint(core::LanguageType::Croatian),
     202, uint(core::LanguageType::Hungarian),
     212, uint(core::LanguageType::Indonesian),
     223, uint(core::LanguageType::Italian),
     231, uint(core::LanguageType::Hebrew),
     238, uint(core::LanguageType::Japanese),
     247, uint(core::LanguageType::Kannada),
     255, uint(core::LanguageType::Korean),
     262, uint(core::LanguageType::Lithuanian),
     273, uint(core::LanguageType::Latvian),
     281, uint(core::LanguageType::Malayalam),
     291, uint(core::LanguageType::Marathi),
     299, uint(core::LanguageType::Dutch),
     305, uint(core::LanguageType::NorwegianNynorsk),
     322, uint(core::LanguageType::Norwegian),
     332, uint(core::LanguageType::Oriya),
     338, uint(core::LanguageType::Polish),
     345, uint(core::LanguageType::Portuguese),
     356, uint(core::LanguageType::PortugueseBrazil),
     373, uint(core::LanguageType::PortuguesePortugal),
     392, uint(core::LanguageType::Romansch),
     401, uint(core::LanguageType::Romanian),
     410, uint(core::LanguageType::Russian),
     418, uint(core::LanguageType::Slovak),
     425, uint(core::LanguageType::Slovenian),
     435, uint(core::LanguageType::Serbian),
     443, uint(core::LanguageType::Swedish),
     451, uint(core::LanguageType::Tamil),
     457, uint(core::LanguageType::Telugu),
     464, uint(core::LanguageType::Thai),
     469, uint(core::LanguageType::Turkish),
     477, uint(core::LanguageType::Ukrainian),
     487, uint(core::LanguageType::Vietnamese),
     498, uint(core::LanguageType::ChineseSimplified),
     516, uint(core::LanguageType::ChineseTraditional),

       0        // eod
};

static const char qt_meta_stringdata_core__LanguageType[] = {
    "core::LanguageType\0Types\0Arabic\0"
    "Bulgarian\0Bengali\0Catalan\0Czech\0Danish\0"
    "German\0Greek\0English\0EnglishAustralian\0"
    "EnglishGreatBritain\0Spanish\0Basque\0"
    "Finnish\0Filipino\0French\0Galician\0"
    "Gujarati\0Hindi\0Croatian\0Hungarian\0"
    "Indonesian\0Italian\0Hebrew\0Japanese\0"
    "Kannada\0Korean\0Lithuanian\0Latvian\0"
    "Malayalam\0Marathi\0Dutch\0NorwegianNynorsk\0"
    "Norwegian\0Oriya\0Polish\0Portuguese\0"
    "PortugueseBrazil\0PortuguesePortugal\0"
    "Romansch\0Romanian\0Russian\0Slovak\0"
    "Slovenian\0Serbian\0Swedish\0Tamil\0Telugu\0"
    "Thai\0Turkish\0Ukrainian\0Vietnamese\0"
    "ChineseSimplified\0ChineseTraditional\0"
};

void core::LanguageType::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData core::LanguageType::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject core::LanguageType::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_core__LanguageType,
      qt_meta_data_core__LanguageType, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &core::LanguageType::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *core::LanguageType::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *core::LanguageType::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_core__LanguageType))
        return static_cast<void*>(const_cast< LanguageType*>(this));
    return QObject::qt_metacast(_clname);
}

int core::LanguageType::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE
