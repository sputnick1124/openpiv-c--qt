/****************************************************************************
** Meta object code from reading C++ file 'imagelist.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/imagelist.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'imagelist.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ImageList[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      32,   11,   10,   10, 0x05,
      69,   57,   10,   10, 0x05,

 // slots: signature, parameters, type, tag, flags
      86,   10,   10,   10, 0x0a,
      97,   57,   10,   10, 0x0a,
     115,   10,   10,   10, 0x0a,
     143,  132,   10,   10, 0x09,
     162,  132,   10,   10, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_ImageList[] = {
    "ImageList\0\0fileName,rowSelected\0"
    "fileClicked(QString,int)\0rowSelected\0"
    "fileClicked(int)\0populate()\0"
    "highlightRow(int)\0clearHighlight()\0"
    "row,column\0rowSelect(int,int)\0"
    "rowDoubleClicked(int,int)\0"
};

void ImageList::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ImageList *_t = static_cast<ImageList *>(_o);
        switch (_id) {
        case 0: _t->fileClicked((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 1: _t->fileClicked((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->populate(); break;
        case 3: _t->highlightRow((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->clearHighlight(); break;
        case 5: _t->rowSelect((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 6: _t->rowDoubleClicked((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData ImageList::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ImageList::staticMetaObject = {
    { &QTableWidget::staticMetaObject, qt_meta_stringdata_ImageList,
      qt_meta_data_ImageList, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ImageList::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ImageList::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ImageList::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ImageList))
        return static_cast<void*>(const_cast< ImageList*>(this));
    return QTableWidget::qt_metacast(_clname);
}

int ImageList::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void ImageList::fileClicked(QString _t1, int _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ImageList::fileClicked(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
