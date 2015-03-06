/****************************************************************************
** Meta object code from reading C++ file 'importimages.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/importimages.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'importimages.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ImportImages[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      14,   13,   13,   13, 0x05,

 // slots: signature, parameters, type, tag, flags
      31,   13,   13,   13, 0x0a,
      55,   13,   13,   13, 0x09,
      71,   13,   13,   13, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_ImportImages[] = {
    "ImportImages\0\0imagesImported()\0"
    "removeFiles(QList<int>)\0importPressed()\0"
    "cancelPressed()\0"
};

void ImportImages::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ImportImages *_t = static_cast<ImportImages *>(_o);
        switch (_id) {
        case 0: _t->imagesImported(); break;
        case 1: _t->removeFiles((*reinterpret_cast< QList<int>(*)>(_a[1]))); break;
        case 2: _t->importPressed(); break;
        case 3: _t->cancelPressed(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData ImportImages::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ImportImages::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_ImportImages,
      qt_meta_data_ImportImages, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ImportImages::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ImportImages::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ImportImages::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ImportImages))
        return static_cast<void*>(const_cast< ImportImages*>(this));
    return QDialog::qt_metacast(_clname);
}

int ImportImages::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void ImportImages::imagesImported()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
