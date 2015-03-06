/****************************************************************************
** Meta object code from reading C++ file 'datacontainer.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/datacontainer.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'datacontainer.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_DataContainer[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: signature, parameters, type, tag, flags
      15,   14,   14,   14, 0x05,
      32,   14,   14,   14, 0x05,
      52,   14,   14,   14, 0x05,

 // slots: signature, parameters, type, tag, flags
      90,   65,   14,   14, 0x0a,
     128,  116,   14,   14, 0x0a,
     171,  156,   14,   14, 0x0a,
     198,   14,   14,   14, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_DataContainer[] = {
    "DataContainer\0\0imagesImported()\0"
    "vectorListUpdated()\0maskLoaded()\0"
    "currentIndexPass,isAPass\0"
    "setCurrentIndex(int,bool)\0pivDataPass\0"
    "setCurrentPivData(PivData*)\0index,fileName\0"
    "setVectorFile(int,QString)\0importMask()\0"
};

void DataContainer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        DataContainer *_t = static_cast<DataContainer *>(_o);
        switch (_id) {
        case 0: _t->imagesImported(); break;
        case 1: _t->vectorListUpdated(); break;
        case 2: _t->maskLoaded(); break;
        case 3: _t->setCurrentIndex((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 4: _t->setCurrentPivData((*reinterpret_cast< PivData*(*)>(_a[1]))); break;
        case 5: _t->setVectorFile((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 6: _t->importMask(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData DataContainer::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject DataContainer::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_DataContainer,
      qt_meta_data_DataContainer, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &DataContainer::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *DataContainer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *DataContainer::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_DataContainer))
        return static_cast<void*>(const_cast< DataContainer*>(this));
    return QObject::qt_metacast(_clname);
}

int DataContainer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void DataContainer::imagesImported()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void DataContainer::vectorListUpdated()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void DataContainer::maskLoaded()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}
QT_END_MOC_NAMESPACE
