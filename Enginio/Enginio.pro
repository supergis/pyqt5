TEMPLATE = lib
CONFIG += warn_on plugin
QT += enginio
CONFIG += release
CONFIG -= android_install

win32 {
    PY_MODULE = Enginio.pyd
    target.files = Enginio.pyd
    LIBS += -L/usr/lib/x86_64-linux-gnu -lpython3.4m
} else {
    PY_MODULE = Enginio.so
    target.files = Enginio.so
}

target.CONFIG = no_check_exist
target.path = /usr/lib/python3.4/site-packages/PyQt5
INSTALLS += target
sip.path = /usr/share/sip/PyQt5/Enginio
sip.files = ../sip/Enginio/enginioidentity.sip ../sip/Enginio/enginioclient.sip ../sip/Enginio/enginioreply.sip ../sip/Enginio/enginio.sip ../sip/Enginio/enginioclientconnection.sip ../sip/Enginio/Enginiomod.sip ../sip/Enginio/enginiooauth2authentication.sip ../sip/Enginio/enginiomodel.sip
INSTALLS += sip
QMAKE_CXXFLAGS += -fno-exceptions
QMAKE_LFLAGS += -Wl,--version-script=Enginio.exp
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

TARGET = Enginio
HEADERS = sipAPIEnginio.h
SOURCES = sipEnginioEnginio.cpp sipEnginioEnginioOAuth2Authentication.cpp sipEnginioEnginioClientConnection.cpp sipEnginioEnginioClient.cpp sipEnginioEnginioModel.cpp sipEnginioEnginioIdentity.cpp sipEnginiocmodule.cpp sipEnginioEnginioReply.cpp
