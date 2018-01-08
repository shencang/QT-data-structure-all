#-------------------------------------------------
#
# Project created by QtCreator 2018-01-02T19:51:41
#
#-------------------------------------------------

QT       += core gui
QT       += multimedia
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = mypixmap
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += \
        main.cpp \
        dialog.cpp \
    welcome.cpp \
    dis_map.cpp \
    dis_info.cpp \
    min_two_n.cpp \
    all_path_n.cpp \
    algorithm_min.cpp \
    algorithm_all.cpp \
    more_vertex_road.cpp \
    algorithm_more_ver.cpp \
    articulation_g.cpp \
    fing_key.cpp

HEADERS += \
        dialog.h \
    welcome.h \
    dis_map.h \
    main_data.h \
    dis_info.h \
    min_two_n.h \
    all_path_n.h \
    more_vertex_road.h \
    articulation_g.h \
    fing_key.h

FORMS += \
        dialog.ui \
    welcome.ui \
    dis_map.ui \
    dis_info.ui \
    min_two_n.ui \
    all_path_n.ui \
    more_vertex_road.ui \
    articulation_g.ui \
    fing_key.ui

RESOURCES += \
    data.qrc


RC_ICONS =app_logo.ico


