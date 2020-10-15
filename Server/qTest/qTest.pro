QT += testlib
QT += gui
CONFIG += testcase

TEMPLATE = app

SOURCES +=  tst_testing.cpp

QMAKE_CXXFLAGS += --coverage
QMAKE_LFLAGS += --coverage


