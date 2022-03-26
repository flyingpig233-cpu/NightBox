QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    Exhaustive/ExDialog.cpp \
    MathCalc/MathDialog.cpp \
    SystemControl/SystemDialog.cpp \
    main.cpp \
    naboutbox.cpp \
    nightbox.cpp \
    nlabelbutton.cpp

HEADERS += \
    Exhaustive/ExDialog.h \
    MathCalc/MathDialog.h \
    SystemControl/SystemDialog.h \
    naboutbox.h \
    nightbox.h \
    nlabelbutton.h

FORMS += \
    Exhaustive/ExDialog.ui \
    MathCalc/MathDialog.ui \
    SystemControl/SystemDialog.ui \
    naboutbox.ui \
    nightbox.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

DISTFILES += \
    README.md
