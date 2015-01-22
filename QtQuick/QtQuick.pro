TEMPLATE = lib
CONFIG += warn_on plugin
QT += quick
CONFIG += release
CONFIG -= android_install

win32 {
    PY_MODULE = QtQuick.pyd
    target.files = QtQuick.pyd
    LIBS += -L/usr/lib/x86_64-linux-gnu -lpython3.4m
} else {
    PY_MODULE = QtQuick.so
    target.files = QtQuick.so
}

target.CONFIG = no_check_exist
target.path = /usr/lib/python3.4/site-packages/PyQt5
INSTALLS += target
sip.path = /usr/share/sip/PyQt5/QtQuick
sip.files = ../sip/QtQuick/qquicktextdocument.sip ../sip/QtQuick/qquickrendercontrol.sip ../sip/QtQuick/qsgflatcolormaterial.sip ../sip/QtQuick/qquickimageprovider.sip ../sip/QtQuick/qquickframebufferobject.sip ../sip/QtQuick/qsgengine.sip ../sip/QtQuick/qquickitemgrabresult.sip ../sip/QtQuick/qquickitem.sip ../sip/QtQuick/qsgtexturematerial.sip ../sip/QtQuick/qsgmaterial.sip ../sip/QtQuick/qsgtexture.sip ../sip/QtQuick/QtQuickmod.sip ../sip/QtQuick/qsggeometry.sip ../sip/QtQuick/qsgsimpletexturenode.sip ../sip/QtQuick/qsgabstractrenderer.sip ../sip/QtQuick/qquickview.sip ../sip/QtQuick/qsgsimplerectnode.sip ../sip/QtQuick/qquickpainteditem.sip ../sip/QtQuick/qsgtextureprovider.sip ../sip/QtQuick/qquickwindow.sip ../sip/QtQuick/qsgnode.sip ../sip/QtQuick/qsgvertexcolormaterial.sip
INSTALLS += sip
QMAKE_CXXFLAGS += -fno-exceptions
QMAKE_LFLAGS += -Wl,--version-script=QtQuick.exp
DEFINES += SIP_PROTECTED_IS_PUBLIC protected=public
INCLUDEPATH += .
INCLUDEPATH += /usr/include/python3.4m
INCLUDEPATH += ../qpy/QtQuick

win32 {
    QMAKE_POST_LINK = $(COPY_FILE) $(DESTDIR_TARGET) $$PY_MODULE
} else {
    QMAKE_POST_LINK = $(COPY_FILE) $(TARGET) $$PY_MODULE
}
macx {
    QMAKE_LFLAGS += "-undefined dynamic_lookup"
    QMAKE_LFLAGS += "-install_name $$absolute_path($$PY_MODULE, $$target.path)"
}

TARGET = QtQuick
HEADERS = sipAPIQtQuick.h ../qpy/QtQuick/qpyquick_register_type.h ../qpy/QtQuick/qpyquickitem.h ../qpy/QtQuick/qpyquick_api.h ../qpy/QtQuick/qpyquick_chimera_helpers.h ../qpy/QtQuick/qpyquickpainteditem.h
SOURCES = sipQtQuickQSGSimpleTextureNode.cpp sipQtQuickQSGTexture.cpp sipQtQuickQSGTextureMaterial.cpp sipQtQuickQSGMaterialShaderRenderStateDirtyStates.cpp sipQtQuickQSGClipNode.cpp sipQtQuickQSGTextureProvider.cpp sipQtQuickQSGAbstractRendererClearMode.cpp sipQtQuickQQuickItemItemChangeData.cpp sipQtQuickQQuickRenderControl.cpp sipQtQuickQSGSimpleTextureNodeTextureCoordinatesTransformMode.cpp sipQtQuickcmodule.cpp sipQtQuickQQuickItemFlags.cpp sipQtQuickQSGMaterialFlags.cpp sipQtQuickQQuickItemUpdatePaintNodeData.cpp sipQtQuickQSGGeometryNode.cpp sipQtQuickQSGSimpleRectNode.cpp sipQtQuickQSGTransformNode.cpp sipQtQuickQSGGeometry.cpp sipQtQuickQQuickPaintedItemPerformanceHints.cpp sipQtQuickQQuickTextureFactory.cpp sipQtQuickQSGGeometryPoint2D.cpp sipQtQuickQSGOpacityNode.cpp sipQtQuickQSGBasicGeometryNode.cpp sipQtQuickQSGFlatColorMaterial.cpp sipQtQuickQQuickTextDocument.cpp sipQtQuickQQuickImageProvider.cpp sipQtQuickQQuickFramebufferObjectRenderer.cpp sipQtQuickQSGNodeFlags.cpp sipQtQuickQList0101QQuickItem.cpp sipQtQuickQSGNode.cpp sipQtQuickQSGMaterialShaderRenderState.cpp sipQtQuickQSGGeometryTexturedPoint2D.cpp sipQtQuickQSGMaterialType.cpp sipQtQuickQQuickFramebufferObject.cpp sipQtQuickQSGVertexColorMaterial.cpp sipQtQuickQQuickItem.cpp sipQtQuickQSGMaterialShader.cpp sipQtQuickQSGGeometryColoredPoint2D.cpp sipQtQuickQSGGeometryAttribute.cpp sipQtQuickQSGOpaqueTextureMaterial.cpp sipQtQuickQSGAbstractRenderer.cpp sipQtQuickQSGNodeDirtyState.cpp sipQtQuickQQuickPaintedItem.cpp sipQtQuickQSGGeometryAttributeSet.cpp sipQtQuickQQuickView.cpp sipQtQuickQQuickItemGrabResult.cpp sipQtQuickQSGMaterial.cpp sipQtQuickQSGEngine.cpp sipQtQuickQSGDynamicTexture.cpp sipQtQuickQQuickWindowCreateTextureOptions.cpp sipQtQuickQSGEngineCreateTextureOptions.cpp sipQtQuickQQuickWindow.cpp ../qpy/QtQuick/qpyquickpainteditem.cpp ../qpy/QtQuick/qpyquick_post_init.cpp ../qpy/QtQuick/qpyquick_register_type.cpp ../qpy/QtQuick/qpyquick_chimera_helpers.cpp ../qpy/QtQuick/qpyquickitem.cpp
