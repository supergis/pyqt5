TEMPLATE = lib
CONFIG += warn_on plugin
QT += designer
CONFIG += release
CONFIG -= android_install

win32 {
    PY_MODULE = QtDesigner.pyd
    target.files = QtDesigner.pyd
    LIBS += -L/usr/lib/x86_64-linux-gnu -lpython3.4m
} else {
    PY_MODULE = QtDesigner.so
    target.files = QtDesigner.so
}

target.CONFIG = no_check_exist
target.path = /usr/lib/python3.4/site-packages/PyQt5
INSTALLS += target
sip.path = /usr/share/sip/PyQt5/QtDesigner
sip.files = ../sip/QtDesigner/customwidget.sip ../sip/QtDesigner/container.sip ../sip/QtDesigner/qpydesignermembersheetextension.sip ../sip/QtDesigner/qpydesignercustomwidgetcollectionplugin.sip ../sip/QtDesigner/formbuilder.sip ../sip/QtDesigner/abstractformbuilder.sip ../sip/QtDesigner/abstractformwindow.sip ../sip/QtDesigner/abstractobjectinspector.sip ../sip/QtDesigner/qpydesignertaskmenuextension.sip ../sip/QtDesigner/qpydesignerpropertysheetextension.sip ../sip/QtDesigner/qextensionmanager.sip ../sip/QtDesigner/abstractpropertyeditor.sip ../sip/QtDesigner/taskmenu.sip ../sip/QtDesigner/default_extensionfactory.sip ../sip/QtDesigner/abstractformeditor.sip ../sip/QtDesigner/abstractactioneditor.sip ../sip/QtDesigner/propertysheet.sip ../sip/QtDesigner/qpydesignercontainerextension.sip ../sip/QtDesigner/abstractwidgetbox.sip ../sip/QtDesigner/membersheet.sip ../sip/QtDesigner/abstractformwindowmanager.sip ../sip/QtDesigner/qpydesignercustomwidgetplugin.sip ../sip/QtDesigner/abstractformwindowcursor.sip ../sip/QtDesigner/extension.sip ../sip/QtDesigner/QtDesignermod.sip
INSTALLS += sip
QMAKE_CXXFLAGS += -fno-exceptions
QMAKE_LFLAGS += -Wl,--version-script=QtDesigner.exp
DEFINES += SIP_PROTECTED_IS_PUBLIC protected=public
INCLUDEPATH += .
INCLUDEPATH += /usr/include/python3.4m
INCLUDEPATH += ../qpy/QtDesigner

win32 {
    QMAKE_POST_LINK = $(COPY_FILE) $(DESTDIR_TARGET) $$PY_MODULE
} else {
    QMAKE_POST_LINK = $(COPY_FILE) $(TARGET) $$PY_MODULE
}
macx {
    QMAKE_LFLAGS += "-undefined dynamic_lookup"
    QMAKE_LFLAGS += "-install_name $$absolute_path($$PY_MODULE, $$target.path)"
}

TARGET = QtDesigner
HEADERS = sipAPIQtDesigner.h ../qpy/QtDesigner/qpydesignerpropertysheetextension.h ../qpy/QtDesigner/qpydesignertaskmenuextension.h ../qpy/QtDesigner/qpydesignermembersheetextension.h ../qpy/QtDesigner/qpydesignercustomwidgetplugin.h ../qpy/QtDesigner/qpydesignercontainerextension.h ../qpy/QtDesigner/qpydesignercustomwidgetcollectionplugin.h
SOURCES = sipQtDesignerQDesignerFormWindowInterface.cpp sipQtDesignerQPyDesignerCustomWidgetPlugin.cpp sipQtDesignerQDesignerFormWindowManagerInterface.cpp sipQtDesignerQDesignerCustomWidgetInterface.cpp sipQtDesignerQDesignerPropertySheetExtension.cpp sipQtDesignerQAbstractExtensionFactory.cpp sipQtDesignerQDesignerTaskMenuExtension.cpp sipQtDesignerQDesignerFormWindowCursorInterface.cpp sipQtDesignerQDesignerCustomWidgetCollectionInterface.cpp sipQtDesignerQList0101QDesignerCustomWidgetInterface.cpp sipQtDesignerQDesignerMemberSheetExtension.cpp sipQtDesignerQExtensionFactory.cpp sipQtDesignerQPyDesignerMemberSheetExtension.cpp sipQtDesignerQDesignerFormEditorInterface.cpp sipQtDesignerQDesignerFormWindowInterfaceFeature.cpp sipQtDesignerQDesignerContainerExtension.cpp sipQtDesignerQPyDesignerPropertySheetExtension.cpp sipQtDesignerQDesignerWidgetBoxInterface.cpp sipQtDesignerQDesignerPropertyEditorInterface.cpp sipQtDesignerQPyDesignerCustomWidgetCollectionPlugin.cpp sipQtDesignerQExtensionManager.cpp sipQtDesignerQDesignerActionEditorInterface.cpp sipQtDesignerQFormBuilder.cpp sipQtDesignerQPyDesignerContainerExtension.cpp sipQtDesignerQAbstractFormBuilder.cpp sipQtDesignerQAbstractExtensionManager.cpp sipQtDesignerQDesignerObjectInspectorInterface.cpp sipQtDesignerQPyDesignerTaskMenuExtension.cpp sipQtDesignercmodule.cpp
