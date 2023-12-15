/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Photo_manager/mainwindow.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.6.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSMainWindowENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSMainWindowENDCLASS = QtMocHelpers::stringData(
    "MainWindow",
    "on_listWidget_itemDoubleClicked",
    "",
    "QListWidgetItem*",
    "item",
    "on_action_Open_File_triggered",
    "on_action_Zoom_in_triggered",
    "on_action_Zoom_out_triggered",
    "on_action_Original_size_triggered",
    "on_action_Adjust_the_size_triggered",
    "on_actionSave_File_triggered",
    "on_actionChoose_directory_to_move_this_photo_triggered",
    "on_Move_Photo_Button_clicked",
    "on_Rename_Photo_Button_clicked"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSMainWindowENDCLASS_t {
    uint offsetsAndSizes[28];
    char stringdata0[11];
    char stringdata1[32];
    char stringdata2[1];
    char stringdata3[17];
    char stringdata4[5];
    char stringdata5[30];
    char stringdata6[28];
    char stringdata7[29];
    char stringdata8[34];
    char stringdata9[36];
    char stringdata10[29];
    char stringdata11[55];
    char stringdata12[29];
    char stringdata13[31];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSMainWindowENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSMainWindowENDCLASS_t qt_meta_stringdata_CLASSMainWindowENDCLASS = {
    {
        QT_MOC_LITERAL(0, 10),  // "MainWindow"
        QT_MOC_LITERAL(11, 31),  // "on_listWidget_itemDoubleClicked"
        QT_MOC_LITERAL(43, 0),  // ""
        QT_MOC_LITERAL(44, 16),  // "QListWidgetItem*"
        QT_MOC_LITERAL(61, 4),  // "item"
        QT_MOC_LITERAL(66, 29),  // "on_action_Open_File_triggered"
        QT_MOC_LITERAL(96, 27),  // "on_action_Zoom_in_triggered"
        QT_MOC_LITERAL(124, 28),  // "on_action_Zoom_out_triggered"
        QT_MOC_LITERAL(153, 33),  // "on_action_Original_size_trigg..."
        QT_MOC_LITERAL(187, 35),  // "on_action_Adjust_the_size_tri..."
        QT_MOC_LITERAL(223, 28),  // "on_actionSave_File_triggered"
        QT_MOC_LITERAL(252, 54),  // "on_actionChoose_directory_to_..."
        QT_MOC_LITERAL(307, 28),  // "on_Move_Photo_Button_clicked"
        QT_MOC_LITERAL(336, 30)   // "on_Rename_Photo_Button_clicked"
    },
    "MainWindow",
    "on_listWidget_itemDoubleClicked",
    "",
    "QListWidgetItem*",
    "item",
    "on_action_Open_File_triggered",
    "on_action_Zoom_in_triggered",
    "on_action_Zoom_out_triggered",
    "on_action_Original_size_triggered",
    "on_action_Adjust_the_size_triggered",
    "on_actionSave_File_triggered",
    "on_actionChoose_directory_to_move_this_photo_triggered",
    "on_Move_Photo_Button_clicked",
    "on_Rename_Photo_Button_clicked"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSMainWindowENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   74,    2, 0x08,    1 /* Private */,
       5,    0,   77,    2, 0x08,    3 /* Private */,
       6,    0,   78,    2, 0x08,    4 /* Private */,
       7,    0,   79,    2, 0x08,    5 /* Private */,
       8,    0,   80,    2, 0x08,    6 /* Private */,
       9,    0,   81,    2, 0x08,    7 /* Private */,
      10,    0,   82,    2, 0x08,    8 /* Private */,
      11,    0,   83,    2, 0x08,    9 /* Private */,
      12,    0,   84,    2, 0x08,   10 /* Private */,
      13,    0,   85,    2, 0x08,   11 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_CLASSMainWindowENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSMainWindowENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSMainWindowENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<MainWindow, std::true_type>,
        // method 'on_listWidget_itemDoubleClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QListWidgetItem *, std::false_type>,
        // method 'on_action_Open_File_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_action_Zoom_in_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_action_Zoom_out_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_action_Original_size_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_action_Adjust_the_size_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionSave_File_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionChoose_directory_to_move_this_photo_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_Move_Photo_Button_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_Rename_Photo_Button_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_listWidget_itemDoubleClicked((*reinterpret_cast< std::add_pointer_t<QListWidgetItem*>>(_a[1]))); break;
        case 1: _t->on_action_Open_File_triggered(); break;
        case 2: _t->on_action_Zoom_in_triggered(); break;
        case 3: _t->on_action_Zoom_out_triggered(); break;
        case 4: _t->on_action_Original_size_triggered(); break;
        case 5: _t->on_action_Adjust_the_size_triggered(); break;
        case 6: _t->on_actionSave_File_triggered(); break;
        case 7: _t->on_actionChoose_directory_to_move_this_photo_triggered(); break;
        case 8: _t->on_Move_Photo_Button_clicked(); break;
        case 9: _t->on_Rename_Photo_Button_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSMainWindowENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 10;
    }
    return _id;
}
QT_WARNING_POP
