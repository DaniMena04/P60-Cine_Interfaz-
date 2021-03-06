QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

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
    acerca_de.cpp \
    asientos.cpp \
    boleto.cpp \
    cartelera.cpp \
    codigo.cpp \
    edcartelera.cpp \
    factura.cpp \
    main.cpp \
    principal.cpp \
    producto.cpp \
    snacks.cpp \
    usuario.cpp

HEADERS += \
    acerca_de.h \
    asientos.h \
    boleto.h \
    cartelera.h \
    codigo.h \
    edcartelera.h \
    factura.h \
    principal.h \
    producto.h \
    snacks.h \
    usuario.h

FORMS += \
    acerca_de.ui \
    asientos.ui \
    boleto.ui \
    edcartelera.ui \
    factura.ui \
    principal.ui \
    snacks.ui \
    usuario.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    resoruces.qrc

DISTFILES +=
