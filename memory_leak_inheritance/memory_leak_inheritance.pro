TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    Vehicle.cpp \
    Car.cpp \
    Bike.cpp

HEADERS += \
    Vehicle.h \
    Car.h \
    Bike.h

DISTFILES += *md \
    README.md
