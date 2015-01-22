TEMPLATE = lib
CONFIG += warn_on plugin
QT -= gui
QT += dbus
CONFIG += release
CONFIG -= android_install

win32 {
    PY_MODULE = QtDBus.pyd
    target.files = QtDBus.pyd
    LIBS += -L/usr/lib/x86_64-linux-gnu -lpython3.4m
} else {
    PY_MODULE = QtDBus.so
    target.files = QtDBus.so
}

target.CONFIG = no_check_exist
target.path = /usr/lib/python3.4/site-packages/PyQt5
INSTALLS += target
sip.path = /usr/share/sip/PyQt5/QtDBus
sip.files = ../sip/QtDBus/qdbusextratypes.sip ../sip/QtDBus/qdbusargument.sip ../sip/QtDBus/qdbusinterface.sip ../sip/QtDBus/qdbusabstractadaptor.sip ../sip/QtDBus/qdbuspendingcall.sip ../sip/QtDBus/qdbuserror.sip ../sip/QtDBus/qdbusabstractinterface.sip ../sip/QtDBus/qpydbusreply.sip ../sip/QtDBus/QtDBusmod.sip ../sip/QtDBus/qdbusmessage.sip ../sip/QtDBus/qdbusconnection.sip ../sip/QtDBus/qdbusunixfiledescriptor.sip ../sip/QtDBus/qdbusservicewatcher.sip ../sip/QtDBus/qdbusconnectioninterface.sip ../sip/QtDBus/qpydbuspendingreply.sip
INSTALLS += sip
QMAKE_CXXFLAGS += -fno-exceptions
QMAKE_LFLAGS += -Wl,--version-script=QtDBus.exp
DEFINES += SIP_PROTECTED_IS_PUBLIC protected=public
INCLUDEPATH += .
INCLUDEPATH += /usr/include/python3.4m
INCLUDEPATH += ../qpy/QtDBus

win32 {
    QMAKE_POST_LINK = $(COPY_FILE) $(DESTDIR_TARGET) $$PY_MODULE
} else {
    QMAKE_POST_LINK = $(COPY_FILE) $(TARGET) $$PY_MODULE
}
macx {
    QMAKE_LFLAGS += "-undefined dynamic_lookup"
    QMAKE_LFLAGS += "-install_name $$absolute_path($$PY_MODULE, $$target.path)"
}

TARGET = QtDBus
HEADERS = sipAPIQtDBus.h ../qpy/QtDBus/qpydbuspendingreply.h ../qpy/QtDBus/qpydbus_chimera_helpers.h ../qpy/QtDBus/qpydbus_api.h ../qpy/QtDBus/qpydbusreply.h
SOURCES = sipQtDBusQDBusInterface.cpp sipQtDBusQDBusConnectionRegisterOptions.cpp sipQtDBusQPyDBusReply.cpp sipQtDBusQDBusServiceWatcher.cpp sipQtDBusQPyDBusPendingReply.cpp sipQtDBusQDBusArgument.cpp sipQtDBusQDBus.cpp sipQtDBusQDBusPendingCall.cpp sipQtDBusQDBusReply0400.cpp sipQtDBusQDBusUnixFileDescriptor.cpp sipQtDBusQDBusReply1900.cpp sipQtDBusQDBusServiceWatcherWatchMode.cpp sipQtDBusQDBusReply0100QDBusConnectionInterfaceRegisterServiceReply.cpp sipQtDBusQDBusVariant.cpp sipQtDBusQDBusError.cpp sipQtDBusQDBusConnectionInterface.cpp sipQtDBuscmodule.cpp sipQtDBusQDBusReply0100QStringList.cpp sipQtDBusQDBusReply2600.cpp sipQtDBusQDBusObjectPath.cpp sipQtDBusQDBusAbstractAdaptor.cpp sipQtDBusQDBusSignature.cpp sipQtDBusQDBusAbstractInterface.cpp sipQtDBusQDBusReply0100QString.cpp sipQtDBusQDBusConnection.cpp sipQtDBusQDBusMessage.cpp sipQtDBusQDBusConnectionConnectionCapabilities.cpp sipQtDBusQDBusPendingCallWatcher.cpp ../qpy/QtDBus/qpydbus_chimera_helpers.cpp ../qpy/QtDBus/qpydbuspendingreply.cpp ../qpy/QtDBus/qpydbusreply.cpp ../qpy/QtDBus/qpydbus_post_init.cpp
