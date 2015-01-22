CONFIG      += plugin release warn_on
QT          += designer

# Work around QTBUG-39300.
CONFIG -= android_install

TARGET      = pyqt5
TEMPLATE    = lib

INCLUDEPATH += /usr/include/python3.4m
LIBS        += -L/usr/lib/x86_64-linux-gnu -lpython3.4m
DEFINES     += PYTHON_LIB=\\\"libpython3.4m.so\\\"

SOURCES     = pluginloader.cpp
HEADERS     = pluginloader.h

# Install.
target.path = /opt/Qt5.4.0/5.4/gcc_64/plugins/designer

python.path = /opt/Qt5.4.0/5.4/gcc_64/plugins/designer
python.files = python

INSTALLS    += target python

INCLUDEPATH += /home/supermap/OpenThings/pyqt5/designer
VPATH = /home/supermap/OpenThings/pyqt5/designer

