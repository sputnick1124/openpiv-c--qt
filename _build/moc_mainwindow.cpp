/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/mainwindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MainWindow[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      21,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      12,   11,   11,   11, 0x09,
      32,   11,   11,   11, 0x09,
      65,   53,   11,   11, 0x09,
      82,   53,   11,   11, 0x09,
      99,   53,   11,   11, 0x09,
     118,   11,   11,   11, 0x09,
     131,   11,   11,   11, 0x09,
     145,   11,   11,   11, 0x09,
     168,   11,   11,   11, 0x09,
     193,   11,   11,   11, 0x09,
     212,   11,   11,   11, 0x09,
     227,   11,   11,   11, 0x09,
     243,   11,   11,   11, 0x09,
     261,   11,   11,   11, 0x09,
     277,   11,   11,   11, 0x09,
     291,   11,   11,   11, 0x09,
     303,   11,   11,   11, 0x09,
     324,   11,   11,   11, 0x09,
     336,   11,   11,   11, 0x09,
     356,   11,   11,   11, 0x09,
     381,  373,   11,   11, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_MainWindow[] = {
    "MainWindow\0\0launchImageImport()\0"
    "notifyFolderChange()\0rowSelected\0"
    "pivAclicked(int)\0pivBclicked(int)\0"
    "vectorClicked(int)\0forwardOne()\0"
    "backwardOne()\0chooseFilteredColour()\0"
    "chooseUnfilteredColour()\0setColourButtons()\0"
    "setFilterTab()\0filterChanged()\0"
    "setFilterValues()\0setDisplayTab()\0"
    "setDoingPIV()\0setOutput()\0"
    "chooseOutputFolder()\0batchDone()\0"
    "setDataQualityTab()\0qualityChanged()\0"
    "xyPoint\0updatePositionLabel(QPointF)\0"
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        MainWindow *_t = static_cast<MainWindow *>(_o);
        switch (_id) {
        case 0: _t->launchImageImport(); break;
        case 1: _t->notifyFolderChange(); break;
        case 2: _t->pivAclicked((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->pivBclicked((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->vectorClicked((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->forwardOne(); break;
        case 6: _t->backwardOne(); break;
        case 7: _t->chooseFilteredColour(); break;
        case 8: _t->chooseUnfilteredColour(); break;
        case 9: _t->setColourButtons(); break;
        case 10: _t->setFilterTab(); break;
        case 11: _t->filterChanged(); break;
        case 12: _t->setFilterValues(); break;
        case 13: _t->setDisplayTab(); break;
        case 14: _t->setDoingPIV(); break;
        case 15: _t->setOutput(); break;
        case 16: _t->chooseOutputFolder(); break;
        case 17: _t->batchDone(); break;
        case 18: _t->setDataQualityTab(); break;
        case 19: _t->qualityChanged(); break;
        case 20: _t->updatePositionLabel((*reinterpret_cast< QPointF(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData MainWindow::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow,
      qt_meta_data_MainWindow, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MainWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow))
        return static_cast<void*>(const_cast< MainWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 21)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 21;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
