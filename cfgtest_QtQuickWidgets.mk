#############################################################################
# Makefile for building: cfgtest_QtQuickWidgets
# Generated by qmake (3.0) (Qt 5.4.0)
# Project:  cfgtest_QtQuickWidgets.pro
# Template: app
# Command: /opt/Qt5.4.0/5.4/gcc_64/bin/qmake -o cfgtest_QtQuickWidgets.mk cfgtest_QtQuickWidgets.pro
#############################################################################

MAKEFILE      = cfgtest_QtQuickWidgets.mk

####### Compiler, tools and options

CC            = gcc
CXX           = g++
DEFINES       = -DQT_NO_DEBUG -DQT_QUICKWIDGETS_LIB -DQT_QUICK_LIB -DQT_WIDGETS_LIB -DQT_GUI_LIB -DQT_QML_LIB -DQT_NETWORK_LIB -DQT_CORE_LIB
CFLAGS        = -pipe -O2 -Wall -W -D_REENTRANT -fPIE $(DEFINES)
CXXFLAGS      = -pipe -O2 -Wall -W -D_REENTRANT -fPIE $(DEFINES)
INCPATH       = -I/opt/Qt5.4.0/5.4/gcc_64/mkspecs/linux-g++ -I. -I/opt/Qt5.4.0/5.4/gcc_64/include -I/opt/Qt5.4.0/5.4/gcc_64/include/QtQuickWidgets -I/opt/Qt5.4.0/5.4/gcc_64/include/QtQuick -I/opt/Qt5.4.0/5.4/gcc_64/include/QtWidgets -I/opt/Qt5.4.0/5.4/gcc_64/include/QtGui -I/opt/Qt5.4.0/5.4/gcc_64/include/QtQml -I/opt/Qt5.4.0/5.4/gcc_64/include/QtNetwork -I/opt/Qt5.4.0/5.4/gcc_64/include/QtCore -I.
QMAKE         = /opt/Qt5.4.0/5.4/gcc_64/bin/qmake
DEL_FILE      = rm -f
CHK_DIR_EXISTS= test -d
MKDIR         = mkdir -p
COPY          = cp -f
COPY_FILE     = cp -f
COPY_DIR      = cp -f -R
INSTALL_FILE  = install -m 644 -p
INSTALL_PROGRAM = install -m 755 -p
INSTALL_DIR   = $(COPY_DIR)
DEL_FILE      = rm -f
SYMLINK       = ln -f -s
DEL_DIR       = rmdir
MOVE          = mv -f
TAR           = tar -cf
COMPRESS      = gzip -9f
DISTNAME      = cfgtest_QtQuickWidgets1.0.0
DISTDIR = /home/supermap/OpenThings/pyqt5/.tmp/cfgtest_QtQuickWidgets1.0.0
LINK          = g++
LFLAGS        = -Wl,-O1 -Wl,-rpath,/opt/Qt5.4.0/5.4/gcc_64 -Wl,-rpath,/opt/Qt5.4.0/5.4/gcc_64/lib
LIBS          = $(SUBLIBS) -L/opt/Qt5.4.0/5.4/gcc_64/lib -lQt5QuickWidgets -lQt5Quick -lQt5Widgets -lQt5Gui -lQt5Qml -lQt5Network -lQt5Core -lGL -lpthread 
AR            = ar cqs
RANLIB        = 
SED           = sed
STRIP         = strip

####### Output directory

OBJECTS_DIR   = ./

####### Files

