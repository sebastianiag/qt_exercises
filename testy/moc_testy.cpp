/****************************************************************************
** Meta object code from reading C++ file 'testy.h'
**
** Created: Sat Aug 1 20:41:17 2015
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "testy.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'testy.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_testyAppWindow[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      16,   15,   15,   15, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_testyAppWindow[] = {
    "testyAppWindow\0\0on_pushButton_clicked()\0"
};

void testyAppWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        testyAppWindow *_t = static_cast<testyAppWindow *>(_o);
        switch (_id) {
        case 0: _t->on_pushButton_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData testyAppWindow::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject testyAppWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_testyAppWindow,
      qt_meta_data_testyAppWindow, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &testyAppWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *testyAppWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *testyAppWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_testyAppWindow))
        return static_cast<void*>(const_cast< testyAppWindow*>(this));
    if (!strcmp(_clname, "Ui::testyAppWindow"))
        return static_cast< Ui::testyAppWindow*>(const_cast< testyAppWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int testyAppWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}
QT_END_MOC_NAMESPACE