/****************************************************************************
** Meta object code from reading C++ file 'pivdisplay.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/pivdisplay.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pivdisplay.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_PivDisplay[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      22,   12,   11,   11, 0x05,

 // slots: signature, parameters, type, tag, flags
      42,   11,   11,   11, 0x0a,
      56,   11,   11,   11, 0x0a,
      80,   73,   11,   11, 0x0a,
      98,   73,   11,   11, 0x0a,
     119,   11,   11,   11, 0x0a,
     128,   11,   11,   11, 0x0a,
     138,   11,   11,   11, 0x0a,
     148,   11,   11,   11, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_PivDisplay[] = {
    "PivDisplay\0\0pointPass\0mouseMoved(QPointF)\0"
    "refreshView()\0displayCurrent()\0isTrue\0"
    "maskToggled(bool)\0vectorsToggled(bool)\0"
    "zoomIn()\0zoomOut()\0zoomFit()\0"
    "vectorsChanged()\0"
};

void PivDisplay::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PivDisplay *_t = static_cast<PivDisplay *>(_o);
        switch (_id) {
        case 0: _t->mouseMoved((*reinterpret_cast< QPointF(*)>(_a[1]))); break;
        case 1: _t->refreshView(); break;
        case 2: _t->displayCurrent(); break;
        case 3: _t->maskToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->vectorsToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->zoomIn(); break;
        case 6: _t->zoomOut(); break;
        case 7: _t->zoomFit(); break;
        case 8: _t->vectorsChanged(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PivDisplay::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PivDisplay::staticMetaObject = {
    { &QGraphicsView::staticMetaObject, qt_meta_stringdata_PivDisplay,
      qt_meta_data_PivDisplay, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PivDisplay::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PivDisplay::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PivDisplay::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PivDisplay))
        return static_cast<void*>(const_cast< PivDisplay*>(this));
    return QGraphicsView::qt_metacast(_clname);
}

int PivDisplay::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGraphicsView::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void PivDisplay::mouseMoved(QPointF _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