SOURCES       = cfgtest_QtQuickWidgets.cpp 
OBJECTS       = cfgtest_QtQuickWidgets.o
DIST          = /opt/Qt5.4.0/5.4/gcc_64/mkspecs/features/spec_pre.prf \
		/opt/Qt5.4.0/5.4/gcc_64/mkspecs/common/shell-unix.conf \
		/opt/Qt5.4.0/5.4/gcc_64/mkspecs/common/unix.conf \
		/opt/Qt5.4.0/5.4/gcc_64/mkspecs/common/linux.conf \
		/opt/Qt5.4.0/5.4/gcc_64/mkspecs/common/gcc-base.conf \
		/opt/Qt5.4.0/5.4/gcc_64/mkspecs/common/gcc-base-unix.conf \
		/opt/Qt5.4.0/5.4/gcc_64/mkspecs/common/g++-base.conf \
		/opt/Qt5.4.0/5.4/gcc_64/mkspecs/common/g++-unix.conf \
		/opt/Qt5.4.0/5.4/gcc_64/mkspecs/qconfig.pri \
		/opt/Qt5.4.0/5.4/gcc_64/mkspecs/modules/qt_lib_bluetooth.pri \
		/opt/Qt5.4.0/5.4/gcc_64/mkspecs/modules/qt_lib_bluetooth_private.pri \
		/opt/Qt5.4.0/5.4/gcc_64/mkspecs/modules/qt_lib_bootstrap_private.pri \
		/opt/Qt5.4.0/5.4/gcc_64/mkspecs/modules/qt_lib_clucene_private.pri \
		/opt/Qt5.4.0/5.4/gcc_64/mkspecs/modules/qt_lib_concurrent.pri \
		/opt/Qt5.4.0/5.4/gcc_64/mkspecs/modules/qt_lib_concurrent_private.pri \
		/opt/Qt5.4.0/5.4/gcc_64/mkspecs/modules/qt_lib_core.pri \
		/opt/Qt5.4.0/5.4/gcc_64/mkspecs/modules/qt_lib_core_private.pri \
		/opt/Qt5.4.0/5.4/gcc_64/mkspecs/modules/qt_lib_dbus.pri \
		/opt/Qt5.4.0/5.4/gcc_64/mkspecs/modules/qt_lib_dbus_private.pri \
		/opt/Qt5.4.0/5.4/gcc_64/mkspecs/modules/qt_lib_declarative.pri \
		/opt/Qt5.4.0/5.4/gcc_64/mkspecs/modules/qt_lib_declarative_private.pri \
		/opt/Qt5.4.0/5.4/gcc_64/mkspecs/modules/qt_lib_designer.pri \
		/opt/Qt5.4.0/5.4/gcc_64/mkspecs/modules/qt_lib_designer_private.pri \
		/opt/Qt5.4.0/5.4/gcc_64/mkspecs/modules/qt_lib_designercomponents_private.pri \
		/opt/Qt5.4.0/5.4/gcc_64/mkspecs/modules/qt_lib_enginio.pri \
		/opt/Qt5.4.0/5.4/gcc_64/mkspecs/modules/qt_lib_enginio_private.pri \
		/opt/Qt5.4.0/5.4/gcc_64/mkspecs/modules/qt_lib_gui.pri \
		/opt/Qt5.4.0/5.4/gcc_64/mkspecs/modules/qt_lib_gui_private.pri \
		/opt/Qt5.4.0/5.4/gcc_64/mkspecs/modules/qt_lib_help.pri \
		/opt/Qt5.4.0/5.4/gcc_64/mkspecs/modules/qt_lib_help_private.pri \
		/opt/Qt5.4.0/5.4/gcc_64/mkspecs/modules/qt_lib_location.pri \
		/opt/Qt5.4.0/5.4/gcc_64/mkspecs/modules/qt_lib_location_private.pri \
		/opt/Qt5.4.0/5.4/gcc_64/mkspecs/modules/qt_lib_multimedia.pri \
		/opt/Qt5.4.0/5.4/gcc_64/mkspecs/modules/qt_lib_multimedia_private.pri \
		/opt/Qt5.4.0/5.4/gcc_64/mkspecs/modules/qt_lib_multimediawidgets.pri \
		/opt/Qt5.4.0/5.4/gcc_64/mkspecs/modules/qt_lib_multimediawidgets_private.pri \
		/opt/Qt5.4.0/5.4/gcc_64/mkspecs/modules/qt_lib_network.pri \
		/opt/Qt5.4.0/5.4/gcc_64/mkspecs/modules/qt_lib_network_private.pri \
		/opt/Qt5.4.0/5.4/gcc_64/mkspecs/modules/qt_lib_nfc.pri \
		/opt/Qt5.4.0/5.4/gcc_64/mkspecs/modules/qt_lib_nfc_private.pri \
		/opt/Qt5.4.0/5.4/gcc_64/mkspecs/modules/qt_lib_opengl.pri \
		/opt/Qt5.4.0/5.4/gcc_64/mkspecs/modules/qt_lib_opengl_private.pri \
		/opt/Qt5.4.0/5.4/gcc_64/mkspecs/modules/qt_lib_openglextensions.pri \
		/opt/Qt5.4.0/5.4/gcc_64/mkspecs/modules/qt_lib_openglextensions_private.pri \
		/opt/Qt5.4.0/5.4/gcc_64/mkspecs/modules/qt_lib_platformsupport_private.pri \
		/opt/Qt5.4.0/5.4/gcc_64/mkspecs/modules/qt_lib_positioning.pri \
		/opt/Qt5.4.0/5.4/gcc_64/mkspecs/modules/qt_lib_positioning_private.pri \
		/opt/Qt5.4.0/5.4/gcc_64/mkspecs/modules/qt_lib_printsupport.pri \
		/opt/Qt5.4.0/5.4/gcc_64/mkspecs/modules/qt_lib_printsupport_private.pri \
		/opt/Qt5.4.0/5.4/gcc_64/mkspecs/modules/qt_lib_qml.pri \
		/opt/Qt5.4.0/5.4/gcc_64/mkspecs/modules/qt_lib_qml_private.pri \
		/opt/Qt5.4.0/5.4/gcc_64/mkspecs/modules/qt_lib_qmldevtools_private.pri \
		/opt/Qt5.4.0/5.4/gcc_64/mkspecs/modules/qt_lib_qmltest.pri \
		/opt/Qt5.4.0/5.4/gcc_64/mkspecs/modules/qt_lib_qmltest_private.pri \
		/opt/Qt5.4.0/5.4/gcc_64/mkspecs/modules/qt_lib_qtmultimediaquicktools_private.pri \
		/opt/Qt5.4.0/5.4/gcc_64/mkspecs/modules/qt_lib_quick.pri \
		/opt/Qt5.4.0/5.4/gcc_64/mkspecs/modules/qt_lib_quick_private.pri \
		/opt/Qt5.4.0/5.4/gcc_64/mkspecs/modules/qt_lib_quickparticles_private.pri \
		/opt/Qt5.4.0/5.4/gcc_64/mkspecs/modules/qt_lib_quickwidgets.pri \
		/opt/Qt5.4.0/5.4/gcc_64/mkspecs/modules/qt_lib_quickwidgets_private.pri \
		/opt/Qt5.4.0/5.4/gcc_64/mkspecs/modules/qt_lib_script.pri \
		/opt/Qt5.4.0/5.4/gcc_64/mkspecs/modules/qt_lib_script_private.pri \
		/opt/Qt5.4.0/5.4/gcc_64/mkspecs/modules/qt_lib_scripttools.pri \
		/opt/Qt5.4.0/5.4/gcc_64/mkspecs/modules/qt_lib_scripttools_private.pri \
		/opt/Qt5.4.0/5.4/gcc_64/mkspecs/modules/qt_lib_sensors.pri \
		/opt/Qt5.4.0/5.4/gcc_64/mkspecs/modules/qt_lib_sensors_private.pri \
		/opt/Qt5.4.0/5.4/gcc_64/mkspecs/modules/qt_lib_serialport.pri \
		/opt/Qt5.4.0/5.4/gcc_64/mkspecs/modules/qt_lib_serialport_private.pri \
		/opt/Qt5.4.0/5.4/gcc_64/mkspecs/modules/qt_lib_sql.pri \
		/opt/Qt5.4.0/5.4/gcc_64/mkspecs/modules/qt_lib_sql_private.pri \
		/opt/Qt5.4.0/5.4/gcc_64/mkspecs/modules/qt_lib_svg.pri \
		/opt/Qt5.4.0/5.4/gcc_64/mkspecs/modules/qt_lib_svg_private.pri \
		/opt/Qt5.4.0/5.4/gcc_64/mkspecs/modules/qt_lib_testlib.pri \
		/opt/Qt5.4.0/5.4/gcc_64/mkspecs/modules/qt_lib_testlib_private.pri \
		/opt/Qt5.4.0/5.4/gcc_64/mkspecs/modules/qt_lib_uitools.pri \
		/opt/Qt5.4.0/5.4/gcc_64/mkspecs/modules/qt_lib_uitools_private.pri \
		/opt/Qt5.4.0/5.4/gcc_64/mkspecs/modules/qt_lib_webchannel.pri \
		/opt/Qt5.4.0/5.4/gcc_64/mkspecs/modules/qt_lib_webchannel_private.pri \
		/opt/Qt5.4.0/5.4/gcc_64/mkspecs/modules/qt_lib_webengine.pri \
		/opt/Qt5.4.0/5.4/gcc_64/mkspecs/modules/qt_lib_webengine_private.pri \
		/opt/Qt5.4.0/5.4/gcc_64/mkspecs/modules/qt_lib_webenginecore.pri \
		/opt/Qt5.4.0/5.4/gcc_64/mkspecs/modules/qt_lib_webenginecore_private.pri \
		/opt/Qt5.4.0/5.4/gcc_64/mkspecs/modules/qt_lib_webenginewidgets.pri \
		/opt/Qt5.4.0/5.4/gcc_64/mkspecs/modules/qt_lib_webenginewidgets_private.pri \
		/opt/Qt5.4.0/5.4/gcc_64/mkspecs/modules/qt_lib_webkit.pri \
		/opt/Qt5.4.0/5.4/gcc_64/mkspecs/modules/qt_lib_webkit_private.pri \
		/opt/Qt5.4.0/5.4/gcc_64/mkspecs/modules/qt_lib_webkitwidgets.pri \
		/opt/Qt5.4.0/5.4/gcc_64/mkspecs/modules/qt_lib_webkitwidgets_private.pri \
		/opt/Qt5.4.0/5.4/gcc_64/mkspecs/modules/qt_lib_websockets.pri \
		/opt/Qt5.4.0/5.4/gcc_64/mkspecs/modules/qt_lib_websockets_private.pri \
		/opt/Qt5.4.0/5.4/gcc_64/mkspecs/modules/qt_lib_webview.pri \
		/opt/Qt5.4.0/5.4/gcc_64/mkspecs/modules/qt_lib_webview_private.pri \
		/opt/Qt5.4.0/5.4/gcc_64/mkspecs/modules/qt_lib_widgets.pri \
		/opt/Qt5.4.0/5.4/gcc_64/mkspecs/modules/qt_lib_widgets_private.pri \
		/opt/Qt5.4.0/5.4/gcc_64/mkspecs/modules/qt_lib_x11extras.pri \
		/opt/Qt5.4.0/5.4/gcc_64/mkspecs/modules/qt_lib_x11extras_private.pri \
		/opt/Qt5.4.0/5.4/gcc_64/mkspecs/modules/qt_lib_xml.pri \
		/opt/Qt5.4.0/5.4/gcc_64/mkspecs/modules/qt_lib_xml_private.pri \
		/opt/Qt5.4.0/5.4/gcc_64/mkspecs/modules/qt_lib_xmlpatterns.pri \
		/opt/Qt5.4.0/5.4/gcc_64/mkspecs/modules/qt_lib_xmlpatterns_private.pri \
		/opt/Qt5.4.0/5.4/gcc_64/mkspecs/features/qt_functions.prf \
		/opt/Qt5.4.0/5.4/gcc_64/mkspecs/features/qt_config.prf \
		/opt/Qt5.4.0/5.4/gcc_64/mkspecs/linux-g++/qmake.conf \
		/opt/Qt5.4.0/5.4/gcc_64/mkspecs/features/spec_post.prf \
		/opt/Qt5.4.0/5.4/gcc_64/mkspecs/features/exclusive_builds.prf \
		/opt/Qt5.4.0/5.4/gcc_64/mkspecs/features/default_pre.prf \
		/opt/Qt5.4.0/5.4/gcc_64/mkspecs/features/resolve_config.prf \
		/opt/Qt5.4.0/5.4/gcc_64/mkspecs/features/default_post.prf \
		/opt/Qt5.4.0/5.4/gcc_64/mkspecs/features/warn_on.prf \
		/opt/Qt5.4.0/5.4/gcc_64/mkspecs/features/qt.prf \
		/opt/Qt5.4.0/5.4/gcc_64/mkspecs/features/resources.prf \
		/opt/Qt5.4.0/5.4/gcc_64/mkspecs/features/moc.prf \
		/opt/Qt5.4.0/5.4/gcc_64/mkspecs/features/unix/opengl.prf \
		/opt/Qt5.4.0/5.4/gcc_64/mkspecs/features/uic.prf \
		/opt/Qt5.4.0/5.4/gcc_64/mkspecs/features/unix/thread.prf \
		/opt/Qt5.4.0/5.4/gcc_64/mkspecs/features/testcase_targets.prf \
		/opt/Qt5.4.0/5.4/gcc_64/mkspecs/features/exceptions.prf \
		/opt/Qt5.4.0/5.4/gcc_64/mkspecs/features/yacc.prf \
		/opt/Qt5.4.0/5.4/gcc_64/mkspecs/features/lex.prf \
		cfgtest_QtQuickWidgets.pro  cfgtest_QtQuickWidgets.cpp
