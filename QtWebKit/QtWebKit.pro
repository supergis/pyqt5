TEMPLATE = lib
CONFIG += warn_on plugin
QT += webkit network
CONFIG += release
CONFIG -= android_install

win32 {
    PY_MODULE = QtWebKit.pyd
    target.files = QtWebKit.pyd
    LIBS += -L/usr/lib/x86_64-linux-gnu -lpython3.4m
} else {
    PY_MODULE = QtWebKit.so
    target.files = QtWebKit.so
}

target.CONFIG = no_check_exist
target.path = /usr/lib/python3.4/site-packages/PyQt5
INSTALLS += target
sip.path = /usr/share/sip/PyQt5/QtWebKit
sip.files = ../sip/QtWebKit/qwebsecurityorigin.sip ../sip/QtWebKit/qwebkitglobal.sip ../sip/QtWebKit/qwebelement.sip ../sip/QtWebKit/qwebsettings.sip ../sip/QtWebKit/qwebhistoryinterface.sip ../sip/QtWebKit/qwebdatabase.sip ../sip/QtWebKit/QtWebKitmod.sip ../sip/QtWebKit/qwebhistory.sip ../sip/QtWebKit/qwebpluginfactory.sip
INSTALLS += sip
QMAKE_CXXFLAGS += -fno-exceptions
QMAKE_LFLAGS += -Wl,--version-script=QtWebKit.exp
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

TARGET = QtWebKit
HEADERS = sipAPIQtWebKit.h
SOURCES = sipQtWebKitQWebPluginFactoryMimeType.cpp sipQtWebKitQWebPluginFactoryPlugin.cpp sipQtWebKitQWebPluginFactoryExtensionReturn.cpp sipQtWebKitQWebHistoryItem.cpp sipQtWebKitQWebHistory.cpp sipQtWebKitQWebPluginFactory.cpp sipQtWebKitQWebSecurityOrigin.cpp sipQtWebKitQWebHistoryInterface.cpp sipQtWebKitQList0100QWebSecurityOrigin.cpp sipQtWebKitcmodule.cpp sipQtWebKitQWebElement.cpp sipQtWebKitQWebElementCollection.cpp sipQtWebKitQWebDatabase.cpp sipQtWebKitQList0100QWebElement.cpp sipQtWebKitQList0100QWebPluginFactoryPlugin.cpp sipQtWebKitQList0100QWebDatabase.cpp sipQtWebKitQList0100QWebPluginFactoryMimeType.cpp sipQtWebKitQWebPluginFactoryExtensionOption.cpp sipQtWebKitQList0100QWebHistoryItem.cpp sipQtWebKitQWebSettings.cpp
