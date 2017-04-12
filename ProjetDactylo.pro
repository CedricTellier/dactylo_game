#-------------------------------------------------
#
# Project created by QtCreator 2017-03-24T10:50:39
#
#-------------------------------------------------

QT       += core gui
QT       += multimedia #Gestion du son
QT       += sql #Gestion de la Base de données

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = ProjetDactylo
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which as been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += main.cpp\
        home.cpp \
    name.cpp \
    game.cpp \
    scoreboard.cpp \
    bdd.cpp \
    end.cpp \
    confirmation.cpp \
    joueur.cpp

HEADERS  += home.h \
    name.h \
    game.h \
    scoreboard.h \
    bdd.h \
    end.h \
    confirmation.h \
    joueur.h

FORMS    += home.ui \
    name.ui \
    game.ui \
    scoreboard.ui \
    end.ui \
    confirmation.ui

DISTFILES +=
