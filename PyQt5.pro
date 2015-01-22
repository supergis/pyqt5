TEMPLATE = subdirs
CONFIG += ordered
SUBDIRS = QtCore QtGui QtHelp QtMultimedia QtMultimediaWidgets QtNetwork QtOpenGL QtPrintSupport QtQml QtQuick QtSql QtSvg QtTest QtWebKit QtWebKitWidgets QtWidgets QtXml QtXmlPatterns QtDesigner QtDBus _QOpenGLFunctions_2_0 QtSensors QtSerialPort QtX11Extras QtBluetooth QtPositioning QtQuickWidgets QtWebSockets Enginio QtWebChannel QtWebEngineWidgets Qt pylupdate pyrcc designer qmlscene

init_py.files = /home/supermap/OpenThings/pyqt5/__init__.py
init_py.path = /usr/lib/python3.4/site-packages/PyQt5
INSTALLS += init_py

uic_package.files = /home/supermap/OpenThings/pyqt5/pyuic/uic
uic_package.path = /usr/lib/python3.4/site-packages/PyQt5
INSTALLS += uic_package

pyuic5.files = pyuic5
pyuic5.path = /usr/bin
INSTALLS += pyuic5
