TEMPLATE = lib
CONFIG += warn_on plugin
QT += webchannel network
CONFIG += release
CONFIG -= android_install

win32 {
    PY_MODULE = QtWebChannel.pyd
    target.files = QtWebChannel.pyd
    LIBS += -L/usr/lib/x86_64-linux-gnu -lpython3.4m
} else {
    PY_MODULE = QtWebChannel.so
    target.files = QtWebChannel.so
}

target.CONFIG = no_check_exist
target.path = /usr/lib/python3.4/site-packages/PyQt5
INSTALLS += target
sip.path = /usr/share/sip/PyQt5/QtWebChannel
sip.files = ../sip/QtWebChannel/qwebchannelabstracttransport.sip ../sip/QtWebChannel/qwebchannel.sip ../sip/QtWebChannel/QtWebChannelmod.sip
INSTALLS += sip
QMAKE_CXXFLAGS += -fno-exceptions
QMAKE_LFLAGS += -Wl,--version-script=QtWebChannel.exp
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

TARGET = QtWebChannel
HEADERS = sipAPIQtWebChannel.h
SOURCES = sipQtWebChannelQWebChannelAbstractTransport.cpp sipQtWebChannelQHash0100QString0101QObject.cpp sipQtWebChannelQWebChannel.cpp sipQtWebChannelcmodule.cpp
