TEMPLATE = subdirs
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SUBDIRS += \
    memory_leak_inheritance \
    memory_leak_simple

DISTFILES += *.md
