TEMPLATE = lib
CONFIG += warn_on plugin
QT -= gui
QT += xmlpatterns network
CONFIG += release
CONFIG -= android_install

win32 {
    PY_MODULE = QtXmlPatterns.pyd
    target.files = QtXmlPatterns.pyd
    LIBS += -L/usr/lib/x86_64-linux-gnu -lpython3.4m
} else {
    PY_MODULE = QtXmlPatterns.so
    target.files = QtXmlPatterns.so
}

target.CONFIG = no_check_exist
target.path = /usr/lib/python3.4/site-packages/PyQt5
INSTALLS += target
sip.path = /usr/share/sip/PyQt5/QtXmlPatterns
sip.files = ../sip/QtXmlPatterns/qxmlserializer.sip ../sip/QtXmlPatterns/qsimplexmlnodemodel.sip ../sip/QtXmlPatterns/qxmlformatter.sip ../sip/QtXmlPatterns/QtXmlPatternsmod.sip ../sip/QtXmlPatterns/qxmlresultitems.sip ../sip/QtXmlPatterns/qsourcelocation.sip ../sip/QtXmlPatterns/qabstractxmlnodemodel.sip ../sip/QtXmlPatterns/qxmlschema.sip ../sip/QtXmlPatterns/qabstractxmlreceiver.sip ../sip/QtXmlPatterns/qxmlnamepool.sip ../sip/QtXmlPatterns/qabstracturiresolver.sip ../sip/QtXmlPatterns/qxmlquery.sip ../sip/QtXmlPatterns/qabstractmessagehandler.sip ../sip/QtXmlPatterns/qxmlname.sip ../sip/QtXmlPatterns/qxmlschemavalidator.sip
INSTALLS += sip
QMAKE_CXXFLAGS += -fno-exceptions
QMAKE_LFLAGS += -Wl,--version-script=QtXmlPatterns.exp
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

TARGET = QtXmlPatterns
HEADERS = sipAPIQtXmlPatterns.h
SOURCES = sipQtXmlPatternscmodule.cpp sipQtXmlPatternsQSimpleXmlNodeModel.cpp sipQtXmlPatternsQXmlQuery.cpp sipQtXmlPatternsQXmlItem.cpp sipQtXmlPatternsQAbstractUriResolver.cpp sipQtXmlPatternsQXmlSchemaValidator.cpp sipQtXmlPatternsQXmlSerializer.cpp sipQtXmlPatternsQXmlName.cpp sipQtXmlPatternsQXmlFormatter.cpp sipQtXmlPatternsQVector0100QXmlNodeModelIndex.cpp sipQtXmlPatternsQAbstractXmlReceiver.cpp sipQtXmlPatternsQXmlNamePool.cpp sipQtXmlPatternsQXmlNodeModelIndex.cpp sipQtXmlPatternsQAbstractXmlNodeModel.cpp sipQtXmlPatternsQVector0100QXmlName.cpp sipQtXmlPatternsQXmlSchema.cpp sipQtXmlPatternsQAbstractMessageHandler.cpp sipQtXmlPatternsQXmlResultItems.cpp sipQtXmlPatternsQSourceLocation.cpp