QMAKE_TARGET  = cfgtest_QtQuickWidgets
DESTDIR       = #avoid trailing-slash linebreak
TARGET        = cfgtest_QtQuickWidgets


first: all
####### Implicit rules

.SUFFIXES: .o .c .cpp .cc .cxx .C

.cpp.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.cc.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.cxx.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.C.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.c.o:
	$(CC) -c $(CFLAGS) $(INCPATH) -o "$@" "$<"

####### Build rules

$(TARGET):  $(OBJECTS)  
	$(LINK) $(LFLAGS) -o $(TARGET) $(OBJECTS) $(OBJCOMP) $(LIBS)

cfgtest_QtQuickWidgets.mk: cfgtest_QtQuickWidgets.pro /opt/Qt5.4.0/5.4/gcc_64/mkspecs/linux-g++/qmake.conf /opt/Qt5.4.0/5.4/gcc_64/mkspecs/features/spec_pre.prf \
		/opt/Qt5.4.0/5.4/gcc_64/mkspecs/common/shell-unix.conf \
		/opt/Qt5.4.0/5.4/gcc_64/mkspecs/common/unix.conf \
		/opt/Qt5.4.0/5.4/gcc_64/mkspecs/common/linux.conf \
		/opt/Qt5.4.0/5.4/gcc_64/mkspecs/common/gcc-base.conf \
		/opt/Qt5.4.0/5.4/gcc_64/mkspecs/common/gcc-base-unix.conf \
		/opt/Qt5.4.0/5.4/gcc_64/mkspecs/common/g++-base.conf \
		/opt/Qt5.4.0/5.4/gcc_64/mkspecs/common/g++-unix.conf \
		/opt/Qt5.4.0/5.4/gcc_64/mkspecs/qconfig.pri \
		/opt/Qt5.4.0/5.4/gcc_64/mkspecs/modules/qt_lib_bluetooth.pri \
		/opt/Qt5.4.0/5.4/gcc_64/mkspecs/modules/qt_lib_bluetooth_private.pri \
		/opt/Qt5.4.0/5.4/gcc_64/mkspecs/modules/qt_lib_bootstrap_private.pri \
		/opt/Qt5.4.0/5.4/gcc_64/mkspecs/modules/qt_lib_clucene_private.pri \
		/opt/Qt5.4.0/5.4/gcc_64/mkspecs/modules/qt_lib_concurrent.pri \
		/opt/Qt5.4.0/5.4/gcc_64/mkspecs/modules/qt_lib_concurrent_private.pri \
		/opt/Qt5.4.0/5.4/gcc_64/mkspecs/modules/qt_lib_core.pri \
		/opt/Qt5.4.0/5.4/gcc_64/mkspecs/modules/qt_lib_core_private.pri \
		/opt/Qt5.4.0/5.4/gcc_64/mkspecs/modules/qt_lib_dbus.pri \
		/opt/Qt5.4.0/5.4/gcc_64/mkspecs/modules/qt_lib_dbus_private.pri \
		/opt/Qt5.4.0/5.4/gcc_64/mkspecs/modules/qt_lib_declarative.pri \
		/opt/Qt5.4.0/5.4/gcc_64/mkspecs/modules/qt_lib_declarative_private.pri \
		/opt/Qt5.4.0/5.4/gcc_64/mkspecs/modules/qt_lib_designer.pri \
		/opt/Qt5.4.0/5.4/gcc_64/mkspecs/modules/qt_lib_designer_private.pri \
		/opt/Qt5.4.0/5.4/gcc_64/mkspecs/modules/qt_lib_designercomponents_private.pri \
		/opt/Qt5.4.0/5.4/gcc_64/mkspecs/modules/qt_lib_enginio.pri \
		/opt/Qt5.4.0/5.4/gcc_64/mkspecs/modules/qt_lib_enginio_private.pri \
		/opt/Qt5.4.0/5.4/gcc_64/mkspecs/modules/qt_lib_gui.pri \
		/opt/Qt5.4.0/5.4/gcc_64/mkspecs/modules/qt_lib_gui_private.pri \
		/opt/Qt5.4.0/5.4/gcc_64/mkspecs/modules/qt_lib_help.pri \
		/opt/Qt5.4.0/5.4/gcc_64/mkspecs/modules/qt_lib_help_private.pri \
		/opt/Qt5.4.0/5.4/gcc_64/mkspecs/modules/qt_lib_location.pri \
		/opt/Qt5.4.0/5.4/gcc_64/mkspecs/modules/qt_lib_location_private.pri \
		/opt/Qt5.4.0/5.4/gcc_64/mkspecs/modules/qt_lib_multimedia.pri \
		/opt/Qt5.4.0/5.4/gcc_64/mkspecs/modules/qt_lib_multimedia_private.pri \
		/opt/Qt5.4.0/5.4/gcc_64/mkspecs/modules/qt_lib_multimediawidgets.pri \
		/opt/Qt5.4.0/5.4/gcc_64/mkspecs/modules/qt_lib_multimediawidgets_private.pri \
		/opt/Qt5.4.0/5.4/gcc_64/mkspecs/modules/qt_lib_network.pri \
		/opt/Qt5.4.0/5.4/gcc_64/mkspecs/modules/qt_lib_network_private.pri \
		/opt/Qt5.4.0/5.4/gcc_64/mkspecs/modules/qt_lib_nfc.pri \
		/opt/Qt5.4.0/5.4/gcc_64/mkspecs/modules/qt_lib_nfc_private.pri \
		/opt/Qt5.4.0/5.4/gcc_64/mkspecs/modules/qt_lib_opengl.pri \
		/opt/Qt5.4.0/5.4/gcc_64/mkspecs/modules/qt_lib_opengl_private.pri \
		/opt/Qt5.4.0/5.4/gcc_64/mkspecs/modules/qt_lib_openglextensions.pri \
		/opt/Qt5.4.0/5.4/gcc_64/mkspecs/modules/qt_lib_openglextensions_private.pri \
		/opt/Qt5.4.0/5.4/gcc_64/mkspecs/modules/qt_lib_platformsupport_private.pri \
		/opt/Qt5.4.0/5.4/gcc_64/mkspecs/modules/qt_lib_positioning.pri \
		/opt/Qt5.4.0/5.4/gcc_64/mkspecs/modules/qt_lib_positioning_private.pri \
		/opt/Qt5.4.0/5.4/gcc_64/mkspecs/modules/qt_lib_printsupport.pri \
		/opt/Qt5.4.0/5.4/gcc_64/mkspecs/modules/qt_lib_printsupport_private.pri \
		/opt/Qt5.4.0/5.4/gcc_64/mkspecs/modules/qt_lib_qml.pri \
		/opt/Qt5.4.0/5.4/gcc_64/mkspecs/modules/qt_lib_qml_private.pri \
		/opt/Qt5.4.0/5.4/gcc_64/mkspecs/modules/qt_lib_qmldevtools_private.pri \
		/opt/Qt5.4.0/5.4/gcc_64/mkspecs/modules/qt_lib_qmltest.pri \
		/opt/Qt5.4.0/5.4/gcc_64/mkspecs/modules/qt_lib_qmltest_private.pri \
		/opt/Qt5.4.0/5.4/gcc_64/mkspecs/modules/qt_lib_qtmultimediaquicktools_private.pri \
		/opt/Qt5.4.0/5.4/gcc_64/mkspecs/modules/qt_lib_quick.pri \
		/opt/Qt5.4.0/5.4/gcc_64/mkspecs/modules/qt_lib_quick_private.pri \
		/opt/Qt5.4.0/5.4/gcc_64/mkspecs/modules/qt_lib_quickparticles_private.pri \
		/opt/Qt5.4.0/5.4/gcc_64/mkspecs/modules/qt_lib_quickwidgets.pri \
		/opt/Qt5.4.0/5.4/gcc_64/mkspecs/modules/qt_lib_quickwidgets_private.pri \
		/opt/Qt5.4.0/5.4/gcc_64/mkspecs/modules/qt_lib_script.pri \
		/opt/Qt5.4.0/5.4/gcc_64/mkspecs/modules/qt_lib_script_private.pri \
		/opt/Qt5.4.0/5.4/gcc_64/mkspecs/modules/qt_lib_scripttools.pri \
		/opt/Qt5.4.0/5.4/gcc_64/mkspecs/modules/qt_lib_scripttools_private.pri \
		/opt/Qt5.4.0/5.4/gcc_64/mkspecs/modules/qt_lib_sensors.pri \
		/opt/Qt5.4.0/5.4/gcc_64/mkspecs/modules/qt_lib_sensors_private.pri \
		/opt/Qt5.4.0/5.4/gcc_64/mkspecs/modules/qt_lib_serialport.pri \
		/opt/Qt5.4.0/5.4/gcc_64/mkspecs/modules/qt_lib_serialport_private.pri \
		/opt/Qt5.4.0/5.4/gcc_64/mkspecs/modules/qt_lib_sql.pri \
		/opt/Qt5.4.0/5.4/gcc_64/mkspecs/modules/qt_lib_sql_private.pri \
		/opt/Qt5.4.0/5.4/gcc_64/mkspecs/modules/qt_lib_svg.pri \
		/opt/Qt5.4.0/5.4/gcc_64/mkspecs/modules/qt_lib_svg_private.pri \
		/opt/Qt5.4.0/5.4/gcc_64/mkspecs/modules/qt_lib_testlib.pri \
		/opt/Qt5.4.0/5.4/gcc_64/mkspecs/modules/qt_lib_testlib_private.pri \
		/opt/Qt5.4.0/5.4/gcc_64/mkspecs/modules/qt_lib_uitools.pri \
		/opt/Qt5.4.0/5.4/gcc_64/mkspecs/modules/qt_lib_uitools_private.pri \
		/opt/Qt5.4.0/5.4/gcc_64/mkspecs/modules/qt_lib_webchannel.pri \
		/opt/Qt5.4.0/5.4/gcc_64/mkspecs/modules/qt_lib_webchannel_private.pri \
		/opt/Qt5.4.0/5.4/gcc_64/mkspecs/modules/qt_lib_webengine.pri \
		/opt/Qt5.4.0/5.4/gcc_64/mkspecs/modules/qt_lib_webengine_private.pri \
		/opt/Qt5.4.0/5.4/gcc_64/mkspecs/modules/qt_lib_webenginecore.pri \
		/opt/Qt5.4.0/5.4/gcc_64/mkspecs/modules/qt_lib_webenginecore_private.pri \
		/opt/Qt5.4.0/5.4/gcc_64/mkspecs/modules/qt_lib_webenginewidgets.pri \
		/opt/Qt5.4.0/5.4/gcc_64/mkspecs/modules/qt_lib_webenginewidgets_private.pri \
		/opt/Qt5.4.0/5.4/gcc_64/mkspecs/modules/qt_lib_webkit.pri \
		/opt/Qt5.4.0/5.4/gcc_64/mkspecs/modules/qt_lib_webkit_private.pri \
		/opt/Qt5.4.0/5.4/gcc_64/mkspecs/modules/qt_lib_webkitwidgets.pri \
		/opt/Qt5.4.0/5.4/gcc_64/mkspecs/modules/qt_lib_webkitwidgets_private.pri \
		/opt/Qt5.4.0/5.4/gcc_64/mkspecs/modules/qt_lib_websockets.pri \
		/opt/Qt5.4.0/5.4/gcc_64/mkspecs/modules/qt_lib_websockets_private.pri \
		/opt/Qt5.4.0/5.4/gcc_64/mkspecs/modules/qt_lib_webview.pri \
		/opt/Qt5.4.0/5.4/gcc_64/mkspecs/modules/qt_lib_webview_private.pri \
		/opt/Qt5.4.0/5.4/gcc_64/mkspecs/modules/qt_lib_widgets.pri \
		/opt/Qt5.4.0/5.4/gcc_64/mkspecs/modules/qt_lib_widgets_private.pri \
		/opt/Qt5.4.0/5.4/gcc_64/mkspecs/modules/qt_lib_x11extras.pri \
		/opt/Qt5.4.0/5.4/gcc_64/mkspecs/modules/qt_lib_x11extras_private.pri \
		/opt/Qt5.4.0/5.4/gcc_64/mkspecs/modules/qt_lib_xml.pri \
		/opt/Qt5.4.0/5.4/gcc_64/mkspecs/modules/qt_lib_xml_private.pri \
		/opt/Qt5.4.0/5.4/gcc_64/mkspecs/modules/qt_lib_xmlpatterns.pri \
		/opt/Qt5.4.0/5.4/gcc_64/mkspecs/modules/qt_lib_xmlpatterns_private.pri \
		/opt/Qt5.4.0/5.4/gcc_64/mkspecs/features/qt_functions.prf \
		/opt/Qt5.4.0/5.4/gcc_64/mkspecs/features/qt_config.prf \
		/opt/Qt5.4.0/5.4/gcc_64/mkspecs/linux-g++/qmake.conf \
		/opt/Qt5.4.0/5.4/gcc_64/mkspecs/features/spec_post.prf \
		/opt/Qt5.4.0/5.4/gcc_64/mkspecs/features/exclusive_builds.prf \
		/opt/Qt5.4.0/5.4/gcc_64/mkspecs/features/default_pre.prf \
		/opt/Qt5.4.0/5.4/gcc_64/mkspecs/features/resolve_config.prf \
		/opt/Qt5.4.0/5.4/gcc_64/mkspecs/features/default_post.prf \
		/opt/Qt5.4.0/5.4/gcc_64/mkspecs/features/warn_on.prf \
		/opt/Qt5.4.0/5.4/gcc_64/mkspecs/features/qt.prf \
		/opt/Qt5.4.0/5.4/gcc_64/mkspecs/features/resources.prf \
		/opt/Qt5.4.0/5.4/gcc_64/mkspecs/features/moc.prf \
		/opt/Qt5.4.0/5.4/gcc_64/mkspecs/features/unix/opengl.prf \
		/opt/Qt5.4.0/5.4/gcc_64/mkspecs/features/uic.prf \
		/opt/Qt5.4.0/5.4/gcc_64/mkspecs/features/unix/thread.prf \
		/opt/Qt5.4.0/5.4/gcc_64/mkspecs/features/testcase_targets.prf \
		/opt/Qt5.4.0/5.4/gcc_64/mkspecs/features/exceptions.prf \
		/opt/Qt5.4.0/5.4/gcc_64/mkspecs/features/yacc.prf \
		/opt/Qt5.4.0/5.4/gcc_64/mkspecs/features/lex.prf \
		cfgtest_QtQuickWidgets.pro \
		/opt/Qt5.4.0/5.4/gcc_64/lib/libQt5QuickWidgets.prl \
		/opt/Qt5.4.0/5.4/gcc_64/lib/libQt5Quick.prl \
		/opt/Qt5.4.0/5.4/gcc_64/lib/libQt5Gui.prl \
		/opt/Qt5.4.0/5.4/gcc_64/lib/libQt5Core.prl \
		/opt/Qt5.4.0/5.4/gcc_64/lib/libQt5Qml.prl \
		/opt/Qt5.4.0/5.4/gcc_64/lib/libQt5Network.prl \
		/opt/Qt5.4.0/5.4/gcc_64/lib/libQt5Widgets.prl
	$(QMAKE) -o cfgtest_QtQuickWidgets.mk cfgtest_QtQuickWidgets.pro
/opt/Qt5.4.0/5.4/gcc_64/mkspecs/features/spec_pre.prf:
/opt/Qt5.4.0/5.4/gcc_64/mkspecs/common/shell-unix.conf:
/opt/Qt5.4.0/5.4/gcc_64/mkspecs/common/unix.conf:
/opt/Qt5.4.0/5.4/gcc_64/mkspecs/common/linux.conf:
/opt/Qt5.4.0/5.4/gcc_64/mkspecs/common/gcc-base.conf:
/opt/Qt5.4.0/5.4/gcc_64/mkspecs/common/gcc-base-unix.conf:
/opt/Qt5.4.0/5.4/gcc_64/mkspecs/common/g++-base.conf:
/opt/Qt5.4.0/5.4/gcc_64/mkspecs/common/g++-unix.conf:
/opt/Qt5.4.0/5.4/gcc_64/mkspecs/qconfig.pri:
/opt/Qt5.4.0/5.4/gcc_64/mkspecs/modules/qt_lib_bluetooth.pri:
/opt/Qt5.4.0/5.4/gcc_64/mkspecs/modules/qt_lib_bluetooth_private.pri:
/opt/Qt5.4.0/5.4/gcc_64/mkspecs/modules/qt_lib_bootstrap_private.pri:
/opt/Qt5.4.0/5.4/gcc_64/mkspecs/modules/qt_lib_clucene_private.pri:
/opt/Qt5.4.0/5.4/gcc_64/mkspecs/modules/qt_lib_concurrent.pri:
/opt/Qt5.4.0/5.4/gcc_64/mkspecs/modules/qt_lib_concurrent_private.pri:
/opt/Qt5.4.0/5.4/gcc_64/mkspecs/modules/qt_lib_core.pri:
/opt/Qt5.4.0/5.4/gcc_64/mkspecs/modules/qt_lib_core_private.pri:
/opt/Qt5.4.0/5.4/gcc_64/mkspecs/modules/qt_lib_dbus.pri:
/opt/Qt5.4.0/5.4/gcc_64/mkspecs/modules/qt_lib_dbus_private.pri:
/opt/Qt5.4.0/5.4/gcc_64/mkspecs/modules/qt_lib_declarative.pri:
/opt/Qt5.4.0/5.4/gcc_64/mkspecs/modules/qt_lib_declarative_private.pri:
/opt/Qt5.4.0/5.4/gcc_64/mkspecs/modules/qt_lib_designer.pri:
/opt/Qt5.4.0/5.4/gcc_64/mkspecs/modules/qt_lib_designer_private.pri:
/opt/Qt5.4.0/5.4/gcc_64/mkspecs/modules/qt_lib_designercomponents_private.pri:
/opt/Qt5.4.0/5.4/gcc_64/mkspecs/modules/qt_lib_enginio.pri:
/opt/Qt5.4.0/5.4/gcc_64/mkspecs/modules/qt_lib_enginio_private.pri:
/opt/Qt5.4.0/5.4/gcc_64/mkspecs/modules/qt_lib_gui.pri:
/opt/Qt5.4.0/5.4/gcc_64/mkspecs/modules/qt_lib_gui_private.pri:
/opt/Qt5.4.0/5.4/gcc_64/mkspecs/modules/qt_lib_help.pri:
/opt/Qt5.4.0/5.4/gcc_64/mkspecs/modules/qt_lib_help_private.pri:
/opt/Qt5.4.0/5.4/gcc_64/mkspecs/modules/qt_lib_location.pri:
/opt/Qt5.4.0/5.4/gcc_64/mkspecs/modules/qt_lib_location_private.pri:
/opt/Qt5.4.0/5.4/gcc_64/mkspecs/modules/qt_lib_multimedia.pri:
/opt/Qt5.4.0/5.4/gcc_64/mkspecs/modules/qt_lib_multimedia_private.pri:
/opt/Qt5.4.0/5.4/gcc_64/mkspecs/modules/qt_lib_multimediawidgets.pri:
/opt/Qt5.4.0/5.4/gcc_64/mkspecs/modules/qt_lib_multimediawidgets_private.pri:
/opt/Qt5.4.0/5.4/gcc_64/mkspecs/modules/qt_lib_network.pri:
/opt/Qt5.4.0/5.4/gcc_64/mkspecs/modules/qt_lib_network_private.pri:
/opt/Qt5.4.0/5.4/gcc_64/mkspecs/modules/qt_lib_nfc.pri:
/opt/Qt5.4.0/5.4/gcc_64/mkspecs/modules/qt_lib_nfc_private.pri:
/opt/Qt5.4.0/5.4/gcc_64/mkspecs/modules/qt_lib_opengl.pri:
/opt/Qt5.4.0/5.4/gcc_64/mkspecs/modules/qt_lib_opengl_private.pri:
/opt/Qt5.4.0/5.4/gcc_64/mkspecs/modules/qt_lib_openglextensions.pri:
/opt/Qt5.4.0/5.4/gcc_64/mkspecs/modules/qt_lib_openglextensions_private.pri:
/opt/Qt5.4.0/5.4/gcc_64/mkspecs/modules/qt_lib_platformsupport_private.pri:
/opt/Qt5.4.0/5.4/gcc_64/mkspecs/modules/qt_lib_positioning.pri:
/opt/Qt5.4.0/5.4/gcc_64/mkspecs/modules/qt_lib_positioning_private.pri:
/opt/Qt5.4.0/5.4/gcc_64/mkspecs/modules/qt_lib_printsupport.pri:
/opt/Qt5.4.0/5.4/gcc_64/mkspecs/modules/qt_lib_printsupport_private.pri:
/opt/Qt5.4.0/5.4/gcc_64/mkspecs/modules/qt_lib_qml.pri:
/opt/Qt5.4.0/5.4/gcc_64/mkspecs/modules/qt_lib_qml_private.pri:
/opt/Qt5.4.0/5.4/gcc_64/mkspecs/modules/qt_lib_qmldevtools_private.pri:
/opt/Qt5.4.0/5.4/gcc_64/mkspecs/modules/qt_lib_qmltest.pri:
/opt/Qt5.4.0/5.4/gcc_64/mkspecs/modules/qt_lib_qmltest_private.pri:
/opt/Qt5.4.0/5.4/gcc_64/mkspecs/modules/qt_lib_qtmultimediaquicktools_private.pri:
/opt/Qt5.4.0/5.4/gcc_64/mkspecs/modules/qt_lib_quick.pri:
/opt/Qt5.4.0/5.4/gcc_64/mkspecs/modules/qt_lib_quick_private.pri:
/opt/Qt5.4.0/5.4/gcc_64/mkspecs/modules/qt_lib_quickparticles_private.pri:
/opt/Qt5.4.0/5.4/gcc_64/mkspecs/modules/qt_lib_quickwidgets.pri:
/opt/Qt5.4.0/5.4/gcc_64/mkspecs/modules/qt_lib_quickwidgets_private.pri:
/opt/Qt5.4.0/5.4/gcc_64/mkspecs/modules/qt_lib_script.pri:
/opt/Qt5.4.0/5.4/gcc_64/mkspecs/modules/qt_lib_script_private.pri:
/opt/Qt5.4.0/5.4/gcc_64/mkspecs/modules/qt_lib_scripttools.pri:
/opt/Qt5.4.0/5.4/gcc_64/mkspecs/modules/qt_lib_scripttools_private.pri:
/opt/Qt5.4.0/5.4/gcc_64/mkspecs/modules/qt_lib_sensors.pri:
/opt/Qt5.4.0/5.4/gcc_64/mkspecs/modules/qt_lib_sensors_private.pri:
/opt/Qt5.4.0/5.4/gcc_64/mkspecs/modules/qt_lib_serialport.pri:
/opt/Qt5.4.0/5.4/gcc_64/mkspecs/modules/qt_lib_serialport_private.pri:
/opt/Qt5.4.0/5.4/gcc_64/mkspecs/modules/qt_lib_sql.pri:
/opt/Qt5.4.0/5.4/gcc_64/mkspecs/modules/qt_lib_sql_private.pri:
/opt/Qt5.4.0/5.4/gcc_64/mkspecs/modules/qt_lib_svg.pri:
/opt/Qt5.4.0/5.4/gcc_64/mkspecs/modules/qt_lib_svg_private.pri:
/opt/Qt5.4.0/5.4/gcc_64/mkspecs/modules/qt_lib_testlib.pri:
/opt/Qt5.4.0/5.4/gcc_64/mkspecs/modules/qt_lib_testlib_private.pri:
/opt/Qt5.4.0/5.4/gcc_64/mkspecs/modules/qt_lib_uitools.pri:
/opt/Qt5.4.0/5.4/gcc_64/mkspecs/modules/qt_lib_uitools_private.pri:
/opt/Qt5.4.0/5.4/gcc_64/mkspecs/modules/qt_lib_webchannel.pri:
/opt/Qt5.4.0/5.4/gcc_64/mkspecs/modules/qt_lib_webchannel_private.pri:
/opt/Qt5.4.0/5.4/gcc_64/mkspecs/modules/qt_lib_webengine.pri:
/opt/Qt5.4.0/5.4/gcc_64/mkspecs/modules/qt_lib_webengine_private.pri:
/opt/Qt5.4.0/5.4/gcc_64/mkspecs/modules/qt_lib_webenginecore.pri:
/opt/Qt5.4.0/5.4/gcc_64/mkspecs/modules/qt_lib_webenginecore_private.pri:
/opt/Qt5.4.0/5.4/gcc_64/mkspecs/modules/qt_lib_webenginewidgets.pri:
/opt/Qt5.4.0/5.4/gcc_64/mkspecs/modules/qt_lib_webenginewidgets_private.pri:
/opt/Qt5.4.0/5.4/gcc_64/mkspecs/modules/qt_lib_webkit.pri:
/opt/Qt5.4.0/5.4/gcc_64/mkspecs/modules/qt_lib_webkit_private.pri:
/opt/Qt5.4.0/5.4/gcc_64/mkspecs/modules/qt_lib_webkitwidgets.pri:
/opt/Qt5.4.0/5.4/gcc_64/mkspecs/modules/qt_lib_webkitwidgets_private.pri:
/opt/Qt5.4.0/5.4/gcc_64/mkspecs/modules/qt_lib_websockets.pri:
/opt/Qt5.4.0/5.4/gcc_64/mkspecs/modules/qt_lib_websockets_private.pri:
/opt/Qt5.4.0/5.4/gcc_64/mkspecs/modules/qt_lib_webview.pri:
/opt/Qt5.4.0/5.4/gcc_64/mkspecs/modules/qt_lib_webview_private.pri:
/opt/Qt5.4.0/5.4/gcc_64/mkspecs/modules/qt_lib_widgets.pri:
/opt/Qt5.4.0/5.4/gcc_64/mkspecs/modules/qt_lib_widgets_private.pri:
/opt/Qt5.4.0/5.4/gcc_64/mkspecs/modules/qt_lib_x11extras.pri:
/opt/Qt5.4.0/5.4/gcc_64/mkspecs/modules/qt_lib_x11extras_private.pri:
/opt/Qt5.4.0/5.4/gcc_64/mkspecs/modules/qt_lib_xml.pri:
/opt/Qt5.4.0/5.4/gcc_64/mkspecs/modules/qt_lib_xml_private.pri:
/opt/Qt5.4.0/5.4/gcc_64/mkspecs/modules/qt_lib_xmlpatterns.pri:
/opt/Qt5.4.0/5.4/gcc_64/mkspecs/modules/qt_lib_xmlpatterns_private.pri:
/opt/Qt5.4.0/5.4/gcc_64/mkspecs/features/qt_functions.prf:
/opt/Qt5.4.0/5.4/gcc_64/mkspecs/features/qt_config.prf:
/opt/Qt5.4.0/5.4/gcc_64/mkspecs/linux-g++/qmake.conf:
/opt/Qt5.4.0/5.4/gcc_64/mkspecs/features/spec_post.prf:
/opt/Qt5.4.0/5.4/gcc_64/mkspecs/features/exclusive_builds.prf:
/opt/Qt5.4.0/5.4/gcc_64/mkspecs/features/default_pre.prf:
/opt/Qt5.4.0/5.4/gcc_64/mkspecs/features/resolve_config.prf:
/opt/Qt5.4.0/5.4/gcc_64/mkspecs/features/default_post.prf:
/opt/Qt5.4.0/5.4/gcc_64/mkspecs/features/warn_on.prf:
/opt/Qt5.4.0/5.4/gcc_64/mkspecs/features/qt.prf:
/opt/Qt5.4.0/5.4/gcc_64/mkspecs/features/resources.prf:
/opt/Qt5.4.0/5.4/gcc_64/mkspecs/features/moc.prf:
/opt/Qt5.4.0/5.4/gcc_64/mkspecs/features/unix/opengl.prf:
/opt/Qt5.4.0/5.4/gcc_64/mkspecs/features/uic.prf:
/opt/Qt5.4.0/5.4/gcc_64/mkspecs/features/unix/thread.prf:
/opt/Qt5.4.0/5.4/gcc_64/mkspecs/features/testcase_targets.prf:
/opt/Qt5.4.0/5.4/gcc_64/mkspecs/features/exceptions.prf:
/opt/Qt5.4.0/5.4/gcc_64/mkspecs/features/yacc.prf:
/opt/Qt5.4.0/5.4/gcc_64/mkspecs/features/lex.prf:
cfgtest_QtQuickWidgets.pro:
/opt/Qt5.4.0/5.4/gcc_64/lib/libQt5QuickWidgets.prl:
/opt/Qt5.4.0/5.4/gcc_64/lib/libQt5Quick.prl:
/opt/Qt5.4.0/5.4/gcc_64/lib/libQt5Gui.prl:
/opt/Qt5.4.0/5.4/gcc_64/lib/libQt5Core.prl:
/opt/Qt5.4.0/5.4/gcc_64/lib/libQt5Qml.prl:
/opt/Qt5.4.0/5.4/gcc_64/lib/libQt5Network.prl:
/opt/Qt5.4.0/5.4/gcc_64/lib/libQt5Widgets.prl:
qmake: FORCE
	@$(QMAKE) -o cfgtest_QtQuickWidgets.mk cfgtest_QtQuickWidgets.pro

qmake_all: FORCE


all: cfgtest_QtQuickWidgets.mk $(TARGET)

dist: distdir FORCE
	(cd `dirname $(DISTDIR)` && $(TAR) $(DISTNAME).tar $(DISTNAME) && $(COMPRESS) $(DISTNAME).tar) && $(MOVE) `dirname $(DISTDIR)`/$(DISTNAME).tar.gz . && $(DEL_FILE) -r $(DISTDIR)

distdir: FORCE
	@test -d $(DISTDIR) || mkdir -p $(DISTDIR)
	$(COPY_FILE) --parents $(DIST) $(DISTDIR)/
	$(COPY_FILE) --parents cfgtest_QtQuickWidgets.cpp $(DISTDIR)/


clean:compiler_clean 
	-$(DEL_FILE) $(OBJECTS)
	-$(DEL_FILE) *~ core *.core


distclean: clean 
	-$(DEL_FILE) $(TARGET) 
	-$(DEL_FILE) cfgtest_QtQuickWidgets.mk


####### Sub-libraries

mocclean: compiler_moc_header_clean compiler_moc_source_clean

mocables: compiler_moc_header_make_all compiler_moc_source_make_all

check: first

compiler_rcc_make_all:
compiler_rcc_clean:
compiler_moc_header_make_all:
compiler_moc_header_clean:
compiler_moc_source_make_all:
compiler_moc_source_clean:
compiler_uic_make_all:
compiler_uic_clean:
compiler_yacc_decl_make_all:
compiler_yacc_decl_clean:
compiler_yacc_impl_make_all:
compiler_yacc_impl_clean:
compiler_lex_make_all:
compiler_lex_clean:
compiler_clean: 

####### Compile

cfgtest_QtQuickWidgets.o: cfgtest_QtQuickWidgets.cpp /opt/Qt5.4.0/5.4/gcc_64/include/QtQuickWidgets/qquickwidget.h \
		/opt/Qt5.4.0/5.4/gcc_64/include/QtWidgets/qwidget.h \
		/opt/Qt5.4.0/5.4/gcc_64/include/QtGui/qwindowdefs.h \
		/opt/Qt5.4.0/5.4/gcc_64/include/QtCore/qglobal.h \
		/opt/Qt5.4.0/5.4/gcc_64/include/QtCore/qconfig.h \
		/opt/Qt5.4.0/5.4/gcc_64/include/QtCore/qfeatures.h \
		/opt/Qt5.4.0/5.4/gcc_64/include/QtCore/qsystemdetection.h \
		/opt/Qt5.4.0/5.4/gcc_64/include/QtCore/qprocessordetection.h \
		/opt/Qt5.4.0/5.4/gcc_64/include/QtCore/qcompilerdetection.h \
		/opt/Qt5.4.0/5.4/gcc_64/include/QtCore/qtypeinfo.h \
		/opt/Qt5.4.0/5.4/gcc_64/include/QtCore/qtypetraits.h \
		/opt/Qt5.4.0/5.4/gcc_64/include/QtCore/qsysinfo.h \
		/opt/Qt5.4.0/5.4/gcc_64/include/QtCore/qlogging.h \
		/opt/Qt5.4.0/5.4/gcc_64/include/QtCore/qflags.h \
		/opt/Qt5.4.0/5.4/gcc_64/include/QtCore/qatomic.h \
		/opt/Qt5.4.0/5.4/gcc_64/include/QtCore/qbasicatomic.h \
		/opt/Qt5.4.0/5.4/gcc_64/include/QtCore/qatomic_bootstrap.h \
		/opt/Qt5.4.0/5.4/gcc_64/include/QtCore/qgenericatomic.h \
		/opt/Qt5.4.0/5.4/gcc_64/include/QtCore/qatomic_msvc.h \
		/opt/Qt5.4.0/5.4/gcc_64/include/QtCore/qatomic_armv7.h \
		/opt/Qt5.4.0/5.4/gcc_64/include/QtCore/qatomic_armv6.h \
		/opt/Qt5.4.0/5.4/gcc_64/include/QtCore/qatomic_armv5.h \
		/opt/Qt5.4.0/5.4/gcc_64/include/QtCore/qatomic_ia64.h \
		/opt/Qt5.4.0/5.4/gcc_64/include/QtCore/qatomic_mips.h \
		/opt/Qt5.4.0/5.4/gcc_64/include/QtCore/qatomic_x86.h \
		/opt/Qt5.4.0/5.4/gcc_64/include/QtCore/qatomic_cxx11.h \
		/opt/Qt5.4.0/5.4/gcc_64/include/QtCore/qatomic_gcc.h \
		/opt/Qt5.4.0/5.4/gcc_64/include/QtCore/qatomic_unix.h \
		/opt/Qt5.4.0/5.4/gcc_64/include/QtCore/qglobalstatic.h \
		/opt/Qt5.4.0/5.4/gcc_64/include/QtCore/qmutex.h \
		/opt/Qt5.4.0/5.4/gcc_64/include/QtCore/qnumeric.h \
		/opt/Qt5.4.0/5.4/gcc_64/include/QtCore/qobjectdefs.h \
		/opt/Qt5.4.0/5.4/gcc_64/include/QtCore/qnamespace.h \
		/opt/Qt5.4.0/5.4/gcc_64/include/QtCore/qobjectdefs_impl.h \
		/opt/Qt5.4.0/5.4/gcc_64/include/QtGui/qwindowdefs_win.h \
		/opt/Qt5.4.0/5.4/gcc_64/include/QtCore/qobject.h \
		/opt/Qt5.4.0/5.4/gcc_64/include/QtCore/qstring.h \
		/opt/Qt5.4.0/5.4/gcc_64/include/QtCore/qchar.h \
		/opt/Qt5.4.0/5.4/gcc_64/include/QtCore/qbytearray.h \
		/opt/Qt5.4.0/5.4/gcc_64/include/QtCore/qrefcount.h \
		/opt/Qt5.4.0/5.4/gcc_64/include/QtCore/qarraydata.h \
		/opt/Qt5.4.0/5.4/gcc_64/include/QtCore/qstringbuilder.h \
		/opt/Qt5.4.0/5.4/gcc_64/include/QtCore/qlist.h \
		/opt/Qt5.4.0/5.4/gcc_64/include/QtCore/qalgorithms.h \
		/opt/Qt5.4.0/5.4/gcc_64/include/QtCore/qiterator.h \
		/opt/Qt5.4.0/5.4/gcc_64/include/QtCore/qbytearraylist.h \
		/opt/Qt5.4.0/5.4/gcc_64/include/QtCore/qcoreevent.h \
		/opt/Qt5.4.0/5.4/gcc_64/include/QtCore/qscopedpointer.h \
		/opt/Qt5.4.0/5.4/gcc_64/include/QtCore/qmetatype.h \
		/opt/Qt5.4.0/5.4/gcc_64/include/QtCore/qvarlengtharray.h \
		/opt/Qt5.4.0/5.4/gcc_64/include/QtCore/qcontainerfwd.h \
		/opt/Qt5.4.0/5.4/gcc_64/include/QtCore/qisenum.h \
		/opt/Qt5.4.0/5.4/gcc_64/include/QtCore/qobject_impl.h \
		/opt/Qt5.4.0/5.4/gcc_64/include/QtCore/qmargins.h \
		/opt/Qt5.4.0/5.4/gcc_64/include/QtGui/qpaintdevice.h \
		/opt/Qt5.4.0/5.4/gcc_64/include/QtCore/qrect.h \
		/opt/Qt5.4.0/5.4/gcc_64/include/QtCore/qsize.h \
		/opt/Qt5.4.0/5.4/gcc_64/include/QtCore/qpoint.h \
		/opt/Qt5.4.0/5.4/gcc_64/include/QtGui/qpalette.h \
		/opt/Qt5.4.0/5.4/gcc_64/include/QtGui/qcolor.h \
		/opt/Qt5.4.0/5.4/gcc_64/include/QtGui/qrgb.h \
		/opt/Qt5.4.0/5.4/gcc_64/include/QtCore/qstringlist.h \
		/opt/Qt5.4.0/5.4/gcc_64/include/QtCore/qdatastream.h \
		/opt/Qt5.4.0/5.4/gcc_64/include/QtCore/qiodevice.h \
		/opt/Qt5.4.0/5.4/gcc_64/include/QtCore/qpair.h \
		/opt/Qt5.4.0/5.4/gcc_64/include/QtCore/qregexp.h \
		/opt/Qt5.4.0/5.4/gcc_64/include/QtCore/qstringmatcher.h \
		/opt/Qt5.4.0/5.4/gcc_64/include/QtGui/qbrush.h \
		/opt/Qt5.4.0/5.4/gcc_64/include/QtCore/qvector.h \
		/opt/Qt5.4.0/5.4/gcc_64/include/QtGui/qmatrix.h \
		/opt/Qt5.4.0/5.4/gcc_64/include/QtGui/qpolygon.h \
		/opt/Qt5.4.0/5.4/gcc_64/include/QtGui/qregion.h \
		/opt/Qt5.4.0/5.4/gcc_64/include/QtCore/qline.h \
		/opt/Qt5.4.0/5.4/gcc_64/include/QtGui/qtransform.h \
		/opt/Qt5.4.0/5.4/gcc_64/include/QtGui/qpainterpath.h \
		/opt/Qt5.4.0/5.4/gcc_64/include/QtGui/qimage.h \
		/opt/Qt5.4.0/5.4/gcc_64/include/QtGui/qpixelformat.h \
		/opt/Qt5.4.0/5.4/gcc_64/include/QtGui/qpixmap.h \
		/opt/Qt5.4.0/5.4/gcc_64/include/QtCore/qsharedpointer.h \
		/opt/Qt5.4.0/5.4/gcc_64/include/QtCore/qshareddata.h \
		/opt/Qt5.4.0/5.4/gcc_64/include/QtCore/qhash.h \
		/opt/Qt5.4.0/5.4/gcc_64/include/QtCore/qsharedpointer_impl.h \
		/opt/Qt5.4.0/5.4/gcc_64/include/QtGui/qfont.h \
		/opt/Qt5.4.0/5.4/gcc_64/include/QtGui/qfontmetrics.h \
		/opt/Qt5.4.0/5.4/gcc_64/include/QtGui/qfontinfo.h \
		/opt/Qt5.4.0/5.4/gcc_64/include/QtWidgets/qsizepolicy.h \
		/opt/Qt5.4.0/5.4/gcc_64/include/QtGui/qcursor.h \
		/opt/Qt5.4.0/5.4/gcc_64/include/QtGui/qkeysequence.h \
		/opt/Qt5.4.0/5.4/gcc_64/include/QtGui/qevent.h \
		/opt/Qt5.4.0/5.4/gcc_64/include/QtCore/qvariant.h \
		/opt/Qt5.4.0/5.4/gcc_64/include/QtCore/qmap.h \
		/opt/Qt5.4.0/5.4/gcc_64/include/QtCore/qdebug.h \
		/opt/Qt5.4.0/5.4/gcc_64/include/QtCore/qtextstream.h \
		/opt/Qt5.4.0/5.4/gcc_64/include/QtCore/qlocale.h \
		/opt/Qt5.4.0/5.4/gcc_64/include/QtCore/qset.h \
		/opt/Qt5.4.0/5.4/gcc_64/include/QtCore/qcontiguouscache.h \
		/opt/Qt5.4.0/5.4/gcc_64/include/QtCore/qurl.h \
		/opt/Qt5.4.0/5.4/gcc_64/include/QtCore/qurlquery.h \
		/opt/Qt5.4.0/5.4/gcc_64/include/QtCore/qfile.h \
		/opt/Qt5.4.0/5.4/gcc_64/include/QtCore/qfiledevice.h \
		/opt/Qt5.4.0/5.4/gcc_64/include/QtGui/qvector2d.h \
		/opt/Qt5.4.0/5.4/gcc_64/include/QtGui/qtouchdevice.h \
		/opt/Qt5.4.0/5.4/gcc_64/include/QtQuick/qquickwindow.h \
		/opt/Qt5.4.0/5.4/gcc_64/include/QtQuick/qtquickglobal.h \
		/opt/Qt5.4.0/5.4/gcc_64/include/QtGui/qopengl.h \
		/opt/Qt5.4.0/5.4/gcc_64/include/QtCore/qt_windows.h \
		/opt/Qt5.4.0/5.4/gcc_64/include/QtGui/qopengles2ext.h \
		/opt/Qt5.4.0/5.4/gcc_64/include/QtGui/qopenglext.h \
		/opt/Qt5.4.0/5.4/gcc_64/include/QtGui/qwindow.h \
		/opt/Qt5.4.0/5.4/gcc_64/include/QtCore/QObject \
		/opt/Qt5.4.0/5.4/gcc_64/include/QtCore/QEvent \
		/opt/Qt5.4.0/5.4/gcc_64/include/QtCore/QMargins \
		/opt/Qt5.4.0/5.4/gcc_64/include/QtCore/QRect \
		/opt/Qt5.4.0/5.4/gcc_64/include/QtGui/qsurface.h \
		/opt/Qt5.4.0/5.4/gcc_64/include/QtGui/qsurfaceformat.h \
		/opt/Qt5.4.0/5.4/gcc_64/include/QtGui/qicon.h \
		/opt/Qt5.4.0/5.4/gcc_64/include/QtQml/qqml.h \
		/opt/Qt5.4.0/5.4/gcc_64/include/QtQml/qqmlprivate.h \
		/opt/Qt5.4.0/5.4/gcc_64/include/QtQml/qtqmlglobal.h \
		/opt/Qt5.4.0/5.4/gcc_64/include/QtQml/qqmlparserstatus.h \
		/opt/Qt5.4.0/5.4/gcc_64/include/QtQml/qqmlpropertyvaluesource.h \
		/opt/Qt5.4.0/5.4/gcc_64/include/QtQml/qqmllist.h \
		/opt/Qt5.4.0/5.4/gcc_64/include/QtCore/qmetaobject.h \
		/opt/Qt5.4.0/5.4/gcc_64/include/QtQml/qqmldebug.h \
		/opt/Qt5.4.0/5.4/gcc_64/include/QtQuickWidgets/qtquickwidgetsglobal.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o cfgtest_QtQuickWidgets.o cfgtest_QtQuickWidgets.cpp

####### Install

install:   FORCE

uninstall:   FORCE

FORCE:

