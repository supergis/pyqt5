TEMPLATE = lib
CONFIG += warn_on plugin
QT += quickwidgets
CONFIG += release
CONFIG -= android_install

win32 {
    PY_MODULE = QtQuickWidgets.pyd
    target.files = QtQuickWidgets.pyd
    LIBS += -L/usr/lib/x86_64-linux-gnu -lpython3.4m
} else {
    PY_MODULE = QtQuickWidgets.so
    target.files = QtQuickWidgets.so
}

target.CONFIG = no_check_exist
target.path = /usr/lib/python3.4/site-packages/PyQt5
INSTALLS += target
sip.path = /usr/share/sip/PyQt5/QtQuickWidgets
sip.files = ../sip/QtQuickWidgets/qquickwidget.sip ../sip/QtQuickWidgets/QtQuickWidgetsmod.sip
INSTALLS += sip
QMAKE_CXXFLAGS += -fno-exceptions
QMAKE_LFLAGS += -Wl,--version-script=QtQuickWidgets.exp
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

TARGET = QtQuickWidgets
HEADERS = sipAPIQtQuickWidgets.h
SOURCES = sipQtQuickWidgetsQQuickWidget.cpp sipQtQuickWidgetscmodule.cpp
