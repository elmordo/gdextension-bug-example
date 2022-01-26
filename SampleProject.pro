CONFIG -= qt

TEMPLATE = lib
DEFINES += SAMPLEPROJECT_LIBRARY

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

CPP_BINDINGS_PATH = lib/godot-cpp/
GODOT_HEADERS_PATH = $$CPP_BINDINGS_PATH/godot-headers/

SOURCES += \
    src-cpp/entrypoint.cpp \
    src-cpp/samplenode.cpp

HEADERS += \
    src-cpp/samplenode.h

INCLUDEPATH += \
    . \
    $$GODOT_HEADERS_PATH/ \
    $$CPP_BINDINGS_PATH/include/ \
    $$CPP_BINDINGS_PATH/get/include/ \


# Default rules for deployment.
unix {
    target.path = /usr/lib
}
!isEmpty(target.path): INSTALLS += target
