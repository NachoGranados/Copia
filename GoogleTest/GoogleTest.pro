include(gtest_dependency.pri)

TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG += thread
CONFIG -= qt

HEADERS +=     tst_mytestcase.h

SOURCES +=     main.cpp

//INCLUDEPATH += $$PWD/../Server/include
//DEPENDPATH += $$PWD/../Server/include
