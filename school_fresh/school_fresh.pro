#-------------------------------------------------
#
# Project created by QtCreator 2018-01-08T08:07:14
#
#-------------------------------------------------

QT       += core gui sql axcontainer

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = school_fresh
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
        mainwindow.cpp \
    hello_fresh_student.cpp \
    save_student_info.cpp \
    have_fun.cpp \
    edit_password.cpp

HEADERS  += mainwindow.h \
    connecting.h \
    hello_fresh_student.h \
    save_student_info.h \
    have_fun.h \
    edit_password.h

FORMS    += mainwindow.ui \
    hello_fresh_student.ui \
    save_student_info.ui \
    have_fun.ui \
    edit_password.ui

RESOURCES += \
    school_picture.qrc
CONFIG+=resources_big   #引入资源文件过大的解决办法

RC_ICONS = cqut.ico
