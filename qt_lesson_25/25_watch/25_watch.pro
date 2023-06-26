TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    touchscreen.cpp \
    watch.cpp \
    myclass.cpp \
    myinternet.cpp \
    test3.cpp

SUBDIRS += \
    25_watch.pro

HEADERS += \
    touchscreen.h \
    watch.h \
    myclass.h \
    myinternet.h \
    test3.h
