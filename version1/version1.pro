QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11 resources_big
QT += sql

# The following define makes your compiler emit warnings if you use
# any Qt feature that has been marked deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    adminmenu.cpp \
    bookinformation3.cpp \
    bookseat.cpp \
    forgetpassword.cpp \
    main.cpp \
    loginwindow.cpp \
    pimanagement.cpp \
    readerinfo.cpp \
    readerpenalty.cpp \
    registerwindow.cpp \
    renew.cpp \
    bookinformation.cpp \
    returnseat.cpp \
    studentmenu.cpp \
    teachermenu.cpp \
    zeng.cpp \
    gai.cpp \
    backup.cpp \
    statisticinfo.cpp \
    fines.cpp \
    checkborrowbooks.cpp \
    countlist.cpp

HEADERS += \
    adminmenu.h \
    bookinformation3.h \
    bookseat.h \
    forgetpassword.h \
    loginwindow.h \
    main.h \
    pimanagement.h \
    readerinfo.h \
    readerpenalty.h \
    registerwindow.h \
    renew.h \
    bookinformation.h \
    returnseat.h \
    studentmenu.h \
    teachermenu.h \
    zeng.h \
    gai.h \
    backup.h \
    statisticinfo.h \
    fines.h \
    checkborrowbooks.h \
    countlist.h

FORMS += \
    adminmenu.ui \
    bookinformation3.ui \
    bookseat.ui \
    forgetpassword.ui \
    loginwindow.ui \
    pimanagement.ui \
    readerinfo.ui \
    readerpenalty.ui \
    registerwindow.ui \
    renew.ui \
    bookinformation.ui \
    returnseat.ui \
    studentmenu.ui \
    teachermenu.ui \
    zeng.ui \
    gai.ui \
    backup.ui \
    statisticinfo.ui \
    fines.ui \
    checkborrowbooks.ui \
    countlist.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    res.qrc

DISTFILES += \
    res/inthesnow 2_1.mp4 \
    res/wallhaven-lmxjeq_1920x1080.png \
    res/wallhaven-xlo78v_1920x1080.png \
    res/c13c80b168253bb1a12f50279e61ec2d.jpg
