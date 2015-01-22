TEMPLATE = lib
CONFIG += warn_on plugin
QT += x11extras
CONFIG += release
CONFIG -= android_install

win32 {
    PY_MODULE = QtX11Extras.pyd
    target.files = QtX11Extras.pyd
    LIBS += -L/usr/lib/x86_64-linux-gnu -lpython3.4m
} else {
    PY_MODULE = QtX11Extras.so
    target.files = QtX11Extras.so
}

target.CONFIG = no_check_exist
target.path = /usr/lib/python3.4/site-packages/PyQt5
INSTALLS += target
sip.path = /usr/share/sip/PyQt5/QtX11Extras
sip.files = ../sip/QtX11Extras/QtX11Extrasmod.sip ../sip/QtX11Extras/qx11info_x11.sip
INSTALLS += sip
QMAKE_CXXFLAGS += -fno-exceptions
QMAKE_LFLAGS += -Wl,--version-script=QtX11Extras.exp
DEFINES += SIP_PROTECTED_IS_PUBLIC protected=public
INCLUDEPATH += .
INCLUDEPATH += /usr/include/python3.4m

win32 {
    QMAKE_POST_LINK = $(COPY_FILE) $(DESTDIR_TARGET) $$PY_MODULE
} else {
    QMAKE_POST_LINK = $(COPY_FILE) $(TARGET) $$PY_MODULE
}
macx {
    QMAKE_LFLAGS += "-undefined dynamic_lookup"
    QMAKE_LFLAGS += "-install_name $$absolute_path($$PY_MODULE, $$target.path)"
}

TARGET = QtX11Extras
HEADERS = sipAPIQtX11Extras.h
SOURCES = sipQtX11Extrasxcb_connection_t.cpp sipQtX11ExtrasQX11Info.cpp sipQtX11Extrascmodule.cpp sipQtX11ExtrasDisplay.cpp
