QT -= gui

CONFIG += c++17 console
CONFIG -= app_bundle

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
        cppclassunit.cpp \
        cppcodefactory.cpp \
        cppmethodunit.cpp \
        csrpclassunit.cpp \
        csrpcodefactory.cpp \
        csrpmethodunit.cpp \
        javaclassunit.cpp \
        javacodefactory.cpp \
        javamethodunit.cpp \
        main.cpp

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

HEADERS += \
    classunit.h \
    codefactory.h \
    cppclassunit.h \
    cppcodefactory.h \
    cppmethodunit.h \
    cppprintoperatorunit.h \
    csrpclassunit.h \
    csrpcodefactory.h \
    csrpmethodunit.h \
    csrpprintoperatorunit.h \
    javaclassunit.h \
    javacodefactory.h \
    javamethodunit.h \
    javaprintoperatorunit.h \
    methodunit.h \
    printoperatorunit.h \
    unit.h
