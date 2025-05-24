QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    gallery.cpp \
    game_win.cpp \
    hexgrid.cpp \
    main.cpp \
    menu.cpp \
    welcome_page.cpp

HEADERS += \
    gallery.h \
    game_win.h \
    hexgrid.h \
    menu.h \
    welcome_page.h

FORMS += \
    gallery.ui \
    game_win.ui \
    menu.ui \
    welcome_page.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    images.qrc \
    txt_files/text_file_qrecource.qrc
