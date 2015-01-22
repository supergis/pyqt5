TEMPLATE = lib
CONFIG += warn_on plugin
QT += qml
CONFIG += release
CONFIG -= android_install

win32 {
    PY_MODULE = QtQml.pyd
    target.files = QtQml.pyd
    LIBS += -L/usr/lib/x86_64-linux-gnu -lpython3.4m
} else {
    PY_MODULE = QtQml.so
    target.files = QtQml.so
}

target.CONFIG = no_check_exist
target.path = /usr/lib/python3.4/site-packages/PyQt5
INSTALLS += target
sip.path = /usr/share/sip/PyQt5/QtQml
sip.files = ../sip/QtQml/qqmlengine.sip ../sip/QtQml/qqmlincubator.sip ../sip/QtQml/qqmlfileselector.sip ../sip/QtQml/qqmlproperty.sip ../sip/QtQml/qjsvalueiterator.sip ../sip/QtQml/qmlattachedpropertiesobject.sip ../sip/QtQml/qqmlapplicationengine.sip ../sip/QtQml/qqmlexpression.sip ../sip/QtQml/qqmlpropertyvaluesource.sip ../sip/QtQml/qjsengine.sip ../sip/QtQml/qjsvalue.sip ../sip/QtQml/qqmlerror.sip ../sip/QtQml/qqmlcontext.sip ../sip/QtQml/qqmlscriptstring.sip ../sip/QtQml/qmlregistertype.sip ../sip/QtQml/qqmlcomponent.sip ../sip/QtQml/QtQmlmod.sip ../sip/QtQml/qqmlabstracturlinterceptor.sip ../sip/QtQml/qpyqmllistproperty.sip ../sip/QtQml/qqmlextensionplugin.sip ../sip/QtQml/qqmlparserstatus.sip ../sip/QtQml/qqmlnetworkaccessmanagerfactory.sip ../sip/QtQml/qqmllist.sip ../sip/QtQml/qqmlpropertymap.sip
INSTALLS += sip
QMAKE_CXXFLAGS += -fno-exceptions
QMAKE_LFLAGS += -Wl,--version-script=QtQml.exp
DEFINES += SIP_PROTECTED_IS_PUBLIC protected=public
INCLUDEPATH += .
INCLUDEPATH += /usr/include/python3.4m
INCLUDEPATH += ../qpy/QtQml

win32 {
    QMAKE_POST_LINK = $(COPY_FILE) $(DESTDIR_TARGET) $$PY_MODULE
} else {
    QMAKE_POST_LINK = $(COPY_FILE) $(TARGET) $$PY_MODULE
}
macx {
    QMAKE_LFLAGS += "-undefined dynamic_lookup"
    QMAKE_LFLAGS += "-install_name $$absolute_path($$PY_MODULE, $$target.path)"
}

TARGET = QtQml
HEADERS = sipAPIQtQml.h ../qpy/QtQml/qpyqml_api.h ../qpy/QtQml/qpyqmlobject.h ../qpy/QtQml/qpyqmlsingletonobject.h ../qpy/QtQml/qpyqmllistproperty.h ../qpy/QtQml/qpyqml_listdata.h
SOURCES = sipQtQmlQQmlContext.cpp sipQtQmlQQmlExpression.cpp sipQtQmlQQmlApplicationEngine.cpp sipQtQmlQQmlPropertyValueSource.cpp sipQtQmlQQmlListReference.cpp sipQtQmlQQmlImageProviderBaseFlags.cpp sipQtQmlQQmlProperty.cpp sipQtQmlQList0100QQmlProperty.cpp sipQtQmlQQmlComponent.cpp sipQtQmlQQmlFileSelector.cpp sipQtQmlQQmlEngine.cpp sipQtQmlQQmlNetworkAccessManagerFactory.cpp sipQtQmlQJSValueIterator.cpp sipQtQmlQQmlParserStatus.cpp sipQtQmlQQmlListProperty0100QObject.cpp sipQtQmlQQmlIncubationController.cpp sipQtQmlQQmlPropertyMap.cpp sipQtQmlQList0100QQmlError.cpp sipQtQmlQQmlExtensionPlugin.cpp sipQtQmlQJSEngine.cpp sipQtQmlcmodule.cpp sipQtQmlQQmlIncubator.cpp sipQtQmlQQmlError.cpp sipQtQmlQList0100QJSValue.cpp sipQtQmlQQmlAbstractUrlInterceptor.cpp sipQtQmlQQmlScriptString.cpp sipQtQmlQQmlImageProviderBase.cpp sipQtQmlQJSValue.cpp ../qpy/QtQml/qpyqml_register_singleton_type.cpp ../qpy/QtQml/qpyqmllistproperty.cpp ../qpy/QtQml/qpyqml_listdata.cpp ../qpy/QtQml/qpyqml_qjsvalue.cpp ../qpy/QtQml/qpyqml_register_type.cpp ../qpy/QtQml/qpyqmlsingletonobject.cpp ../qpy/QtQml/qpyqmlobject.cpp ../qpy/QtQml/qpyqml_post_init.cpp
