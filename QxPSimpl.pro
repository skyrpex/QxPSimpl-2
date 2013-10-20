QT = core gui
TARGET = QxPSimpl
TEMPLATE = lib
DEFINES += QXPSIMPL_LIBRARY
DESTDIR = $$PWD/bin
CONFIG += C++11

SOURCES += src/qxpsimpl.cpp

HEADERS  += \
    psimpl/psimpl.h \
    include/qxpsimpl_global.h \
    include/qxpsimpl.h
