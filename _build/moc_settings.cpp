/****************************************************************************
** Meta object code from reading C++ file 'settings.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/settings.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'settings.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Settings[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      24,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: signature, parameters, type, tag, flags
      10,    9,    9,    9, 0x05,
      29,    9,    9,    9, 0x05,
      54,    9,    9,    9, 0x05,

 // slots: signature, parameters, type, tag, flags
      88,   77,    9,    9, 0x0a,
     114,  103,    9,    9, 0x0a,
     144,  129,    9,    9, 0x0a,
     178,  163,    9,    9, 0x0a,
     209,  197,    9,    9, 0x0a,
     238,  227,    9,    9, 0x0a,
     266,  255,    9,    9, 0x0a,
     290,  282,    9,    9, 0x0a,
     320,  304,    9,    9, 0x0a,
     355,  341,    9,    9, 0x0a,
     393,  374,    9,    9, 0x0a,
     438,  417,    9,    9, 0x0a,
     483,  464,    9,    9, 0x0a,
     524,  507,    9,    9, 0x0a,
     556,  507,    9,    9, 0x0a,
     606,  590,    9,    9, 0x0a,
     643,  629,    9,    9, 0x0a,
     682,  664,    9,    9, 0x0a,
     726,  714,    9,    9, 0x0a,
     763,  746,    9,    9, 0x0a,
     805,  788,    9,    9, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_Settings[] = {
    "Settings\0\0imageSizeChanged()\0"
    "processSettingsChanged()\0"
    "vectorSettingChanged()\0deltaXPass\0"
    "setDeltaX(int)\0deltaYPass\0setDeltaY(int)\0"
    "intLengthXPass\0setIntLengthX(int)\0"
    "intLengthYPass\0setIntLengthY(int)\0"
    "processPass\0setProcessor(int)\0detectPass\0"
    "setDetector(int)\0isMaskPass\0setIsMask(bool)\0"
    "roiPass\0setRoi(QRect)\0batchFilterPass\0"
    "setBatchFilter(bool)\0batchMaskPass\0"
    "setBatchMask(bool)\0batchShowImagePass\0"
    "setBatchShowImage(bool)\0batchShowVectorsPass\0"
    "setBatchShowVectors(bool)\0batchThreadingPass\0"
    "setBatchThreading(bool)\0vectorColourPass\0"
    "setVectorColourFiltered(QColor)\0"
    "setVectorColourUnfiltered(QColor)\0"
    "vectorScalePass\0setVectorScale(double)\0"
    "vectorSubPass\0setVectorSub(double)\0"
    "filterOptionsPass\0setFilterOptions(FilterOptions)\0"
    "expNamePass\0setExpName(QString)\0"
    "outputFolderPass\0setOutputFolder(QString)\0"
    "outputFormatPass\0setOutputFormat(int)\0"
};

void Settings::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        Settings *_t = static_cast<Settings *>(_o);
        switch (_id) {
        case 0: _t->imageSizeChanged(); break;
        case 1: _t->processSettingsChanged(); break;
        case 2: _t->vectorSettingChanged(); break;
        case 3: _t->setDeltaX((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->setDeltaY((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->setIntLengthX((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->setIntLengthY((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->setProcessor((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->setDetector((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->setIsMask((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 10: _t->setRoi((*reinterpret_cast< QRect(*)>(_a[1]))); break;
        case 11: _t->setBatchFilter((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 12: _t->setBatchMask((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 13: _t->setBatchShowImage((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 14: _t->setBatchShowVectors((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 15: _t->setBatchThreading((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 16: _t->setVectorColourFiltered((*reinterpret_cast< QColor(*)>(_a[1]))); break;
        case 17: _t->setVectorColourUnfiltered((*reinterpret_cast< QColor(*)>(_a[1]))); break;
        case 18: _t->setVectorScale((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 19: _t->setVectorSub((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 20: _t->setFilterOptions((*reinterpret_cast< FilterOptions(*)>(_a[1]))); break;
        case 21: _t->setExpName((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 22: _t->setOutputFolder((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 23: _t->setOutputFormat((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Settings::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Settings::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Settings,
      qt_meta_data_Settings, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Settings::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Settings::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Settings::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Settings))
        return static_cast<void*>(const_cast< Settings*>(this));
    return QObject::qt_metacast(_clname);
}

int Settings::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 24)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 24;
    }
    return _id;
}

// SIGNAL 0
void Settings::imageSizeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void Settings::processSettingsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void Settings::vectorSettingChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}
QT_END_MOC_NAMESPACE
