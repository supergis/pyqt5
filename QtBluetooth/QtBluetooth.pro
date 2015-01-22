TEMPLATE = lib
CONFIG += warn_on plugin
QT += bluetooth
CONFIG += release
CONFIG -= android_install

win32 {
    PY_MODULE = QtBluetooth.pyd
    target.files = QtBluetooth.pyd
    LIBS += -L/usr/lib/x86_64-linux-gnu -lpython3.4m
} else {
    PY_MODULE = QtBluetooth.so
    target.files = QtBluetooth.so
}

target.CONFIG = no_check_exist
target.path = /usr/lib/python3.4/site-packages/PyQt5
INSTALLS += target
sip.path = /usr/share/sip/PyQt5/QtBluetooth
sip.files = ../sip/QtBluetooth/qbluetoothuuid.sip ../sip/QtBluetooth/qbluetoothaddress.sip ../sip/QtBluetooth/qbluetooth.sip ../sip/QtBluetooth/qlowenergycontroller.sip ../sip/QtBluetooth/qlowenergyservice.sip ../sip/QtBluetooth/qlowenergydescriptor.sip ../sip/QtBluetooth/qbluetoothlocaldevice.sip ../sip/QtBluetooth/qbluetoothdevicediscoveryagent.sip ../sip/QtBluetooth/qbluetoothdeviceinfo.sip ../sip/QtBluetooth/qbluetoothserver.sip ../sip/QtBluetooth/qbluetoothserviceinfo.sip ../sip/QtBluetooth/qbluetoothtransferreply.sip ../sip/QtBluetooth/qbluetoothsocket.sip ../sip/QtBluetooth/QtBluetoothmod.sip ../sip/QtBluetooth/qbluetoothtransferrequest.sip ../sip/QtBluetooth/qbluetoothtransfermanager.sip ../sip/QtBluetooth/qpybluetooth_quint128.sip ../sip/QtBluetooth/qbluetoothhostinfo.sip ../sip/QtBluetooth/qpybluetooth_qlist.sip ../sip/QtBluetooth/qbluetoothservicediscoveryagent.sip ../sip/QtBluetooth/qlowenergycharacteristic.sip
INSTALLS += sip
QMAKE_CXXFLAGS += -fno-exceptions
QMAKE_LFLAGS += -Wl,--version-script=QtBluetooth.exp
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

TARGET = QtBluetooth
HEADERS = sipAPIQtBluetooth.h
SOURCES = sipQtBluetoothQBluetoothTransferManager.cpp sipQtBluetoothQBluetoothServiceDiscoveryAgent.cpp sipQtBluetoothQBluetoothSecurityFlags.cpp sipQtBluetoothQLowEnergyCharacteristicPropertyTypes.cpp sipQtBluetoothQList0100QBluetoothHostInfo.cpp sipQtBluetoothQBluetoothUuid.cpp sipQtBluetoothQBluetoothDeviceInfoServiceClasses.cpp sipQtBluetoothQLowEnergyService.cpp sipQtBluetoothQList0100QBluetoothAddress.cpp sipQtBluetoothQBluetoothDeviceInfoCoreConfigurations.cpp sipQtBluetoothQList0100QLowEnergyCharacteristic.cpp sipQtBluetoothQBluetoothServer.cpp sipQtBluetoothQBluetoothHostInfo.cpp sipQtBluetoothQBluetoothTransferRequest.cpp sipQtBluetoothQBluetoothDeviceDiscoveryAgent.cpp sipQtBluetoothQBluetoothLocalDevice.cpp sipQtBluetoothQList1600.cpp sipQtBluetoothQLowEnergyCharacteristic.cpp sipQtBluetoothQBluetoothTransferReply.cpp sipQtBluetoothQBluetoothServiceInfo.cpp sipQtBluetoothQList0100QBluetoothDeviceInfo.cpp sipQtBluetoothQBluetoothServiceInfoSequence.cpp sipQtBluetoothQBluetoothSocket.cpp sipQtBluetoothQLowEnergyServiceServiceTypes.cpp sipQtBluetoothQBluetooth.cpp sipQtBluetoothQList0100QBluetoothUuid.cpp sipQtBluetoothQBluetoothDeviceInfo.cpp sipQtBluetoothquint128.cpp sipQtBluetoothQLowEnergyController.cpp sipQtBluetoothQList0100QBluetoothServiceInfo.cpp sipQtBluetoothQLowEnergyDescriptor.cpp sipQtBluetoothQList0100QLowEnergyDescriptor.cpp sipQtBluetoothQBluetoothAddress.cpp sipQtBluetoothcmodule.cpp
