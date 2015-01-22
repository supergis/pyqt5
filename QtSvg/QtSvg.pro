TEMPLATE = lib
CONFIG += warn_on plugin
QT += svg
CONFIG += release
CONFIG -= android_install

win32 {
    PY_MODULE = QtSvg.pyd
    target.files = QtSvg.pyd
    LIBS += -L/usr/lib/x86_64-linux-gnu -lpython3.4m
} else {
    PY_MODULE = QtSvg.so
    target.files = QtSvg.so
}

target.CONFIG = no_check_exist
target.path = /usr/lib/python3.4/site-packages/PyQt5
INSTALLS += target
sip.path = /usr/share/sip/PyQt5/QtSvg
sip.files = ../sip/QtSvg/QtSvgmod.sip ../sip/QtSvg/qsvgwidget.sip ../sip/QtSvg/qsvggenerator.sip ../sip/QtSvg/qsvgrenderer.sip ../sip/QtSvg/qgraphicssvgitem.sip
INSTALLS += sip
QMAKE_CXXFLAGS += -fno-exceptions
QMAKE_LFLAGS += -Wl,--version-script=QtSvg.exp
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

TARGET = QtSvg
HEADERS = sipAPIQtSvg.h
SOURCES = sipQtSvgQGraphicsSvgItem.cpp sipQtSvgQSvgWidget.cpp sipQtSvgcmodule.cpp sipQtSvgQSvgGenerator.cpp sipQtSvgQSvgRenderer.cpp
