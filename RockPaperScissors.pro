QT += core
QT -= gui

CONFIG += c++11

TARGET = RockPaperScissors
CONFIG += console
CONFIG -= app_bundle

TEMPLATE = app

SOURCES += main.cpp \
    game.cpp

HEADERS += \
    game.h
