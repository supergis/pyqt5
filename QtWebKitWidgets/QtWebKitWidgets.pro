TEMPLATE = lib
CONFIG += warn_on plugin
QT += webkitwidgets printsupport
CONFIG += release
CONFIG -= android_install

win32 {
    PY_MODULE = QtWebKitWidgets.pyd
    target.files = QtWebKitWidgets.pyd
    LIBS += -L/usr/lib/x86_64-linux-gnu -lpython3.4m
} else {
    PY_MODULE = QtWebKitWidgets.so
    target.files = QtWebKitWidgets.so
}

target.CONFIG = no_check_exist
target.path = /usr/lib/python3.4/site-packages/PyQt5
INSTALLS += target
sip.path = /usr/share/sip/PyQt5/QtWebKitWidgets
sip.files = ../sip/QtWebKitWidgets/qwebframe.sip ../sip/QtWebKitWidgets/QtWebKitWidgetsmod.sip ../sip/QtWebKitWidgets/qwebpage.sip ../sip/QtWebKitWidgets/qwebview.sip ../sip/QtWebKitWidgets/qgraphicswebview.sip ../sip/QtWebKitWidgets/qwebinspector.sip
INSTALLS += sip
QMAKE_CXXFLAGS += -fno-exceptions
QMAKE_LFLAGS += -Wl,--version-script=QtWebKitWidgets.exp
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

TARGET = QtWebKitWidgets
HEADERS = sipAPIQtWebKitWidgets.h
SOURCES = sipQtWebKitWidgetsQList0101QWebFrame.cpp sipQtWebKitWidgetsQWebPageExtensionReturn.cpp sipQtWebKitWidgetsQMultiMap0100QString0100QString.cpp sipQtWebKitWidgetsQWebPageChooseMultipleFilesExtensionOption.cpp sipQtWebKitWidgetsQWebInspector.cpp sipQtWebKitWidgetsQWebPage.cpp sipQtWebKitWidgetsQWebPageChooseMultipleFilesExtensionReturn.cpp sipQtWebKitWidgetsQWebPageErrorPageExtensionOption.cpp sipQtWebKitWidgetsQWebPageViewportAttributes.cpp sipQtWebKitWidgetsQWebPageErrorPageExtensionReturn.cpp sipQtWebKitWidgetsQWebFrameRenderLayers.cpp sipQtWebKitWidgetsQWebPageFindFlags.cpp sipQtWebKitWidgetsQWebFrame.cpp sipQtWebKitWidgetsQWebPageExtensionOption.cpp sipQtWebKitWidgetsQWebHitTestResult.cpp sipQtWebKitWidgetsQGraphicsWebView.cpp sipQtWebKitWidgetsQWebView.cpp sipQtWebKitWidgetscmodule.cpp
