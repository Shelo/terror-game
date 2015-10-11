TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    display.cpp \
    renderer.cpp \
    texture.cpp \
    entity.cpp \
    vector2.cpp

INCLUDEPATH += ../include
LIBS += -L ../lib -lglfw3 -framework OpenGL -framework Cocoa -framework IOKit -framework CoreVideo

CONFIG = c++11

include(deployment.pri)
qtcAddDeployment()

HEADERS += \
    display.h \
    renderer.h \
    texture.h \
    entity.h \
    vector2.h
