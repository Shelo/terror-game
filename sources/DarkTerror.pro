TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    display.cpp \
    renderer.cpp \
    texture.cpp

INCLUDEPATH += ../include
LIBS += -L ../lib -lglfw3 -framework OpenGL -framework Cocoa -framework IOKit -framework CoreVideo

CONFIG = c++11

include(deployment.pri)
qtcAddDeployment()

HEADERS += \
    display.h \
    renderer.h \
    texture.h
