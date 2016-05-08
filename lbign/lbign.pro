#-------------------------------------------------
#
# Project created by QtCreator 2016-05-08T21:31:12
#
#-------------------------------------------------

QT       -= gui
CONFIG += c++11
TARGET = lbign
TEMPLATE = lib

DEFINES += LBIGN_LIBRARY

SOURCES += bign.cpp

HEADERS += bign.hpp\
        lbign_global.h

unix {
    target.path = /usr/lib
    INSTALLS += target
}
