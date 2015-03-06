/****************************************************************************
** Meta object code from reading C++ file 'processing.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/processing.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'processing.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Processing[] = {

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
      12,   11,   11,   11, 0x05,
      31,   11,   11,   11, 0x05,

 // slots: signature, parameters, type, tag, flags
      48,   11,   11,   11, 0x0a,
      74,   11,   11,   11, 0x0a,
      89,   11,   11,   11, 0x09,
     109,   11,   11,   11, 0x09,
     130,   11,   11,   11, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_Processing[] = {
    "Processing\0\0currentProcessed()\0"
    "batchProcessed()\0processCurrentImagePair()\0"
    "processBatch()\0launchBatchWindow()\0"
    "emitBatchProcessed()\0stopBatch()\0"
};

void Processing::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        Processing *_t = static_cast<Processing *>(_o);
        switch (_id) {
        case 0: _t->currentProcessed(); break;
        case 1: _t->batchProcessed(); break;
        case 2: _t->processCurrentImagePair(); break;
        case 3: _t->processBatch(); break;
        case 4: _t->launchBatchWindow(); break;
        case 5: _t->emitBatchProcessed(); break;
        case 6: _t->stopBatch(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData Processing::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Processing::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Processing,
      qt_meta_data_Processing, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Processing::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Processing::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Processing::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Processing))
        return static_cast<void*>(const_cast< Processing*>(this));
    return QObject::qt_metacast(_clname);
}

int Processing::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void Processing::currentProcessed()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void Processing::batchProcessed()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}
QT_END_MOC_NAMESPACE
