/****************************************************************************
** Meta object code from reading C++ file 'maskdropdown.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/maskdropdown.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'maskdropdown.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MaskDropDown[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: signature, parameters, type, tag, flags
      14,   13,   13,   13, 0x05,
      41,   34,   13,   13, 0x05,
      59,   34,   13,   13, 0x05,

 // slots: signature, parameters, type, tag, flags
      75,   13,   13,   13, 0x0a,
      89,   13,   13,   13, 0x0a,
     102,   13,   13,   13, 0x09,
     129,  118,   13,   13, 0x09,
     147,   13,   13,   13, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_MaskDropDown[] = {
    "MaskDropDown\0\0importMaskClicked()\0"
    "isTrue\0gridToggled(bool)\0clearMask(bool)\0"
    "imageLoaded()\0maskLoaded()\0importTrigger()\0"
    "checkState\0gridTrigger(bool)\0"
    "clearTrigger()\0"
};

void MaskDropDown::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        MaskDropDown *_t = static_cast<MaskDropDown *>(_o);
        switch (_id) {
        case 0: _t->importMaskClicked(); break;
        case 1: _t->gridToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->clearMask((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->imageLoaded(); break;
        case 4: _t->maskLoaded(); break;
        case 5: _t->importTrigger(); break;
        case 6: _t->gridTrigger((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->clearTrigger(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData MaskDropDown::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject MaskDropDown::staticMetaObject = {
    { &QMenu::staticMetaObject, qt_meta_stringdata_MaskDropDown,
      qt_meta_data_MaskDropDown, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MaskDropDown::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MaskDropDown::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MaskDropDown::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MaskDropDown))
        return static_cast<void*>(const_cast< MaskDropDown*>(this));
    return QMenu::qt_metacast(_clname);
}

int MaskDropDown::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMenu::qt_metacall(_c, _id, _a);
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
void MaskDropDown::importMaskClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void MaskDropDown::gridToggled(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void MaskDropDown::clearMask(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE
