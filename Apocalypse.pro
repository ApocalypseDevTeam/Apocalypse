QT       -= core

QT       -= gui

TARGET = Apocalypse
CONFIG   += console
CONFIG   -= app_bundle

TEMPLATE = app


SOURCES += src/main.cpp \
    src/map.cpp \
    src/squaresmap.cpp \
    src/cell.cpp \
    src/apocalypse.cpp

OTHER_FILES += \
    src/CMakeLists.txt \
    README \
    AUTHORS \
    CHANGELOG \
    CMakeLists.txt \
    Doxyfile \
    COPYING

HEADERS += \
    src/map.h \
    src/squaresmap.h \
    src/cell.h \
    src/apocalypse.h
