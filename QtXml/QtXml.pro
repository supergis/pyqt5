TEMPLATE = lib
CONFIG += warn_on plugin
QT -= gui
QT += xml
CONFIG += release
CONFIG -= android_install

win32 {
    PY_MODULE = QtXml.pyd
    target.files = QtXml.pyd
    LIBS += -L/usr/lib/x86_64-linux-gnu -lpython3.4m
} else {
    PY_MODULE = QtXml.so
    target.files = QtXml.so
}

target.CONFIG = no_check_exist
target.path = /usr/lib/python3.4/site-packages/PyQt5
INSTALLS += target
sip.path = /usr/share/sip/PyQt5/QtXml
sip.files = ../sip/QtXml/QtXmlmod.sip ../sip/QtXml/qxml.sip ../sip/QtXml/qdom.sip
INSTALLS += sip
QMAKE_CXXFLAGS += -fno-exceptions
QMAKE_LFLAGS += -Wl,--version-script=QtXml.exp
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

TARGET = QtXml
HEADERS = sipAPIQtXml.h
SOURCES = sipQtXmlQXmlParseException.cpp sipQtXmlQDomDocumentFragment.cpp sipQtXmlQXmlLocator.cpp sipQtXmlQDomDocument.cpp sipQtXmlQXmlNamespaceSupport.cpp sipQtXmlQXmlDeclHandler.cpp sipQtXmlQXmlLexicalHandler.cpp sipQtXmlQDomDocumentType.cpp sipQtXmlQXmlDTDHandler.cpp sipQtXmlQDomEntityReference.cpp sipQtXmlQXmlContentHandler.cpp sipQtXmlQXmlDefaultHandler.cpp sipQtXmlQDomCDATASection.cpp sipQtXmlQDomNamedNodeMap.cpp sipQtXmlQXmlAttributes.cpp sipQtXmlQDomNotation.cpp sipQtXmlQDomNodeList.cpp sipQtXmlQXmlReader.cpp sipQtXmlcmodule.cpp sipQtXmlQDomProcessingInstruction.cpp sipQtXmlQDomEntity.cpp sipQtXmlQDomImplementation.cpp sipQtXmlQDomText.cpp sipQtXmlQXmlSimpleReader.cpp sipQtXmlQXmlErrorHandler.cpp sipQtXmlQDomCharacterData.cpp sipQtXmlQDomComment.cpp sipQtXmlQDomElement.cpp sipQtXmlQDomNode.cpp sipQtXmlQXmlInputSource.cpp sipQtXmlQDomAttr.cpp sipQtXmlQXmlEntityResolver.cpp
