/****************************************************************************
** Meta object code from reading C++ file 'vectorlist.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/vectorlist.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'vectorlist.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_VectorList[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      24,   12,   11,   11, 0x05,

 // slots: signature, parameters, type, tag, flags
      41,   11,   11,   11, 0x0a,
      52,   11,   11,   11, 0x0a,
      61,   12,   11,   11, 0x0a,
      79,   11,   11,   11, 0x0a,
     107,   96,   11,   11, 0x09,
     126,   96,   11,   11, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_VectorList[] = {
    "VectorList\0\0rowSelected\0fileClicked(int)\0"
    "populate()\0update()\0highlightRow(int)\0"
    "clearHighlight()\0row,column\0"
    "rowSelect(int,int)\0rowDoubleClicked(int,int)\0"
};

void VectorList::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        VectorList *_t = static_cast<VectorList *>(_o);
        switch (_id) {
        case 0: _t->fileClicked((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->populate(); break;
        case 2: _t->update(); break;
        case 3: _t->highlightRow((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->clearHighlight(); break;
        case 5: _t->rowSelect((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 6: _t->rowDoubleClicked((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData VectorList::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject VectorList::staticMetaObject = {
    { &QTableWidget::staticMetaObject, qt_meta_stringdata_VectorList,
      qt_meta_data_VectorList, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &VectorList::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *VectorList::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *VectorList::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_VectorList))
        return static_cast<void*>(const_cast< VectorList*>(this));
    return QTableWidget::qt_metacast(_clname);
}

int VectorList::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTableWidget::qt_metacall(_c, _id, _a);
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
void VectorList::fileClicked(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
