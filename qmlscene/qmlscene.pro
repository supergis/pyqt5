CONFIG      += plugin release warn_on
QT          += qml

# Work around QTBUG-39300.
CONFIG -= android_install

TARGET      = pyqt5qmlplugin
TEMPLATE    = lib

INCLUDEPATH += /usr/include/python3.4m /usr/include/python3.4m
LIBS        += -L/usr/lib/x86_64-linux-gnu -lpython3.4m

SOURCES     = pluginloader.cpp
HEADERS     = pluginloader.h

# Install.
target.path = /opt/Qt5.4.0/5.4/gcc_64/plugins/PyQt5

python.path = /opt/Qt5.4.0/5.4/gcc_64/plugins/PyQt5
python.files = python

INSTALLS    += target python

INCLUDEPATH += /home/supermap/OpenThings/pyqt5/qmlscene
VPATH = /home/supermap/OpenThings/pyqt5/qmlscene

