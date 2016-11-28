#-------------------------------------------------
#
# Project created by QtCreator 2016-11-14T19:02:45
#
#-------------------------------------------------

QT       += core gui multimedia

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = ejemplo
TEMPLATE = app


SOURCES += main.cpp\
        hello.cpp \
    instrucciones.cpp \
    form.cpp

HEADERS  += hello.h \
    instrucciones.h \
    form.h

FORMS    += hello.ui \
    instrucciones.ui \
    form.ui

RESOURCES += \
    imagen.qrc
