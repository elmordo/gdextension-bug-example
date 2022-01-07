CONFIG -= qt

TEMPLATE = lib
DEFINES += SAMPLEPROJECT_LIBRARY

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    src-cpp/entrypoint.cpp \
    src-cpp/samplenode.cpp

HEADERS += \
    src-cpp/samplenode.h

INCLUDEPATH += \
    lib/godot-cpp \
    lib/godot-cpp/include/godot_cpp \
    lib/godot-cpp/include/godot_cpp/core \
    lib/godot-cpp/include/godot_cpp/classes \
    lib/godot-cpp/include/godot_cpp/variant \
    lib/godot-cpp/include \
    lib/godot-cpp/gen/include \
    lib/godot-cpp/gen/include/godot_cpp/classes \
    lib/godot-cpp/gen/include/godot_cpp/variant \
    lib/godot-cpp/godot-headers \


# Default rules for deployment.
unix {
    target.path = /usr/lib
}
!isEmpty(target.path): INSTALLS += target
