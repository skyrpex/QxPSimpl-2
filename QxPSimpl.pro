QT = core gui widgets
TARGET = QxPSimpl
TEMPLATE = lib
DEFINES += QXPSIMPL_LIBRARY
CONFIG += C++11
QX_INSTALL_PREFIX = /usr/local/QxPSimpl

SOURCES += src/qxpsimpl.cpp

HEADERS  += \
    psimpl/psimpl.h \
    include/qxpsimpl_global.h \
    include/qxpsimpl.h \
    include/QxPSimpl

unix {
    target.path = $$QX_INSTALL_PREFIX/lib

    headers.path = $$QX_INSTALL_PREFIX/include
    headers.files = include/*

    prf.path = $$[QT_HOST_DATA]/mkspecs/features
    prf.files = qxpsimpl.prf

    INSTALLS += target headers prf
}

OTHER_FILES += \
    qxpsimpl.prf
