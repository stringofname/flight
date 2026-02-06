QT       += core gui
QT += sql
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    adminlogin.cpp \
    book.cpp \
    flight_add.cpp \
    flight_change.cpp \
    flight_delete.cpp \
    flight_search.cpp \
    global.cpp \
    governor.cpp \
    inquiry.cpp \
    main.cpp \
    mainwindow.cpp \
    userspace.cpp \
    zhuce.cpp \
    zhuce_govern.cpp

HEADERS += \
    adminlogin.h \
    book.h \
    flight_add.h \
    flight_change.h \
    flight_delete.h \
    flight_search.h \
    global.h \
    governor.h \
    inquiry.h \
    mainwindow.h \
    userspace.h \
    zhuce.h \
    zhuce_govern.h

FORMS += \
    adminlogin.ui \
    book.ui \
    flight_add.ui \
    flight_change.ui \
    flight_delete.ui \
    flight_search.ui \
    governor.ui \
    inquiry.ui \
    mainwindow.ui \
    userspace.ui \
    zhuce.ui \
    zhuce_govern.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

DISTFILES += \
    sqlset.md

RESOURCES += \
    res.qrc

