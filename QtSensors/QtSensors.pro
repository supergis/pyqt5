TEMPLATE = lib
CONFIG += warn_on plugin
QT += sensors
CONFIG += release
CONFIG -= android_install

win32 {
    PY_MODULE = QtSensors.pyd
    target.files = QtSensors.pyd
    LIBS += -L/usr/lib/x86_64-linux-gnu -lpython3.4m
} else {
    PY_MODULE = QtSensors.so
    target.files = QtSensors.so
}

target.CONFIG = no_check_exist
target.path = /usr/lib/python3.4/site-packages/PyQt5
INSTALLS += target
sip.path = /usr/share/sip/PyQt5/QtSensors
sip.files = ../sip/QtSensors/qlightsensor.sip ../sip/QtSensors/qambienttemperaturesensor.sip ../sip/QtSensors/qgyroscope.sip ../sip/QtSensors/qtapsensor.sip ../sip/QtSensors/qmagnetometer.sip ../sip/QtSensors/qpressuresensor.sip ../sip/QtSensors/qaltimeter.sip ../sip/QtSensors/qtiltsensor.sip ../sip/QtSensors/QtSensorsmod.sip ../sip/QtSensors/qdistancesensor.sip ../sip/QtSensors/qirproximitysensor.sip ../sip/QtSensors/qorientationsensor.sip ../sip/QtSensors/qholstersensor.sip ../sip/QtSensors/qcompass.sip ../sip/QtSensors/qambientlightsensor.sip ../sip/QtSensors/qproximitysensor.sip ../sip/QtSensors/qrotationsensor.sip ../sip/QtSensors/qaccelerometer.sip ../sip/QtSensors/qsensor.sip
INSTALLS += sip
QMAKE_CXXFLAGS += -fno-exceptions
QMAKE_LFLAGS += -Wl,--version-script=QtSensors.exp
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

TARGET = QtSensors
HEADERS = sipAPIQtSensors.h
SOURCES = sipQtSensorsQHolsterFilter.cpp sipQtSensorsQGyroscopeFilter.cpp sipQtSensorsQLightReading.cpp sipQtSensorsQTiltSensor.cpp sipQtSensorsQGyroscope.cpp sipQtSensorsQDistanceSensor.cpp sipQtSensorsQPressureReading.cpp sipQtSensorsQRotationFilter.cpp sipQtSensorsQLightSensor.cpp sipQtSensorsQAltimeterFilter.cpp sipQtSensorsQTiltFilter.cpp sipQtSensorsQCompassReading.cpp sipQtSensorscmodule.cpp sipQtSensorsQTapReading.cpp sipQtSensorsQCompass.cpp sipQtSensorsQDistanceReading.cpp sipQtSensorsQPressureFilter.cpp sipQtSensorsqoutputrange.cpp sipQtSensorsQAltimeterReading.cpp sipQtSensorsQMagnetometerFilter.cpp sipQtSensorsQProximitySensor.cpp sipQtSensorsQAmbientTemperatureReading.cpp sipQtSensorsQAmbientLightReading.cpp sipQtSensorsQRotationReading.cpp sipQtSensorsQSensor.cpp sipQtSensorsQHolsterReading.cpp sipQtSensorsQDistanceFilter.cpp sipQtSensorsQAmbientTemperatureFilter.cpp sipQtSensorsQTiltReading.cpp sipQtSensorsQTapFilter.cpp sipQtSensorsQAmbientLightFilter.cpp sipQtSensorsQList0101QSensorFilter.cpp sipQtSensorsQHolsterSensor.cpp sipQtSensorsQSensorFilter.cpp sipQtSensorsQIRProximityFilter.cpp sipQtSensorsQCompassFilter.cpp sipQtSensorsQGyroscopeReading.cpp sipQtSensorsQAmbientLightSensor.cpp sipQtSensorsQLightFilter.cpp sipQtSensorsQOrientationSensor.cpp sipQtSensorsQSensorReading.cpp sipQtSensorsQProximityFilter.cpp sipQtSensorsQOrientationReading.cpp sipQtSensorsQRotationSensor.cpp sipQtSensorsQOrientationFilter.cpp sipQtSensorsQAccelerometerFilter.cpp sipQtSensorsQIRProximityReading.cpp sipQtSensorsQMagnetometerReading.cpp sipQtSensorsQAmbientTemperatureSensor.cpp sipQtSensorsQIRProximitySensor.cpp sipQtSensorsQAccelerometer.cpp sipQtSensorsQList0100qoutputrange.cpp sipQtSensorsQProximityReading.cpp sipQtSensorsQMagnetometer.cpp sipQtSensorsQAltimeter.cpp sipQtSensorsQAccelerometerReading.cpp sipQtSensorsQPressureSensor.cpp sipQtSensorsQTapSensor.cpp
