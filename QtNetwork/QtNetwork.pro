TEMPLATE = lib
CONFIG += warn_on plugin
QT -= gui
QT += network
CONFIG += release
CONFIG -= android_install

win32 {
    PY_MODULE = QtNetwork.pyd
    target.files = QtNetwork.pyd
    LIBS += -L/usr/lib/x86_64-linux-gnu -lpython3.4m
} else {
    PY_MODULE = QtNetwork.so
    target.files = QtNetwork.so
}

target.CONFIG = no_check_exist
target.path = /usr/lib/python3.4/site-packages/PyQt5
INSTALLS += target
sip.path = /usr/share/sip/PyQt5/QtNetwork
sip.files = ../sip/QtNetwork/qsslcipher.sip ../sip/QtNetwork/qsslcertificate.sip ../sip/QtNetwork/qhttpmultipart.sip ../sip/QtNetwork/qnetworkcookiejar.sip ../sip/QtNetwork/qsslsocket.sip ../sip/QtNetwork/qudpsocket.sip ../sip/QtNetwork/qabstractnetworkcache.sip ../sip/QtNetwork/qhostaddress.sip ../sip/QtNetwork/QtNetworkmod.sip ../sip/QtNetwork/qtcpserver.sip ../sip/QtNetwork/qdnslookup.sip ../sip/QtNetwork/qsslcertificateextension.sip ../sip/QtNetwork/qsslerror.sip ../sip/QtNetwork/qlocalsocket.sip ../sip/QtNetwork/qauthenticator.sip ../sip/QtNetwork/qnetworkconfiguration.sip ../sip/QtNetwork/qnetworkconfigmanager.sip ../sip/QtNetwork/qtcpsocket.sip ../sip/QtNetwork/qnetworksession.sip ../sip/QtNetwork/qnetworkdiskcache.sip ../sip/QtNetwork/qpynetwork_qmap.sip ../sip/QtNetwork/qhostinfo.sip ../sip/QtNetwork/qnetworkproxy.sip ../sip/QtNetwork/qnetworkcookie.sip ../sip/QtNetwork/qpynetwork_qhash.sip ../sip/QtNetwork/qssl.sip ../sip/QtNetwork/qabstractsocket.sip ../sip/QtNetwork/qnetworkreply.sip ../sip/QtNetwork/qnetworkrequest.sip ../sip/QtNetwork/qnetworkaccessmanager.sip ../sip/QtNetwork/qsslconfiguration.sip ../sip/QtNetwork/qnetworkinterface.sip ../sip/QtNetwork/qsslkey.sip ../sip/QtNetwork/qlocalserver.sip
INSTALLS += sip
QMAKE_CXXFLAGS += -fno-exceptions
QMAKE_LFLAGS += -Wl,--version-script=QtNetwork.exp
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

TARGET = QtNetwork
HEADERS = sipAPIQtNetwork.h
SOURCES = sipQtNetworkQLocalServerSocketOptions.cpp sipQtNetworkQDnsHostAddressRecord.cpp sipQtNetworkQList0100QNetworkConfiguration.cpp sipQtNetworkQNetworkProxyQuery.cpp sipQtNetworkQTcpSocket.cpp sipQtNetworkQAbstractSocketBindMode.cpp sipQtNetworkQList0100QDnsHostAddressRecord.cpp sipQtNetworkQSslConfiguration.cpp sipQtNetworkQSslKey.cpp sipQtNetworkQ_IPV6ADDR.cpp sipQtNetworkcmodule.cpp sipQtNetworkQLocalSocket.cpp sipQtNetworkQNetworkSessionUsagePolicies.cpp sipQtNetworkQList0100QSslError.cpp sipQtNetworkQList0100QDnsTextRecord.cpp sipQtNetworkQTcpServer.cpp sipQtNetworkQNetworkProxy.cpp sipQtNetworkQNetworkAddressEntry.cpp sipQtNetworkQDnsLookup.cpp sipQtNetworkQList0100QNetworkAddressEntry.cpp sipQtNetworkQPair0100QHostAddress1800.cpp sipQtNetworkQDnsDomainNameRecord.cpp sipQtNetworkQHostInfo.cpp sipQtNetworkQNetworkCookie.cpp sipQtNetworkQNetworkProxyFactory.cpp sipQtNetworkQList0100QNetworkProxy.cpp sipQtNetworkQUdpSocket.cpp sipQtNetworkQNetworkDiskCache.cpp sipQtNetworkQHash0100QNetworkRequestAttribute0100QVariant.cpp sipQtNetworkQSslCertificateExtension.cpp sipQtNetworkQList0100QSslCipher.cpp sipQtNetworkQList0100QDnsServiceRecord.cpp sipQtNetworkQNetworkConfigurationManager.cpp sipQtNetworkQHostAddress.cpp sipQtNetworkQAbstractSocket.cpp sipQtNetworkQList0100QDnsDomainNameRecord.cpp sipQtNetworkQSslCertificate.cpp sipQtNetworkQNetworkRequest.cpp sipQtNetworkQNetworkCookieJar.cpp sipQtNetworkQNetworkProxyCapabilities.cpp sipQtNetworkQNetworkCacheMetaData.cpp sipQtNetworkQAbstractNetworkCache.cpp sipQtNetworkQAbstractSocketPauseModes.cpp sipQtNetworkQAuthenticator.cpp sipQtNetworkQNetworkInterfaceInterfaceFlags.cpp sipQtNetworkQNetworkSession.cpp sipQtNetworkQNetworkConfiguration.cpp sipQtNetworkQList0100QHostAddress.cpp sipQtNetworkQHttpMultiPart.cpp sipQtNetworkQSslSocket.cpp sipQtNetworkQSslSslOptions.cpp sipQtNetworkQSslCipher.cpp sipQtNetworkQNetworkReply.cpp sipQtNetworkQLocalServer.cpp sipQtNetworkQList0100QSslCertificate.cpp sipQtNetworkQHttpPart.cpp sipQtNetworkQDnsTextRecord.cpp sipQtNetworkQList0100QNetworkInterface.cpp sipQtNetworkQList0600QPair0100QByteArray0100QByteArray.cpp sipQtNetworkQNetworkAccessManager.cpp sipQtNetworkQDnsServiceRecord.cpp sipQtNetworkQNetworkConfigurationManagerCapabilities.cpp sipQtNetworkQMultiMap0100QSslAlternativeNameEntryType0100QString.cpp sipQtNetworkQList0100QDnsMailExchangeRecord.cpp sipQtNetworkQSsl.cpp sipQtNetworkQNetworkInterface.cpp sipQtNetworkQList0100QNetworkCookie.cpp sipQtNetworkQList0100QSslCertificateExtension.cpp sipQtNetworkQDnsMailExchangeRecord.cpp sipQtNetworkQNetworkConfigurationStateFlags.cpp sipQtNetworkQSslError.cpp
