TEMPLATE = lib
CONFIG += warn_on plugin
QT += webenginewidgets network widgets
CONFIG += release
CONFIG += c++11
CONFIG -= android_install

win32 {
    PY_MODULE = QtWebEngineWidgets.pyd
    target.files = QtWebEngineWidgets.pyd
    LIBS += -L/usr/lib/x86_64-linux-gnu -lpython3.4m
} else {
    PY_MODULE = QtWebEngineWidgets.so
    target.files = QtWebEngineWidgets.so
}

target.CONFIG = no_check_exist
target.path = /usr/lib/python3.4/site-packages/PyQt5
INSTALLS += target
sip.path = /usr/share/sip/PyQt5/QtWebEngineWidgets
sip.files = ../sip/QtWebEngineWidgets/qwebenginecertificateerror.sip ../sip/QtWebEngineWidgets/qwebenginesettings.sip ../sip/QtWebEngineWidgets/qwebenginehistory.sip ../sip/QtWebEngineWidgets/QtWebEngineWidgetsmod.sip ../sip/QtWebEngineWidgets/qwebenginepage.sip ../sip/QtWebEngineWidgets/qwebengineview.sip
INSTALLS += sip
QMAKE_CXXFLAGS += -fno-exceptions
QMAKE_LFLAGS += -Wl,--version-script=QtWebEngineWidgets.exp
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

TARGET = QtWebEngineWidgets
HEADERS = sipAPIQtWebEngineWidgets.h
SOURCES = sipQtWebEngineWidgetsQWebEngineSettings.cpp sipQtWebEngineWidgetsQWebEnginePageFindFlags.cpp sipQtWebEngineWidgetsQList0100QWebEngineHistoryItem.cpp sipQtWebEngineWidgetsQWebEngineCertificateError.cpp sipQtWebEngineWidgetscmodule.cpp sipQtWebEngineWidgetsQWebEngineView.cpp sipQtWebEngineWidgetsQWebEngineHistory.cpp sipQtWebEngineWidgetsQWebEngineHistoryItem.cpp sipQtWebEngineWidgetsQWebEnginePage.cpp
