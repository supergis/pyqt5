TEMPLATE = lib
CONFIG += warn_on plugin
QT += help
CONFIG += release
CONFIG -= android_install

win32 {
    PY_MODULE = QtHelp.pyd
    target.files = QtHelp.pyd
    LIBS += -L/usr/lib/x86_64-linux-gnu -lpython3.4m
} else {
    PY_MODULE = QtHelp.so
    target.files = QtHelp.so
}

target.CONFIG = no_check_exist
target.path = /usr/lib/python3.4/site-packages/PyQt5
INSTALLS += target
sip.path = /usr/share/sip/PyQt5/QtHelp
sip.files = ../sip/QtHelp/qhelpsearchquerywidget.sip ../sip/QtHelp/qhelpindexwidget.sip ../sip/QtHelp/qhelpenginecore.sip ../sip/QtHelp/qhelpsearchengine.sip ../sip/QtHelp/qhelpengine.sip ../sip/QtHelp/QtHelpmod.sip ../sip/QtHelp/qhelpsearchresultwidget.sip ../sip/QtHelp/qhelpcontentwidget.sip
INSTALLS += sip
QMAKE_CXXFLAGS += -fno-exceptions
QMAKE_LFLAGS += -Wl,--version-script=QtHelp.exp
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

TARGET = QtHelp
HEADERS = sipAPIQtHelp.h
SOURCES = sipQtHelpQHelpIndexWidget.cpp sipQtHelpQHelpEngine.cpp sipQtHelpQHelpContentItem.cpp sipQtHelpQHelpSearchQueryWidget.cpp sipQtHelpQHelpContentModel.cpp sipQtHelpQHelpSearchResultWidget.cpp sipQtHelpQHelpSearchEngine.cpp sipQtHelpQHelpSearchQuery.cpp sipQtHelpQList0100QHelpSearchQuery.cpp sipQtHelpQHelpEngineCore.cpp sipQtHelpcmodule.cpp sipQtHelpQHelpIndexModel.cpp sipQtHelpQMap0100QString0100QUrl.cpp sipQtHelpQList0100QStringList.cpp sipQtHelpQHelpContentWidget.cpp
