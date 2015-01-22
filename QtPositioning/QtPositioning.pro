TEMPLATE = lib
CONFIG += warn_on plugin
QT += positioning
CONFIG += release
CONFIG -= android_install

win32 {
    PY_MODULE = QtPositioning.pyd
    target.files = QtPositioning.pyd
    LIBS += -L/usr/lib/x86_64-linux-gnu -lpython3.4m
} else {
    PY_MODULE = QtPositioning.so
    target.files = QtPositioning.so
}

target.CONFIG = no_check_exist
target.path = /usr/lib/python3.4/site-packages/PyQt5
INSTALLS += target
sip.path = /usr/share/sip/PyQt5/QtPositioning
sip.files = ../sip/QtPositioning/qgeosatelliteinfosource.sip ../sip/QtPositioning/qgeosatelliteinfo.sip ../sip/QtPositioning/qgeopositioninfosource.sip ../sip/QtPositioning/qgeocoordinate.sip ../sip/QtPositioning/qgeolocation.sip ../sip/QtPositioning/qgeorectangle.sip ../sip/QtPositioning/qnmeapositioninfosource.sip ../sip/QtPositioning/qgeocircle.sip ../sip/QtPositioning/qgeoshape.sip ../sip/QtPositioning/qgeoaddress.sip ../sip/QtPositioning/qgeoareamonitorinfo.sip ../sip/QtPositioning/QtPositioningmod.sip ../sip/QtPositioning/qgeoareamonitorsource.sip ../sip/QtPositioning/qgeopositioninfo.sip
INSTALLS += sip
QMAKE_CXXFLAGS += -fno-exceptions
QMAKE_LFLAGS += -Wl,--version-script=QtPositioning.exp
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

TARGET = QtPositioning
HEADERS = sipAPIQtPositioning.h
SOURCES = sipQtPositioningQGeoLocation.cpp sipQtPositioningQGeoPositionInfoSourcePositioningMethods.cpp sipQtPositioningQGeoPositionInfoSource.cpp sipQtPositioningQGeoAreaMonitorSource.cpp sipQtPositioningQNmeaPositionInfoSource.cpp sipQtPositioningcmodule.cpp sipQtPositioningQGeoCoordinate.cpp sipQtPositioningQList0100QGeoCoordinate.cpp sipQtPositioningQList0100QGeoAreaMonitorInfo.cpp sipQtPositioningQGeoSatelliteInfoSource.cpp sipQtPositioningQGeoRectangle.cpp sipQtPositioningQGeoSatelliteInfo.cpp sipQtPositioningQList0100QGeoSatelliteInfo.cpp sipQtPositioningQGeoAreaMonitorInfo.cpp sipQtPositioningQGeoShape.cpp sipQtPositioningQGeoCircle.cpp sipQtPositioningQGeoPositionInfo.cpp sipQtPositioningQGeoAreaMonitorSourceAreaMonitorFeatures.cpp sipQtPositioningQGeoAddress.cpp
