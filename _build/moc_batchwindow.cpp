/****************************************************************************
** Meta object code from reading C++ file 'batchwindow.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/batchwindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'batchwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_BatchWindow[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      13,   12,   12,   12, 0x05,
      28,   12,   12,   12, 0x05,

 // slots: signature, parameters, type, tag, flags
      46,   42,   12,   12, 0x0a,
      68,   12,   12,   12, 0x0a,
      84,   12,   12,   12, 0x09,
     101,   12,   12,   12, 0x09,
     118,   12,   12,   12, 0x09,
     133,   12,   12,   12, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_BatchWindow[] = {
    "BatchWindow\0\0startProcess()\0stopProcess()\0"
    "max\0setProgressRange(int)\0addToProgress()\0"
    "refreshEnabled()\0commitSettings()\0"
    "startClicked()\0stopClicked()\0"
};

void BatchWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        BatchWindow *_t = static_cast<BatchWindow *>(_o);
        switch (_id) {
        case 0: _t->startProcess(); break;
        case 1: _t->stopProcess(); break;
        case 2: _t->setProgressRange((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->addToProgress(); break;
        case 4: _t->refreshEnabled(); break;
        case 5: _t->commitSettings(); break;
        case 6: _t->startClicked(); break;
        case 7: _t->stopClicked(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData BatchWindow::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject BatchWindow::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_BatchWindow,
      qt_meta_data_BatchWindow, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &BatchWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *BatchWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *BatchWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_BatchWindow))
        return static_cast<void*>(const_cast< BatchWindow*>(this));
    return QDialog::qt_metacast(_clname);
}

int BatchWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void BatchWindow::startProcess()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void BatchWindow::stopProcess()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}
QT_END_MOC_NAMESPACE
