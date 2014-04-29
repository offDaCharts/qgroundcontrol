/****************************************************************************
** Meta object code from reading C++ file 'maptype.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../libs/opmapcontrol/src/core/maptype.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'maptype.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_core__MapType[] = {

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
      14, 0x0,   36,   18,

 // enum data: key, value
      20, uint(core::MapType::GoogleMap),
      30, uint(core::MapType::GoogleSatellite),
      46, uint(core::MapType::GoogleLabels),
      59, uint(core::MapType::GoogleTerrain),
      73, uint(core::MapType::GoogleHybrid),
      86, uint(core::MapType::GoogleMapChina),
     101, uint(core::MapType::GoogleSatelliteChina),
     122, uint(core::MapType::GoogleLabelsChina),
     140, uint(core::MapType::GoogleTerrainChina),
     159, uint(core::MapType::GoogleHybridChina),
     177, uint(core::MapType::OpenStreetMap),
     191, uint(core::MapType::OpenStreetOsm),
     205, uint(core::MapType::OpenStreetMapSurfer),
     225, uint(core::MapType::OpenStreetMapSurferTerrain),
     252, uint(core::MapType::YahooMap),
     261, uint(core::MapType::YahooSatellite),
     276, uint(core::MapType::YahooLabels),
     288, uint(core::MapType::YahooHybrid),
     300, uint(core::MapType::BingMap),
     308, uint(core::MapType::BingSatellite),
     322, uint(core::MapType::BingHybrid),
     333, uint(core::MapType::ArcGIS_Map),
     344, uint(core::MapType::ArcGIS_Satellite),
     361, uint(core::MapType::ArcGIS_ShadedRelief),
     381, uint(core::MapType::ArcGIS_Terrain),
     396, uint(core::MapType::ArcGIS_MapsLT_Map),
     414, uint(core::MapType::ArcGIS_MapsLT_OrtoFoto),
     437, uint(core::MapType::ArcGIS_MapsLT_Map_Labels),
     462, uint(core::MapType::ArcGIS_MapsLT_Map_Hybrid),
     487, uint(core::MapType::PergoTurkeyMap),
     502, uint(core::MapType::SigPacSpainMap),
     517, uint(core::MapType::GoogleMapKorea),
     532, uint(core::MapType::GoogleSatelliteKorea),
     553, uint(core::MapType::GoogleLabelsKorea),
     571, uint(core::MapType::GoogleHybridKorea),
     589, uint(core::MapType::YandexMapRu),

       0        // eod
};

static const char qt_meta_stringdata_core__MapType[] = {
    "core::MapType\0Types\0GoogleMap\0"
    "GoogleSatellite\0GoogleLabels\0GoogleTerrain\0"
    "GoogleHybrid\0GoogleMapChina\0"
    "GoogleSatelliteChina\0GoogleLabelsChina\0"
    "GoogleTerrainChina\0GoogleHybridChina\0"
    "OpenStreetMap\0OpenStreetOsm\0"
    "OpenStreetMapSurfer\0OpenStreetMapSurferTerrain\0"
    "YahooMap\0YahooSatellite\0YahooLabels\0"
    "YahooHybrid\0BingMap\0BingSatellite\0"
    "BingHybrid\0ArcGIS_Map\0ArcGIS_Satellite\0"
    "ArcGIS_ShadedRelief\0ArcGIS_Terrain\0"
    "ArcGIS_MapsLT_Map\0ArcGIS_MapsLT_OrtoFoto\0"
    "ArcGIS_MapsLT_Map_Labels\0"
    "ArcGIS_MapsLT_Map_Hybrid\0PergoTurkeyMap\0"
    "SigPacSpainMap\0GoogleMapKorea\0"
    "GoogleSatelliteKorea\0GoogleLabelsKorea\0"
    "GoogleHybridKorea\0YandexMapRu\0"
};

void core::MapType::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData core::MapType::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject core::MapType::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_core__MapType,
      qt_meta_data_core__MapType, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &core::MapType::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *core::MapType::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *core::MapType::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_core__MapType))
        return static_cast<void*>(const_cast< MapType*>(this));
    return QObject::qt_metacast(_clname);
}

int core::MapType::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE
