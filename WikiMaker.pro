#-------------------------------------------------
#
# Project created by QtCreator 2013-04-18T17:21:18
#
#-------------------------------------------------

QT       += core gui \
            webkitwidgets#support the QWebView

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = WikiMaker
TEMPLATE = app

#add libs
LIBS += -L "/Users/BruceZCQ/Qt5.0.2/5.0.2/clang_64/lib"

SOURCES += main.cpp\
    Sources/wikimaker.cpp \
    Sources/about.cpp \
    Sources/preferences.cpp \
    Common/wikimakerinterface.cpp

HEADERS  +=  Headers/wikimaker.h \
    Headers/about.h \
    Headers/preferences.h \
    Common/wikimakerinterface.h

FORMS    +=  UIs/wikimaker.ui \
    UIs/about.ui \
    UIs/preferences.ui
